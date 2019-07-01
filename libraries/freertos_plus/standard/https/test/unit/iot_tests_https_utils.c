/*
 * Amazon FreeRTOS HTTPS Client V1.0.0
 * Copyright (C) 2019 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

/**
 * @file iot_tests_https_utils.c
 * @brief Tests for the user-facing API functions declared in iot_https_utils.h.
 */

/* The config header is always included first. */
#include "iot_config.h"

/* C standard includes. */
#include <string.h>

/* HTTPS Client Utils include. */
#include "iot_https_utils.h"

/*-----------------------------------------------------------*

/**
 * @brief Test group for HTTPS Utils API tests.
 */
TEST_GROUP( HTTPS_Utils_Unit_API );

/*-----------------------------------------------------------*/

/**
 * @brief Test setup for HTTPS Utils API tests.
 */
TEST_SETUP( HTTPS_Utils_Unit_API )
{
}

/*-----------------------------------------------------------*/

/**
 * @brief Test tear down for HTTPS Utils API tests.
 */
TEST_TEAR_DOWN( HTTPS_Utils_Unit_API )
{
}

/*-----------------------------------------------------------*/

/**
 * @brief Test group runner for HTTPS Utils API tests.
 */
TEST_GROUP_RUNNER( HTTPS_Utils_Unit_API )
{
    //RUN_TEST_CASE( HTTPS_Utils_Unit_API, GetUrlPathInvalidParameters);
    //RUN_TEST_CASE( HTTPS_Utils_Unit_API, GetUrlPathVerifications);
    //RUN_TEST_CASE( HTTPS_Utils_Unit_API, GetUrlAddressInvalidParameters);
    //RUN_TEST_CASE( HTTPS_Utils_Unit_API, GetUrlAddressVerifications);
}

/*-----------------------------------------------------------*/
