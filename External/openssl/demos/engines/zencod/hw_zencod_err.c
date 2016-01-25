/* hw_zencod_err.c */
/* ====================================================================
 * Copyright (c) 1999-2002 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/*
 * NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include "hw_zencod_err.h"

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR
static ERR_STRING_DATA ZENCOD_str_functs[] = {
    {ERR_PACK(0, ZENCOD_F_ZENCOD_BN_MOD_EXP, 0), "ZENCOD_BN_MOD_EXP"},
    {ERR_PACK(0, ZENCOD_F_ZENCOD_CTRL, 0), "ZENCOD_CTRL"},
    {ERR_PACK(0, ZENCOD_F_ZENCOD_DH_COMPUTE, 0), "ZENCOD_DH_COMPUTE"},
    {ERR_PACK(0, ZENCOD_F_ZENCOD_DH_GENERATE, 0), "ZENCOD_DH_GENERATE"},
    {ERR_PACK(0, ZENCOD_F_ZENCOD_DSA_DO_SIGN, 0), "ZENCOD_DSA_DO_SIGN"},
    {ERR_PACK(0, ZENCOD_F_ZENCOD_DSA_DO_VERIFY, 0), "ZENCOD_DSA_DO_VERIFY"},
    {ERR_PACK(0, ZENCOD_F_ZENCOD_FINISH, 0), "ZENCOD_FINISH"},
    {ERR_PACK(0, ZENCOD_F_ZENCOD_INIT, 0), "ZENCOD_INIT"},
    {ERR_PACK(0, ZENCOD_F_ZENCOD_RAND, 0), "ZENCOD_RAND"},
    {ERR_PACK(0, ZENCOD_F_ZENCOD_RSA_MOD_EXP, 0), "ZENCOD_RSA_MOD_EXP"},
    {ERR_PACK(0, ZENCOD_F_ZENCOD_RSA_MOD_EXP_CRT, 0),
     "ZENCOD_RSA_MOD_EXP_CRT"},
    {0, NULL}
};

static ERR_STRING_DATA ZENCOD_str_reasons[] = {
    {ZENCOD_R_ALREADY_LOADED, "already loaded"},
    {ZENCOD_R_BAD_KEY_COMPONENTS, "bad key components"},
    {ZENCOD_R_BN_EXPAND_FAIL, "bn expand fail"},
    {ZENCOD_R_CTRL_COMMAND_NOT_IMPLEMENTED, "ctrl command not implemented"},
    {ZENCOD_R_DSO_FAILURE, "dso failure"},
    {ZENCOD_R_NOT_LOADED, "not loaded"},
    {ZENCOD_R_REQUEST_FAILED, "request failed"},
    {ZENCOD_R_UNIT_FAILURE, "unit failure"},
    {0, NULL}
};

#endif

#ifdef ZENCOD_LIB_NAME
static ERR_STRING_DATA ZENCOD_lib_name[] = {
    {0, ZENCOD_LIB_NAME},
    {0, NULL}
};
#endif

static int ZENCOD_lib_error_code = 0;
static int ZENCOD_error_init = 1;

static void ERR_load_ZENCOD_strings(void)
{
    if (ZENCOD_lib_error_code == 0)
        ZENCOD_lib_error_code = ERR_get_next_error_library();

    if (ZENCOD_error_init) {
        ZENCOD_error_init = 0;
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(ZENCOD_lib_error_code, ZENCOD_str_functs);
        ERR_load_strings(ZENCOD_lib_error_code, ZENCOD_str_reasons);
#endif

#ifdef ZENCOD_LIB_NAME
        ZENCOD_lib_name->error = ERR_PACK(ZENCOD_lib_error_code, 0, 0);
        ERR_load_strings(0, ZENCOD_lib_name);
#endif
    }
}

static void ERR_unload_ZENCOD_strings(void)
{
    if (ZENCOD_error_init == 0) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(ZENCOD_lib_error_code, ZENCOD_str_functs);
        ERR_unload_strings(ZENCOD_lib_error_code, ZENCOD_str_reasons);
#endif

#ifdef ZENCOD_LIB_NAME
        ERR_unload_strings(0, ZENCOD_lib_name);
#endif
        ZENCOD_error_init = 1;
    }
}

static void ERR_ZENCOD_error(int function, int reason, char *file, int line)
{
    if (ZENCOD_lib_error_code == 0)
        ZENCOD_lib_error_code = ERR_get_next_error_library();
    ERR_PUT_error(ZENCOD_lib_error_code, function, reason, file, line);
}
