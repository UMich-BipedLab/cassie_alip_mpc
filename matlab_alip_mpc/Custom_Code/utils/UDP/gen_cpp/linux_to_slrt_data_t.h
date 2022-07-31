/*
 * Copyright (c) 2022 Agility Robotics
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef LINUX_TO_SLRT_DATA_T_H
#define LINUX_TO_SLRT_DATA_T_H

#define LINUX_TO_SLRT_DATA_T_PACKED_LEN 20

#include <stdbool.h>

typedef struct {
  double time;
  double ufp_wrt_st[2];
  double ufp_wrt_com[2];
} linux_to_slrt_data_t;


#ifdef __cplusplus
extern "C" {
#endif

void pack_linux_to_slrt_data_t(const linux_to_slrt_data_t *bus, unsigned char *bytes);
void unpack_linux_to_slrt_data_t(const unsigned char *bytes, linux_to_slrt_data_t *bus);

#ifdef __cplusplus
}
#endif
#endif // LINUX_TO_SLRT_DATA_T_H
