#include "slrt_to_linux_data_t.h"
#include <stddef.h>
#include <string.h>

void pack_slrt_to_linux_data_t(const slrt_to_linux_data_t *bus, unsigned char
  bytes[64])
{
  float x;
  unsigned char y[4];
  unsigned char b_y[4];
  int i0;
  unsigned char c_y[16];
  float b_x[4];
  unsigned char d_y[4];
  unsigned char e_y[4];
  unsigned char f_y[4];
  unsigned char g_y[4];
  unsigned char h_y[4];
  unsigned char i_y[4];
  unsigned char j_y[4];
  unsigned char k_y[4];
  unsigned char l_y[4];
  unsigned char m_y[4];
  x = (float)bus->time;
  memcpy((void *)&y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  x = (float)bus->s;
  memcpy((void *)&b_y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  for (i0 = 0; i0 < 4; i0++) {
    b_x[i0] = (float)bus->xlip_current[i0];
  }

  memcpy((void *)&c_y[0], (void *)&b_x[0], (unsigned int)((size_t)16 * sizeof
          (unsigned char)));
  x = (float)bus->stance_leg;
  memcpy((void *)&d_y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  x = (float)bus->zH;
  memcpy((void *)&e_y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  x = (float)bus->Ts;
  memcpy((void *)&f_y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  x = (float)bus->Tr;
  memcpy((void *)&g_y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  x = (float)bus->leg_width;
  memcpy((void *)&h_y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  x = (float)bus->Lx_offset;
  memcpy((void *)&i_y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  x = (float)bus->Ly_des;
  memcpy((void *)&j_y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  x = (float)bus->kx;
  memcpy((void *)&k_y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  x = (float)bus->ky;
  memcpy((void *)&l_y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  x = (float)bus->mu;
  memcpy((void *)&m_y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  for (i0 = 0; i0 < 4; i0++) {
    bytes[i0] = y[i0];
    bytes[i0 + 4] = b_y[i0];
  }

  for (i0 = 0; i0 < 16; i0++) {
    bytes[i0 + 8] = c_y[i0];
  }

  for (i0 = 0; i0 < 4; i0++) {
    bytes[i0 + 24] = d_y[i0];
    bytes[i0 + 28] = e_y[i0];
    bytes[i0 + 32] = f_y[i0];
    bytes[i0 + 36] = g_y[i0];
    bytes[i0 + 40] = h_y[i0];
    bytes[i0 + 44] = i_y[i0];
    bytes[i0 + 48] = j_y[i0];
    bytes[i0 + 52] = k_y[i0];
    bytes[i0 + 56] = l_y[i0];
    bytes[i0 + 60] = m_y[i0];
  }
}





void unpack_slrt_to_linux_data_t(const unsigned char bytes[64],
  slrt_to_linux_data_t *bus)
{
  int i;
  float y;
  unsigned char x[4];
  float b_y[4];
  unsigned char b_x[16];
  for (i = 0; i < 4; i++) {
    x[i] = bytes[i];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->time = y;
  for (i = 0; i < 4; i++) {
    x[i] = bytes[i + 4];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->s = y;
  for (i = 0; i < 16; i++) {
    b_x[i] = bytes[i + 8];
  }

  memcpy((void *)&b_y[0], (void *)&b_x[0], (unsigned int)((size_t)4 * sizeof
          (float)));
  for (i = 0; i < 4; i++) {
    bus->xlip_current[i] = b_y[i];
    x[i] = bytes[i + 24];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->stance_leg = y;
  for (i = 0; i < 4; i++) {
    x[i] = bytes[i + 28];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->zH = y;
  for (i = 0; i < 4; i++) {
    x[i] = bytes[i + 32];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->Ts = y;
  for (i = 0; i < 4; i++) {
    x[i] = bytes[i + 36];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->Tr = y;
  for (i = 0; i < 4; i++) {
    x[i] = bytes[i + 40];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->leg_width = y;
  for (i = 0; i < 4; i++) {
    x[i] = bytes[i + 44];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->Lx_offset = y;
  for (i = 0; i < 4; i++) {
    x[i] = bytes[i + 48];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->Ly_des = y;
  for (i = 0; i < 4; i++) {
    x[i] = bytes[i + 52];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->kx = y;
  for (i = 0; i < 4; i++) {
    x[i] = bytes[i + 56];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->ky = y;
  for (i = 0; i < 4; i++) {
    x[i] = bytes[i + 60];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->mu = y;
}
