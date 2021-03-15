// SPDX-FileCopyrightText: 2021 The VeriFrodo Authors
// SPDX-License-Identifier: MIT

#ifndef JASMIN_COMMON_H
#define JASMIN_COMMON_H

#include <stdint.h>
#include <stddef.h>

void jazz_add(uint16_t *out, const uint16_t *a, const uint16_t *b);
void jazz_sub(uint16_t *out, const uint16_t *a, const uint16_t *b);

void jazz_mul_bs(uint16_t *out, const uint16_t *a, const uint16_t *b);
void jazz_mul_add_sb_plus_e(uint16_t *out, const uint16_t *a, const uint16_t *b, const uint16_t *e);
int jazz_mul_add_as_plus_e(uint16_t *out, const uint16_t *s, const uint16_t *e, const uint8_t *seed_A);
int jazz_mul_add_sa_plus_e(uint16_t *out, const uint16_t *s, const uint16_t *e, const uint8_t *seed_A);

void jazz_sample_N_by_NBAR(uint16_t *s, size_t n);
void jazz_pack_N_by_NBAR(uint8_t *out, const uint16_t *in);

#endif
