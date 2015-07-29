/* /////////////////////////////////////////////////////////////////////////
 * File:    unixem/time.h
 *
 * Purpose: Time functions and types for the Win32 platform.
 *
 * Created: 5th May 2014
 * Updated: 5th May 2014
 *
 * Home:    http://synesis.com.au/software/
 *
 * Copyright (c) 2014, Matthew Wilson and Synesis Software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - Neither the name(s) of Matthew Wilson and Synesis Software nor the
 *   names of any contributors may be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/** \file unixem/time.h
 *
 * Time functions and types for the Win32 platform.
 */

#ifndef SYNSOFT_UNIXEM_INCL_UNIXEM_H_TIME
#define SYNSOFT_UNIXEM_INCL_UNIXEM_H_TIME

#ifndef UNIXEM_DOCUMENTATION_SKIP_SECTION
# define SYNSOFT_UNIXEM_VER_UNIXEM_H_UNIXEM_TIME_MAJOR		1
# define SYNSOFT_UNIXEM_VER_UNIXEM_H_UNIXEM_TIME_MINOR		0
# define SYNSOFT_UNIXEM_VER_UNIXEM_H_UNIXEM_TIME_REVISION	1
# define SYNSOFT_UNIXEM_VER_UNIXEM_H_UNIXEM_TIME_EDIT		1
#endif /* !UNIXEM_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#include <unixem/unixem.h>

#include <unixem/sys/time.h>

#include <time.h>

/* ////////////////////////////////////////////////////////////////////// */

/** \weakgroup unixem Synesis Software UNIX Emulation for Win32
 * \brief The UNIX emulation library
 */

/** \weakgroup unixem_time time() API
 * \ingroup UNIXem unixem
 * \brief Time functions and types
 * @{
 */

/* ////////////////////////////////////////////////////////////////////// */

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/** Converts a <code>struct tm</code> value into a <code>time_t</code> value.
 *
 * \param tm Pointer to a tm structure to receive the time information
 *
 * \return The converted value.
 */
time_t
unixem_timegm(
    struct tm* tm
);


/** Converts a <code>struct tm</code> value into a <code>time_t</code> value.
 *
 * \param tm Pointer to a tm structure to receive the time information
 *
 * \return The converted value.
 *
 * \note This is a macro, which resolves to unixem_timegm()
 */
#ifdef UNIXEM_DOCUMENTATION_SKIP_SECTION
time_t
timegm(
    struct tm* tm
);
#else /* ? UNIXEM_DOCUMENTATION_SKIP_SECTION */
# ifndef timegm
#  define timegm	unixem_timegm
# endif /* !timegm */
#endif /* UNIXEM_DOCUMENTATION_SKIP_SECTION */

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

/* ////////////////////////////////////////////////////////////////////// */

/** @} // end of group unixem_time */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* SYNSOFT_UNIXEM_INCL_UNIXEM_H_TIME */

/* ///////////////////////////// end of file //////////////////////////// */
