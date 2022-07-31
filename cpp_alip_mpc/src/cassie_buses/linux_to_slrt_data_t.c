#include "linux_to_slrt_data_t.h"
#include <stddef.h>
#include <string.h>





void pack_linux_to_slrt_data_t(const linux_to_slrt_data_t *bus, unsigned char
  bytes[20])
{
  float x;
  unsigned char y[4];
  int i0;
  unsigned char b_y[8];
  float b_x[2];
  unsigned char c_y[8];
  x = (float)bus->time;
  memcpy((void *)&y[0], (void *)&x, (unsigned int)((size_t)4 * sizeof(unsigned
           char)));
  for (i0 = 0; i0 < 2; i0++) {
    b_x[i0] = (float)bus->ufp_wrt_st[i0];
  }

  memcpy((void *)&b_y[0], (void *)&b_x[0], (unsigned int)((size_t)8 * sizeof
          (unsigned char)));
  for (i0 = 0; i0 < 2; i0++) {
    b_x[i0] = (float)bus->ufp_wrt_com[i0];
  }

  memcpy((void *)&c_y[0], (void *)&b_x[0], (unsigned int)((size_t)8 * sizeof
          (unsigned char)));
  for (i0 = 0; i0 < 4; i0++) {
    bytes[i0] = y[i0];
  }

  for (i0 = 0; i0 < 8; i0++) {
    bytes[i0 + 4] = b_y[i0];
    bytes[i0 + 12] = c_y[i0];
  }
}

void unpack_linux_to_slrt_data_t(const unsigned char bytes[20],
  linux_to_slrt_data_t *bus)
{
  int i;
  float y;
  unsigned char x[4];
  float b_y[2];
  unsigned char b_x[8];
  for (i = 0; i < 4; i++) {
    x[i] = bytes[i];
  }

  memcpy((void *)&y, (void *)&x[0], (unsigned int)((size_t)1 * sizeof(float)));
  bus->time = y;
  for (i = 0; i < 8; i++) {
    b_x[i] = bytes[i + 4];
  }

  memcpy((void *)&b_y[0], (void *)&b_x[0], (unsigned int)((size_t)2 * sizeof
          (float)));
  for (i = 0; i < 2; i++) {
    bus->ufp_wrt_st[i] = b_y[i];
  }

  for (i = 0; i < 8; i++) {
    b_x[i] = bytes[i + 12];
  }

  memcpy((void *)&b_y[0], (void *)&b_x[0], (unsigned int)((size_t)2 * sizeof
          (float)));
  for (i = 0; i < 2; i++) {
    bus->ufp_wrt_com[i] = b_y[i];
  }
}
