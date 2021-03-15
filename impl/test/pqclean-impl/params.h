// SPDX-FileCopyrightText: 2017 Microsoft Corporation
// SPDX-License-Identifier: MIT

#ifndef PARAMS_H
#define PARAMS_H

#define CRYPTO_SECRETKEYBYTES PQCLEAN_FRODOKEM640SHAKE_CLEAN_CRYPTO_SECRETKEYBYTES
#define CRYPTO_PUBLICKEYBYTES PQCLEAN_FRODOKEM640SHAKE_CLEAN_CRYPTO_PUBLICKEYBYTES
#define CRYPTO_BYTES PQCLEAN_FRODOKEM640SHAKE_CLEAN_CRYPTO_BYTES
#define CRYPTO_CIPHERTEXTBYTES PQCLEAN_FRODOKEM640SHAKE_CLEAN_CRYPTO_CIPHERTEXTBYTES

#define PARAMS_N 640
#define PARAMS_NBAR 8
#define PARAMS_LOGQ 15
#define PARAMS_Q (1 << PARAMS_LOGQ)
#define PARAMS_EXTRACTED_BITS 2
#define PARAMS_STRIPE_STEP 8
#define PARAMS_PARALLEL 4
#define BYTES_SEED_A 16
#define BYTES_MU ((PARAMS_EXTRACTED_BITS * PARAMS_NBAR * PARAMS_NBAR) / 8)
#define BYTES_PKHASH CRYPTO_BYTES

// Selecting SHAKE XOF function for the KEM and noise sampling
#define shake     shake128

// CDF table
#define CDF_TABLE_DATA {4643, 13363, 20579, 25843, 29227, 31145, 32103, 32525, 32689, 32745, 32762, 32766, 32767}
#define CDF_TABLE_LEN 13

#endif
