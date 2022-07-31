#include <iostream>
#include <string.h> // memset
#include <unistd.h> // usleep
#include <time.h>

#include "udp.h"
#include "slrt_to_linux_data_t.h"
#include "linux_to_slrt_data_t.h"

#include "Cassie_Fp_Controller.hpp"

int main(int argc, char *argv[])
{
    // Initialize ports and ip addresses for udp
    char *remote_addr_str;
    char *remote_port_str;
    char *iface_addr_str; // local
    char *iface_port_str;
    if (std::string(argv[1]) == "cassie") // Cassie robot
    {
        std::cout << "*********************************************************\n"
                  << "** ALIP-MPC Foot Placement Controller for Cassie Robot **\n"
                  << "*********************************************************\n\n";
        remote_addr_str = (char *)"10.10.10.3";
        remote_port_str = (char *)"27000";
        iface_addr_str = (char *)"10.10.10.150"; // local
        iface_port_str = (char *)"28000";
    }
    else if (std::string(argv[1]) == "simulator") // Simulator
    {
        std::cout << "*************************************************************\n"
                  << "** ALIP-MPC Foot Placement Controller for MATLAB Simulator **\n"
                  << "*************************************************************\n\n";
        remote_addr_str = (char *)"169.254.24.246";
        remote_port_str = (char *)"27000";
        iface_addr_str = (char *)"169.254.252.150"; // local
        iface_port_str = (char *)"28000";
    }

    // Initialize udp client
    int sock = udp_init_client(remote_addr_str, remote_port_str,
                               iface_addr_str, iface_port_str);
    if (-1 == sock)
        exit(EXIT_FAILURE);
    int dinlen, doutlen;                      // Create packet input/output buffers
    dinlen = SLRT_TO_LINUX_DATA_T_PACKED_LEN; // corresponds to header file
    doutlen = LINUX_TO_SLRT_DATA_T_PACKED_LEN;

    // Allocate memory for udp buffer
    const int recvlen = PACKET_HEADER_LEN + dinlen;
    const int sendlen = PACKET_HEADER_LEN + doutlen;
    unsigned char *recvbuf = (unsigned char *)malloc(recvlen);
    unsigned char *sendbuf = (unsigned char *)malloc(sendlen);

    // Separate input/output buffers into header and payload
    const unsigned char *header_in = recvbuf;
    const unsigned char *data_in = &recvbuf[PACKET_HEADER_LEN];
    unsigned char *header_out = sendbuf;
    unsigned char *data_out = &sendbuf[PACKET_HEADER_LEN];

    // Create standard input/output structs
    slrt_to_linux_data_t slrt_to_linux_data;
    linux_to_slrt_data_t linux_to_slrt_data;
    packet_header_info_t header_info;

    // Prepare initial null commcmd10and packet to start communication
    memset(sendbuf, 0, sendlen);
    bool received_data = false;

    // Initialize foot placement controller
    std::string step_horizon = "4";
    std::string intervals = "4";
    Cassie_Fp_Controller cassie_fp_controller(step_horizon, intervals);
    std::cout << "--> ALIP-MPC Foot Placement Controller Initialized!\n";

    // Timing Variables
    clock_t start;
    double comp_time;

    /********************* MAIN LOOP *****************/
    printf("--> Connecting to cassie...\n");
    while (true)
    {
        if (!received_data)
        {
            // Send null commands until the simulator responds
            ssize_t nbytes;
            do
            {
                send_packet(sock, sendbuf, sendlen, NULL, 0);
                usleep(1000);
                nbytes = get_newest_packet(sock, recvbuf, recvlen, NULL, NULL);
            } while (recvlen != nbytes);
            received_data = true;
            printf("Connected!\n\n");
        }
        else
        {
            // Wait for a new packet
            wait_for_packet(sock, recvbuf, recvlen, NULL, NULL);
        } // if
        // start timer
        start = clock();

        // Process incoming header and write outgoing header
        process_packet_header(&header_info, header_in, header_out);
        printf("\033[F\033[Jdelay: %d, diff: %d\n",
               header_info.delay, header_info.seq_num_in_diff);

        // Unpack received data into struct
        unpack_slrt_to_linux_data_t(data_in, &slrt_to_linux_data);
        std::cout << "Unpacked data\n\n";

        // Foot placement calculation
        std::cout << "horizon: " + step_horizon << "\n";
        cassie_fp_controller.Update_(slrt_to_linux_data, linux_to_slrt_data);

        std::cout << "Update complete\n";

        // Pack cassie out struct into outgoing packet
        pack_linux_to_slrt_data_t(&linux_to_slrt_data, data_out);

        // Send response
        send_packet(sock, sendbuf, sendlen, NULL, 0);

        // print computation time
        comp_time = double(clock() - start) / double(CLOCKS_PER_SEC);
        std::cout << "mpc calc time: " << comp_time << " ( " << 1.0 / comp_time << " )\n";
        std::cout << "*************************************************\n";

    } // while

    return 0;
}
