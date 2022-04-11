/* key_data.c
 *
 * Copyright (C) 2006-2021 wolfSSL Inc.
 *
 * This file is part of wolfSSL.
 *
 * wolfSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1335, USA
 */

#include "key_data.h"

/*-------------------------------------------------------------------------
      TSIP v1.09 or later
--------------------------------------------------------------------------*/
#if defined(WOLFSSL_RENESAS_TSIP_TLS) && (WOLFSSL_RENESAS_TSIP_VER >=109)

const st_key_block_data_t g_key_block_data =
{
    /* uint8_t encrypted_provisioning_key[R_TSIP_AES_CBC_IV_BYTE_SIZE * 2]; */
    {
        0x94, 0x4D, 0x99, 0x53, 0xE9, 0x15, 0xD1, 0xD9, 0x0A, 0x2C, 0x17, 0x48,
        0x87, 0x2F, 0x22, 0xA8, 0x90, 0xB3, 0xDE, 0x25, 0x17, 0xEA, 0xE6, 0x31,
        0x28, 0x3F, 0xB9, 0x8F, 0xC6, 0xE3, 0xE4, 0x85
    },
    /* uint8_t iv[R_TSIP_AES_CBC_IV_BYTE_SIZE]; */
    {
        0xF6, 0xA9, 0x83, 0x5A, 0xA1, 0x65, 0x1D, 0x28, 0xC8, 0x1A, 0xA6, 0x9D, 
        0x34, 0xB2, 0x4D, 0x92
    },
    /* 
     * uint8_t 
     * encrypted_user_rsa2048_ne_key[R_TSIP_RSA2048_NE_KEY_BYTE_SIZE + 16];
     */
    {
        0xD9, 0x9A, 0x75, 0x0E, 0x9D, 0x4F, 0x63, 0xA4, 0x02, 0x96, 0xE1, 0xF1,
        0x49, 0x44, 0xB5, 0x90, 0x59, 0x24, 0xC4, 0x23, 0xF7, 0xA0, 0x32, 0x65,
        0x68, 0x7B, 0x70, 0xE7, 0xA5, 0xC8, 0x12, 0xD1, 0xCD, 0x55, 0x36, 0x5F,
        0xE6, 0xEB, 0xD0, 0xAD, 0x5A, 0x7F, 0x9F, 0x41, 0x79, 0x8B, 0x2F, 0x3B,
        0x17, 0xC9, 0xEE, 0xA7, 0xCB, 0xB5, 0x40, 0xFA, 0x3B, 0x43, 0x1D, 0xF8,
        0x34, 0xCC, 0xB1, 0xB4, 0x8E, 0x67, 0xF6, 0xA0, 0x49, 0xAA, 0x76, 0x33,
        0xA4, 0x56, 0xCD, 0x16, 0xE9, 0x76, 0x16, 0x92, 0xBE, 0x3F, 0x3A, 0x3A,
        0xD7, 0x7A, 0xCD, 0xC9, 0xE2, 0xA0, 0xC8, 0x16, 0x2A, 0x0D, 0xBD, 0x3C,
        0xEA, 0xC8, 0x26, 0x82, 0xDA, 0x5D, 0x19, 0x71, 0x7B, 0x90, 0x03, 0xEF,
        0x1E, 0x24, 0x01, 0x62, 0x15, 0x3D, 0x2B, 0x4C, 0xA7, 0x8F, 0xBC, 0xD3,
        0xD9, 0xC8, 0x9F, 0xBB, 0x4A, 0x62, 0x57, 0xE8, 0xE2, 0x86, 0x8C, 0x56,
        0x36, 0x64, 0xE7, 0xB9, 0x47, 0x5C, 0x02, 0xF4, 0x87, 0x50, 0x16, 0x9C,
        0xFB, 0xF6, 0xE9, 0x73, 0x96, 0x78, 0x94, 0x59, 0x12, 0x28, 0x03, 0x37,
        0x75, 0x56, 0x00, 0x2F, 0xCE, 0x54, 0x7C, 0x34, 0xFD, 0x0B, 0x10, 0x5B,
        0x4A, 0xEE, 0x11, 0x1B, 0x39, 0xE9, 0x80, 0x8B, 0x27, 0x2D, 0x29, 0x12,
        0x68, 0x87, 0xD2, 0xC9, 0x78, 0xED, 0xED, 0xF2, 0xA6, 0x4D, 0x6B, 0x10,
        0x98, 0x9D, 0x52, 0x1C, 0xCE, 0x69, 0x0D, 0x5C, 0x46, 0xEB, 0x5D, 0x9B,
        0xC8, 0x6A, 0x8E, 0x1F, 0x56, 0x05, 0xBA, 0xD2, 0x50, 0x9F, 0x92, 0xB7,
        0xD4, 0x4D, 0xCD, 0x58, 0x5B, 0xA7, 0x87, 0x10, 0x6D, 0xF3, 0xDB, 0xA8,
        0x1D, 0x23, 0x00, 0xE4, 0x81, 0x69, 0x3E, 0x7D, 0xEA, 0x5B, 0x33, 0xF4,
        0x73, 0xD8, 0x7C, 0xDD, 0x64, 0x74, 0x40, 0x30, 0x93, 0x8D, 0x2C, 0xA5,
        0x2C, 0x24, 0x11, 0xB2, 0x26, 0x56, 0xE3, 0x41, 0x72, 0xAE, 0x41, 0x56,
        0x9C, 0x75, 0x11, 0x8E, 0x53, 0x59, 0x77, 0xBF, 0x48, 0x71, 0x86, 0x7C,
        0x7C, 0xCE, 0x04, 0xB9, 0x73, 0x62, 0xE6, 0x1D, 0xF8, 0xED, 0x93, 0x87
    },
    /* uint8_t encrypted_user_update_key[R_TSIP_AES256_KEY_BYTE_SIZE + 16]; */
    {
        0x79, 0xB6, 0x8C, 0x48, 0x0A, 0xF2, 0x09, 0xF5, 0xD9, 0x66, 0xBE, 0x9F,
        0xD1, 0x7A, 0x93, 0x52, 0x26, 0x76, 0x6B, 0xB8, 0xF6, 0xB3, 0x88, 0xA6,
        0x4F, 0x6F, 0xB3, 0xF4, 0x8D, 0x83, 0x8F, 0xA0, 0x4A, 0x14, 0xAE, 0xF3,
        0xCB, 0x00, 0x1A, 0x0B, 0xB5, 0xE6, 0x65, 0x83, 0x2A, 0x5A, 0x16, 0x8B
    },

};

/* Public key type of CA root cert: 0: RSA-2048 2: ECDSA-P256*/
#if defined(USE_ECC_CERT)
const uint32_t              encrypted_user_key_type =
                                    R_TSIP_TLS_PUBLIC_KEY_TYPE_ECDSA_P256;
#else
const uint32_t              encrypted_user_key_type =
                                    R_TSIP_TLS_PUBLIC_KEY_TYPE_RSA2048;
#endif

const unsigned char ca_ecc_cert_der_sig[] =
{
    0x6e, 0x7d, 0x2b, 0xd3, 0x6d, 0x6a, 0x70, 0x31, 0xbf, 0xcd, 0x6f, 0x32,
    0x74, 0x8b, 0x4d, 0xdf, 0x7c, 0x72, 0xc6, 0x78, 0x61, 0x2b, 0x0f, 0xcc,
    0xbc, 0xa3, 0x25, 0x54, 0x04, 0xfa, 0x9e, 0xf7, 0x1c, 0xa2, 0xe1, 0x33,
    0x90, 0x08, 0xcd, 0x3c, 0xc1, 0x03, 0x66, 0xb6, 0x3f, 0xf1, 0xbf, 0xaf,
    0x0d, 0xb0, 0xeb, 0xe4, 0xc7, 0x54, 0x60, 0x34, 0x3b, 0x62, 0xcf, 0x28,
    0x95, 0xa2, 0x08, 0x79, 0xc5, 0x51, 0xf3, 0xe1, 0x88, 0x3b, 0xa0, 0x1d,
    0x1d, 0x42, 0x5a, 0xba, 0x09, 0xe4, 0x64, 0xa1, 0x83, 0xf4, 0x60, 0x44,
    0x89, 0xd3, 0xdd, 0x6c, 0x71, 0x7b, 0xd1, 0xb0, 0x28, 0x7b, 0x98, 0xe2,
    0x4b, 0x99, 0x9a, 0x22, 0xd0, 0xeb, 0x1c, 0x5c, 0xbe, 0x49, 0x1a, 0xcf,
    0xd7, 0x4b, 0x19, 0xe9, 0xdf, 0x82, 0x21, 0xe3, 0x87, 0x7a, 0x25, 0x58,
    0x8f, 0x29, 0x0e, 0xce, 0xf4, 0x09, 0x0f, 0x2f, 0x04, 0xe9, 0xd2, 0xf9,
    0xcc, 0xb7, 0x7a, 0x46, 0x5d, 0x98, 0x05, 0x54, 0x89, 0x8e, 0x09, 0x79,
    0xa8, 0x6f, 0xf6, 0x12, 0xdd, 0x93, 0x38, 0x83, 0x14, 0x3f, 0x42, 0xcf,
    0x03, 0x9d, 0x84, 0x9d, 0xe9, 0x6e, 0x9f, 0x87, 0x0f, 0xb8, 0x15, 0x9b,
    0x9b, 0x4c, 0x32, 0x3b, 0x82, 0x7b, 0x3d, 0xd4, 0x85, 0x1e, 0x71, 0x99,
    0x67, 0x40, 0x59, 0xad, 0x8c, 0x31, 0xd7, 0xa2, 0x81, 0xfd, 0x46, 0x21,
    0xd7, 0xc8, 0x89, 0x3d, 0x17, 0x3f, 0x5e, 0x82, 0x5e, 0xfa, 0x7b, 0x34,
    0x7a, 0x1b, 0x85, 0x86, 0xf8, 0x02, 0xf2, 0xf3, 0x01, 0x2c, 0xbd, 0x4a,
    0x98, 0x0f, 0xe9, 0x4b, 0x1a, 0xa3, 0xee, 0xfc, 0x77, 0xda, 0xcf, 0xee,
    0x9c, 0xca, 0xf9, 0xbf, 0xaa, 0x5b, 0xbc, 0x01, 0x4b, 0xd4, 0x74, 0x7c,
    0xee, 0xfb, 0x7c, 0xc4, 0x31, 0xb7, 0x46, 0x9e, 0x94, 0x84, 0xa3, 0x82,
    0x0c, 0x7b, 0x61, 0x4e
};
const int sizeof_ca_ecc_cert_sig = sizeof(ca_ecc_cert_der_sig);

/* ./ca-cert.der.sign,  */
const unsigned char ca_cert_der_sig[] =
{
    0x0a, 0xc8, 0xbb, 0x7e, 0x5a, 0x72, 0x6a, 0x5b, 0xf0, 0xc6, 0xbf, 0x36,
    0x8e, 0xe1, 0xcd, 0xbc, 0x08, 0xfd, 0x22, 0x5a, 0x3b, 0x48, 0x33, 0xb9,
    0x12, 0x55, 0x80, 0x6c, 0x36, 0x14, 0x05, 0x24, 0x63, 0x20, 0x8b, 0x26,
    0x69, 0xa9, 0xe3, 0x15, 0xb9, 0x00, 0x8d, 0xea, 0x3a, 0xee, 0x2d, 0x41,
    0xec, 0x43, 0x4a, 0x17, 0x48, 0x26, 0x4a, 0xd6, 0xe4, 0x1b, 0xa5, 0x97,
    0x2e, 0xf6, 0x41, 0xa7, 0xa2, 0x2b, 0x83, 0x2c, 0xad, 0x6e, 0x4e, 0xfc,
    0x57, 0xf1, 0x28, 0xf0, 0xa7, 0xf9, 0x5b, 0x48, 0xab, 0xed, 0x63, 0x22,
    0xed, 0x1e, 0xf1, 0x9d, 0xab, 0xbf, 0x9c, 0x78, 0x04, 0x49, 0xad, 0xf1,
    0x43, 0x2f, 0x21, 0x9c, 0x90, 0xb8, 0x35, 0x14, 0x68, 0x12, 0x89, 0x00,
    0x20, 0x5b, 0x83, 0x52, 0xb7, 0xec, 0x26, 0x01, 0x26, 0xe1, 0x0f, 0xf6,
    0x98, 0xd1, 0xb6, 0x28, 0x84, 0xc8, 0xa5, 0x3e, 0xe9, 0xfb, 0x19, 0x2e,
    0x8f, 0xd7, 0x66, 0x98, 0xc0, 0x5e, 0x7b, 0xbc, 0x1a, 0xd9, 0x27, 0xb9,
    0x76, 0xcc, 0x58, 0x48, 0x0c, 0x0c, 0x22, 0x23, 0x19, 0xfd, 0x22, 0xfa,
    0x47, 0x90, 0x38, 0x62, 0xe0, 0x91, 0x79, 0x35, 0x3d, 0xa2, 0x83, 0x99,
    0x2b, 0x86, 0x7a, 0x88, 0x9b, 0x07, 0xe7, 0xc5, 0x95, 0x69, 0x9a, 0x2b,
    0x2e, 0x47, 0xcf, 0xfd, 0x9e, 0x64, 0xb5, 0xca, 0x44, 0x94, 0x95, 0xf3,
    0x2a, 0x8f, 0x4a, 0xcf, 0x0f, 0xd4, 0x7e, 0x0d, 0x0f, 0x2a, 0x0b, 0xb6,
    0x89, 0x64, 0xe3, 0x8c, 0x02, 0x3e, 0x76, 0x66, 0x68, 0x19, 0xa9, 0x07,
    0x5a, 0xc6, 0x33, 0xcd, 0x27, 0xff, 0x07, 0xd4, 0x91, 0x5b, 0x11, 0x3a,
    0xe3, 0xf5, 0x69, 0x70, 0xa7, 0xfe, 0xf2, 0xf0, 0xbd, 0x11, 0xaf, 0xa7,
    0x37, 0xda, 0x24, 0x75, 0x3e, 0x1a, 0x39, 0x49, 0xb4, 0x1e, 0x0e, 0xaf,
    0x5d, 0x1e, 0x94, 0xdf
};
const int sizeof_ca_cert_sig = sizeof(ca_cert_der_sig);
/* ./client-cert.der.sign,  */
const unsigned char client_cert_der_sign[] =
{
    0x5D, 0x1F, 0x89, 0x41, 0xEC, 0x47, 0xC8, 0x90, 0x61, 0x79, 0x8A, 0x16,
    0x1F, 0x31, 0x96, 0x67, 0xD9, 0x3C, 0xEC, 0x6B, 0x58, 0xC6, 0x5A, 0xED,
    0x99, 0xB3, 0xEF, 0x27, 0x6F, 0x04, 0x8C, 0xD9, 0x68, 0xB1, 0xD6, 0x23,
    0x15, 0x84, 0x00, 0xE1, 0x27, 0xD1, 0x1F, 0x68, 0xB7, 0x3F, 0x13, 0x53,
    0x8A, 0x95, 0x5A, 0x20, 0x7C, 0xB2, 0x76, 0x5B, 0xDC, 0xE0, 0xA6, 0x21,
    0x7C, 0x49, 0xCF, 0x93, 0xBA, 0xD5, 0x12, 0x9F, 0xEE, 0x90, 0x5B, 0x3F,
    0xA3, 0x9D, 0x13, 0x72, 0xAC, 0x72, 0x16, 0xFE, 0x1D, 0xBE, 0xEB, 0x8E,
    0xC7, 0xDC, 0xC4, 0xF8, 0x1A, 0xD8, 0xA0, 0xA4, 0xF6, 0x04, 0x30, 0xF6,
    0x7E, 0xB6, 0xC8, 0xE1, 0xAB, 0x88, 0x37, 0x08, 0x63, 0x72, 0xAA, 0x46,
    0xCC, 0xCA, 0xF0, 0x9E, 0x02, 0x1E, 0x65, 0x67, 0xFF, 0x2C, 0x9D, 0x81,
    0x6C, 0x1E, 0xF1, 0x54, 0x05, 0x68, 0x68, 0x18, 0x72, 0x26, 0x55, 0xB6,
    0x2C, 0x95, 0xC0, 0xC9, 0xB2, 0xA7, 0x0B, 0x60, 0xD7, 0xEB, 0x1D, 0x08,
    0x1A, 0xA2, 0x54, 0x15, 0x89, 0xCB, 0x83, 0x21, 0x5D, 0x15, 0x9B, 0x38,
    0xAC, 0x89, 0x63, 0xD5, 0x4B, 0xF4, 0x8B, 0x47, 0x93, 0x78, 0x43, 0xCB,
    0x9B, 0x71, 0xBF, 0x94, 0x76, 0xB5, 0xCE, 0x35, 0xA9, 0x1A, 0xD5, 0xA5,
    0xD8, 0x19, 0xA6, 0x04, 0x39, 0xB1, 0x09, 0x8C, 0x65, 0x02, 0x58, 0x3A,
    0x95, 0xEF, 0xA2, 0xC3, 0x85, 0x18, 0x61, 0x23, 0x2D, 0xC5, 0xCD, 0x62,
    0xC1, 0x19, 0x31, 0xE5, 0x36, 0x95, 0x22, 0xDB, 0x3E, 0x1A, 0x3C, 0xE8,
    0xC6, 0x2E, 0xDF, 0xD9, 0x2F, 0x84, 0xC1, 0xF0, 0x38, 0x2B, 0xE5, 0x73,
    0x35, 0x4F, 0x05, 0xE2, 0xA5, 0x60, 0x79, 0xB0, 0x23, 0xDC, 0x56, 0x4C,
    0xE7, 0xD9, 0x1F, 0xCF, 0x6A, 0xFC, 0x55, 0xEB, 0xAA, 0x48, 0x3E, 0x95,
    0x2A, 0x10, 0x01, 0x05
};
const int sizeof_client_cert_der_sign = sizeof(client_cert_der_sign);

#endif
