/* SDL modified the include guard to be compatible with Mesa and Apple include guards:
 * - Mesa uses: __gl_glext_h_
 * - Apple uses: __glext_h_  */
#if !defined(__glext_h_) && !defined(__gl_glext_h_)
#define __glext_h_ 1
#define __gl_glext_h_ 1

#ifdef __cplusplus
extern "C" {
#endif

/*
** Copyright 2013-2020 The Khronos Group Inc.
** SPDX-License-Identifier: MIT
**
** This header is generated from the Khronos OpenGL / OpenGL ES XML
** API Registry. The current version of the Registry, generator scripts
** used to make the header, and the header can be found at
**   https://github.com/KhronosGroup/OpenGL-Registry
*/

#if defined(_WIN32) && !defined() && !defined(__CYGWIN__) && !defined(__SCITECH_SNAP__)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 1
#endif
#include <windows.h>
#endif

#ifndef 
//#define 
#endif
#ifndef P
//#define P  *
#endif
#ifndef extern
//#define extern extern
#endif

#define GL_GLEXT_VERSION 20220530

/*#include <KHR/khrplatform.h>*/
#ifndef __khrplatform_h_
#define __khrplatform_h_

/*
** Copyright (c) 2008-2018 The Khronos Group Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and/or associated documentation files (the
** "Materials"), to deal in the Materials without restriction, including
** without limitation the rights to use, copy, modify, merge, publish,
** distribute, sublicense, and/or sell copies of the Materials, and to
** permit persons to whom the Materials are furnished to do so, subject to
** the following conditions:
**
** The above copyright notice and this permission notice shall be included
** in all copies or substantial portions of the Materials.
**
** THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
** CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
** TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
** MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
*/

/* Khronos platform-specific types and definitions.
 *
 * The master copy of khrplatform.h is maintained in the Khronos EGL
 * Registry repository at https://github.com/KhronosGroup/EGL-Registry
 * The last semantic modification to khrplatform.h was at commit ID:
 *      67a3e0864c2d75ea5287b9f3d2eb74a745936692
 *
 * Adopters may modify this file to suit their platform. Adopters are
 * encouraged to submit platform specific modifications to the Khronos
 * group so that they can be included in future versions of this file.
 * Please submit changes by filing pull requests or issues on
 * the EGL Registry repository linked above.
 *
 *
 * See the Implementer's Guidelines for information about where this file
 * should be located on your system and for more details of its use:
 *    http://www.khronos.org/registry/implementers_guide.pdf
 *
 * This file should be included as
 *        #include <KHR/khrplatform.h>
 * by Khronos client API header files that use its types and defines.
 *
 * The types in khrplatform.h should only be used to define API-specific types.
 *
 * Types defined in khrplatform.h:
 *    khronos_int8_t              signed   8  bit
 *    khronos_uint8_t             unsigned 8  bit
 *    khronos_int16_t             signed   16 bit
 *    khronos_uint16_t            unsigned 16 bit
 *    khronos_int32_t             signed   32 bit
 *    khronos_uint32_t            unsigned 32 bit
 *    khronos_int64_t             signed   64 bit
 *    khronos_uint64_t            unsigned 64 bit
 *    khronos_intptr_t            signed   same number of bits as a pointer
 *    khronos_uintptr_t           unsigned same number of bits as a pointer
 *    khronos_ssize_t             signed   size
 *    khronos_usize_t             unsigned size
 *    khronos_float_t             signed   32 bit floating point
 *    khronos_time_ns_t           unsigned 64 bit time in nanoseconds
 *    khronos_utime_nanoseconds_t unsigned time interval or absolute time in
 *                                         nanoseconds
 *    khronos_stime_nanoseconds_t signed time interval in nanoseconds
 *    khronos_boolean_enum_t      enumerated boolean type. This should
 *      only be used as a base type when a client API's boolean type is
 *      an enum. Client APIs which use an integer or other type for
 *      booleans cannot use this as the base type for their boolean.
 *
 * Tokens defined in khrplatform.h:
 *
 *    KHRONOS_FALSE, KHRONOS_TRUE Enumerated boolean false/true values.
 *
 *    KHRONOS_SUPPORT_INT64 is 1 if 64 bit integers are supported; otherwise 0.
 *    KHRONOS_SUPPORT_FLOAT is 1 if floats are supported; otherwise 0.
 *
 * Calling convention macros defined in this file:
 *    KHRONOS_APICALL
 *    KHRONOS_
 *    KHRONOS_APIATTRIBUTES
 *
 * These may be used in function prototypes as:
 *
 *      KHRONOS_APICALL void KHRONOS_ funcname(
 *                                  int arg1,
 *                                  int arg2) KHRONOS_APIATTRIBUTES;
 */

#if defined(__SCITECH_SNAP__) && !defined(KHRONOS_STATIC)
#   define KHRONOS_STATIC 1
#endif

/*-------------------------------------------------------------------------
 * Definition of KHRONOS_APICALL
 *-------------------------------------------------------------------------
 * This precedes the return type of the function in the function prototype.
 */
#if defined(KHRONOS_STATIC)
    /* If the preprocessor constant KHRONOS_STATIC is defined, make the
     * header compatible with static linking. */
#   define KHRONOS_APICALL
#elif defined(_WIN32)
#   define KHRONOS_APICALL __declspec(dllimport)
#elif defined (__SYMBIAN32__)
#   define KHRONOS_APICALL IMPORT_C
#elif defined(__ANDROID__)
#   define KHRONOS_APICALL __attribute__((visibility("default")))
#else
#   define KHRONOS_APICALL
#endif

/*-------------------------------------------------------------------------
 * Definition of KHRONOS_
 *-------------------------------------------------------------------------
 * This follows the return type of the function  and precedes the function
 * name in the function prototype.
 */
#if defined(_WIN32) && !defined(_WIN32_WCE) && !defined(__SCITECH_SNAP__)
    /* Win32 but not WinCE */
#   define KHRONOS_ __stdcall
#else
#   define KHRONOS_
#endif

/*-------------------------------------------------------------------------
 * Definition of KHRONOS_APIATTRIBUTES
 *-------------------------------------------------------------------------
 * This follows the closing parenthesis of the function prototype arguments.
 */
#if defined (__ARMCC_2__)
#define KHRONOS_APIATTRIBUTES __softfp
#else
#define KHRONOS_APIATTRIBUTES
#endif

/*-------------------------------------------------------------------------
 * basic type definitions
 *-----------------------------------------------------------------------*/
#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || defined(__GNUC__) || defined(__SCO__) || defined(__USLC__)


/*
 * Using <stdint.h>
 */
#include <stdint.h>
typedef int32_t                 khronos_int32_t;
typedef uint32_t                khronos_uint32_t;
typedef int64_t                 khronos_int64_t;
typedef uint64_t                khronos_uint64_t;
#define KHRONOS_SUPPORT_INT64   1
#define KHRONOS_SUPPORT_FLOAT   1
/*
 * To support platform where unsigned long cannot be used interchangeably with
 * inptr_t (e.g. CHERI-extended ISAs), we can use the stdint.h intptr_t.
 * Ideally, we could just use (u)intptr_t everywhere, but this could result in
 * ABI breakage if khronos_uintptr_t is changed from unsigned long to
 * unsigned long long or similar (this results in different C++ name mangling).
 * To avoid changes for existing platforms, we restrict usage of intptr_t to
 * platforms where the size of a pointer is larger than the size of long.
 */
#if defined(__SIZEOF_LONG__) && defined(__SIZEOF_POINTER__)
#if __SIZEOF_POINTER__ > __SIZEOF_LONG__
#define KHRONOS_USE_INTPTR_T
#endif
#endif

#elif defined(__VMS ) || defined(__sgi)

/*
 * Using <inttypes.h>
 */
#include <inttypes.h>
typedef int32_t                 khronos_int32_t;
typedef uint32_t                khronos_uint32_t;
typedef int64_t                 khronos_int64_t;
typedef uint64_t                khronos_uint64_t;
#define KHRONOS_SUPPORT_INT64   1
#define KHRONOS_SUPPORT_FLOAT   1

#elif defined(_WIN32) && !defined(__SCITECH_SNAP__)

/*
 * Win32
 */
typedef __int32                 khronos_int32_t;
typedef unsigned __int32        khronos_uint32_t;
typedef __int64                 khronos_int64_t;
typedef unsigned __int64        khronos_uint64_t;
#define KHRONOS_SUPPORT_INT64   1
#define KHRONOS_SUPPORT_FLOAT   1

#elif defined(__sun__) || defined(__digital__)

/*
 * Sun or Digital
 */
typedef int                     khronos_int32_t;
typedef unsigned int            khronos_uint32_t;
#if defined(__arch64__) || defined(_LP64)
typedef long int                khronos_int64_t;
typedef unsigned long int       khronos_uint64_t;
#else
typedef long long int           khronos_int64_t;
typedef unsigned long long int  khronos_uint64_t;
#endif /* __arch64__ */
#define KHRONOS_SUPPORT_INT64   1
#define KHRONOS_SUPPORT_FLOAT   1

#elif 0

/*
 * Hypothetical platform with no float or int64 support
 */
typedef int                     khronos_int32_t;
typedef unsigned int            khronos_uint32_t;
#define KHRONOS_SUPPORT_INT64   0
#define KHRONOS_SUPPORT_FLOAT   0

#else

/*
 * Generic fallback
 */
#include <stdint.h>
typedef int32_t                 khronos_int32_t;
typedef uint32_t                khronos_uint32_t;
typedef int64_t                 khronos_int64_t;
typedef uint64_t                khronos_uint64_t;
#define KHRONOS_SUPPORT_INT64   1
#define KHRONOS_SUPPORT_FLOAT   1

#endif


/*
 * Types that are (so far) the same on all platforms
 */
typedef signed   char          khronos_int8_t;
typedef unsigned char          khronos_uint8_t;
typedef signed   short int     khronos_int16_t;
typedef unsigned short int     khronos_uint16_t;

/*
 * Types that differ between LLP64 and LP64 architectures - in LLP64,
 * pointers are 64 bits, but 'long' is still 32 bits. Win64 appears
 * to be the only LLP64 architecture in current use.
 */
#ifdef KHRONOS_USE_INTPTR_T
typedef intptr_t               khronos_intptr_t;
typedef uintptr_t              khronos_uintptr_t;
#elif defined(_WIN64)
typedef signed   long long int khronos_intptr_t;
typedef unsigned long long int khronos_uintptr_t;
#else
typedef signed   long  int     khronos_intptr_t;
typedef unsigned long  int     khronos_uintptr_t;
#endif

#if defined(_WIN64)
typedef signed   long long int khronos_ssize_t;
typedef unsigned long long int khronos_usize_t;
#else
typedef signed   long  int     khronos_ssize_t;
typedef unsigned long  int     khronos_usize_t;
#endif

#if KHRONOS_SUPPORT_FLOAT
/*
 * Float type
 */
typedef          float         khronos_float_t;
#endif

#if KHRONOS_SUPPORT_INT64
/* Time types
 *
 * These types can be used to represent a time interval in nanoseconds or
 * an absolute Unadjusted System Time.  Unadjusted System Time is the number
 * of nanoseconds since some arbitrary system event (e.g. since the last
 * time the system booted).  The Unadjusted System Time is an unsigned
 * 64 bit value that wraps back to 0 every 584 years.  Time intervals
 * may be either signed or unsigned.
 */
typedef khronos_uint64_t       khronos_utime_nanoseconds_t;
typedef khronos_int64_t        khronos_stime_nanoseconds_t;
#endif

/*
 * Dummy value used to pad enum types to 32 bits.
 */
#ifndef KHRONOS_MAX_ENUM
#define KHRONOS_MAX_ENUM 0x7FFFFFFF
#endif

/*
 * Enumerated boolean type
 *
 * Values other than zero should be considered to be true.  Therefore
 * comparisons should not be made against KHRONOS_TRUE.
 */
typedef enum {
    KHRONOS_FALSE = 0,
    KHRONOS_TRUE  = 1,
    KHRONOS_BOOLEAN_ENUM_FORCE_SIZE = KHRONOS_MAX_ENUM
} khronos_boolean_enum_t;

#endif /* __khrplatform_h_ */

/* Generated C header for:
 * API: gl
 * Profile: compatibility
 * Versions considered: .*
 * Versions emitted: 1\.[2-9]|[234]\.[0-9]
 * Default extensions included: gl
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

#ifndef GL_VERSION_1_2
#define GL_VERSION_1_2 1
#define GL_UNSIGNED_BYTE_3_3_2            0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4         0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1         0x8034
#define GL_UNSIGNED_INT_8_8_8_8           0x8035
#define GL_UNSIGNED_INT_10_10_10_2        0x8036
#define GL_TEXTURE_BINDING_3D             0x806A
#define GL_PACK_SKIP_IMAGES               0x806B
#define GL_PACK_IMAGE_HEIGHT              0x806C
#define GL_UNPACK_SKIP_IMAGES             0x806D
#define GL_UNPACK_IMAGE_HEIGHT            0x806E
#define GL_TEXTURE_3D                     0x806F
#define GL_PROXY_TEXTURE_3D               0x8070
#define GL_TEXTURE_DEPTH                  0x8071
#define GL_TEXTURE_WRAP_R                 0x8072
#define GL_MAX_3D_TEXTURE_SIZE            0x8073
#define GL_UNSIGNED_BYTE_2_3_3_REV        0x8362
#define GL_UNSIGNED_SHORT_5_6_5           0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV       0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV     0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV     0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV       0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV    0x8368
#define GL_BGR                            0x80E0
#define GL_BGRA                           0x80E1
#define GL_MAX_ELEMENTS_VERTICES          0x80E8
#define GL_MAX_ELEMENTS_INDICES           0x80E9
#define GL_CLAMP_TO_EDGE                  0x812F
#define GL_TEXTURE_MIN_LOD                0x813A
#define GL_TEXTURE_MAX_LOD                0x813B
#define GL_TEXTURE_BASE_LEVEL             0x813C
#define GL_TEXTURE_MAX_LEVEL              0x813D
#define GL_SMOOTH_POINT_SIZE_RANGE        0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY  0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE        0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY  0x0B23
#define GL_ALIASED_LINE_WIDTH_RANGE       0x846E
#define GL_RESCALE_NORMAL                 0x803A
#define GL_LIGHT_MODEL_COLOR_CONTROL      0x81F8
#define GL_SINGLE_COLOR                   0x81F9
#define GL_SEPARATE_SPECULAR_COLOR        0x81FA
#define GL_ALIASED_POINT_SIZE_RANGE       0x846D
//typedef void (P PFNGLDRAWRANGEELEMENTSPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
//typedef void (P PFNGLTEXIMAGE3DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
//typedef void (P PFNGLTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
//typedef void (P PFNGLCOPYTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
//#ifdef GL_GLEXT_PROTOTYPES
//extern void  glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
//extern void  glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
//extern void  glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
//extern void  glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
//#endif
#endif /* GL_VERSION_1_2 */

#ifndef GL_VERSION_1_3
#define GL_VERSION_1_3 1
#define GL_TEXTURE0                       0x84C0
#define GL_TEXTURE1                       0x84C1
#define GL_TEXTURE2                       0x84C2
#define GL_TEXTURE3                       0x84C3
#define GL_TEXTURE4                       0x84C4
#define GL_TEXTURE5                       0x84C5
#define GL_TEXTURE6                       0x84C6
#define GL_TEXTURE7                       0x84C7
#define GL_TEXTURE8                       0x84C8
#define GL_TEXTURE9                       0x84C9
#define GL_TEXTURE10                      0x84CA
#define GL_TEXTURE11                      0x84CB
#define GL_TEXTURE12                      0x84CC
#define GL_TEXTURE13                      0x84CD
#define GL_TEXTURE14                      0x84CE
#define GL_TEXTURE15                      0x84CF
#define GL_TEXTURE16                      0x84D0
#define GL_TEXTURE17                      0x84D1
#define GL_TEXTURE18                      0x84D2
#define GL_TEXTURE19                      0x84D3
#define GL_TEXTURE20                      0x84D4
#define GL_TEXTURE21                      0x84D5
#define GL_TEXTURE22                      0x84D6
#define GL_TEXTURE23                      0x84D7
#define GL_TEXTURE24                      0x84D8
#define GL_TEXTURE25                      0x84D9
#define GL_TEXTURE26                      0x84DA
#define GL_TEXTURE27                      0x84DB
#define GL_TEXTURE28                      0x84DC
#define GL_TEXTURE29                      0x84DD
#define GL_TEXTURE30                      0x84DE
#define GL_TEXTURE31                      0x84DF
#define GL_ACTIVE_TEXTURE                 0x84E0
#define GL_MULTISAMPLE                    0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE       0x809E
#define GL_SAMPLE_ALPHA_TO_ONE            0x809F
#define GL_SAMPLE_COVERAGE                0x80A0
#define GL_SAMPLE_BUFFERS                 0x80A8
#define GL_SAMPLES                        0x80A9
#define GL_SAMPLE_COVERAGE_VALUE          0x80AA
#define GL_SAMPLE_COVERAGE_INVERT         0x80AB
#define GL_TEXTURE_CUBE_MAP               0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP       0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X    0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X    0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y    0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y    0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z    0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z    0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP         0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE      0x851C
#define GL_COMPRESSED_RGB                 0x84ED
#define GL_COMPRESSED_RGBA                0x84EE
#define GL_TEXTURE_COMPRESSION_HINT       0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE  0x86A0
#define GL_TEXTURE_COMPRESSED             0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS     0x86A3
#define GL_CLAMP_TO_BORDER                0x812D
#define GL_CLIENT_ACTIVE_TEXTURE          0x84E1
#define GL_MAX_TEXTURE_UNITS              0x84E2
#define GL_TRANSPOSE_MODELVIEW_MATRIX     0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX    0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX       0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX         0x84E6
#define GL_MULTISAMPLE_BIT                0x20000000
#define GL_NORMAL_MAP                     0x8511
#define GL_REFLECTION_MAP                 0x8512
#define GL_COMPRESSED_ALPHA               0x84E9
#define GL_COMPRESSED_LUMINANCE           0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA     0x84EB
#define GL_COMPRESSED_INTENSITY           0x84EC
#define GL_COMBINE                        0x8570
#define GL_COMBINE_RGB                    0x8571
#define GL_COMBINE_ALPHA                  0x8572
#define GL_SOURCE0_RGB                    0x8580
#define GL_SOURCE1_RGB                    0x8581
#define GL_SOURCE2_RGB                    0x8582
#define GL_SOURCE0_ALPHA                  0x8588
#define GL_SOURCE1_ALPHA                  0x8589
#define GL_SOURCE2_ALPHA                  0x858A
#define GL_OPERAND0_RGB                   0x8590
#define GL_OPERAND1_RGB                   0x8591
#define GL_OPERAND2_RGB                   0x8592
#define GL_OPERAND0_ALPHA                 0x8598
#define GL_OPERAND1_ALPHA                 0x8599
#define GL_OPERAND2_ALPHA                 0x859A
#define GL_RGB_SCALE                      0x8573
#define GL_ADD_SIGNED                     0x8574
#define GL_INTERPOLATE                    0x8575
#define GL_SUBTRACT                       0x84E7
#define GL_CONSTANT                       0x8576
#define GL_PRIMARY_COLOR                  0x8577
#define GL_PREVIOUS                       0x8578
#define GL_DOT3_RGB                       0x86AE
#define GL_DOT3_RGBA                      0x86AF
/*typedef void (P PFNGLACTIVETEXTUREPROC) (GLenum texture);
typedef void (P PFNGLSAMPLECOVERAGEPROC) (GLfloat value, GLboolean invert);
typedef void (P PFNGLCOMPRESSEDTEXIMAGE3DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
typedef void (P PFNGLCOMPRESSEDTEXIMAGE2DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
typedef void (P PFNGLCOMPRESSEDTEXIMAGE1DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
typedef void (P PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (P PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (P PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
typedef void (P PFNGLGETCOMPRESSEDTEXIMAGEPROC) (GLenum target, GLint level, void *img);
typedef void (P PFNGLCLIENTACTIVETEXTUREPROC) (GLenum texture);
typedef void (P PFNGLMULTITEXCOORD1DPROC) (GLenum target, GLdouble s);
typedef void (P PFNGLMULTITEXCOORD1DVPROC) (GLenum target, const GLdouble *v);
typedef void (P PFNGLMULTITEXCOORD1FPROC) (GLenum target, GLfloat s);
typedef void (P PFNGLMULTITEXCOORD1FVPROC) (GLenum target, const GLfloat *v);
typedef void (P PFNGLMULTITEXCOORD1IPROC) (GLenum target, GLint s);
typedef void (P PFNGLMULTITEXCOORD1IVPROC) (GLenum target, const GLint *v);
typedef void (P PFNGLMULTITEXCOORD1SPROC) (GLenum target, GLshort s);
typedef void (P PFNGLMULTITEXCOORD1SVPROC) (GLenum target, const GLshort *v);
typedef void (P PFNGLMULTITEXCOORD2DPROC) (GLenum target, GLdouble s, GLdouble t);
typedef void (P PFNGLMULTITEXCOORD2DVPROC) (GLenum target, const GLdouble *v);
typedef void (P PFNGLMULTITEXCOORD2FPROC) (GLenum target, GLfloat s, GLfloat t);
typedef void (P PFNGLMULTITEXCOORD2FVPROC) (GLenum target, const GLfloat *v);
typedef void (P PFNGLMULTITEXCOORD2IPROC) (GLenum target, GLint s, GLint t);
typedef void (P PFNGLMULTITEXCOORD2IVPROC) (GLenum target, const GLint *v);
typedef void (P PFNGLMULTITEXCOORD2SPROC) (GLenum target, GLshort s, GLshort t);
typedef void (P PFNGLMULTITEXCOORD2SVPROC) (GLenum target, const GLshort *v);
typedef void (P PFNGLMULTITEXCOORD3DPROC) (GLenum target, GLdouble s, GLdouble t, GLdouble r);
typedef void (P PFNGLMULTITEXCOORD3DVPROC) (GLenum target, const GLdouble *v);
typedef void (P PFNGLMULTITEXCOORD3FPROC) (GLenum target, GLfloat s, GLfloat t, GLfloat r);
typedef void (P PFNGLMULTITEXCOORD3FVPROC) (GLenum target, const GLfloat *v);
typedef void (P PFNGLMULTITEXCOORD3IPROC) (GLenum target, GLint s, GLint t, GLint r);
typedef void (P PFNGLMULTITEXCOORD3IVPROC) (GLenum target, const GLint *v);
typedef void (P PFNGLMULTITEXCOORD3SPROC) (GLenum target, GLshort s, GLshort t, GLshort r);
typedef void (P PFNGLMULTITEXCOORD3SVPROC) (GLenum target, const GLshort *v);
typedef void (P PFNGLMULTITEXCOORD4DPROC) (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void (P PFNGLMULTITEXCOORD4DVPROC) (GLenum target, const GLdouble *v);
typedef void (P PFNGLMULTITEXCOORD4FPROC) (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (P PFNGLMULTITEXCOORD4FVPROC) (GLenum target, const GLfloat *v);
typedef void (P PFNGLMULTITEXCOORD4IPROC) (GLenum target, GLint s, GLint t, GLint r, GLint q);
typedef void (P PFNGLMULTITEXCOORD4IVPROC) (GLenum target, const GLint *v);
typedef void (P PFNGLMULTITEXCOORD4SPROC) (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
typedef void (P PFNGLMULTITEXCOORD4SVPROC) (GLenum target, const GLshort *v);
typedef void (P PFNGLLOADTRANSPOSEMATRIXFPROC) (const GLfloat *m);
typedef void (P PFNGLLOADTRANSPOSEMATRIXDPROC) (const GLdouble *m);
typedef void (P PFNGLMULTTRANSPOSEMATRIXFPROC) (const GLfloat *m);
typedef void (P PFNGLMULTTRANSPOSEMATRIXDPROC) (const GLdouble *m); */
#ifdef GL_GLEXT_PROTOTYPES
extern void  glActiveTexture (GLenum texture);
extern void  glSampleCoverage (GLfloat value, GLboolean invert);
extern void  glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
extern void  glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
extern void  glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
extern void  glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
extern void  glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
extern void  glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
extern void  glGetCompressedTexImage (GLenum target, GLint level, void *img);
extern void  glClientActiveTexture (GLenum texture);
extern void  glMultiTexCoord1d (GLenum target, GLdouble s);
extern void  glMultiTexCoord1dv (GLenum target, const GLdouble *v);
extern void  glMultiTexCoord1f (GLenum target, GLfloat s);
extern void  glMultiTexCoord1fv (GLenum target, const GLfloat *v);
extern void  glMultiTexCoord1i (GLenum target, GLint s);
extern void  glMultiTexCoord1iv (GLenum target, const GLint *v);
extern void  glMultiTexCoord1s (GLenum target, GLshort s);
extern void  glMultiTexCoord1sv (GLenum target, const GLshort *v);
extern void  glMultiTexCoord2d (GLenum target, GLdouble s, GLdouble t);
extern void  glMultiTexCoord2dv (GLenum target, const GLdouble *v);
extern void  glMultiTexCoord2f (GLenum target, GLfloat s, GLfloat t);
extern void  glMultiTexCoord2fv (GLenum target, const GLfloat *v);
extern void  glMultiTexCoord2i (GLenum target, GLint s, GLint t);
extern void  glMultiTexCoord2iv (GLenum target, const GLint *v);
extern void  glMultiTexCoord2s (GLenum target, GLshort s, GLshort t);
extern void  glMultiTexCoord2sv (GLenum target, const GLshort *v);
extern void  glMultiTexCoord3d (GLenum target, GLdouble s, GLdouble t, GLdouble r);
extern void  glMultiTexCoord3dv (GLenum target, const GLdouble *v);
extern void  glMultiTexCoord3f (GLenum target, GLfloat s, GLfloat t, GLfloat r);
extern void  glMultiTexCoord3fv (GLenum target, const GLfloat *v);
extern void  glMultiTexCoord3i (GLenum target, GLint s, GLint t, GLint r);
extern void  glMultiTexCoord3iv (GLenum target, const GLint *v);
extern void  glMultiTexCoord3s (GLenum target, GLshort s, GLshort t, GLshort r);
extern void  glMultiTexCoord3sv (GLenum target, const GLshort *v);
extern void  glMultiTexCoord4d (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
extern void  glMultiTexCoord4dv (GLenum target, const GLdouble *v);
extern void  glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern void  glMultiTexCoord4fv (GLenum target, const GLfloat *v);
extern void  glMultiTexCoord4i (GLenum target, GLint s, GLint t, GLint r, GLint q);
extern void  glMultiTexCoord4iv (GLenum target, const GLint *v);
extern void  glMultiTexCoord4s (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
extern void  glMultiTexCoord4sv (GLenum target, const GLshort *v);
extern void  glLoadTransposeMatrixf (const GLfloat *m);
extern void  glLoadTransposeMatrixd (const GLdouble *m);
extern void  glMultTransposeMatrixf (const GLfloat *m);
extern void  glMultTransposeMatrixd (const GLdouble *m);
#endif
#endif /* GL_VERSION_1_3 */

#ifndef GL_VERSION_1_4
#define GL_VERSION_1_4 1
#define GL_BLEND_DST_RGB                  0x80C8
#define GL_BLEND_SRC_RGB                  0x80C9
#define GL_BLEND_DST_ALPHA                0x80CA
#define GL_BLEND_SRC_ALPHA                0x80CB
#define GL_POINT_FADE_THRESHOLD_SIZE      0x8128
#define GL_DEPTH_COMPONENT16              0x81A5
#define GL_DEPTH_COMPONENT24              0x81A6
#define GL_DEPTH_COMPONENT32              0x81A7
#define GL_MIRRORED_REPEAT                0x8370
#define GL_MAX_TEXTURE_LOD_BIAS           0x84FD
#define GL_TEXTURE_LOD_BIAS               0x8501
#define GL_INCR_WRAP                      0x8507
#define GL_DECR_WRAP                      0x8508
#define GL_TEXTURE_DEPTH_SIZE             0x884A
#define GL_TEXTURE_COMPARE_MODE           0x884C
#define GL_TEXTURE_COMPARE_FUNC           0x884D
#define GL_POINT_SIZE_MIN                 0x8126
#define GL_POINT_SIZE_MAX                 0x8127
#define GL_POINT_DISTANCE_ATTENUATION     0x8129
#define GL_GENERATE_MIPMAP                0x8191
#define GL_GENERATE_MIPMAP_HINT           0x8192
#define GL_FOG_COORDINATE_SOURCE          0x8450
#define GL_FOG_COORDINATE                 0x8451
#define GL_FRAGMENT_DEPTH                 0x8452
#define GL_CURRENT_FOG_COORDINATE         0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE      0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE    0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER   0x8456
#define GL_FOG_COORDINATE_ARRAY           0x8457
#define GL_COLOR_SUM                      0x8458
#define GL_CURRENT_SECONDARY_COLOR        0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE     0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE     0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE   0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER  0x845D
#define GL_SECONDARY_COLOR_ARRAY          0x845E
#define GL_TEXTURE_FILTER_CONTROL         0x8500
#define GL_DEPTH_TEXTURE_MODE             0x884B
#define GL_COMPARE_R_TO_TEXTURE           0x884E
#define GL_BLEND_COLOR                    0x8005
#define GL_BLEND_EQUATION                 0x8009
#define GL_CONSTANT_COLOR                 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
#define GL_CONSTANT_ALPHA                 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
#define GL_FUNC_ADD                       0x8006
#define GL_FUNC_REVERSE_SUBTRACT          0x800B
#define GL_FUNC_SUBTRACT                  0x800A
#define GL_MIN                            0x8007
#define GL_MAX                            0x8008
/*typedef void (P PFNGLBLENDFUNCSEPARATEPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (P PFNGLMULTIDRAWARRAYSPROC) (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
typedef void (P PFNGLMULTIDRAWELEMENTSPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
typedef void (P PFNGLPOINTPARAMETERFPROC) (GLenum pname, GLfloat param);
typedef void (P PFNGLPOINTPARAMETERFVPROC) (GLenum pname, const GLfloat *params);
typedef void (P PFNGLPOINTPARAMETERIPROC) (GLenum pname, GLint param);
typedef void (P PFNGLPOINTPARAMETERIVPROC) (GLenum pname, const GLint *params);
typedef void (P PFNGLFOGCOORDFPROC) (GLfloat coord);
typedef void (P PFNGLFOGCOORDFVPROC) (const GLfloat *coord);
typedef void (P PFNGLFOGCOORDDPROC) (GLdouble coord);
typedef void (P PFNGLFOGCOORDDVPROC) (const GLdouble *coord);
typedef void (P PFNGLFOGCOORDPOINTERPROC) (GLenum type, GLsizei stride, const void *pointer);
typedef void (P PFNGLSECONDARYCOLOR3BPROC) (GLbyte red, GLbyte green, GLbyte blue);
typedef void (P PFNGLSECONDARYCOLOR3BVPROC) (const GLbyte *v);
typedef void (P PFNGLSECONDARYCOLOR3DPROC) (GLdouble red, GLdouble green, GLdouble blue);
typedef void (P PFNGLSECONDARYCOLOR3DVPROC) (const GLdouble *v);
typedef void (P PFNGLSECONDARYCOLOR3FPROC) (GLfloat red, GLfloat green, GLfloat blue);
typedef void (P PFNGLSECONDARYCOLOR3FVPROC) (const GLfloat *v);
typedef void (P PFNGLSECONDARYCOLOR3IPROC) (GLint red, GLint green, GLint blue);
typedef void (P PFNGLSECONDARYCOLOR3IVPROC) (const GLint *v);
typedef void (P PFNGLSECONDARYCOLOR3SPROC) (GLshort red, GLshort green, GLshort blue);
typedef void (P PFNGLSECONDARYCOLOR3SVPROC) (const GLshort *v);
typedef void (P PFNGLSECONDARYCOLOR3UBPROC) (GLubyte red, GLubyte green, GLubyte blue);
typedef void (P PFNGLSECONDARYCOLOR3UBVPROC) (const GLubyte *v);
typedef void (P PFNGLSECONDARYCOLOR3UIPROC) (GLuint red, GLuint green, GLuint blue);
typedef void (P PFNGLSECONDARYCOLOR3UIVPROC) (const GLuint *v);
typedef void (P PFNGLSECONDARYCOLOR3USPROC) (GLushort red, GLushort green, GLushort blue);
typedef void (P PFNGLSECONDARYCOLOR3USVPROC) (const GLushort *v);
typedef void (P PFNGLSECONDARYCOLORPOINTERPROC) (GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (P PFNGLWINDOWPOS2DPROC) (GLdouble x, GLdouble y);
typedef void (P PFNGLWINDOWPOS2DVPROC) (const GLdouble *v);
typedef void (P PFNGLWINDOWPOS2FPROC) (GLfloat x, GLfloat y);
typedef void (P PFNGLWINDOWPOS2FVPROC) (const GLfloat *v);
typedef void (P PFNGLWINDOWPOS2IPROC) (GLint x, GLint y);
typedef void (P PFNGLWINDOWPOS2IVPROC) (const GLint *v);
typedef void (P PFNGLWINDOWPOS2SPROC) (GLshort x, GLshort y);
typedef void (P PFNGLWINDOWPOS2SVPROC) (const GLshort *v);
typedef void (P PFNGLWINDOWPOS3DPROC) (GLdouble x, GLdouble y, GLdouble z);
typedef void (P PFNGLWINDOWPOS3DVPROC) (const GLdouble *v);
typedef void (P PFNGLWINDOWPOS3FPROC) (GLfloat x, GLfloat y, GLfloat z);
typedef void (P PFNGLWINDOWPOS3FVPROC) (const GLfloat *v);
typedef void (P PFNGLWINDOWPOS3IPROC) (GLint x, GLint y, GLint z);
typedef void (P PFNGLWINDOWPOS3IVPROC) (const GLint *v);
typedef void (P PFNGLWINDOWPOS3SPROC) (GLshort x, GLshort y, GLshort z);
typedef void (P PFNGLWINDOWPOS3SVPROC) (const GLshort *v);
typedef void (P PFNGLBLENDCOLORPROC) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (P PFNGLBLENDEQUATIONPROC) (GLenum mode);
#ifdef GL_GLEXT_PROTOTYPES */
extern void  glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
extern void  glMultiDrawArrays (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
extern void  glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
extern void  glPointParameterf (GLenum pname, GLfloat param);
extern void  glPointParameterfv (GLenum pname, const GLfloat *params);
extern void  glPointParameteri (GLenum pname, GLint param);
extern void  glPointParameteriv (GLenum pname, const GLint *params);
extern void  glFogCoordf (GLfloat coord);
extern void  glFogCoordfv (const GLfloat *coord);
extern void  glFogCoordd (GLdouble coord);
extern void  glFogCoorddv (const GLdouble *coord);
extern void  glFogCoordPointer (GLenum type, GLsizei stride, const void *pointer);
extern void  glSecondaryColor3b (GLbyte red, GLbyte green, GLbyte blue);
extern void  glSecondaryColor3bv (const GLbyte *v);
extern void  glSecondaryColor3d (GLdouble red, GLdouble green, GLdouble blue);
extern void  glSecondaryColor3dv (const GLdouble *v);
extern void  glSecondaryColor3f (GLfloat red, GLfloat green, GLfloat blue);
extern void  glSecondaryColor3fv (const GLfloat *v);
extern void  glSecondaryColor3i (GLint red, GLint green, GLint blue);
extern void  glSecondaryColor3iv (const GLint *v);
extern void  glSecondaryColor3s (GLshort red, GLshort green, GLshort blue);
extern void  glSecondaryColor3sv (const GLshort *v);
extern void  glSecondaryColor3ub (GLubyte red, GLubyte green, GLubyte blue);
extern void  glSecondaryColor3ubv (const GLubyte *v);
extern void  glSecondaryColor3ui (GLuint red, GLuint green, GLuint blue);
extern void  glSecondaryColor3uiv (const GLuint *v);
extern void  glSecondaryColor3us (GLushort red, GLushort green, GLushort blue);
extern void  glSecondaryColor3usv (const GLushort *v);
extern void  glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, const void *pointer);
extern void  glWindowPos2d (GLdouble x, GLdouble y);
extern void  glWindowPos2dv (const GLdouble *v);
extern void  glWindowPos2f (GLfloat x, GLfloat y);
extern void  glWindowPos2fv (const GLfloat *v);
extern void  glWindowPos2i (GLint x, GLint y);
extern void  glWindowPos2iv (const GLint *v);
extern void  glWindowPos2s (GLshort x, GLshort y);
extern void  glWindowPos2sv (const GLshort *v);
extern void  glWindowPos3d (GLdouble x, GLdouble y, GLdouble z);
extern void  glWindowPos3dv (const GLdouble *v);
extern void  glWindowPos3f (GLfloat x, GLfloat y, GLfloat z);
extern void  glWindowPos3fv (const GLfloat *v);
extern void  glWindowPos3i (GLint x, GLint y, GLint z);
extern void  glWindowPos3iv (const GLint *v);
extern void  glWindowPos3s (GLshort x, GLshort y, GLshort z);
extern void  glWindowPos3sv (const GLshort *v);
extern void  glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
extern void  glBlendEquation (GLenum mode);
#endif
#endif /* GL_VERSION_1_4 */

#ifndef GL_VERSION_1_5
#define GL_VERSION_1_5 1
typedef khronos_ssize_t GLsizeiptr;
typedef khronos_intptr_t GLintptr;
#define GL_BUFFER_SIZE                    0x8764
#define GL_BUFFER_USAGE                   0x8765
#define GL_QUERY_COUNTER_BITS             0x8864
#define GL_CURRENT_QUERY                  0x8865
#define GL_QUERY_RESULT                   0x8866
#define GL_QUERY_RESULT_AVAILABLE         0x8867
#define GL_ARRAY_BUFFER                   0x8892
#define GL_ELEMENT_ARRAY_BUFFER           0x8893
#define GL_ARRAY_BUFFER_BINDING           0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING   0x8895
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_READ_ONLY                      0x88B8
#define GL_WRITE_ONLY                     0x88B9
#define GL_READ_WRITE                     0x88BA
#define GL_BUFFER_ACCESS                  0x88BB
#define GL_BUFFER_MAPPED                  0x88BC
#define GL_BUFFER_MAP_POINTER             0x88BD
#define GL_STREAM_DRAW                    0x88E0
#define GL_STREAM_READ                    0x88E1
#define GL_STREAM_COPY                    0x88E2
#define GL_STATIC_DRAW                    0x88E4
#define GL_STATIC_READ                    0x88E5
#define GL_STATIC_COPY                    0x88E6
#define GL_DYNAMIC_DRAW                   0x88E8
#define GL_DYNAMIC_READ                   0x88E9
#define GL_DYNAMIC_COPY                   0x88EA
#define GL_SAMPLES_PASSED                 0x8914
#define GL_SRC1_ALPHA                     0x8589
#define GL_VERTEX_ARRAY_BUFFER_BINDING    0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING    0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING     0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING     0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING 0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING 0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING 0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING    0x889E
#define GL_FOG_COORD_SRC                  0x8450
#define GL_FOG_COORD                      0x8451
#define GL_CURRENT_FOG_COORD              0x8453
#define GL_FOG_COORD_ARRAY_TYPE           0x8454
#define GL_FOG_COORD_ARRAY_STRIDE         0x8455
#define GL_FOG_COORD_ARRAY_POINTER        0x8456
#define GL_FOG_COORD_ARRAY                0x8457
#define GL_FOG_COORD_ARRAY_BUFFER_BINDING 0x889D
#define GL_SRC0_RGB                       0x8580
#define GL_SRC1_RGB                       0x8581
#define GL_SRC2_RGB                       0x8582
#define GL_SRC0_ALPHA                     0x8588
#define GL_SRC2_ALPHA                     0x858A
/*typedef void (P PFNGLGENQUERIESPROC) (GLsizei n, GLuint *ids);
typedef void (P PFNGLDELETEQUERIESPROC) (GLsizei n, const GLuint *ids);
typedef GLboolean (P PFNGLISQUERYPROC) (GLuint id);
typedef void (P PFNGLBEGINQUERYPROC) (GLenum target, GLuint id);
typedef void (P PFNGLENDQUERYPROC) (GLenum target);
typedef void (P PFNGLGETQUERYIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (P PFNGLGETQUERYOBJECTIVPROC) (GLuint id, GLenum pname, GLint *params);
typedef void (P PFNGLGETQUERYOBJECTUIVPROC) (GLuint id, GLenum pname, GLuint *params);
typedef void (P PFNGLBINDBUFFERPROC) (GLenum target, GLuint buffer);
typedef void (P PFNGLDELETEBUFFERSPROC) (GLsizei n, const GLuint *buffers);
typedef void (P PFNGLGENBUFFERSPROC) (GLsizei n, GLuint *buffers);
typedef GLboolean (P PFNGLISBUFFERPROC) (GLuint buffer);
typedef void (P PFNGLBUFFERDATAPROC) (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
typedef void (P PFNGLBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
typedef void (P PFNGLGETBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, void *data);
typedef void *(P PFNGLMAPBUFFERPROC) (GLenum target, GLenum access);
typedef GLboolean (P PFNGLUNMAPBUFFERPROC) (GLenum target);
typedef void (P PFNGLGETBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (P PFNGLGETBUFFERPOINTERVPROC) (GLenum target, GLenum pname, void **params);
#ifdef GL_GLEXT_PROTOTYPES */
extern void  glGenQueries (GLsizei n, GLuint *ids);
extern void  glDeleteQueries (GLsizei n, const GLuint *ids);
extern GLboolean  glIsQuery (GLuint id);
extern void  glBeginQuery (GLenum target, GLuint id);
extern void  glEndQuery (GLenum target);
extern void  glGetQueryiv (GLenum target, GLenum pname, GLint *params);
extern void  glGetQueryObjectiv (GLuint id, GLenum pname, GLint *params);
extern void  glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint *params);
extern void  glBindBuffer (GLenum target, GLuint buffer);
extern void  glDeleteBuffers (GLsizei n, const GLuint *buffers);
extern void  glGenBuffers (GLsizei n, GLuint *buffers);
extern GLboolean  glIsBuffer (GLuint buffer);
extern void  glBufferData (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
extern void  glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
extern void  glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, void *data);
extern void * glMapBuffer (GLenum target, GLenum access);
extern GLboolean  glUnmapBuffer (GLenum target);
extern void  glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params);
extern void  glGetBufferPointerv (GLenum target, GLenum pname, void **params);
#endif
#endif /* GL_VERSION_1_5 */

#ifndef GL_VERSION_2_0
#define GL_VERSION_2_0 1
typedef char GLchar;
#define GL_BLEND_EQUATION_RGB             0x8009
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED    0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE       0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE     0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE       0x8625
#define GL_CURRENT_VERTEX_ATTRIB          0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE      0x8642
#define GL_VERTEX_ATTRIB_ARRAY_POINTER    0x8645
#define GL_STENCIL_BACK_FUNC              0x8800
#define GL_STENCIL_BACK_FAIL              0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL   0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS   0x8803
#define GL_MAX_DRAW_BUFFERS               0x8824
#define GL_DRAW_BUFFER0                   0x8825
#define GL_DRAW_BUFFER1                   0x8826
#define GL_DRAW_BUFFER2                   0x8827
#define GL_DRAW_BUFFER3                   0x8828
#define GL_DRAW_BUFFER4                   0x8829
#define GL_DRAW_BUFFER5                   0x882A
#define GL_DRAW_BUFFER6                   0x882B
#define GL_DRAW_BUFFER7                   0x882C
#define GL_DRAW_BUFFER8                   0x882D
#define GL_DRAW_BUFFER9                   0x882E
#define GL_DRAW_BUFFER10                  0x882F
#define GL_DRAW_BUFFER11                  0x8830
#define GL_DRAW_BUFFER12                  0x8831
#define GL_DRAW_BUFFER13                  0x8832
#define GL_DRAW_BUFFER14                  0x8833
#define GL_DRAW_BUFFER15                  0x8834
#define GL_BLEND_EQUATION_ALPHA           0x883D
#define GL_MAX_VERTEX_ATTRIBS             0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_MAX_TEXTURE_IMAGE_UNITS        0x8872
#define GL_FRAGMENT_SHADER                0x8B30
#define GL_VERTEX_SHADER                  0x8B31
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS  0x8B4A
#define GL_MAX_VARYING_FLOATS             0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_SHADER_TYPE                    0x8B4F
#define GL_FLOAT_VEC2                     0x8B50
#define GL_FLOAT_VEC3                     0x8B51
#define GL_FLOAT_VEC4                     0x8B52
#define GL_INT_VEC2                       0x8B53
#define GL_INT_VEC3                       0x8B54
#define GL_INT_VEC4                       0x8B55
#define GL_BOOL                           0x8B56
#define GL_BOOL_VEC2                      0x8B57
#define GL_BOOL_VEC3                      0x8B58
#define GL_BOOL_VEC4                      0x8B59
#define GL_FLOAT_MAT2                     0x8B5A
#define GL_FLOAT_MAT3                     0x8B5B
#define GL_FLOAT_MAT4                     0x8B5C
#define GL_SAMPLER_1D                     0x8B5D
#define GL_SAMPLER_2D                     0x8B5E
#define GL_SAMPLER_3D                     0x8B5F
#define GL_SAMPLER_CUBE                   0x8B60
#define GL_SAMPLER_1D_SHADOW              0x8B61
#define GL_SAMPLER_2D_SHADOW              0x8B62
#define GL_DELETE_STATUS                  0x8B80
#define GL_COMPILE_STATUS                 0x8B81
#define GL_LINK_STATUS                    0x8B82
#define GL_VALIDATE_STATUS                0x8B83
#define GL_INFO_LOG_LENGTH                0x8B84
#define GL_ATTACHED_SHADERS               0x8B85
#define GL_ACTIVE_UNIFORMS                0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH      0x8B87
#define GL_SHADER_SOURCE_LENGTH           0x8B88
#define GL_ACTIVE_ATTRIBUTES              0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH    0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_SHADING_LANGUAGE_VERSION       0x8B8C
#define GL_CURRENT_PROGRAM                0x8B8D
#define GL_POINT_SPRITE_COORD_ORIGIN      0x8CA0
#define GL_LOWER_LEFT                     0x8CA1
#define GL_UPPER_LEFT                     0x8CA2
#define GL_STENCIL_BACK_REF               0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK        0x8CA4
#define GL_STENCIL_BACK_WRITEMASK         0x8CA5
#define GL_VERTEX_PROGRAM_TWO_SIDE        0x8643
#define GL_POINT_SPRITE                   0x8861
#define GL_COORD_REPLACE                  0x8862
#define GL_MAX_TEXTURE_COORDS             0x8871
/*typedef void (P PFNGLBLENDEQUATIONSEPARATEPROC) (GLenum modeRGB, GLenum modeAlpha);
typedef void (P PFNGLDRAWBUFFERSPROC) (GLsizei n, const GLenum *bufs);
typedef void (P PFNGLSTENCILOPSEPARATEPROC) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (P PFNGLSTENCILFUNCSEPARATEPROC) (GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (P PFNGLSTENCILMASKSEPARATEPROC) (GLenum face, GLuint mask);
typedef void (P PFNGLATTACHSHADERPROC) (GLuint program, GLuint shader);
typedef void (P PFNGLBINDATTRIBLOCATIONPROC) (GLuint program, GLuint index, const GLchar *name);
typedef void (P PFNGLCOMPILESHADERPROC) (GLuint shader);
typedef GLuint (P PFNGLCREATEPROGRAMPROC) (void);
typedef GLuint (P PFNGLCREATESHADERPROC) (GLenum type);
typedef void (P PFNGLDELETEPROGRAMPROC) (GLuint program);
typedef void (P PFNGLDELETESHADERPROC) (GLuint shader);
typedef void (P PFNGLDETACHSHADERPROC) (GLuint program, GLuint shader);
typedef void (P PFNGLDISABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void (P PFNGLENABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void (P PFNGLGETACTIVEATTRIBPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (P PFNGLGETACTIVEUNIFORMPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (P PFNGLGETATTACHEDSHADERSPROC) (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
typedef GLint (P PFNGLGETATTRIBLOCATIONPROC) (GLuint program, const GLchar *name);
typedef void (P PFNGLGETPROGRAMIVPROC) (GLuint program, GLenum pname, GLint *params);
typedef void (P PFNGLGETPROGRAMINFOLOGPROC) (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (P PFNGLGETSHADERIVPROC) (GLuint shader, GLenum pname, GLint *params);
typedef void (P PFNGLGETSHADERINFOLOGPROC) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (P PFNGLGETSHADERSOURCEPROC) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
typedef GLint (P PFNGLGETUNIFORMLOCATIONPROC) (GLuint program, const GLchar *name);
typedef void (P PFNGLGETUNIFORMFVPROC) (GLuint program, GLint location, GLfloat *params);
typedef void (P PFNGLGETUNIFORMIVPROC) (GLuint program, GLint location, GLint *params);
typedef void (P PFNGLGETVERTEXATTRIBDVPROC) (GLuint index, GLenum pname, GLdouble *params);
typedef void (P PFNGLGETVERTEXATTRIBFVPROC) (GLuint index, GLenum pname, GLfloat *params);
typedef void (P PFNGLGETVERTEXATTRIBIVPROC) (GLuint index, GLenum pname, GLint *params);
typedef void (P PFNGLGETVERTEXATTRIBPOINTERVPROC) (GLuint index, GLenum pname, void **pointer);
typedef GLboolean (P PFNGLISPROGRAMPROC) (GLuint program);
typedef GLboolean (P PFNGLISSHADERPROC) (GLuint shader);
typedef void (P PFNGLLINKPROGRAMPROC) (GLuint program);
typedef void (P PFNGLSHADERSOURCEPROC) (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
typedef void (P PFNGLUSEPROGRAMPROC) (GLuint program);
typedef void (P PFNGLUNIFORM1FPROC) (GLint location, GLfloat v0);
typedef void (P PFNGLUNIFORM2FPROC) (GLint location, GLfloat v0, GLfloat v1);
typedef void (P PFNGLUNIFORM3FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (P PFNGLUNIFORM4FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (P PFNGLUNIFORM1IPROC) (GLint location, GLint v0);
typedef void (P PFNGLUNIFORM2IPROC) (GLint location, GLint v0, GLint v1);
typedef void (P PFNGLUNIFORM3IPROC) (GLint location, GLint v0, GLint v1, GLint v2);
typedef void (P PFNGLUNIFORM4IPROC) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (P PFNGLUNIFORM1FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void (P PFNGLUNIFORM2FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void (P PFNGLUNIFORM3FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void (P PFNGLUNIFORM4FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void (P PFNGLUNIFORM1IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void (P PFNGLUNIFORM2IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void (P PFNGLUNIFORM3IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void (P PFNGLUNIFORM4IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void (P PFNGLUNIFORMMATRIX2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLUNIFORMMATRIX3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLUNIFORMMATRIX4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLVALIDATEPROGRAMPROC) (GLuint program);
typedef void (P PFNGLVERTEXATTRIB1DPROC) (GLuint index, GLdouble x);
typedef void (P PFNGLVERTEXATTRIB1DVPROC) (GLuint index, const GLdouble *v);
typedef void (P PFNGLVERTEXATTRIB1FPROC) (GLuint index, GLfloat x);
typedef void (P PFNGLVERTEXATTRIB1FVPROC) (GLuint index, const GLfloat *v);
typedef void (P PFNGLVERTEXATTRIB1SPROC) (GLuint index, GLshort x);
typedef void (P PFNGLVERTEXATTRIB1SVPROC) (GLuint index, const GLshort *v);
typedef void (P PFNGLVERTEXATTRIB2DPROC) (GLuint index, GLdouble x, GLdouble y);
typedef void (P PFNGLVERTEXATTRIB2DVPROC) (GLuint index, const GLdouble *v);
typedef void (P PFNGLVERTEXATTRIB2FPROC) (GLuint index, GLfloat x, GLfloat y);
typedef void (P PFNGLVERTEXATTRIB2FVPROC) (GLuint index, const GLfloat *v);
typedef void (P PFNGLVERTEXATTRIB2SPROC) (GLuint index, GLshort x, GLshort y);
typedef void (P PFNGLVERTEXATTRIB2SVPROC) (GLuint index, const GLshort *v);
typedef void (P PFNGLVERTEXATTRIB3DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (P PFNGLVERTEXATTRIB3DVPROC) (GLuint index, const GLdouble *v);
typedef void (P PFNGLVERTEXATTRIB3FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (P PFNGLVERTEXATTRIB3FVPROC) (GLuint index, const GLfloat *v);
typedef void (P PFNGLVERTEXATTRIB3SPROC) (GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (P PFNGLVERTEXATTRIB3SVPROC) (GLuint index, const GLshort *v);
typedef void (P PFNGLVERTEXATTRIB4NBVPROC) (GLuint index, const GLbyte *v);
typedef void (P PFNGLVERTEXATTRIB4NIVPROC) (GLuint index, const GLint *v);
typedef void (P PFNGLVERTEXATTRIB4NSVPROC) (GLuint index, const GLshort *v);
typedef void (P PFNGLVERTEXATTRIB4NUBPROC) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (P PFNGLVERTEXATTRIB4NUBVPROC) (GLuint index, const GLubyte *v);
typedef void (P PFNGLVERTEXATTRIB4NUIVPROC) (GLuint index, const GLuint *v);
typedef void (P PFNGLVERTEXATTRIB4NUSVPROC) (GLuint index, const GLushort *v);
typedef void (P PFNGLVERTEXATTRIB4BVPROC) (GLuint index, const GLbyte *v);
typedef void (P PFNGLVERTEXATTRIB4DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (P PFNGLVERTEXATTRIB4DVPROC) (GLuint index, const GLdouble *v);
typedef void (P PFNGLVERTEXATTRIB4FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (P PFNGLVERTEXATTRIB4FVPROC) (GLuint index, const GLfloat *v);
typedef void (P PFNGLVERTEXATTRIB4IVPROC) (GLuint index, const GLint *v);
typedef void (P PFNGLVERTEXATTRIB4SPROC) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (P PFNGLVERTEXATTRIB4SVPROC) (GLuint index, const GLshort *v);
typedef void (P PFNGLVERTEXATTRIB4UBVPROC) (GLuint index, const GLubyte *v);
typedef void (P PFNGLVERTEXATTRIB4UIVPROC) (GLuint index, const GLuint *v);
typedef void (P PFNGLVERTEXATTRIB4USVPROC) (GLuint index, const GLushort *v);
typedef void (P PFNGLVERTEXATTRIBPOINTERPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
#ifdef GL_GLEXT_PROTOTYPES*/
extern void  glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha);
extern void  glDrawBuffers (GLsizei n, const GLenum *bufs);
extern void  glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
extern void  glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask);
extern void  glStencilMaskSeparate (GLenum face, GLuint mask);
extern void  glAttachShader (GLuint program, GLuint shader);
extern void  glBindAttribLocation (GLuint program, GLuint index, const GLchar *name);
extern void  glCompileShader (GLuint shader);
extern GLuint  glCreateProgram (void);
extern GLuint  glCreateShader (GLenum type);
extern void  glDeleteProgram (GLuint program);
extern void  glDeleteShader (GLuint shader);
extern void  glDetachShader (GLuint program, GLuint shader);
extern void  glDisableVertexAttribArray (GLuint index);
extern void  glEnableVertexAttribArray (GLuint index);
extern void  glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
extern void  glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
extern void  glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
extern GLint  glGetAttribLocation (GLuint program, const GLchar *name);
extern void  glGetProgramiv (GLuint program, GLenum pname, GLint *params);
extern void  glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
extern void  glGetShaderiv (GLuint shader, GLenum pname, GLint *params);
extern void  glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
extern void  glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
extern GLint  glGetUniformLocation (GLuint program, const GLchar *name);
extern void  glGetUniformfv (GLuint program, GLint location, GLfloat *params);
extern void  glGetUniformiv (GLuint program, GLint location, GLint *params);
extern void  glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble *params);
extern void  glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params);
extern void  glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params);
extern void  glGetVertexAttribPointerv (GLuint index, GLenum pname, void **pointer);
extern GLboolean  glIsProgram (GLuint program);
extern GLboolean  glIsShader (GLuint shader);
extern void  glLinkProgram (GLuint program);
extern void  glShaderSource (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
extern void  glUseProgram (GLuint program);
extern void  glUniform1f (GLint location, GLfloat v0);
extern void  glUniform2f (GLint location, GLfloat v0, GLfloat v1);
extern void  glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern void  glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern void  glUniform1i (GLint location, GLint v0);
extern void  glUniform2i (GLint location, GLint v0, GLint v1);
extern void  glUniform3i (GLint location, GLint v0, GLint v1, GLint v2);
extern void  glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern void  glUniform1fv (GLint location, GLsizei count, const GLfloat *value);
extern void  glUniform2fv (GLint location, GLsizei count, const GLfloat *value);
extern void  glUniform3fv (GLint location, GLsizei count, const GLfloat *value);
extern void  glUniform4fv (GLint location, GLsizei count, const GLfloat *value);
extern void  glUniform1iv (GLint location, GLsizei count, const GLint *value);
extern void  glUniform2iv (GLint location, GLsizei count, const GLint *value);
extern void  glUniform3iv (GLint location, GLsizei count, const GLint *value);
extern void  glUniform4iv (GLint location, GLsizei count, const GLint *value);
extern void  glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glValidateProgram (GLuint program);
extern void  glVertexAttrib1d (GLuint index, GLdouble x);
extern void  glVertexAttrib1dv (GLuint index, const GLdouble *v);
extern void  glVertexAttrib1f (GLuint index, GLfloat x);
extern void  glVertexAttrib1fv (GLuint index, const GLfloat *v);
extern void  glVertexAttrib1s (GLuint index, GLshort x);
extern void  glVertexAttrib1sv (GLuint index, const GLshort *v);
extern void  glVertexAttrib2d (GLuint index, GLdouble x, GLdouble y);
extern void  glVertexAttrib2dv (GLuint index, const GLdouble *v);
extern void  glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y);
extern void  glVertexAttrib2fv (GLuint index, const GLfloat *v);
extern void  glVertexAttrib2s (GLuint index, GLshort x, GLshort y);
extern void  glVertexAttrib2sv (GLuint index, const GLshort *v);
extern void  glVertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern void  glVertexAttrib3dv (GLuint index, const GLdouble *v);
extern void  glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern void  glVertexAttrib3fv (GLuint index, const GLfloat *v);
extern void  glVertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z);
extern void  glVertexAttrib3sv (GLuint index, const GLshort *v);
extern void  glVertexAttrib4Nbv (GLuint index, const GLbyte *v);
extern void  glVertexAttrib4Niv (GLuint index, const GLint *v);
extern void  glVertexAttrib4Nsv (GLuint index, const GLshort *v);
extern void  glVertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
extern void  glVertexAttrib4Nubv (GLuint index, const GLubyte *v);
extern void  glVertexAttrib4Nuiv (GLuint index, const GLuint *v);
extern void  glVertexAttrib4Nusv (GLuint index, const GLushort *v);
extern void  glVertexAttrib4bv (GLuint index, const GLbyte *v);
extern void  glVertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glVertexAttrib4dv (GLuint index, const GLdouble *v);
extern void  glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void  glVertexAttrib4fv (GLuint index, const GLfloat *v);
extern void  glVertexAttrib4iv (GLuint index, const GLint *v);
extern void  glVertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
extern void  glVertexAttrib4sv (GLuint index, const GLshort *v);
extern void  glVertexAttrib4ubv (GLuint index, const GLubyte *v);
extern void  glVertexAttrib4uiv (GLuint index, const GLuint *v);
extern void  glVertexAttrib4usv (GLuint index, const GLushort *v);
extern void  glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
#endif
#endif /* GL_VERSION_2_0 */

#ifndef GL_VERSION_2_1
#define GL_VERSION_2_1 1
#define GL_PIXEL_PACK_BUFFER              0x88EB
#define GL_PIXEL_UNPACK_BUFFER            0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING      0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING    0x88EF
#define GL_FLOAT_MAT2x3                   0x8B65
#define GL_FLOAT_MAT2x4                   0x8B66
#define GL_FLOAT_MAT3x2                   0x8B67
#define GL_FLOAT_MAT3x4                   0x8B68
#define GL_FLOAT_MAT4x2                   0x8B69
#define GL_FLOAT_MAT4x3                   0x8B6A
#define GL_SRGB                           0x8C40
#define GL_SRGB8                          0x8C41
#define GL_SRGB_ALPHA                     0x8C42
#define GL_SRGB8_ALPHA8                   0x8C43
#define GL_COMPRESSED_SRGB                0x8C48
#define GL_COMPRESSED_SRGB_ALPHA          0x8C49
#define GL_CURRENT_RASTER_SECONDARY_COLOR 0x845F
#define GL_SLUMINANCE_ALPHA               0x8C44
#define GL_SLUMINANCE8_ALPHA8             0x8C45
#define GL_SLUMINANCE                     0x8C46
#define GL_SLUMINANCE8                    0x8C47
#define GL_COMPRESSED_SLUMINANCE          0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA    0x8C4B
/*typedef void (P PFNGLUNIFORMMATRIX2X3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLUNIFORMMATRIX3X2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLUNIFORMMATRIX2X4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLUNIFORMMATRIX4X2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLUNIFORMMATRIX3X4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLUNIFORMMATRIX4X3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#ifdef GL_GLEXT_PROTOTYPES*/
extern void  glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#endif
#endif /* GL_VERSION_2_1 */

#ifndef GL_VERSION_3_0
#define GL_VERSION_3_0 1
typedef khronos_uint16_t GLhalf;
#define GL_COMPARE_REF_TO_TEXTURE         0x884E
#define GL_CLIP_DISTANCE0                 0x3000
#define GL_CLIP_DISTANCE1                 0x3001
#define GL_CLIP_DISTANCE2                 0x3002
#define GL_CLIP_DISTANCE3                 0x3003
#define GL_CLIP_DISTANCE4                 0x3004
#define GL_CLIP_DISTANCE5                 0x3005
#define GL_CLIP_DISTANCE6                 0x3006
#define GL_CLIP_DISTANCE7                 0x3007
#define GL_MAX_CLIP_DISTANCES             0x0D32
#define GL_MAJOR_VERSION                  0x821B
#define GL_MINOR_VERSION                  0x821C
#define GL_NUM_EXTENSIONS                 0x821D
#define GL_CONTEXT_FLAGS                  0x821E
#define GL_COMPRESSED_RED                 0x8225
#define GL_COMPRESSED_RG                  0x8226
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x00000001
#define GL_RGBA32F                        0x8814
#define GL_RGB32F                         0x8815
#define GL_RGBA16F                        0x881A
#define GL_RGB16F                         0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER    0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS       0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET       0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET       0x8905
#define GL_CLAMP_READ_COLOR               0x891C
#define GL_FIXED_ONLY                     0x891D
#define GL_MAX_VARYING_COMPONENTS         0x8B4B
#define GL_TEXTURE_1D_ARRAY               0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY         0x8C19
#define GL_TEXTURE_2D_ARRAY               0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY         0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY       0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY       0x8C1D
#define GL_R11F_G11F_B10F                 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV   0x8C3B
#define GL_RGB9_E5                        0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV       0x8C3E
#define GL_TEXTURE_SHARED_SIZE            0x8C3F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS    0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#define GL_PRIMITIVES_GENERATED           0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#define GL_RASTERIZER_DISCARD             0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#define GL_INTERLEAVED_ATTRIBS            0x8C8C
#define GL_SEPARATE_ATTRIBS               0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER      0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#define GL_RGBA32UI                       0x8D70
#define GL_RGB32UI                        0x8D71
#define GL_RGBA16UI                       0x8D76
#define GL_RGB16UI                        0x8D77
#define GL_RGBA8UI                        0x8D7C
#define GL_RGB8UI                         0x8D7D
#define GL_RGBA32I                        0x8D82
#define GL_RGB32I                         0x8D83
#define GL_RGBA16I                        0x8D88
#define GL_RGB16I                         0x8D89
#define GL_RGBA8I                         0x8D8E
#define GL_RGB8I                          0x8D8F
#define GL_RED_INTEGER                    0x8D94
#define GL_GREEN_INTEGER                  0x8D95
#define GL_BLUE_INTEGER                   0x8D96
#define GL_RGB_INTEGER                    0x8D98
#define GL_RGBA_INTEGER                   0x8D99
#define GL_BGR_INTEGER                    0x8D9A
#define GL_BGRA_INTEGER                   0x8D9B
#define GL_SAMPLER_1D_ARRAY               0x8DC0
#define GL_SAMPLER_2D_ARRAY               0x8DC1
#define GL_SAMPLER_1D_ARRAY_SHADOW        0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW        0x8DC4
#define GL_SAMPLER_CUBE_SHADOW            0x8DC5
#define GL_UNSIGNED_INT_VEC2              0x8DC6
#define GL_UNSIGNED_INT_VEC3              0x8DC7
#define GL_UNSIGNED_INT_VEC4              0x8DC8
#define GL_INT_SAMPLER_1D                 0x8DC9
#define GL_INT_SAMPLER_2D                 0x8DCA
#define GL_INT_SAMPLER_3D                 0x8DCB
#define GL_INT_SAMPLER_CUBE               0x8DCC
#define GL_INT_SAMPLER_1D_ARRAY           0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY           0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_1D        0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D        0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D        0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE      0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY  0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY  0x8DD7
#define GL_QUERY_WAIT                     0x8E13
#define GL_QUERY_NO_WAIT                  0x8E14
#define GL_QUERY_BY_REGION_WAIT           0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT        0x8E16
#define GL_BUFFER_ACCESS_FLAGS            0x911F
#define GL_BUFFER_MAP_LENGTH              0x9120
#define GL_BUFFER_MAP_OFFSET              0x9121
#define GL_DEPTH_COMPONENT32F             0x8CAC
#define GL_DEPTH32F_STENCIL8              0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
#define GL_INVALID_FRAMEBUFFER_OPERATION  0x0506
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#define GL_FRAMEBUFFER_DEFAULT            0x8218
#define GL_FRAMEBUFFER_UNDEFINED          0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT       0x821A
#define GL_MAX_RENDERBUFFER_SIZE          0x84E8
#define GL_DEPTH_STENCIL                  0x84F9
#define GL_UNSIGNED_INT_24_8              0x84FA
#define GL_DEPTH24_STENCIL8               0x88F0
#define GL_TEXTURE_STENCIL_SIZE           0x88F1
#define GL_TEXTURE_RED_TYPE               0x8C10
#define GL_TEXTURE_GREEN_TYPE             0x8C11
#define GL_TEXTURE_BLUE_TYPE              0x8C12
#define GL_TEXTURE_ALPHA_TYPE             0x8C13
#define GL_TEXTURE_DEPTH_TYPE             0x8C16
#define GL_UNSIGNED_NORMALIZED            0x8C17
#define GL_FRAMEBUFFER_BINDING            0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING       0x8CA6
#define GL_RENDERBUFFER_BINDING           0x8CA7
#define GL_READ_FRAMEBUFFER               0x8CA8
#define GL_DRAW_FRAMEBUFFER               0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING       0x8CAA
#define GL_RENDERBUFFER_SAMPLES           0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE           0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED        0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS          0x8CDF
#define GL_COLOR_ATTACHMENT0              0x8CE0
#define GL_COLOR_ATTACHMENT1              0x8CE1
#define GL_COLOR_ATTACHMENT2              0x8CE2
#define GL_COLOR_ATTACHMENT3              0x8CE3
#define GL_COLOR_ATTACHMENT4              0x8CE4
#define GL_COLOR_ATTACHMENT5              0x8CE5
#define GL_COLOR_ATTACHMENT6              0x8CE6
#define GL_COLOR_ATTACHMENT7              0x8CE7
#define GL_COLOR_ATTACHMENT8              0x8CE8
#define GL_COLOR_ATTACHMENT9              0x8CE9
#define GL_COLOR_ATTACHMENT10             0x8CEA
#define GL_COLOR_ATTACHMENT11             0x8CEB
#define GL_COLOR_ATTACHMENT12             0x8CEC
#define GL_COLOR_ATTACHMENT13             0x8CED
#define GL_COLOR_ATTACHMENT14             0x8CEE
#define GL_COLOR_ATTACHMENT15             0x8CEF
#define GL_COLOR_ATTACHMENT16             0x8CF0
#define GL_COLOR_ATTACHMENT17             0x8CF1
#define GL_COLOR_ATTACHMENT18             0x8CF2
#define GL_COLOR_ATTACHMENT19             0x8CF3
#define GL_COLOR_ATTACHMENT20             0x8CF4
#define GL_COLOR_ATTACHMENT21             0x8CF5
#define GL_COLOR_ATTACHMENT22             0x8CF6
#define GL_COLOR_ATTACHMENT23             0x8CF7
#define GL_COLOR_ATTACHMENT24             0x8CF8
#define GL_COLOR_ATTACHMENT25             0x8CF9
#define GL_COLOR_ATTACHMENT26             0x8CFA
#define GL_COLOR_ATTACHMENT27             0x8CFB
#define GL_COLOR_ATTACHMENT28             0x8CFC
#define GL_COLOR_ATTACHMENT29             0x8CFD
#define GL_COLOR_ATTACHMENT30             0x8CFE
#define GL_COLOR_ATTACHMENT31             0x8CFF
#define GL_DEPTH_ATTACHMENT               0x8D00
#define GL_STENCIL_ATTACHMENT             0x8D20
#define GL_FRAMEBUFFER                    0x8D40
#define GL_RENDERBUFFER                   0x8D41
#define GL_RENDERBUFFER_WIDTH             0x8D42
#define GL_RENDERBUFFER_HEIGHT            0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT   0x8D44
#define GL_STENCIL_INDEX1                 0x8D46
#define GL_STENCIL_INDEX4                 0x8D47
#define GL_STENCIL_INDEX8                 0x8D48
#define GL_STENCIL_INDEX16                0x8D49
#define GL_RENDERBUFFER_RED_SIZE          0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE        0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE         0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE        0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE        0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE      0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#define GL_MAX_SAMPLES                    0x8D57
#define GL_INDEX                          0x8222
#define GL_TEXTURE_LUMINANCE_TYPE         0x8C14
#define GL_TEXTURE_INTENSITY_TYPE         0x8C15
#define GL_FRAMEBUFFER_SRGB               0x8DB9
#define GL_HALF_FLOAT                     0x140B
#define GL_MAP_READ_BIT                   0x0001
#define GL_MAP_WRITE_BIT                  0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT       0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT      0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT         0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT         0x0020
#define GL_COMPRESSED_RED_RGTC1           0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1    0x8DBC
#define GL_COMPRESSED_RG_RGTC2            0x8DBD
#define GL_COMPRESSED_SIGNED_RG_RGTC2     0x8DBE
#define GL_RG                             0x8227
#define GL_RG_INTEGER                     0x8228
#define GL_R8                             0x8229
#define GL_R16                            0x822A
#define GL_RG8                            0x822B
#define GL_RG16                           0x822C
#define GL_R16F                           0x822D
#define GL_R32F                           0x822E
#define GL_RG16F                          0x822F
#define GL_RG32F                          0x8230
#define GL_R8I                            0x8231
#define GL_R8UI                           0x8232
#define GL_R16I                           0x8233
#define GL_R16UI                          0x8234
#define GL_R32I                           0x8235
#define GL_R32UI                          0x8236
#define GL_RG8I                           0x8237
#define GL_RG8UI                          0x8238
#define GL_RG16I                          0x8239
#define GL_RG16UI                         0x823A
#define GL_RG32I                          0x823B
#define GL_RG32UI                         0x823C
#define GL_VERTEX_ARRAY_BINDING           0x85B5
#define GL_CLAMP_VERTEX_COLOR             0x891A
#define GL_CLAMP_FRAGMENT_COLOR           0x891B
#define GL_ALPHA_INTEGER                  0x8D97
/*typedef void (P PFNGLCOLORMASKIPROC) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef void (P PFNGLGETBOOLEANI_VPROC) (GLenum target, GLuint index, GLboolean *data);
typedef void (P PFNGLGETINTEGERI_VPROC) (GLenum target, GLuint index, GLint *data);
typedef void (P PFNGLENABLEIPROC) (GLenum target, GLuint index);
typedef void (P PFNGLDISABLEIPROC) (GLenum target, GLuint index);
typedef GLboolean (P PFNGLISENABLEDIPROC) (GLenum target, GLuint index);
typedef void (P PFNGLBEGINTRANSFORMFEEDBACKPROC) (GLenum primitiveMode);
typedef void (P PFNGLENDTRANSFORMFEEDBACKPROC) (void);
typedef void (P PFNGLBINDBUFFERRANGEPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (P PFNGLBINDBUFFERBASEPROC) (GLenum target, GLuint index, GLuint buffer);
typedef void (P PFNGLTRANSFORMFEEDBACKVARYINGSPROC) (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
typedef void (P PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
typedef void (P PFNGLCLAMPCOLORPROC) (GLenum target, GLenum clamp);
typedef void (P PFNGLBEGINCONDITIONALRENDERPROC) (GLuint id, GLenum mode);
typedef void (P PFNGLENDCONDITIONALRENDERPROC) (void);
typedef void (P PFNGLVERTEXATTRIBIPOINTERPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (P PFNGLGETVERTEXATTRIBIIVPROC) (GLuint index, GLenum pname, GLint *params);
typedef void (P PFNGLGETVERTEXATTRIBIUIVPROC) (GLuint index, GLenum pname, GLuint *params);
typedef void (P PFNGLVERTEXATTRIBI1IPROC) (GLuint index, GLint x);
typedef void (P PFNGLVERTEXATTRIBI2IPROC) (GLuint index, GLint x, GLint y);
typedef void (P PFNGLVERTEXATTRIBI3IPROC) (GLuint index, GLint x, GLint y, GLint z);
typedef void (P PFNGLVERTEXATTRIBI4IPROC) (GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (P PFNGLVERTEXATTRIBI1UIPROC) (GLuint index, GLuint x);
typedef void (P PFNGLVERTEXATTRIBI2UIPROC) (GLuint index, GLuint x, GLuint y);
typedef void (P PFNGLVERTEXATTRIBI3UIPROC) (GLuint index, GLuint x, GLuint y, GLuint z);
typedef void (P PFNGLVERTEXATTRIBI4UIPROC) (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (P PFNGLVERTEXATTRIBI1IVPROC) (GLuint index, const GLint *v);
typedef void (P PFNGLVERTEXATTRIBI2IVPROC) (GLuint index, const GLint *v);
typedef void (P PFNGLVERTEXATTRIBI3IVPROC) (GLuint index, const GLint *v);
typedef void (P PFNGLVERTEXATTRIBI4IVPROC) (GLuint index, const GLint *v);
typedef void (P PFNGLVERTEXATTRIBI1UIVPROC) (GLuint index, const GLuint *v);
typedef void (P PFNGLVERTEXATTRIBI2UIVPROC) (GLuint index, const GLuint *v);
typedef void (P PFNGLVERTEXATTRIBI3UIVPROC) (GLuint index, const GLuint *v);
typedef void (P PFNGLVERTEXATTRIBI4UIVPROC) (GLuint index, const GLuint *v);
typedef void (P PFNGLVERTEXATTRIBI4BVPROC) (GLuint index, const GLbyte *v);
typedef void (P PFNGLVERTEXATTRIBI4SVPROC) (GLuint index, const GLshort *v);
typedef void (P PFNGLVERTEXATTRIBI4UBVPROC) (GLuint index, const GLubyte *v);
typedef void (P PFNGLVERTEXATTRIBI4USVPROC) (GLuint index, const GLushort *v);
typedef void (P PFNGLGETUNIFORMUIVPROC) (GLuint program, GLint location, GLuint *params);
typedef void (P PFNGLBINDFRAGDATALOCATIONPROC) (GLuint program, GLuint color, const GLchar *name);
typedef GLint (P PFNGLGETFRAGDATALOCATIONPROC) (GLuint program, const GLchar *name);
typedef void (P PFNGLUNIFORM1UIPROC) (GLint location, GLuint v0);
typedef void (P PFNGLUNIFORM2UIPROC) (GLint location, GLuint v0, GLuint v1);
typedef void (P PFNGLUNIFORM3UIPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (P PFNGLUNIFORM4UIPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (P PFNGLUNIFORM1UIVPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void (P PFNGLUNIFORM2UIVPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void (P PFNGLUNIFORM3UIVPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void (P PFNGLUNIFORM4UIVPROC) (GLint location, GLsizei count, const GLuint *value);
typedef void (P PFNGLTEXPARAMETERIIVPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (P PFNGLTEXPARAMETERIUIVPROC) (GLenum target, GLenum pname, const GLuint *params);
typedef void (P PFNGLGETTEXPARAMETERIIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (P PFNGLGETTEXPARAMETERIUIVPROC) (GLenum target, GLenum pname, GLuint *params);
typedef void (P PFNGLCLEARBUFFERIVPROC) (GLenum buffer, GLint drawbuffer, const GLint *value);
typedef void (P PFNGLCLEARBUFFERUIVPROC) (GLenum buffer, GLint drawbuffer, const GLuint *value);
typedef void (P PFNGLCLEARBUFFERFVPROC) (GLenum buffer, GLint drawbuffer, const GLfloat *value);
typedef void (P PFNGLCLEARBUFFERFIPROC) (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef const GLubyte *(P PFNGLGETSTRINGIPROC) (GLenum name, GLuint index);
typedef GLboolean (P PFNGLISRENDERBUFFERPROC) (GLuint renderbuffer);
typedef void (P PFNGLBINDRENDERBUFFERPROC) (GLenum target, GLuint renderbuffer);
typedef void (P PFNGLDELETERENDERBUFFERSPROC) (GLsizei n, const GLuint *renderbuffers);
typedef void (P PFNGLGENRENDERBUFFERSPROC) (GLsizei n, GLuint *renderbuffers);
typedef void (P PFNGLRENDERBUFFERSTORAGEPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (P PFNGLGETRENDERBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef GLboolean (P PFNGLISFRAMEBUFFERPROC) (GLuint framebuffer);
typedef void (P PFNGLBINDFRAMEBUFFERPROC) (GLenum target, GLuint framebuffer);
typedef void (P PFNGLDELETEFRAMEBUFFERSPROC) (GLsizei n, const GLuint *framebuffers);
typedef void (P PFNGLGENFRAMEBUFFERSPROC) (GLsizei n, GLuint *framebuffers);
typedef GLenum (P PFNGLCHECKFRAMEBUFFERSTATUSPROC) (GLenum target);
typedef void (P PFNGLFRAMEBUFFERTEXTURE1DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (P PFNGLFRAMEBUFFERTEXTURE2DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (P PFNGLFRAMEBUFFERTEXTURE3DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (P PFNGLFRAMEBUFFERRENDERBUFFERPROC) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (P PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLenum target, GLenum attachment, GLenum pname, GLint *params);
typedef void (P PFNGLGENERATEMIPMAPPROC) (GLenum target);
typedef void (P PFNGLBLITFRAMEBUFFERPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (P PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (P PFNGLFRAMEBUFFERTEXTURELAYERPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void *(P PFNGLMAPBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (P PFNGLFLUSHMAPPEDBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (P PFNGLBINDVERTEXARRAYPROC) (GLuint array);
typedef void (P PFNGLDELETEVERTEXARRAYSPROC) (GLsizei n, const GLuint *arrays);
typedef void (P PFNGLGENVERTEXARRAYSPROC) (GLsizei n, GLuint *arrays);
typedef GLboolean (P PFNGLISVERTEXARRAYPROC) (GLuint array);
#ifdef GL_GLEXT_PROTOTYPES*/
extern void  glColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
extern void  glGetBooleani_v (GLenum target, GLuint index, GLboolean *data);
extern void  glGetIntegeri_v (GLenum target, GLuint index, GLint *data);
extern void  glEnablei (GLenum target, GLuint index);
extern void  glDisablei (GLenum target, GLuint index);
extern GLboolean  glIsEnabledi (GLenum target, GLuint index);
extern void  glBeginTransformFeedback (GLenum primitiveMode);
extern void  glEndTransformFeedback (void);
extern void  glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
extern void  glBindBufferBase (GLenum target, GLuint index, GLuint buffer);
extern void  glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
extern void  glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
extern void  glClampColor (GLenum target, GLenum clamp);
extern void  glBeginConditionalRender (GLuint id, GLenum mode);
extern void  glEndConditionalRender (void);
extern void  glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
extern void  glGetVertexAttribIiv (GLuint index, GLenum pname, GLint *params);
extern void  glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint *params);
extern void  glVertexAttribI1i (GLuint index, GLint x);
extern void  glVertexAttribI2i (GLuint index, GLint x, GLint y);
extern void  glVertexAttribI3i (GLuint index, GLint x, GLint y, GLint z);
extern void  glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w);
extern void  glVertexAttribI1ui (GLuint index, GLuint x);
extern void  glVertexAttribI2ui (GLuint index, GLuint x, GLuint y);
extern void  glVertexAttribI3ui (GLuint index, GLuint x, GLuint y, GLuint z);
extern void  glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
extern void  glVertexAttribI1iv (GLuint index, const GLint *v);
extern void  glVertexAttribI2iv (GLuint index, const GLint *v);
extern void  glVertexAttribI3iv (GLuint index, const GLint *v);
extern void  glVertexAttribI4iv (GLuint index, const GLint *v);
extern void  glVertexAttribI1uiv (GLuint index, const GLuint *v);
extern void  glVertexAttribI2uiv (GLuint index, const GLuint *v);
extern void  glVertexAttribI3uiv (GLuint index, const GLuint *v);
extern void  glVertexAttribI4uiv (GLuint index, const GLuint *v);
extern void  glVertexAttribI4bv (GLuint index, const GLbyte *v);
extern void  glVertexAttribI4sv (GLuint index, const GLshort *v);
extern void  glVertexAttribI4ubv (GLuint index, const GLubyte *v);
extern void  glVertexAttribI4usv (GLuint index, const GLushort *v);
extern void  glGetUniformuiv (GLuint program, GLint location, GLuint *params);
extern void  glBindFragDataLocation (GLuint program, GLuint color, const GLchar *name);
extern GLint  glGetFragDataLocation (GLuint program, const GLchar *name);
extern void  glUniform1ui (GLint location, GLuint v0);
extern void  glUniform2ui (GLint location, GLuint v0, GLuint v1);
extern void  glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2);
extern void  glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
extern void  glUniform1uiv (GLint location, GLsizei count, const GLuint *value);
extern void  glUniform2uiv (GLint location, GLsizei count, const GLuint *value);
extern void  glUniform3uiv (GLint location, GLsizei count, const GLuint *value);
extern void  glUniform4uiv (GLint location, GLsizei count, const GLuint *value);
extern void  glTexParameterIiv (GLenum target, GLenum pname, const GLint *params);
extern void  glTexParameterIuiv (GLenum target, GLenum pname, const GLuint *params);
extern void  glGetTexParameterIiv (GLenum target, GLenum pname, GLint *params);
extern void  glGetTexParameterIuiv (GLenum target, GLenum pname, GLuint *params);
extern void  glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint *value);
extern void  glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint *value);
extern void  glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat *value);
extern void  glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
extern const GLubyte * glGetStringi (GLenum name, GLuint index);
extern GLboolean  glIsRenderbuffer (GLuint renderbuffer);
extern void  glBindRenderbuffer (GLenum target, GLuint renderbuffer);
extern void  glDeleteRenderbuffers (GLsizei n, const GLuint *renderbuffers);
extern void  glGenRenderbuffers (GLsizei n, GLuint *renderbuffers);
extern void  glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
extern void  glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint *params);
extern GLboolean  glIsFramebuffer (GLuint framebuffer);
extern void  glBindFramebuffer (GLenum target, GLuint framebuffer);
extern void  glDeleteFramebuffers (GLsizei n, const GLuint *framebuffers);
extern void  glGenFramebuffers (GLsizei n, GLuint *framebuffers);
extern GLenum  glCheckFramebufferStatus (GLenum target);
extern void  glFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void  glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void  glFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
extern void  glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern void  glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint *params);
extern void  glGenerateMipmap (GLenum target);
extern void  glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
extern void  glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
extern void  glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
extern void * glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
extern void  glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length);
extern void  glBindVertexArray (GLuint array);
extern void  glDeleteVertexArrays (GLsizei n, const GLuint *arrays);
extern void  glGenVertexArrays (GLsizei n, GLuint *arrays);
extern GLboolean  glIsVertexArray (GLuint array);
#endif
#endif /* GL_VERSION_3_0 */

#ifndef GL_VERSION_3_1
#define GL_VERSION_3_1 1
#define GL_SAMPLER_2D_RECT                0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW         0x8B64
#define GL_SAMPLER_BUFFER                 0x8DC2
#define GL_INT_SAMPLER_2D_RECT            0x8DCD
#define GL_INT_SAMPLER_BUFFER             0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT   0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_BUFFER    0x8DD8
#define GL_TEXTURE_BUFFER                 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE        0x8C2B
#define GL_TEXTURE_BINDING_BUFFER         0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#define GL_TEXTURE_RECTANGLE              0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE      0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE        0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE     0x84F8
#define GL_R8_SNORM                       0x8F94
#define GL_RG8_SNORM                      0x8F95
#define GL_RGB8_SNORM                     0x8F96
#define GL_RGBA8_SNORM                    0x8F97
#define GL_R16_SNORM                      0x8F98
#define GL_RG16_SNORM                     0x8F99
#define GL_RGB16_SNORM                    0x8F9A
#define GL_RGBA16_SNORM                   0x8F9B
#define GL_SIGNED_NORMALIZED              0x8F9C
#define GL_PRIMITIVE_RESTART              0x8F9D
#define GL_PRIMITIVE_RESTART_INDEX        0x8F9E
#define GL_COPY_READ_BUFFER               0x8F36
#define GL_COPY_WRITE_BUFFER              0x8F37
#define GL_UNIFORM_BUFFER                 0x8A11
#define GL_UNIFORM_BUFFER_BINDING         0x8A28
#define GL_UNIFORM_BUFFER_START           0x8A29
#define GL_UNIFORM_BUFFER_SIZE            0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS      0x8A2B
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS    0x8A2C
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS    0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS    0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS    0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE         0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS          0x8A36
#define GL_UNIFORM_TYPE                   0x8A37
#define GL_UNIFORM_SIZE                   0x8A38
#define GL_UNIFORM_NAME_LENGTH            0x8A39
#define GL_UNIFORM_BLOCK_INDEX            0x8A3A
#define GL_UNIFORM_OFFSET                 0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE           0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE          0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR           0x8A3E
#define GL_UNIFORM_BLOCK_BINDING          0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE        0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH      0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS  0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#define GL_INVALID_INDEX                  0xFFFFFFFFu
/*typedef void (P PFNGLDRAWARRAYSINSTANCEDPROC) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
typedef void (P PFNGLDRAWELEMENTSINSTANCEDPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
typedef void (P PFNGLTEXBUFFERPROC) (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (P PFNGLPRIMITIVERESTARTINDEXPROC) (GLuint index);
typedef void (P PFNGLCOPYBUFFERSUBDATAPROC) (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (P PFNGLGETUNIFORMINDICESPROC) (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
typedef void (P PFNGLGETACTIVEUNIFORMSIVPROC) (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
typedef void (P PFNGLGETACTIVEUNIFORMNAMEPROC) (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
typedef GLuint (P PFNGLGETUNIFORMBLOCKINDEXPROC) (GLuint program, const GLchar *uniformBlockName);
typedef void (P PFNGLGETACTIVEUNIFORMBLOCKIVPROC) (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
typedef void (P PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
typedef void (P PFNGLUNIFORMBLOCKBINDINGPROC) (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);*/
#ifdef GL_GLEXT_PROTOTYPES
extern void  glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
extern void  glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
extern void  glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer);
extern void  glPrimitiveRestartIndex (GLuint index);
extern void  glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
extern void  glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
extern void  glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
extern void  glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
extern GLuint  glGetUniformBlockIndex (GLuint program, const GLchar *uniformBlockName);
extern void  glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
extern void  glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
extern void  glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
#endif
#endif /* GL_VERSION_3_1 */

#ifndef GL_VERSION_3_2
#define GL_VERSION_3_2 1
typedef struct __GLsync *GLsync;
typedef khronos_uint64_t GLuint64;
typedef khronos_int64_t GLint64;
#define GL_CONTEXT_CORE_PROFILE_BIT       0x00000001
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT 0x00000002
#define GL_LINES_ADJACENCY                0x000A
#define GL_LINE_STRIP_ADJACENCY           0x000B
#define GL_TRIANGLES_ADJACENCY            0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY       0x000D
#define GL_PROGRAM_POINT_SIZE             0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
#define GL_GEOMETRY_SHADER                0x8DD9
#define GL_GEOMETRY_VERTICES_OUT          0x8916
#define GL_GEOMETRY_INPUT_TYPE            0x8917
#define GL_GEOMETRY_OUTPUT_TYPE           0x8918
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES   0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS   0x9122
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS  0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS  0x9125
#define GL_CONTEXT_PROFILE_MASK           0x9126
#define GL_DEPTH_CLAMP                    0x864F
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION        0x8E4D
#define GL_LAST_VERTEX_CONVENTION         0x8E4E
#define GL_PROVOKING_VERTEX               0x8E4F
#define GL_TEXTURE_CUBE_MAP_SEAMLESS      0x884F
#define GL_MAX_SERVER_WAIT_TIMEOUT        0x9111
#define GL_OBJECT_TYPE                    0x9112
#define GL_SYNC_CONDITION                 0x9113
#define GL_SYNC_STATUS                    0x9114
#define GL_SYNC_FLAGS                     0x9115
#define GL_SYNC_FENCE                     0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE     0x9117
#define GL_UNSIGNALED                     0x9118
#define GL_SIGNALED                       0x9119
#define GL_ALREADY_SIGNALED               0x911A
#define GL_TIMEOUT_EXPIRED                0x911B
#define GL_CONDITION_SATISFIED            0x911C
#define GL_WAIT_FAILED                    0x911D
#define GL_TIMEOUT_IGNORED                0xFFFFFFFFFFFFFFFFull
#define GL_SYNC_FLUSH_COMMANDS_BIT        0x00000001
#define GL_SAMPLE_POSITION                0x8E50
#define GL_SAMPLE_MASK                    0x8E51
#define GL_SAMPLE_MASK_VALUE              0x8E52
#define GL_MAX_SAMPLE_MASK_WORDS          0x8E59
#define GL_TEXTURE_2D_MULTISAMPLE         0x9100
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE   0x9101
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY   0x9102
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#define GL_TEXTURE_SAMPLES                0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#define GL_SAMPLER_2D_MULTISAMPLE         0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE     0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY   0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
#define GL_MAX_COLOR_TEXTURE_SAMPLES      0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES      0x910F
#define GL_MAX_INTEGER_SAMPLES            0x9110
/*typedef void (P PFNGLDRAWELEMENTSBASEVERTEXPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (P PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (P PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
typedef void (P PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
typedef void (P PFNGLPROVOKINGVERTEXPROC) (GLenum mode);
typedef GLsync (P PFNGLFENCESYNCPROC) (GLenum condition, GLbitfield flags);
typedef GLboolean (P PFNGLISSYNCPROC) (GLsync sync);
typedef void (P PFNGLDELETESYNCPROC) (GLsync sync);
typedef GLenum (P PFNGLCLIENTWAITSYNCPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (P PFNGLWAITSYNCPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (P PFNGLGETINTEGER64VPROC) (GLenum pname, GLint64 *data);
typedef void (P PFNGLGETSYNCIVPROC) (GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values);
typedef void (P PFNGLGETINTEGER64I_VPROC) (GLenum target, GLuint index, GLint64 *data);
typedef void (P PFNGLGETBUFFERPARAMETERI64VPROC) (GLenum target, GLenum pname, GLint64 *params);
typedef void (P PFNGLFRAMEBUFFERTEXTUREPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (P PFNGLTEXIMAGE2DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (P PFNGLTEXIMAGE3DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (P PFNGLGETMULTISAMPLEFVPROC) (GLenum pname, GLuint index, GLfloat *val);
typedef void (P PFNGLSAMPLEMASKIPROC) (GLuint maskNumber, GLbitfield mask);
#ifdef GL_GLEXT_PROTOTYPES*/
extern void  glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
extern void  glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
extern void  glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
extern void  glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
extern void  glProvokingVertex (GLenum mode);
extern GLsync  glFenceSync (GLenum condition, GLbitfield flags);
extern GLboolean  glIsSync (GLsync sync);
extern void  glDeleteSync (GLsync sync);
extern GLenum  glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
extern void  glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
extern void  glGetInteger64v (GLenum pname, GLint64 *data);
extern void  glGetSynciv (GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values);
extern void  glGetInteger64i_v (GLenum target, GLuint index, GLint64 *data);
extern void  glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 *params);
extern void  glFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level);
extern void  glTexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
extern void  glTexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
extern void  glGetMultisamplefv (GLenum pname, GLuint index, GLfloat *val);
extern void  glSampleMaski (GLuint maskNumber, GLbitfield mask);
#endif
#endif /* GL_VERSION_3_2 */

#ifndef GL_VERSION_3_3
#define GL_VERSION_3_3 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR    0x88FE
#define GL_SRC1_COLOR                     0x88F9
#define GL_ONE_MINUS_SRC1_COLOR           0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA           0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS   0x88FC
#define GL_ANY_SAMPLES_PASSED             0x8C2F
#define GL_SAMPLER_BINDING                0x8919
#define GL_RGB10_A2UI                     0x906F
#define GL_TEXTURE_SWIZZLE_R              0x8E42
#define GL_TEXTURE_SWIZZLE_G              0x8E43
#define GL_TEXTURE_SWIZZLE_B              0x8E44
#define GL_TEXTURE_SWIZZLE_A              0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA           0x8E46
#define GL_TIME_ELAPSED                   0x88BF
#define GL_TIMESTAMP                      0x8E28
#define GL_INT_2_10_10_10_REV             0x8D9F
/*typedef void (P PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
typedef GLint (P PFNGLGETFRAGDATAINDEXPROC) (GLuint program, const GLchar *name);
typedef void (P PFNGLGENSAMPLERSPROC) (GLsizei count, GLuint *samplers);
typedef void (P PFNGLDELETESAMPLERSPROC) (GLsizei count, const GLuint *samplers);
typedef GLboolean (P PFNGLISSAMPLERPROC) (GLuint sampler);
typedef void (P PFNGLBINDSAMPLERPROC) (GLuint unit, GLuint sampler);
typedef void (P PFNGLSAMPLERPARAMETERIPROC) (GLuint sampler, GLenum pname, GLint param);
typedef void (P PFNGLSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (P PFNGLSAMPLERPARAMETERFPROC) (GLuint sampler, GLenum pname, GLfloat param);
typedef void (P PFNGLSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, const GLfloat *param);
typedef void (P PFNGLSAMPLERPARAMETERIIVPROC) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (P PFNGLSAMPLERPARAMETERIUIVPROC) (GLuint sampler, GLenum pname, const GLuint *param);
typedef void (P PFNGLGETSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, GLint *params);
typedef void (P PFNGLGETSAMPLERPARAMETERIIVPROC) (GLuint sampler, GLenum pname, GLint *params);
typedef void (P PFNGLGETSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, GLfloat *params);
typedef void (P PFNGLGETSAMPLERPARAMETERIUIVPROC) (GLuint sampler, GLenum pname, GLuint *params);
typedef void (P PFNGLQUERYCOUNTERPROC) (GLuint id, GLenum target);
typedef void (P PFNGLGETQUERYOBJECTI64VPROC) (GLuint id, GLenum pname, GLint64 *params);
typedef void (P PFNGLGETQUERYOBJECTUI64VPROC) (GLuint id, GLenum pname, GLuint64 *params);
typedef void (P PFNGLVERTEXATTRIBDIVISORPROC) (GLuint index, GLuint divisor);
typedef void (P PFNGLVERTEXATTRIBP1UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (P PFNGLVERTEXATTRIBP1UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (P PFNGLVERTEXATTRIBP2UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (P PFNGLVERTEXATTRIBP2UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (P PFNGLVERTEXATTRIBP3UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (P PFNGLVERTEXATTRIBP3UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (P PFNGLVERTEXATTRIBP4UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (P PFNGLVERTEXATTRIBP4UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
typedef void (P PFNGLVERTEXP2UIPROC) (GLenum type, GLuint value);
typedef void (P PFNGLVERTEXP2UIVPROC) (GLenum type, const GLuint *value);
typedef void (P PFNGLVERTEXP3UIPROC) (GLenum type, GLuint value);
typedef void (P PFNGLVERTEXP3UIVPROC) (GLenum type, const GLuint *value);
typedef void (P PFNGLVERTEXP4UIPROC) (GLenum type, GLuint value);
typedef void (P PFNGLVERTEXP4UIVPROC) (GLenum type, const GLuint *value);
typedef void (P PFNGLTEXCOORDP1UIPROC) (GLenum type, GLuint coords);
typedef void (P PFNGLTEXCOORDP1UIVPROC) (GLenum type, const GLuint *coords);
typedef void (P PFNGLTEXCOORDP2UIPROC) (GLenum type, GLuint coords);
typedef void (P PFNGLTEXCOORDP2UIVPROC) (GLenum type, const GLuint *coords);
typedef void (P PFNGLTEXCOORDP3UIPROC) (GLenum type, GLuint coords);
typedef void (P PFNGLTEXCOORDP3UIVPROC) (GLenum type, const GLuint *coords);
typedef void (P PFNGLTEXCOORDP4UIPROC) (GLenum type, GLuint coords);
typedef void (P PFNGLTEXCOORDP4UIVPROC) (GLenum type, const GLuint *coords);
typedef void (P PFNGLMULTITEXCOORDP1UIPROC) (GLenum texture, GLenum type, GLuint coords);
typedef void (P PFNGLMULTITEXCOORDP1UIVPROC) (GLenum texture, GLenum type, const GLuint *coords);
typedef void (P PFNGLMULTITEXCOORDP2UIPROC) (GLenum texture, GLenum type, GLuint coords);
typedef void (P PFNGLMULTITEXCOORDP2UIVPROC) (GLenum texture, GLenum type, const GLuint *coords);
typedef void (P PFNGLMULTITEXCOORDP3UIPROC) (GLenum texture, GLenum type, GLuint coords);
typedef void (P PFNGLMULTITEXCOORDP3UIVPROC) (GLenum texture, GLenum type, const GLuint *coords);
typedef void (P PFNGLMULTITEXCOORDP4UIPROC) (GLenum texture, GLenum type, GLuint coords);
typedef void (P PFNGLMULTITEXCOORDP4UIVPROC) (GLenum texture, GLenum type, const GLuint *coords);
typedef void (P PFNGLNORMALP3UIPROC) (GLenum type, GLuint coords);
typedef void (P PFNGLNORMALP3UIVPROC) (GLenum type, const GLuint *coords);
typedef void (P PFNGLCOLORP3UIPROC) (GLenum type, GLuint color);
typedef void (P PFNGLCOLORP3UIVPROC) (GLenum type, const GLuint *color);
typedef void (P PFNGLCOLORP4UIPROC) (GLenum type, GLuint color);
typedef void (P PFNGLCOLORP4UIVPROC) (GLenum type, const GLuint *color);
typedef void (P PFNGLSECONDARYCOLORP3UIPROC) (GLenum type, GLuint color);
typedef void (P PFNGLSECONDARYCOLORP3UIVPROC) (GLenum type, const GLuint *color);
#ifdef GL_GLEXT_PROTOTYPES */
extern void  glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
extern GLint  glGetFragDataIndex (GLuint program, const GLchar *name);
extern void  glGenSamplers (GLsizei count, GLuint *samplers);
extern void  glDeleteSamplers (GLsizei count, const GLuint *samplers);
extern GLboolean  glIsSampler (GLuint sampler);
extern void  glBindSampler (GLuint unit, GLuint sampler);
extern void  glSamplerParameteri (GLuint sampler, GLenum pname, GLint param);
extern void  glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint *param);
extern void  glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param);
extern void  glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat *param);
extern void  glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint *param);
extern void  glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint *param);
extern void  glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint *params);
extern void  glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint *params);
extern void  glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat *params);
extern void  glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint *params);
extern void  glQueryCounter (GLuint id, GLenum target);
extern void  glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64 *params);
extern void  glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64 *params);
extern void  glVertexAttribDivisor (GLuint index, GLuint divisor);
extern void  glVertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
extern void  glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
extern void  glVertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
extern void  glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
extern void  glVertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
extern void  glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
extern void  glVertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
extern void  glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
extern void  glVertexP2ui (GLenum type, GLuint value);
extern void  glVertexP2uiv (GLenum type, const GLuint *value);
extern void  glVertexP3ui (GLenum type, GLuint value);
extern void  glVertexP3uiv (GLenum type, const GLuint *value);
extern void  glVertexP4ui (GLenum type, GLuint value);
extern void  glVertexP4uiv (GLenum type, const GLuint *value);
extern void  glTexCoordP1ui (GLenum type, GLuint coords);
extern void  glTexCoordP1uiv (GLenum type, const GLuint *coords);
extern void  glTexCoordP2ui (GLenum type, GLuint coords);
extern void  glTexCoordP2uiv (GLenum type, const GLuint *coords);
extern void  glTexCoordP3ui (GLenum type, GLuint coords);
extern void  glTexCoordP3uiv (GLenum type, const GLuint *coords);
extern void  glTexCoordP4ui (GLenum type, GLuint coords);
extern void  glTexCoordP4uiv (GLenum type, const GLuint *coords);
extern void  glMultiTexCoordP1ui (GLenum texture, GLenum type, GLuint coords);
extern void  glMultiTexCoordP1uiv (GLenum texture, GLenum type, const GLuint *coords);
extern void  glMultiTexCoordP2ui (GLenum texture, GLenum type, GLuint coords);
extern void  glMultiTexCoordP2uiv (GLenum texture, GLenum type, const GLuint *coords);
extern void  glMultiTexCoordP3ui (GLenum texture, GLenum type, GLuint coords);
extern void  glMultiTexCoordP3uiv (GLenum texture, GLenum type, const GLuint *coords);
extern void  glMultiTexCoordP4ui (GLenum texture, GLenum type, GLuint coords);
extern void  glMultiTexCoordP4uiv (GLenum texture, GLenum type, const GLuint *coords);
extern void  glNormalP3ui (GLenum type, GLuint coords);
extern void  glNormalP3uiv (GLenum type, const GLuint *coords);
extern void  glColorP3ui (GLenum type, GLuint color);
extern void  glColorP3uiv (GLenum type, const GLuint *color);
extern void  glColorP4ui (GLenum type, GLuint color);
extern void  glColorP4uiv (GLenum type, const GLuint *color);
extern void  glSecondaryColorP3ui (GLenum type, GLuint color);
extern void  glSecondaryColorP3uiv (GLenum type, const GLuint *color);
#endif
#endif /* GL_VERSION_3_3 */

#ifndef GL_VERSION_4_0
#define GL_VERSION_4_0 1
#define GL_SAMPLE_SHADING                 0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE       0x8C37
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5F
#define GL_TEXTURE_CUBE_MAP_ARRAY         0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY   0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY         0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW  0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY     0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY 0x900F
#define GL_DRAW_INDIRECT_BUFFER           0x8F3F
#define GL_DRAW_INDIRECT_BUFFER_BINDING   0x8F43
#define GL_GEOMETRY_SHADER_INVOCATIONS    0x887F
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET 0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS 0x8E5D
#define GL_MAX_VERTEX_STREAMS             0x8E71
#define GL_DOUBLE_VEC2                    0x8FFC
#define GL_DOUBLE_VEC3                    0x8FFD
#define GL_DOUBLE_VEC4                    0x8FFE
#define GL_DOUBLE_MAT2                    0x8F46
#define GL_DOUBLE_MAT3                    0x8F47
#define GL_DOUBLE_MAT4                    0x8F48
#define GL_DOUBLE_MAT2x3                  0x8F49
#define GL_DOUBLE_MAT2x4                  0x8F4A
#define GL_DOUBLE_MAT3x2                  0x8F4B
#define GL_DOUBLE_MAT3x4                  0x8F4C
#define GL_DOUBLE_MAT4x2                  0x8F4D
#define GL_DOUBLE_MAT4x3                  0x8F4E
#define GL_ACTIVE_SUBROUTINES             0x8DE5
#define GL_ACTIVE_SUBROUTINE_UNIFORMS     0x8DE6
#define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS 0x8E47
#define GL_ACTIVE_SUBROUTINE_MAX_LENGTH   0x8E48
#define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH 0x8E49
#define GL_MAX_SUBROUTINES                0x8DE7
#define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS 0x8DE8
#define GL_NUM_COMPATIBLE_SUBROUTINES     0x8E4A
#define GL_COMPATIBLE_SUBROUTINES         0x8E4B
#define GL_PATCHES                        0x000E
#define GL_PATCH_VERTICES                 0x8E72
#define GL_PATCH_DEFAULT_INNER_LEVEL      0x8E73
#define GL_PATCH_DEFAULT_OUTER_LEVEL      0x8E74
#define GL_TESS_CONTROL_OUTPUT_VERTICES   0x8E75
#define GL_TESS_GEN_MODE                  0x8E76
#define GL_TESS_GEN_SPACING               0x8E77
#define GL_TESS_GEN_VERTEX_ORDER          0x8E78
#define GL_TESS_GEN_POINT_MODE            0x8E79
#define GL_ISOLINES                       0x8E7A
#define GL_FRACTIONAL_ODD                 0x8E7B
#define GL_FRACTIONAL_EVEN                0x8E7C
#define GL_MAX_PATCH_VERTICES             0x8E7D
#define GL_MAX_TESS_GEN_LEVEL             0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS      0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E1F
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER 0x84F0
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER 0x84F1
#define GL_TESS_EVALUATION_SHADER         0x8E87
#define GL_TESS_CONTROL_SHADER            0x8E88
#define GL_TRANSFORM_FEEDBACK             0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING     0x8E25
#define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS 0x8E70
/*typedef void (P PFNGLMINSAMPLESHADINGPROC) (GLfloat value);
typedef void (P PFNGLBLENDEQUATIONIPROC) (GLuint buf, GLenum mode);
typedef void (P PFNGLBLENDEQUATIONSEPARATEIPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (P PFNGLBLENDFUNCIPROC) (GLuint buf, GLenum src, GLenum dst);
typedef void (P PFNGLBLENDFUNCSEPARATEIPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (P PFNGLDRAWARRAYSINDIRECTPROC) (GLenum mode, const void *indirect);
typedef void (P PFNGLDRAWELEMENTSINDIRECTPROC) (GLenum mode, GLenum type, const void *indirect);
typedef void (P PFNGLUNIFORM1DPROC) (GLint location, GLdouble x);
typedef void (P PFNGLUNIFORM2DPROC) (GLint location, GLdouble x, GLdouble y);
typedef void (P PFNGLUNIFORM3DPROC) (GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (P PFNGLUNIFORM4DPROC) (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (P PFNGLUNIFORM1DVPROC) (GLint location, GLsizei count, const GLdouble *value);
typedef void (P PFNGLUNIFORM2DVPROC) (GLint location, GLsizei count, const GLdouble *value);
typedef void (P PFNGLUNIFORM3DVPROC) (GLint location, GLsizei count, const GLdouble *value);
typedef void (P PFNGLUNIFORM4DVPROC) (GLint location, GLsizei count, const GLdouble *value);
typedef void (P PFNGLUNIFORMMATRIX2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLUNIFORMMATRIX3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLUNIFORMMATRIX4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLUNIFORMMATRIX2X3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLUNIFORMMATRIX2X4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLUNIFORMMATRIX3X2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLUNIFORMMATRIX3X4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLUNIFORMMATRIX4X2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLUNIFORMMATRIX4X3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLGETUNIFORMDVPROC) (GLuint program, GLint location, GLdouble *params);
typedef GLint (P PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) (GLuint program, GLenum shadertype, const GLchar *name);
typedef GLuint (P PFNGLGETSUBROUTINEINDEXPROC) (GLuint program, GLenum shadertype, const GLchar *name);
typedef void (P PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
typedef void (P PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
typedef void (P PFNGLGETACTIVESUBROUTINENAMEPROC) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
typedef void (P PFNGLUNIFORMSUBROUTINESUIVPROC) (GLenum shadertype, GLsizei count, const GLuint *indices);
typedef void (P PFNGLGETUNIFORMSUBROUTINEUIVPROC) (GLenum shadertype, GLint location, GLuint *params);
typedef void (P PFNGLGETPROGRAMSTAGEIVPROC) (GLuint program, GLenum shadertype, GLenum pname, GLint *values);
typedef void (P PFNGLPATCHPARAMETERIPROC) (GLenum pname, GLint value);
typedef void (P PFNGLPATCHPARAMETERFVPROC) (GLenum pname, const GLfloat *values);
typedef void (P PFNGLBINDTRANSFORMFEEDBACKPROC) (GLenum target, GLuint id);
typedef void (P PFNGLDELETETRANSFORMFEEDBACKSPROC) (GLsizei n, const GLuint *ids);
typedef void (P PFNGLGENTRANSFORMFEEDBACKSPROC) (GLsizei n, GLuint *ids);
typedef GLboolean (P PFNGLISTRANSFORMFEEDBACKPROC) (GLuint id);
typedef void (P PFNGLPAUSETRANSFORMFEEDBACKPROC) (void);
typedef void (P PFNGLRESUMETRANSFORMFEEDBACKPROC) (void);
typedef void (P PFNGLDRAWTRANSFORMFEEDBACKPROC) (GLenum mode, GLuint id);
typedef void (P PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) (GLenum mode, GLuint id, GLuint stream);
typedef void (P PFNGLBEGINQUERYINDEXEDPROC) (GLenum target, GLuint index, GLuint id);
typedef void (P PFNGLENDQUERYINDEXEDPROC) (GLenum target, GLuint index);
typedef void (P PFNGLGETQUERYINDEXEDIVPROC) (GLenum target, GLuint index, GLenum pname, GLint *params);
#ifdef GL_GLEXT_PROTOTYPES */
extern void  glMinSampleShading (GLfloat value);
extern void  glBlendEquationi (GLuint buf, GLenum mode);
extern void  glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
extern void  glBlendFunci (GLuint buf, GLenum src, GLenum dst);
extern void  glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
extern void  glDrawArraysIndirect (GLenum mode, const void *indirect);
extern void  glDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect);
extern void  glUniform1d (GLint location, GLdouble x);
extern void  glUniform2d (GLint location, GLdouble x, GLdouble y);
extern void  glUniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z);
extern void  glUniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glUniform1dv (GLint location, GLsizei count, const GLdouble *value);
extern void  glUniform2dv (GLint location, GLsizei count, const GLdouble *value);
extern void  glUniform3dv (GLint location, GLsizei count, const GLdouble *value);
extern void  glUniform4dv (GLint location, GLsizei count, const GLdouble *value);
extern void  glUniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glUniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glUniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glUniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glUniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glUniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glUniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glUniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glUniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glGetUniformdv (GLuint program, GLint location, GLdouble *params);
extern GLint  glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar *name);
extern GLuint  glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar *name);
extern void  glGetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
extern void  glGetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
extern void  glGetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
extern void  glUniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint *indices);
extern void  glGetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint *params);
extern void  glGetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint *values);
extern void  glPatchParameteri (GLenum pname, GLint value);
extern void  glPatchParameterfv (GLenum pname, const GLfloat *values);
extern void  glBindTransformFeedback (GLenum target, GLuint id);
extern void  glDeleteTransformFeedbacks (GLsizei n, const GLuint *ids);
extern void  glGenTransformFeedbacks (GLsizei n, GLuint *ids);
extern GLboolean  glIsTransformFeedback (GLuint id);
extern void  glPauseTransformFeedback (void);
extern void  glResumeTransformFeedback (void);
extern void  glDrawTransformFeedback (GLenum mode, GLuint id);
extern void  glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream);
extern void  glBeginQueryIndexed (GLenum target, GLuint index, GLuint id);
extern void  glEndQueryIndexed (GLenum target, GLuint index);
extern void  glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint *params);
#endif
#endif /* GL_VERSION_4_0 */

#ifndef GL_VERSION_4_1
#define GL_VERSION_4_1 1
#define GL_FIXED                          0x140C
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#define GL_LOW_FLOAT                      0x8DF0
#define GL_MEDIUM_FLOAT                   0x8DF1
#define GL_HIGH_FLOAT                     0x8DF2
#define GL_LOW_INT                        0x8DF3
#define GL_MEDIUM_INT                     0x8DF4
#define GL_HIGH_INT                       0x8DF5
#define GL_SHADER_COMPILER                0x8DFA
#define GL_SHADER_BINARY_FORMATS          0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS      0x8DF9
#define GL_MAX_VERTEX_UNIFORM_VECTORS     0x8DFB
#define GL_MAX_VARYING_VECTORS            0x8DFC
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS   0x8DFD
#define GL_RGB565                         0x8D62
#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
#define GL_PROGRAM_BINARY_LENGTH          0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS     0x87FE
#define GL_PROGRAM_BINARY_FORMATS         0x87FF
#define GL_VERTEX_SHADER_BIT              0x00000001
#define GL_FRAGMENT_SHADER_BIT            0x00000002
#define GL_GEOMETRY_SHADER_BIT            0x00000004
#define GL_TESS_CONTROL_SHADER_BIT        0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT     0x00000010
#define GL_ALL_SHADER_BITS                0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE              0x8258
#define GL_ACTIVE_PROGRAM                 0x8259
#define GL_PROGRAM_PIPELINE_BINDING       0x825A
#define GL_MAX_VIEWPORTS                  0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS         0x825C
#define GL_VIEWPORT_BOUNDS_RANGE          0x825D
#define GL_LAYER_PROVOKING_VERTEX         0x825E
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX 0x825F
#define GL_UNDEFINED_VERTEX               0x8260
/*typedef void (P PFNGLRELEASESHADERCOMPILERPROC) (void);
typedef void (P PFNGLSHADERBINARYPROC) (GLsizei count, const GLuint *shaders, GLenum binaryFormat, const void *binary, GLsizei length);
typedef void (P PFNGLGETSHADERPRECISIONFORMATPROC) (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
typedef void (P PFNGLDEPTHRANGEFPROC) (GLfloat n, GLfloat f);
typedef void (P PFNGLCLEARDEPTHFPROC) (GLfloat d);
typedef void (P PFNGLGETPROGRAMBINARYPROC) (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
typedef void (P PFNGLPROGRAMBINARYPROC) (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
typedef void (P PFNGLPROGRAMPARAMETERIPROC) (GLuint program, GLenum pname, GLint value);
typedef void (P PFNGLUSEPROGRAMSTAGESPROC) (GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (P PFNGLACTIVESHADERPROGRAMPROC) (GLuint pipeline, GLuint program);
typedef GLuint (P PFNGLCREATESHADERPROGRAMVPROC) (GLenum type, GLsizei count, const GLchar *const*strings);
typedef void (P PFNGLBINDPROGRAMPIPELINEPROC) (GLuint pipeline);
typedef void (P PFNGLDELETEPROGRAMPIPELINESPROC) (GLsizei n, const GLuint *pipelines);
typedef void (P PFNGLGENPROGRAMPIPELINESPROC) (GLsizei n, GLuint *pipelines);
typedef GLboolean (P PFNGLISPROGRAMPIPELINEPROC) (GLuint pipeline);
typedef void (P PFNGLGETPROGRAMPIPELINEIVPROC) (GLuint pipeline, GLenum pname, GLint *params);
typedef void (P PFNGLPROGRAMUNIFORM1IPROC) (GLuint program, GLint location, GLint v0);
typedef void (P PFNGLPROGRAMUNIFORM1IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (P PFNGLPROGRAMUNIFORM1FPROC) (GLuint program, GLint location, GLfloat v0);
typedef void (P PFNGLPROGRAMUNIFORM1FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORM1DPROC) (GLuint program, GLint location, GLdouble v0);
typedef void (P PFNGLPROGRAMUNIFORM1DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (P PFNGLPROGRAMUNIFORM1UIPROC) (GLuint program, GLint location, GLuint v0);
typedef void (P PFNGLPROGRAMUNIFORM1UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (P PFNGLPROGRAMUNIFORM2IPROC) (GLuint program, GLint location, GLint v0, GLint v1);
typedef void (P PFNGLPROGRAMUNIFORM2IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (P PFNGLPROGRAMUNIFORM2FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (P PFNGLPROGRAMUNIFORM2FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORM2DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1);
typedef void (P PFNGLPROGRAMUNIFORM2DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (P PFNGLPROGRAMUNIFORM2UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (P PFNGLPROGRAMUNIFORM2UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (P PFNGLPROGRAMUNIFORM3IPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (P PFNGLPROGRAMUNIFORM3IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (P PFNGLPROGRAMUNIFORM3FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (P PFNGLPROGRAMUNIFORM3FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORM3DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
typedef void (P PFNGLPROGRAMUNIFORM3DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (P PFNGLPROGRAMUNIFORM3UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (P PFNGLPROGRAMUNIFORM3UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (P PFNGLPROGRAMUNIFORM4IPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (P PFNGLPROGRAMUNIFORM4IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (P PFNGLPROGRAMUNIFORM4FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (P PFNGLPROGRAMUNIFORM4FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORM4DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
typedef void (P PFNGLPROGRAMUNIFORM4DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
typedef void (P PFNGLPROGRAMUNIFORM4UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (P PFNGLPROGRAMUNIFORM4UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
typedef void (P PFNGLVALIDATEPROGRAMPIPELINEPROC) (GLuint pipeline);
typedef void (P PFNGLGETPROGRAMPIPELINEINFOLOGPROC) (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (P PFNGLVERTEXATTRIBL1DPROC) (GLuint index, GLdouble x);
typedef void (P PFNGLVERTEXATTRIBL2DPROC) (GLuint index, GLdouble x, GLdouble y);
typedef void (P PFNGLVERTEXATTRIBL3DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (P PFNGLVERTEXATTRIBL4DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (P PFNGLVERTEXATTRIBL1DVPROC) (GLuint index, const GLdouble *v);
typedef void (P PFNGLVERTEXATTRIBL2DVPROC) (GLuint index, const GLdouble *v);
typedef void (P PFNGLVERTEXATTRIBL3DVPROC) (GLuint index, const GLdouble *v);
typedef void (P PFNGLVERTEXATTRIBL4DVPROC) (GLuint index, const GLdouble *v);
typedef void (P PFNGLVERTEXATTRIBLPOINTERPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (P PFNGLGETVERTEXATTRIBLDVPROC) (GLuint index, GLenum pname, GLdouble *params);
typedef void (P PFNGLVIEWPORTARRAYVPROC) (GLuint first, GLsizei count, const GLfloat *v);
typedef void (P PFNGLVIEWPORTINDEXEDFPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (P PFNGLVIEWPORTINDEXEDFVPROC) (GLuint index, const GLfloat *v);
typedef void (P PFNGLSCISSORARRAYVPROC) (GLuint first, GLsizei count, const GLint *v);
typedef void (P PFNGLSCISSORINDEXEDPROC) (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (P PFNGLSCISSORINDEXEDVPROC) (GLuint index, const GLint *v);
typedef void (P PFNGLDEPTHRANGEARRAYVPROC) (GLuint first, GLsizei count, const GLdouble *v);
typedef void (P PFNGLDEPTHRANGEINDEXEDPROC) (GLuint index, GLdouble n, GLdouble f);
typedef void (P PFNGLGETFLOATI_VPROC) (GLenum target, GLuint index, GLfloat *data);
typedef void (P PFNGLGETDOUBLEI_VPROC) (GLenum target, GLuint index, GLdouble *data);
#ifdef GL_GLEXT_PROTOTYPES */
extern void  glReleaseShaderCompiler (void);
extern void  glShaderBinary (GLsizei count, const GLuint *shaders, GLenum binaryFormat, const void *binary, GLsizei length);
extern void  glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
extern void  glDepthRangef (GLfloat n, GLfloat f);
extern void  glClearDepthf (GLfloat d);
extern void  glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
extern void  glProgramBinary (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
extern void  glProgramParameteri (GLuint program, GLenum pname, GLint value);
extern void  glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program);
extern void  glActiveShaderProgram (GLuint pipeline, GLuint program);
extern GLuint  glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const*strings);
extern void  glBindProgramPipeline (GLuint pipeline);
extern void  glDeleteProgramPipelines (GLsizei n, const GLuint *pipelines);
extern void  glGenProgramPipelines (GLsizei n, GLuint *pipelines);
extern GLboolean  glIsProgramPipeline (GLuint pipeline);
extern void  glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint *params);
extern void  glProgramUniform1i (GLuint program, GLint location, GLint v0);
extern void  glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint *value);
extern void  glProgramUniform1f (GLuint program, GLint location, GLfloat v0);
extern void  glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern void  glProgramUniform1d (GLuint program, GLint location, GLdouble v0);
extern void  glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern void  glProgramUniform1ui (GLuint program, GLint location, GLuint v0);
extern void  glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern void  glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1);
extern void  glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint *value);
extern void  glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1);
extern void  glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern void  glProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1);
extern void  glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern void  glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1);
extern void  glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern void  glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
extern void  glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint *value);
extern void  glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern void  glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern void  glProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
extern void  glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern void  glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
extern void  glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern void  glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern void  glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint *value);
extern void  glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern void  glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern void  glProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
extern void  glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern void  glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
extern void  glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern void  glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glValidateProgramPipeline (GLuint pipeline);
extern void  glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
extern void  glVertexAttribL1d (GLuint index, GLdouble x);
extern void  glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y);
extern void  glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern void  glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glVertexAttribL1dv (GLuint index, const GLdouble *v);
extern void  glVertexAttribL2dv (GLuint index, const GLdouble *v);
extern void  glVertexAttribL3dv (GLuint index, const GLdouble *v);
extern void  glVertexAttribL4dv (GLuint index, const GLdouble *v);
extern void  glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
extern void  glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble *params);
extern void  glViewportArrayv (GLuint first, GLsizei count, const GLfloat *v);
extern void  glViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
extern void  glViewportIndexedfv (GLuint index, const GLfloat *v);
extern void  glScissorArrayv (GLuint first, GLsizei count, const GLint *v);
extern void  glScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
extern void  glScissorIndexedv (GLuint index, const GLint *v);
extern void  glDepthRangeArrayv (GLuint first, GLsizei count, const GLdouble *v);
extern void  glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble f);
extern void  glGetFloati_v (GLenum target, GLuint index, GLfloat *data);
extern void  glGetDoublei_v (GLenum target, GLuint index, GLdouble *data);
#endif
#endif /* GL_VERSION_4_1 */

#ifndef GL_VERSION_4_2
#define GL_VERSION_4_2 1
#define GL_COPY_READ_BUFFER_BINDING       0x8F36
#define GL_COPY_WRITE_BUFFER_BINDING      0x8F37
#define GL_TRANSFORM_FEEDBACK_ACTIVE      0x8E24
#define GL_TRANSFORM_FEEDBACK_PAUSED      0x8E23
#define GL_UNPACK_COMPRESSED_BLOCK_WIDTH  0x9127
#define GL_UNPACK_COMPRESSED_BLOCK_HEIGHT 0x9128
#define GL_UNPACK_COMPRESSED_BLOCK_DEPTH  0x9129
#define GL_UNPACK_COMPRESSED_BLOCK_SIZE   0x912A
#define GL_PACK_COMPRESSED_BLOCK_WIDTH    0x912B
#define GL_PACK_COMPRESSED_BLOCK_HEIGHT   0x912C
#define GL_PACK_COMPRESSED_BLOCK_DEPTH    0x912D
#define GL_PACK_COMPRESSED_BLOCK_SIZE     0x912E
#define GL_NUM_SAMPLE_COUNTS              0x9380
#define GL_MIN_MAP_BUFFER_ALIGNMENT       0x90BC
#define GL_ATOMIC_COUNTER_BUFFER          0x92C0
#define GL_ATOMIC_COUNTER_BUFFER_BINDING  0x92C1
#define GL_ATOMIC_COUNTER_BUFFER_START    0x92C2
#define GL_ATOMIC_COUNTER_BUFFER_SIZE     0x92C3
#define GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE 0x92C4
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS 0x92C5
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES 0x92C6
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER 0x92C7
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER 0x92C8
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER 0x92C9
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER 0x92CA
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER 0x92CB
#define GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS 0x92CC
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS 0x92CE
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS 0x92CF
#define GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS 0x92D0
#define GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS 0x92D1
#define GL_MAX_VERTEX_ATOMIC_COUNTERS     0x92D2
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS 0x92D4
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS   0x92D5
#define GL_MAX_FRAGMENT_ATOMIC_COUNTERS   0x92D6
#define GL_MAX_COMBINED_ATOMIC_COUNTERS   0x92D7
#define GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE 0x92D8
#define GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS 0x92DC
#define GL_ACTIVE_ATOMIC_COUNTER_BUFFERS  0x92D9
#define GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX 0x92DA
#define GL_UNSIGNED_INT_ATOMIC_COUNTER    0x92DB
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT 0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT      0x00000002
#define GL_UNIFORM_BARRIER_BIT            0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT      0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT 0x00000020
#define GL_COMMAND_BARRIER_BIT            0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT       0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT     0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT      0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT        0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT 0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT     0x00001000
#define GL_ALL_BARRIER_BITS               0xFFFFFFFF
#define GL_MAX_IMAGE_UNITS                0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS 0x8F39
#define GL_IMAGE_BINDING_NAME             0x8F3A
#define GL_IMAGE_BINDING_LEVEL            0x8F3B
#define GL_IMAGE_BINDING_LAYERED          0x8F3C
#define GL_IMAGE_BINDING_LAYER            0x8F3D
#define GL_IMAGE_BINDING_ACCESS           0x8F3E
#define GL_IMAGE_1D                       0x904C
#define GL_IMAGE_2D                       0x904D
#define GL_IMAGE_3D                       0x904E
#define GL_IMAGE_2D_RECT                  0x904F
#define GL_IMAGE_CUBE                     0x9050
#define GL_IMAGE_BUFFER                   0x9051
#define GL_IMAGE_1D_ARRAY                 0x9052
#define GL_IMAGE_2D_ARRAY                 0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY           0x9054
#define GL_IMAGE_2D_MULTISAMPLE           0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY     0x9056
#define GL_INT_IMAGE_1D                   0x9057
#define GL_INT_IMAGE_2D                   0x9058
#define GL_INT_IMAGE_3D                   0x9059
#define GL_INT_IMAGE_2D_RECT              0x905A
#define GL_INT_IMAGE_CUBE                 0x905B
#define GL_INT_IMAGE_BUFFER               0x905C
#define GL_INT_IMAGE_1D_ARRAY             0x905D
#define GL_INT_IMAGE_2D_ARRAY             0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY       0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE       0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x9061
#define GL_UNSIGNED_INT_IMAGE_1D          0x9062
#define GL_UNSIGNED_INT_IMAGE_2D          0x9063
#define GL_UNSIGNED_INT_IMAGE_3D          0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT     0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE        0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER      0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY    0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY    0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY 0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE 0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x906C
#define GL_MAX_IMAGE_SAMPLES              0x906D
#define GL_IMAGE_BINDING_FORMAT           0x906E
#define GL_IMAGE_FORMAT_COMPATIBILITY_TYPE 0x90C7
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE 0x90C8
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS 0x90C9
#define GL_MAX_VERTEX_IMAGE_UNIFORMS      0x90CA
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS 0x90CC
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS    0x90CD
#define GL_MAX_FRAGMENT_IMAGE_UNIFORMS    0x90CE
#define GL_MAX_COMBINED_IMAGE_UNIFORMS    0x90CF
#define GL_COMPRESSED_RGBA_BPTC_UNORM     0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT 0x8E8F
#define GL_TEXTURE_IMMUTABLE_FORMAT       0x912F
/*typedef void (P PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (P PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
typedef void (P PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
typedef void (P PFNGLGETINTERNALFORMATIVPROC) (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params);
typedef void (P PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) (GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
typedef void (P PFNGLBINDIMAGETEXTUREPROC) (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef void (P PFNGLMEMORYBARRIERPROC) (GLbitfield barriers);
typedef void (P PFNGLTEXSTORAGE1DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (P PFNGLTEXSTORAGE2DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (P PFNGLTEXSTORAGE3DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (P PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) (GLenum mode, GLuint id, GLsizei instancecount);
typedef void (P PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
#ifdef GL_GLEXT_PROTOTYPES
extern void  glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
extern void  glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
extern void  glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
extern void  glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params);
extern void  glGetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
extern void  glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
extern void  glMemoryBarrier (GLbitfield barriers);
extern void  glTexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
extern void  glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
extern void  glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
extern void  glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount);
extern void  glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
#endif*/
#endif /* GL_VERSION_4_2 */

#ifndef GL_VERSION_4_3
#define GL_VERSION_4_3 1
//typedef void (  *GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
#define GL_NUM_SHADING_LANGUAGE_VERSIONS  0x82E9
#define GL_VERTEX_ATTRIB_ARRAY_LONG       0x874E
#define GL_COMPRESSED_RGB8_ETC2           0x9274
#define GL_COMPRESSED_SRGB8_ETC2          0x9275
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9276
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9277
#define GL_COMPRESSED_RGBA8_ETC2_EAC      0x9278
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC 0x9279
#define GL_COMPRESSED_R11_EAC             0x9270
#define GL_COMPRESSED_SIGNED_R11_EAC      0x9271
#define GL_COMPRESSED_RG11_EAC            0x9272
#define GL_COMPRESSED_SIGNED_RG11_EAC     0x9273
#define GL_PRIMITIVE_RESTART_FIXED_INDEX  0x8D69
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE 0x8D6A
#define GL_MAX_ELEMENT_INDEX              0x8D6B
#define GL_COMPUTE_SHADER                 0x91B9
#define GL_MAX_COMPUTE_UNIFORM_BLOCKS     0x91BB
#define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS 0x91BC
#define GL_MAX_COMPUTE_IMAGE_UNIFORMS     0x91BD
#define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE 0x8262
#define GL_MAX_COMPUTE_UNIFORM_COMPONENTS 0x8263
#define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS 0x8264
#define GL_MAX_COMPUTE_ATOMIC_COUNTERS    0x8265
#define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS 0x8266
#define GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS 0x90EB
#define GL_MAX_COMPUTE_WORK_GROUP_COUNT   0x91BE
#define GL_MAX_COMPUTE_WORK_GROUP_SIZE    0x91BF
#define GL_COMPUTE_WORK_GROUP_SIZE        0x8267
#define GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER 0x90EC
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER 0x90ED
#define GL_DISPATCH_INDIRECT_BUFFER       0x90EE
#define GL_DISPATCH_INDIRECT_BUFFER_BINDING 0x90EF
#define GL_COMPUTE_SHADER_BIT             0x00000020
#define GL_DEBUG_OUTPUT_SYNCHRONOUS       0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION        0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM      0x8245
#define GL_DEBUG_SOURCE_API               0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM     0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER   0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY       0x8249
#define GL_DEBUG_SOURCE_APPLICATION       0x824A
#define GL_DEBUG_SOURCE_OTHER             0x824B
#define GL_DEBUG_TYPE_ERROR               0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR  0x824E
#define GL_DEBUG_TYPE_PORTABILITY         0x824F
#define GL_DEBUG_TYPE_PERFORMANCE         0x8250
#define GL_DEBUG_TYPE_OTHER               0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH       0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES      0x9144
#define GL_DEBUG_LOGGED_MESSAGES          0x9145
#define GL_DEBUG_SEVERITY_HIGH            0x9146
#define GL_DEBUG_SEVERITY_MEDIUM          0x9147
#define GL_DEBUG_SEVERITY_LOW             0x9148
#define GL_DEBUG_TYPE_MARKER              0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP          0x8269
#define GL_DEBUG_TYPE_POP_GROUP           0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION    0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH    0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH        0x826D
#define GL_BUFFER                         0x82E0
#define GL_SHADER                         0x82E1
#define GL_PROGRAM                        0x82E2
#define GL_QUERY                          0x82E3
#define GL_PROGRAM_PIPELINE               0x82E4
#define GL_SAMPLER                        0x82E6
#define GL_MAX_LABEL_LENGTH               0x82E8
#define GL_DEBUG_OUTPUT                   0x92E0
#define GL_CONTEXT_FLAG_DEBUG_BIT         0x00000002
#define GL_MAX_UNIFORM_LOCATIONS          0x826E
#define GL_FRAMEBUFFER_DEFAULT_WIDTH      0x9310
#define GL_FRAMEBUFFER_DEFAULT_HEIGHT     0x9311
#define GL_FRAMEBUFFER_DEFAULT_LAYERS     0x9312
#define GL_FRAMEBUFFER_DEFAULT_SAMPLES    0x9313
#define GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS 0x9314
#define GL_MAX_FRAMEBUFFER_WIDTH          0x9315
#define GL_MAX_FRAMEBUFFER_HEIGHT         0x9316
#define GL_MAX_FRAMEBUFFER_LAYERS         0x9317
#define GL_MAX_FRAMEBUFFER_SAMPLES        0x9318
#define GL_INTERNALFORMAT_SUPPORTED       0x826F
#define GL_INTERNALFORMAT_PREFERRED       0x8270
#define GL_INTERNALFORMAT_RED_SIZE        0x8271
#define GL_INTERNALFORMAT_GREEN_SIZE      0x8272
#define GL_INTERNALFORMAT_BLUE_SIZE       0x8273
#define GL_INTERNALFORMAT_ALPHA_SIZE      0x8274
#define GL_INTERNALFORMAT_DEPTH_SIZE      0x8275
#define GL_INTERNALFORMAT_STENCIL_SIZE    0x8276
#define GL_INTERNALFORMAT_SHARED_SIZE     0x8277
#define GL_INTERNALFORMAT_RED_TYPE        0x8278
#define GL_INTERNALFORMAT_GREEN_TYPE      0x8279
#define GL_INTERNALFORMAT_BLUE_TYPE       0x827A
#define GL_INTERNALFORMAT_ALPHA_TYPE      0x827B
#define GL_INTERNALFORMAT_DEPTH_TYPE      0x827C
#define GL_INTERNALFORMAT_STENCIL_TYPE    0x827D
#define GL_MAX_WIDTH                      0x827E
#define GL_MAX_HEIGHT                     0x827F
#define GL_MAX_DEPTH                      0x8280
#define GL_MAX_LAYERS                     0x8281
#define GL_MAX_COMBINED_DIMENSIONS        0x8282
#define GL_COLOR_COMPONENTS               0x8283
#define GL_DEPTH_COMPONENTS               0x8284
#define GL_STENCIL_COMPONENTS             0x8285
#define GL_COLOR_RENDERABLE               0x8286
#define GL_DEPTH_RENDERABLE               0x8287
#define GL_STENCIL_RENDERABLE             0x8288
#define GL_FRAMEBUFFER_RENDERABLE         0x8289
#define GL_FRAMEBUFFER_RENDERABLE_LAYERED 0x828A
#define GL_FRAMEBUFFER_BLEND              0x828B
#define GL_READ_PIXELS                    0x828C
#define GL_READ_PIXELS_FORMAT             0x828D
#define GL_READ_PIXELS_TYPE               0x828E
#define GL_TEXTURE_IMAGE_FORMAT           0x828F
#define GL_TEXTURE_IMAGE_TYPE             0x8290
#define GL_GET_TEXTURE_IMAGE_FORMAT       0x8291
#define GL_GET_TEXTURE_IMAGE_TYPE         0x8292
#define GL_MIPMAP                         0x8293
#define GL_MANUAL_GENERATE_MIPMAP         0x8294
#define GL_AUTO_GENERATE_MIPMAP           0x8295
#define GL_COLOR_ENCODING                 0x8296
#define GL_SRGB_READ                      0x8297
#define GL_SRGB_WRITE                     0x8298
#define GL_FILTER                         0x829A
#define GL_VERTEX_TEXTURE                 0x829B
#define GL_TESS_CONTROL_TEXTURE           0x829C
#define GL_TESS_EVALUATION_TEXTURE        0x829D
#define GL_GEOMETRY_TEXTURE               0x829E
#define GL_FRAGMENT_TEXTURE               0x829F
#define GL_COMPUTE_TEXTURE                0x82A0
#define GL_TEXTURE_SHADOW                 0x82A1
#define GL_TEXTURE_GATHER                 0x82A2
#define GL_TEXTURE_GATHER_SHADOW          0x82A3
#define GL_SHADER_IMAGE_LOAD              0x82A4
#define GL_SHADER_IMAGE_STORE             0x82A5
#define GL_SHADER_IMAGE_ATOMIC            0x82A6
#define GL_IMAGE_TEXEL_SIZE               0x82A7
#define GL_IMAGE_COMPATIBILITY_CLASS      0x82A8
#define GL_IMAGE_PIXEL_FORMAT             0x82A9
#define GL_IMAGE_PIXEL_TYPE               0x82AA
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST 0x82AC
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST 0x82AD
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE 0x82AE
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE 0x82AF
#define GL_TEXTURE_COMPRESSED_BLOCK_WIDTH 0x82B1
#define GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT 0x82B2
#define GL_TEXTURE_COMPRESSED_BLOCK_SIZE  0x82B3
#define GL_CLEAR_BUFFER                   0x82B4
#define GL_TEXTURE_VIEW                   0x82B5
#define GL_VIEW_COMPATIBILITY_CLASS       0x82B6
#define GL_FULL_SUPPORT                   0x82B7
#define GL_CAVEAT_SUPPORT                 0x82B8
#define GL_IMAGE_CLASS_4_X_32             0x82B9
#define GL_IMAGE_CLASS_2_X_32             0x82BA
#define GL_IMAGE_CLASS_1_X_32             0x82BB
#define GL_IMAGE_CLASS_4_X_16             0x82BC
#define GL_IMAGE_CLASS_2_X_16             0x82BD
#define GL_IMAGE_CLASS_1_X_16             0x82BE
#define GL_IMAGE_CLASS_4_X_8              0x82BF
#define GL_IMAGE_CLASS_2_X_8              0x82C0
#define GL_IMAGE_CLASS_1_X_8              0x82C1
#define GL_IMAGE_CLASS_11_11_10           0x82C2
#define GL_IMAGE_CLASS_10_10_10_2         0x82C3
#define GL_VIEW_CLASS_128_BITS            0x82C4
#define GL_VIEW_CLASS_96_BITS             0x82C5
#define GL_VIEW_CLASS_64_BITS             0x82C6
#define GL_VIEW_CLASS_48_BITS             0x82C7
#define GL_VIEW_CLASS_32_BITS             0x82C8
#define GL_VIEW_CLASS_24_BITS             0x82C9
#define GL_VIEW_CLASS_16_BITS             0x82CA
#define GL_VIEW_CLASS_8_BITS              0x82CB
#define GL_VIEW_CLASS_S3TC_DXT1_RGB       0x82CC
#define GL_VIEW_CLASS_S3TC_DXT1_RGBA      0x82CD
#define GL_VIEW_CLASS_S3TC_DXT3_RGBA      0x82CE
#define GL_VIEW_CLASS_S3TC_DXT5_RGBA      0x82CF
#define GL_VIEW_CLASS_RGTC1_RED           0x82D0
#define GL_VIEW_CLASS_RGTC2_RG            0x82D1
#define GL_VIEW_CLASS_BPTC_UNORM          0x82D2
#define GL_VIEW_CLASS_BPTC_FLOAT          0x82D3
#define GL_UNIFORM                        0x92E1
#define GL_UNIFORM_BLOCK                  0x92E2
#define GL_PROGRAM_INPUT                  0x92E3
#define GL_PROGRAM_OUTPUT                 0x92E4
#define GL_BUFFER_VARIABLE                0x92E5
#define GL_SHADER_STORAGE_BLOCK           0x92E6
#define GL_VERTEX_SUBROUTINE              0x92E8
#define GL_TESS_CONTROL_SUBROUTINE        0x92E9
#define GL_TESS_EVALUATION_SUBROUTINE     0x92EA
#define GL_GEOMETRY_SUBROUTINE            0x92EB
#define GL_FRAGMENT_SUBROUTINE            0x92EC
#define GL_COMPUTE_SUBROUTINE             0x92ED
#define GL_VERTEX_SUBROUTINE_UNIFORM      0x92EE
#define GL_TESS_CONTROL_SUBROUTINE_UNIFORM 0x92EF
#define GL_TESS_EVALUATION_SUBROUTINE_UNIFORM 0x92F0
#define GL_GEOMETRY_SUBROUTINE_UNIFORM    0x92F1
#define GL_FRAGMENT_SUBROUTINE_UNIFORM    0x92F2
#define GL_COMPUTE_SUBROUTINE_UNIFORM     0x92F3
#define GL_TRANSFORM_FEEDBACK_VARYING     0x92F4
#define GL_ACTIVE_RESOURCES               0x92F5
#define GL_MAX_NAME_LENGTH                0x92F6
#define GL_MAX_NUM_ACTIVE_VARIABLES       0x92F7
#define GL_MAX_NUM_COMPATIBLE_SUBROUTINES 0x92F8
#define GL_NAME_LENGTH                    0x92F9
#define GL_TYPE                           0x92FA
#define GL_ARRAY_SIZE                     0x92FB
#define GL_OFFSET                         0x92FC
#define GL_BLOCK_INDEX                    0x92FD
#define GL_ARRAY_STRIDE                   0x92FE
#define GL_MATRIX_STRIDE                  0x92FF
#define GL_IS_ROW_MAJOR                   0x9300
#define GL_ATOMIC_COUNTER_BUFFER_INDEX    0x9301
#define GL_BUFFER_BINDING                 0x9302
#define GL_BUFFER_DATA_SIZE               0x9303
#define GL_NUM_ACTIVE_VARIABLES           0x9304
#define GL_ACTIVE_VARIABLES               0x9305
#define GL_REFERENCED_BY_VERTEX_SHADER    0x9306
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER 0x9308
#define GL_REFERENCED_BY_GEOMETRY_SHADER  0x9309
#define GL_REFERENCED_BY_FRAGMENT_SHADER  0x930A
#define GL_REFERENCED_BY_COMPUTE_SHADER   0x930B
#define GL_TOP_LEVEL_ARRAY_SIZE           0x930C
#define GL_TOP_LEVEL_ARRAY_STRIDE         0x930D
#define GL_LOCATION                       0x930E
#define GL_LOCATION_INDEX                 0x930F
#define GL_IS_PER_PATCH                   0x92E7
#define GL_SHADER_STORAGE_BUFFER          0x90D2
#define GL_SHADER_STORAGE_BUFFER_BINDING  0x90D3
#define GL_SHADER_STORAGE_BUFFER_START    0x90D4
#define GL_SHADER_STORAGE_BUFFER_SIZE     0x90D5
#define GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS 0x90D6
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS 0x90D7
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS 0x90D9
#define GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS 0x90DA
#define GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS 0x90DB
#define GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS 0x90DC
#define GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS 0x90DD
#define GL_MAX_SHADER_STORAGE_BLOCK_SIZE  0x90DE
#define GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT 0x90DF
#define GL_SHADER_STORAGE_BARRIER_BIT     0x00002000
#define GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES 0x8F39
#define GL_DEPTH_STENCIL_TEXTURE_MODE     0x90EA
#define GL_TEXTURE_BUFFER_OFFSET          0x919D
#define GL_TEXTURE_BUFFER_SIZE            0x919E
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT 0x919F
#define GL_TEXTURE_VIEW_MIN_LEVEL         0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS        0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER         0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS        0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS       0x82DF
#define GL_VERTEX_ATTRIB_BINDING          0x82D4
#define GL_VERTEX_ATTRIB_RELATIVE_OFFSET  0x82D5
#define GL_VERTEX_BINDING_DIVISOR         0x82D6
#define GL_VERTEX_BINDING_OFFSET          0x82D7
#define GL_VERTEX_BINDING_STRIDE          0x82D8
#define GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D9
#define GL_MAX_VERTEX_ATTRIB_BINDINGS     0x82DA
#define GL_VERTEX_BINDING_BUFFER          0x8F4F
#define GL_DISPLAY_LIST                   0x82E7
/*typedef void (P PFNGLCLEARBUFFERDATAPROC) (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
typedef void (P PFNGLCLEARBUFFERSUBDATAPROC) (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
typedef void (P PFNGLDISPATCHCOMPUTEPROC) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (P PFNGLDISPATCHCOMPUTEINDIRECTPROC) (GLintptr indirect);
typedef void (P PFNGLCOPYIMAGESUBDATAPROC) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (P PFNGLFRAMEBUFFERPARAMETERIPROC) (GLenum target, GLenum pname, GLint param);
typedef void (P PFNGLGETFRAMEBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (P PFNGLGETINTERNALFORMATI64VPROC) (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 *params);
typedef void (P PFNGLINVALIDATETEXSUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
typedef void (P PFNGLINVALIDATETEXIMAGEPROC) (GLuint texture, GLint level);
typedef void (P PFNGLINVALIDATEBUFFERSUBDATAPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (P PFNGLINVALIDATEBUFFERDATAPROC) (GLuint buffer);
typedef void (P PFNGLINVALIDATEFRAMEBUFFERPROC) (GLenum target, GLsizei numAttachments, const GLenum *attachments);
typedef void (P PFNGLINVALIDATESUBFRAMEBUFFERPROC) (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (P PFNGLMULTIDRAWARRAYSINDIRECTPROC) (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
typedef void (P PFNGLMULTIDRAWELEMENTSINDIRECTPROC) (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
typedef void (P PFNGLGETPROGRAMINTERFACEIVPROC) (GLuint program, GLenum programInterface, GLenum pname, GLint *params);
typedef GLuint (P PFNGLGETPROGRAMRESOURCEINDEXPROC) (GLuint program, GLenum programInterface, const GLchar *name);
typedef void (P PFNGLGETPROGRAMRESOURCENAMEPROC) (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
typedef void (P PFNGLGETPROGRAMRESOURCEIVPROC) (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei count, GLsizei *length, GLint *params);
typedef GLint (P PFNGLGETPROGRAMRESOURCELOCATIONPROC) (GLuint program, GLenum programInterface, const GLchar *name);
typedef GLint (P PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) (GLuint program, GLenum programInterface, const GLchar *name);
typedef void (P PFNGLSHADERSTORAGEBLOCKBINDINGPROC) (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
typedef void (P PFNGLTEXBUFFERRANGEPROC) (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (P PFNGLTEXSTORAGE2DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (P PFNGLTEXSTORAGE3DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (P PFNGLTEXTUREVIEWPROC) (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (P PFNGLBINDVERTEXBUFFERPROC) (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (P PFNGLVERTEXATTRIBFORMATPROC) (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (P PFNGLVERTEXATTRIBIFORMATPROC) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (P PFNGLVERTEXATTRIBLFORMATPROC) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (P PFNGLVERTEXATTRIBBINDINGPROC) (GLuint attribindex, GLuint bindingindex);
typedef void (P PFNGLVERTEXBINDINGDIVISORPROC) (GLuint bindingindex, GLuint divisor);
typedef void (P PFNGLDEBUGMESSAGECONTROLPROC) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
typedef void (P PFNGLDEBUGMESSAGEINSERTPROC) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
typedef void (P PFNGLDEBUGMESSAGECALLBACKPROC) (GLDEBUGPROC callback, const void *userParam);
typedef GLuint (P PFNGLGETDEBUGMESSAGELOGPROC) (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
typedef void (P PFNGLPUSHDEBUGGROUPPROC) (GLenum source, GLuint id, GLsizei length, const GLchar *message);
typedef void (P PFNGLPOPDEBUGGROUPPROC) (void);
typedef void (P PFNGLOBJECTLABELPROC) (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
typedef void (P PFNGLGETOBJECTLABELPROC) (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (P PFNGLOBJECTPTRLABELPROC) (const void *ptr, GLsizei length, const GLchar *label);
typedef void (P PFNGLGETOBJECTPTRLABELPROC) (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
#ifdef GL_GLEXT_PROTOTYPES */
extern void  glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
extern void  glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
extern void  glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
extern void  glDispatchComputeIndirect (GLintptr indirect);
extern void  glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
extern void  glFramebufferParameteri (GLenum target, GLenum pname, GLint param);
extern void  glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint *params);
extern void  glGetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 *params);
extern void  glInvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
extern void  glInvalidateTexImage (GLuint texture, GLint level);
extern void  glInvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length);
extern void  glInvalidateBufferData (GLuint buffer);
extern void  glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments);
extern void  glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glMultiDrawArraysIndirect (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
extern void  glMultiDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
extern void  glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint *params);
extern GLuint  glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar *name);
extern void  glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
extern void  glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei count, GLsizei *length, GLint *params);
extern GLint  glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar *name);
extern GLint  glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar *name);
extern void  glShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
extern void  glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
extern void  glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
extern void  glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
extern void  glTextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
extern void  glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
extern void  glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
extern void  glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
extern void  glVertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
extern void  glVertexAttribBinding (GLuint attribindex, GLuint bindingindex);
extern void  glVertexBindingDivisor (GLuint bindingindex, GLuint divisor);
extern void  glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
extern void  glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
extern void  glDebugMessageCallback (GLDEBUGPROC callback, const void *userParam);
extern GLuint  glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
extern void  glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar *message);
extern void  glPopDebugGroup (void);
extern void  glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
extern void  glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
extern void  glObjectPtrLabel (const void *ptr, GLsizei length, const GLchar *label);
extern void  glGetObjectPtrLabel (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
#endif
#endif /* GL_VERSION_4_3 */

#ifndef GL_VERSION_4_4
#define GL_VERSION_4_4 1
#define GL_MAX_VERTEX_ATTRIB_STRIDE       0x82E5
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED 0x8221
#define GL_TEXTURE_BUFFER_BINDING         0x8C2A
#define GL_MAP_PERSISTENT_BIT             0x0040
#define GL_MAP_COHERENT_BIT               0x0080
#define GL_DYNAMIC_STORAGE_BIT            0x0100
#define GL_CLIENT_STORAGE_BIT             0x0200
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT 0x00004000
#define GL_BUFFER_IMMUTABLE_STORAGE       0x821F
#define GL_BUFFER_STORAGE_FLAGS           0x8220
#define GL_CLEAR_TEXTURE                  0x9365
#define GL_LOCATION_COMPONENT             0x934A
#define GL_TRANSFORM_FEEDBACK_BUFFER_INDEX 0x934B
#define GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE 0x934C
#define GL_QUERY_BUFFER                   0x9192
#define GL_QUERY_BUFFER_BARRIER_BIT       0x00008000
#define GL_QUERY_BUFFER_BINDING           0x9193
#define GL_QUERY_RESULT_NO_WAIT           0x9194
#define GL_MIRROR_CLAMP_TO_EDGE           0x8743
/*typedef void (P PFNGLBUFFERSTORAGEPROC) (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
typedef void (P PFNGLCLEARTEXIMAGEPROC) (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
typedef void (P PFNGLCLEARTEXSUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
typedef void (P PFNGLBINDBUFFERSBASEPROC) (GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
typedef void (P PFNGLBINDBUFFERSRANGEPROC) (GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
typedef void (P PFNGLBINDTEXTURESPROC) (GLuint first, GLsizei count, const GLuint *textures);
typedef void (P PFNGLBINDSAMPLERSPROC) (GLuint first, GLsizei count, const GLuint *samplers);
typedef void (P PFNGLBINDIMAGETEXTURESPROC) (GLuint first, GLsizei count, const GLuint *textures);
typedef void (P PFNGLBINDVERTEXBUFFERSPROC) (GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
#ifdef GL_GLEXT_PROTOTYPES
extern void  glBufferStorage (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
extern void  glClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
extern void  glClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
extern void  glBindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
extern void  glBindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
extern void  glBindTextures (GLuint first, GLsizei count, const GLuint *textures);
extern void  glBindSamplers (GLuint first, GLsizei count, const GLuint *samplers);
extern void  glBindImageTextures (GLuint first, GLsizei count, const GLuint *textures);
extern void  glBindVertexBuffers (GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
#endif */
#endif /* GL_VERSION_4_4 */

#ifndef GL_VERSION_4_5
#define GL_VERSION_4_5 1
#define GL_CONTEXT_LOST                   0x0507
#define GL_NEGATIVE_ONE_TO_ONE            0x935E
#define GL_ZERO_TO_ONE                    0x935F
#define GL_CLIP_ORIGIN                    0x935C
#define GL_CLIP_DEPTH_MODE                0x935D
#define GL_QUERY_WAIT_INVERTED            0x8E17
#define GL_QUERY_NO_WAIT_INVERTED         0x8E18
#define GL_QUERY_BY_REGION_WAIT_INVERTED  0x8E19
#define GL_QUERY_BY_REGION_NO_WAIT_INVERTED 0x8E1A
#define GL_MAX_CULL_DISTANCES             0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES 0x82FA
#define GL_TEXTURE_TARGET                 0x1006
#define GL_QUERY_TARGET                   0x82EA
#define GL_GUILTY_CONTEXT_RESET           0x8253
#define GL_INNOCENT_CONTEXT_RESET         0x8254
#define GL_UNKNOWN_CONTEXT_RESET          0x8255
#define GL_RESET_NOTIFICATION_STRATEGY    0x8256
#define GL_LOSE_CONTEXT_ON_RESET          0x8252
#define GL_NO_RESET_NOTIFICATION          0x8261
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT 0x00000004
#define GL_COLOR_TABLE                    0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE   0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE  0x80D2
#define GL_PROXY_COLOR_TABLE              0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE 0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE 0x80D5
#define GL_CONVOLUTION_1D                 0x8010
#define GL_CONVOLUTION_2D                 0x8011
#define GL_SEPARABLE_2D                   0x8012
#define GL_HISTOGRAM                      0x8024
#define GL_PROXY_HISTOGRAM                0x8025
#define GL_MINMAX                         0x802E
#define GL_CONTEXT_RELEASE_BEHAVIOR       0x82FB
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH 0x82FC
/*typedef void (P PFNGLCLIPCONTROLPROC) (GLenum origin, GLenum depth);
typedef void (P PFNGLCREATETRANSFORMFEEDBACKSPROC) (GLsizei n, GLuint *ids);
typedef void (P PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) (GLuint xfb, GLuint index, GLuint buffer);
typedef void (P PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (P PFNGLGETTRANSFORMFEEDBACKIVPROC) (GLuint xfb, GLenum pname, GLint *param);
typedef void (P PFNGLGETTRANSFORMFEEDBACKI_VPROC) (GLuint xfb, GLenum pname, GLuint index, GLint *param);
typedef void (P PFNGLGETTRANSFORMFEEDBACKI64_VPROC) (GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
typedef void (P PFNGLCREATEBUFFERSPROC) (GLsizei n, GLuint *buffers);
typedef void (P PFNGLNAMEDBUFFERSTORAGEPROC) (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
typedef void (P PFNGLNAMEDBUFFERDATAPROC) (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
typedef void (P PFNGLNAMEDBUFFERSUBDATAPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
typedef void (P PFNGLCOPYNAMEDBUFFERSUBDATAPROC) (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (P PFNGLCLEARNAMEDBUFFERDATAPROC) (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
typedef void (P PFNGLCLEARNAMEDBUFFERSUBDATAPROC) (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
typedef void *(P PFNGLMAPNAMEDBUFFERPROC) (GLuint buffer, GLenum access);
typedef void *(P PFNGLMAPNAMEDBUFFERRANGEPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef GLboolean (P PFNGLUNMAPNAMEDBUFFERPROC) (GLuint buffer);
typedef void (P PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (P PFNGLGETNAMEDBUFFERPARAMETERIVPROC) (GLuint buffer, GLenum pname, GLint *params);
typedef void (P PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) (GLuint buffer, GLenum pname, GLint64 *params);
typedef void (P PFNGLGETNAMEDBUFFERPOINTERVPROC) (GLuint buffer, GLenum pname, void **params);
typedef void (P PFNGLGETNAMEDBUFFERSUBDATAPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
typedef void (P PFNGLCREATEFRAMEBUFFERSPROC) (GLsizei n, GLuint *framebuffers);
typedef void (P PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (P PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) (GLuint framebuffer, GLenum pname, GLint param);
typedef void (P PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
typedef void (P PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (P PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) (GLuint framebuffer, GLenum buf);
typedef void (P PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) (GLuint framebuffer, GLsizei n, const GLenum *bufs);
typedef void (P PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) (GLuint framebuffer, GLenum src);
typedef void (P PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
typedef void (P PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (P PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
typedef void (P PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
typedef void (P PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
typedef void (P PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef void (P PFNGLBLITNAMEDFRAMEBUFFERPROC) (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef GLenum (P PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) (GLuint framebuffer, GLenum target);
typedef void (P PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) (GLuint framebuffer, GLenum pname, GLint *param);
typedef void (P PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
typedef void (P PFNGLCREATERENDERBUFFERSPROC) (GLsizei n, GLuint *renderbuffers);
typedef void (P PFNGLNAMEDRENDERBUFFERSTORAGEPROC) (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (P PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (P PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) (GLuint renderbuffer, GLenum pname, GLint *params);
typedef void (P PFNGLCREATETEXTURESPROC) (GLenum target, GLsizei n, GLuint *textures);
typedef void (P PFNGLTEXTUREBUFFERPROC) (GLuint texture, GLenum internalformat, GLuint buffer);
typedef void (P PFNGLTEXTUREBUFFERRANGEPROC) (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (P PFNGLTEXTURESTORAGE1DPROC) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (P PFNGLTEXTURESTORAGE2DPROC) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (P PFNGLTEXTURESTORAGE3DPROC) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (P PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (P PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (P PFNGLTEXTURESUBIMAGE1DPROC) (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
typedef void (P PFNGLTEXTURESUBIMAGE2DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (P PFNGLTEXTURESUBIMAGE3DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (P PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
typedef void (P PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (P PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (P PFNGLCOPYTEXTURESUBIMAGE1DPROC) (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (P PFNGLCOPYTEXTURESUBIMAGE2DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (P PFNGLCOPYTEXTURESUBIMAGE3DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (P PFNGLTEXTUREPARAMETERFPROC) (GLuint texture, GLenum pname, GLfloat param);
typedef void (P PFNGLTEXTUREPARAMETERFVPROC) (GLuint texture, GLenum pname, const GLfloat *param);
typedef void (P PFNGLTEXTUREPARAMETERIPROC) (GLuint texture, GLenum pname, GLint param);
typedef void (P PFNGLTEXTUREPARAMETERIIVPROC) (GLuint texture, GLenum pname, const GLint *params);
typedef void (P PFNGLTEXTUREPARAMETERIUIVPROC) (GLuint texture, GLenum pname, const GLuint *params);
typedef void (P PFNGLTEXTUREPARAMETERIVPROC) (GLuint texture, GLenum pname, const GLint *param);
typedef void (P PFNGLGENERATETEXTUREMIPMAPPROC) (GLuint texture);
typedef void (P PFNGLBINDTEXTUREUNITPROC) (GLuint unit, GLuint texture);
typedef void (P PFNGLGETTEXTUREIMAGEPROC) (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
typedef void (P PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) (GLuint texture, GLint level, GLsizei bufSize, void *pixels);
typedef void (P PFNGLGETTEXTURELEVELPARAMETERFVPROC) (GLuint texture, GLint level, GLenum pname, GLfloat *params);
typedef void (P PFNGLGETTEXTURELEVELPARAMETERIVPROC) (GLuint texture, GLint level, GLenum pname, GLint *params);
typedef void (P PFNGLGETTEXTUREPARAMETERFVPROC) (GLuint texture, GLenum pname, GLfloat *params);
typedef void (P PFNGLGETTEXTUREPARAMETERIIVPROC) (GLuint texture, GLenum pname, GLint *params);
typedef void (P PFNGLGETTEXTUREPARAMETERIUIVPROC) (GLuint texture, GLenum pname, GLuint *params);
typedef void (P PFNGLGETTEXTUREPARAMETERIVPROC) (GLuint texture, GLenum pname, GLint *params);
typedef void (P PFNGLCREATEVERTEXARRAYSPROC) (GLsizei n, GLuint *arrays);
typedef void (P PFNGLDISABLEVERTEXARRAYATTRIBPROC) (GLuint vaobj, GLuint index);
typedef void (P PFNGLENABLEVERTEXARRAYATTRIBPROC) (GLuint vaobj, GLuint index);
typedef void (P PFNGLVERTEXARRAYELEMENTBUFFERPROC) (GLuint vaobj, GLuint buffer);
typedef void (P PFNGLVERTEXARRAYVERTEXBUFFERPROC) (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (P PFNGLVERTEXARRAYVERTEXBUFFERSPROC) (GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
typedef void (P PFNGLVERTEXARRAYATTRIBBINDINGPROC) (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
typedef void (P PFNGLVERTEXARRAYATTRIBFORMATPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (P PFNGLVERTEXARRAYATTRIBIFORMATPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (P PFNGLVERTEXARRAYATTRIBLFORMATPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (P PFNGLVERTEXARRAYBINDINGDIVISORPROC) (GLuint vaobj, GLuint bindingindex, GLuint divisor);
typedef void (P PFNGLGETVERTEXARRAYIVPROC) (GLuint vaobj, GLenum pname, GLint *param);
typedef void (P PFNGLGETVERTEXARRAYINDEXEDIVPROC) (GLuint vaobj, GLuint index, GLenum pname, GLint *param);
typedef void (P PFNGLGETVERTEXARRAYINDEXED64IVPROC) (GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
typedef void (P PFNGLCREATESAMPLERSPROC) (GLsizei n, GLuint *samplers);
typedef void (P PFNGLCREATEPROGRAMPIPELINESPROC) (GLsizei n, GLuint *pipelines);
typedef void (P PFNGLCREATEQUERIESPROC) (GLenum target, GLsizei n, GLuint *ids);
typedef void (P PFNGLGETQUERYBUFFEROBJECTI64VPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (P PFNGLGETQUERYBUFFEROBJECTIVPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (P PFNGLGETQUERYBUFFEROBJECTUI64VPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (P PFNGLGETQUERYBUFFEROBJECTUIVPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (P PFNGLMEMORYBARRIERBYREGIONPROC) (GLbitfield barriers);
typedef void (P PFNGLGETTEXTURESUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
typedef void (P PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
typedef GLenum (P PFNGLGETGRAPHICSRESETSTATUSPROC) (void);
typedef void (P PFNGLGETNCOMPRESSEDTEXIMAGEPROC) (GLenum target, GLint lod, GLsizei bufSize, void *pixels);
typedef void (P PFNGLGETNTEXIMAGEPROC) (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
typedef void (P PFNGLGETNUNIFORMDVPROC) (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
typedef void (P PFNGLGETNUNIFORMFVPROC) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
typedef void (P PFNGLGETNUNIFORMIVPROC) (GLuint program, GLint location, GLsizei bufSize, GLint *params);
typedef void (P PFNGLGETNUNIFORMUIVPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
typedef void (P PFNGLREADNPIXELSPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
typedef void (P PFNGLGETNMAPDVPROC) (GLenum target, GLenum query, GLsizei bufSize, GLdouble *v);
typedef void (P PFNGLGETNMAPFVPROC) (GLenum target, GLenum query, GLsizei bufSize, GLfloat *v);
typedef void (P PFNGLGETNMAPIVPROC) (GLenum target, GLenum query, GLsizei bufSize, GLint *v);
typedef void (P PFNGLGETNPIXELMAPFVPROC) (GLenum map, GLsizei bufSize, GLfloat *values);
typedef void (P PFNGLGETNPIXELMAPUIVPROC) (GLenum map, GLsizei bufSize, GLuint *values);
typedef void (P PFNGLGETNPIXELMAPUSVPROC) (GLenum map, GLsizei bufSize, GLushort *values);
typedef void (P PFNGLGETNPOLYGONSTIPPLEPROC) (GLsizei bufSize, GLubyte *pattern);
typedef void (P PFNGLGETNCOLORTABLEPROC) (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table);
typedef void (P PFNGLGETNCONVOLUTIONFILTERPROC) (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image);
typedef void (P PFNGLGETNSEPARABLEFILTERPROC) (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span);
typedef void (P PFNGLGETNHISTOGRAMPROC) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
typedef void (P PFNGLGETNMINMAXPROC) (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
typedef void (P PFNGLTEXTUREBARRIERPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES */
extern void  glClipControl (GLenum origin, GLenum depth);
extern void  glCreateTransformFeedbacks (GLsizei n, GLuint *ids);
extern void  glTransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer);
extern void  glTransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
extern void  glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint *param);
extern void  glGetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint *param);
extern void  glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
extern void  glCreateBuffers (GLsizei n, GLuint *buffers);
extern void  glNamedBufferStorage (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
extern void  glNamedBufferData (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
extern void  glNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
extern void  glCopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
extern void  glClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
extern void  glClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
extern void * glMapNamedBuffer (GLuint buffer, GLenum access);
extern void * glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
extern GLboolean  glUnmapNamedBuffer (GLuint buffer);
extern void  glFlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length);
extern void  glGetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint *params);
extern void  glGetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64 *params);
extern void  glGetNamedBufferPointerv (GLuint buffer, GLenum pname, void **params);
extern void  glGetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
extern void  glCreateFramebuffers (GLsizei n, GLuint *framebuffers);
extern void  glNamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern void  glNamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param);
extern void  glNamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
extern void  glNamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
extern void  glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf);
extern void  glNamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum *bufs);
extern void  glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum src);
extern void  glInvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
extern void  glInvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
extern void  glClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
extern void  glClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
extern void  glClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
extern void  glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
extern GLenum  glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target);
extern void  glGetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint *param);
extern void  glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
extern void  glCreateRenderbuffers (GLsizei n, GLuint *renderbuffers);
extern void  glNamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
extern void  glNamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
extern void  glGetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint *params);
extern void  glCreateTextures (GLenum target, GLsizei n, GLuint *textures);
extern void  glTextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer);
extern void  glTextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
extern void  glTextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
extern void  glTextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
extern void  glTextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
extern void  glTextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
extern void  glTextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
extern void  glTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
extern void  glTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
extern void  glTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
extern void  glCompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
extern void  glCompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
extern void  glCompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
extern void  glCopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
extern void  glCopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glCopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glTextureParameterf (GLuint texture, GLenum pname, GLfloat param);
extern void  glTextureParameterfv (GLuint texture, GLenum pname, const GLfloat *param);
extern void  glTextureParameteri (GLuint texture, GLenum pname, GLint param);
extern void  glTextureParameterIiv (GLuint texture, GLenum pname, const GLint *params);
extern void  glTextureParameterIuiv (GLuint texture, GLenum pname, const GLuint *params);
extern void  glTextureParameteriv (GLuint texture, GLenum pname, const GLint *param);
extern void  glGenerateTextureMipmap (GLuint texture);
extern void  glBindTextureUnit (GLuint unit, GLuint texture);
extern void  glGetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
extern void  glGetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void *pixels);
extern void  glGetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat *params);
extern void  glGetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint *params);
extern void  glGetTextureParameterfv (GLuint texture, GLenum pname, GLfloat *params);
extern void  glGetTextureParameterIiv (GLuint texture, GLenum pname, GLint *params);
extern void  glGetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint *params);
extern void  glGetTextureParameteriv (GLuint texture, GLenum pname, GLint *params);
extern void  glCreateVertexArrays (GLsizei n, GLuint *arrays);
extern void  glDisableVertexArrayAttrib (GLuint vaobj, GLuint index);
extern void  glEnableVertexArrayAttrib (GLuint vaobj, GLuint index);
extern void  glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer);
extern void  glVertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
extern void  glVertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
extern void  glVertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
extern void  glVertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
extern void  glVertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
extern void  glVertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
extern void  glVertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor);
extern void  glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint *param);
extern void  glGetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint *param);
extern void  glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
extern void  glCreateSamplers (GLsizei n, GLuint *samplers);
extern void  glCreateProgramPipelines (GLsizei n, GLuint *pipelines);
extern void  glCreateQueries (GLenum target, GLsizei n, GLuint *ids);
extern void  glGetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
extern void  glGetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
extern void  glGetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
extern void  glGetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
extern void  glMemoryBarrierByRegion (GLbitfield barriers);
extern void  glGetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
extern void  glGetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
extern GLenum  glGetGraphicsResetStatus (void);
extern void  glGetnCompressedTexImage (GLenum target, GLint lod, GLsizei bufSize, void *pixels);
extern void  glGetnTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
extern void  glGetnUniformdv (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
extern void  glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
extern void  glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint *params);
extern void  glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
extern void  glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
extern void  glGetnMapdv (GLenum target, GLenum query, GLsizei bufSize, GLdouble *v);
extern void  glGetnMapfv (GLenum target, GLenum query, GLsizei bufSize, GLfloat *v);
extern void  glGetnMapiv (GLenum target, GLenum query, GLsizei bufSize, GLint *v);
extern void  glGetnPixelMapfv (GLenum map, GLsizei bufSize, GLfloat *values);
extern void  glGetnPixelMapuiv (GLenum map, GLsizei bufSize, GLuint *values);
extern void  glGetnPixelMapusv (GLenum map, GLsizei bufSize, GLushort *values);
extern void  glGetnPolygonStipple (GLsizei bufSize, GLubyte *pattern);
extern void  glGetnColorTable (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table);
extern void  glGetnConvolutionFilter (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image);
extern void  glGetnSeparableFilter (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span);
extern void  glGetnHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
extern void  glGetnMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
extern void  glTextureBarrier (void);
#endif
#endif /* GL_VERSION_4_5 */

#ifndef GL_VERSION_4_6
#define GL_VERSION_4_6 1
#define GL_SHADER_BINARY_FORMAT_SPIR_V    0x9551
#define GL_SPIR_V_BINARY                  0x9552
#define GL_PARAMETER_BUFFER               0x80EE
#define GL_PARAMETER_BUFFER_BINDING       0x80EF
#define GL_CONTEXT_FLAG_NO_ERROR_BIT      0x00000008
#define GL_VERTICES_SUBMITTED             0x82EE
#define GL_PRIMITIVES_SUBMITTED           0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS      0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES    0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS 0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED 0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS    0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS     0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES      0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES     0x82F7
#define GL_POLYGON_OFFSET_CLAMP           0x8E1B
#define GL_SPIR_V_EXTENSIONS              0x9553
#define GL_NUM_SPIR_V_EXTENSIONS          0x9554
#define GL_TEXTURE_MAX_ANISOTROPY         0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY     0x84FF
#define GL_TRANSFORM_FEEDBACK_OVERFLOW    0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW 0x82ED
/*typedef void (P PFNGLSPECIALIZESHADERPROC) (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
typedef void (P PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC) (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (P PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC) (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (P PFNGLPOLYGONOFFSETCLAMPPROC) (GLfloat factor, GLfloat units, GLfloat clamp);
#ifdef GL_GLEXT_PROTOTYPES*/
extern void  glSpecializeShader (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
extern void  glMultiDrawArraysIndirectCount (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
extern void  glMultiDrawElementsIndirectCount (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
extern void  glPolygonOffsetClamp (GLfloat factor, GLfloat units, GLfloat clamp);
#endif
#endif /* GL_VERSION_4_6 */

#ifndef GL_ARB_ES2_compatibility
#define GL_ARB_ES2_compatibility 1
#endif /* GL_ARB_ES2_compatibility */

#ifndef GL_ARB_ES3_1_compatibility
#define GL_ARB_ES3_1_compatibility 1
#endif /* GL_ARB_ES3_1_compatibility */

#ifndef GL_ARB_ES3_2_compatibility
#define GL_ARB_ES3_2_compatibility 1
#define GL_PRIMITIVE_BOUNDING_BOX_ARB     0x92BE
#define GL_MULTISAMPLE_LINE_WIDTH_RANGE_ARB 0x9381
#define GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY_ARB 0x9382
extern void  glPrimitiveBoundingBoxARB (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
#endif
#endif /* GL_ARB_ES3_2_compatibility */

#ifndef GL_ARB_ES3_compatibility
#define GL_ARB_ES3_compatibility 1
#endif /* GL_ARB_ES3_compatibility */

#ifndef GL_ARB_arrays_of_arrays
#define GL_ARB_arrays_of_arrays 1
#endif /* GL_ARB_arrays_of_arrays */

#ifndef GL_ARB_base_instance
#define GL_ARB_base_instance 1
#endif /* GL_ARB_base_instance */

#ifndef GL_ARB_bindless_texture
#define GL_ARB_bindless_texture 1
//typedef khronos_uint64_t GLuint64EXT;
#define GL_UNSIGNED_INT64_ARB             0x140F
extern GLuint64  glGetTextureHandleARB (GLuint texture);
extern GLuint64  glGetTextureSamplerHandleARB (GLuint texture, GLuint sampler);
extern void  glMakeTextureHandleResidentARB (GLuint64 handle);
extern void  glMakeTextureHandleNonResidentARB (GLuint64 handle);
extern GLuint64  glGetImageHandleARB (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
extern void  glMakeImageHandleResidentARB (GLuint64 handle, GLenum access);
extern void  glMakeImageHandleNonResidentARB (GLuint64 handle);
extern void  glUniformHandleui64ARB (GLint location, GLuint64 value);
extern void  glUniformHandleui64vARB (GLint location, GLsizei count, const GLuint64 *value);
extern void  glProgramUniformHandleui64ARB (GLuint program, GLint location, GLuint64 value);
extern void  glProgramUniformHandleui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 *values);
extern GLboolean  glIsTextureHandleResidentARB (GLuint64 handle);
extern GLboolean  glIsImageHandleResidentARB (GLuint64 handle);
extern void  glVertexAttribL1ui64ARB (GLuint index, GLuint64EXT x);
extern void  glVertexAttribL1ui64vARB (GLuint index, const GLuint64EXT *v);
extern void  glGetVertexAttribLui64vARB (GLuint index, GLenum pname, GLuint64EXT *params);
#endif
#endif /* GL_ARB_bindless_texture */

#ifndef GL_ARB_blend_func_extended
#define GL_ARB_blend_func_extended 1
#endif /* GL_ARB_blend_func_extended */

#ifndef GL_ARB_buffer_storage
#define GL_ARB_buffer_storage 1
#endif /* GL_ARB_buffer_storage */

#ifndef GL_ARB_cl_event
#define GL_ARB_cl_event 1
struct _cl_context;
struct _cl_event;
#define GL_SYNC_CL_EVENT_ARB              0x8240
#define GL_SYNC_CL_EVENT_COMPLETE_ARB     0x8241
//typedef GLsync (P PFNGLCREATESYNCFROMCLEVENTARBPROC) (struct _cl_context *context, struct _cl_event *event, GLbitfield flags);
#ifdef GL_GLEXT_PROTOTYPES
extern GLsync  glCreateSyncFromCLeventARB (struct _cl_context *context, struct _cl_event *event, GLbitfield flags);
#endif
#endif /* GL_ARB_cl_event */

#ifndef GL_ARB_clear_buffer_object
#define GL_ARB_clear_buffer_object 1
#endif /* GL_ARB_clear_buffer_object */

#ifndef GL_ARB_clear_texture
#define GL_ARB_clear_texture 1
#endif /* GL_ARB_clear_texture */

#ifndef GL_ARB_clip_control
#define GL_ARB_clip_control 1
#endif /* GL_ARB_clip_control */

#ifndef GL_ARB_color_buffer_float
#define GL_ARB_color_buffer_float 1
#define GL_RGBA_FLOAT_MODE_ARB            0x8820
#define GL_CLAMP_VERTEX_COLOR_ARB         0x891A
#define GL_CLAMP_FRAGMENT_COLOR_ARB       0x891B
#define GL_CLAMP_READ_COLOR_ARB           0x891C
#define GL_FIXED_ONLY_ARB                 0x891D
extern void  glClampColorARB (GLenum target, GLenum clamp);
#endif
#endif /* GL_ARB_color_buffer_float */

#ifndef GL_ARB_compatibility
#define GL_ARB_compatibility 1
#endif /* GL_ARB_compatibility */

#ifndef GL_ARB_compressed_texture_pixel_storage
#define GL_ARB_compressed_texture_pixel_storage 1
#endif /* GL_ARB_compressed_texture_pixel_storage */

#ifndef GL_ARB_compute_shader
#define GL_ARB_compute_shader 1
#endif /* GL_ARB_compute_shader */

#ifndef GL_ARB_compute_variable_group_size
#define GL_ARB_compute_variable_group_size 1
#define GL_MAX_COMPUTE_VARIABLE_GROUP_INVOCATIONS_ARB 0x9344
#define GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB 0x90EB
#define GL_MAX_COMPUTE_VARIABLE_GROUP_SIZE_ARB 0x9345
#define GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB 0x91BF
//typedef void (P PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
#ifdef GL_GLEXT_PROTOTYPES
extern void  glDispatchComputeGroupSizeARB (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
#endif
#endif /* GL_ARB_compute_variable_group_size */

#ifndef GL_ARB_conditional_render_inverted
#define GL_ARB_conditional_render_inverted 1
#endif /* GL_ARB_conditional_render_inverted */

#ifndef GL_ARB_conservative_depth
#define GL_ARB_conservative_depth 1
#endif /* GL_ARB_conservative_depth */

#ifndef GL_ARB_copy_buffer
#define GL_ARB_copy_buffer 1
#endif /* GL_ARB_copy_buffer */

#ifndef GL_ARB_copy_image
#define GL_ARB_copy_image 1
#endif /* GL_ARB_copy_image */

#ifndef GL_ARB_cull_distance
#define GL_ARB_cull_distance 1
#endif /* GL_ARB_cull_distance */

#ifndef GL_ARB_debug_output
#define GL_ARB_debug_output 1
typedef void (  *GLDEBUGPROCARB)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB   0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_ARB    0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_ARB  0x8245
#define GL_DEBUG_SOURCE_API_ARB           0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_ARB 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_ARB   0x8249
#define GL_DEBUG_SOURCE_APPLICATION_ARB   0x824A
#define GL_DEBUG_SOURCE_OTHER_ARB         0x824B
#define GL_DEBUG_TYPE_ERROR_ARB           0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB 0x824E
#define GL_DEBUG_TYPE_PORTABILITY_ARB     0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_ARB     0x8250
#define GL_DEBUG_TYPE_OTHER_ARB           0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH_ARB   0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_ARB  0x9144
#define GL_DEBUG_LOGGED_MESSAGES_ARB      0x9145
#define GL_DEBUG_SEVERITY_HIGH_ARB        0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_ARB      0x9147
#define GL_DEBUG_SEVERITY_LOW_ARB         0x9148
extern void  glDebugMessageControlARB (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
extern void  glDebugMessageInsertARB (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
extern void  glDebugMessageCallbackARB (GLDEBUGPROCARB callback, const void *userParam);
extern GLuint  glGetDebugMessageLogARB (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
#endif
#endif /* GL_ARB_debug_output */

#ifndef GL_ARB_depth_buffer_float
#define GL_ARB_depth_buffer_float 1
#endif /* GL_ARB_depth_buffer_float */

#ifndef GL_ARB_depth_clamp
#define GL_ARB_depth_clamp 1
#endif /* GL_ARB_depth_clamp */

#ifndef GL_ARB_depth_texture
#define GL_ARB_depth_texture 1
#define GL_DEPTH_COMPONENT16_ARB          0x81A5
#define GL_DEPTH_COMPONENT24_ARB          0x81A6
#define GL_DEPTH_COMPONENT32_ARB          0x81A7
#define GL_TEXTURE_DEPTH_SIZE_ARB         0x884A
#define GL_DEPTH_TEXTURE_MODE_ARB         0x884B
#endif /* GL_ARB_depth_texture */

#ifndef GL_ARB_derivative_control
#define GL_ARB_derivative_control 1
#endif /* GL_ARB_derivative_control */

#ifndef GL_ARB_direct_state_access
#define GL_ARB_direct_state_access 1
#endif /* GL_ARB_direct_state_access */

#ifndef GL_ARB_draw_buffers
#define GL_ARB_draw_buffers 1
#define GL_MAX_DRAW_BUFFERS_ARB           0x8824
#define GL_DRAW_BUFFER0_ARB               0x8825
#define GL_DRAW_BUFFER1_ARB               0x8826
#define GL_DRAW_BUFFER2_ARB               0x8827
#define GL_DRAW_BUFFER3_ARB               0x8828
#define GL_DRAW_BUFFER4_ARB               0x8829
#define GL_DRAW_BUFFER5_ARB               0x882A
#define GL_DRAW_BUFFER6_ARB               0x882B
#define GL_DRAW_BUFFER7_ARB               0x882C
#define GL_DRAW_BUFFER8_ARB               0x882D
#define GL_DRAW_BUFFER9_ARB               0x882E
#define GL_DRAW_BUFFER10_ARB              0x882F
#define GL_DRAW_BUFFER11_ARB              0x8830
#define GL_DRAW_BUFFER12_ARB              0x8831
#define GL_DRAW_BUFFER13_ARB              0x8832
#define GL_DRAW_BUFFER14_ARB              0x8833
#define GL_DRAW_BUFFER15_ARB              0x8834
extern void  glDrawBuffersARB (GLsizei n, const GLenum *bufs);
#endif
#endif /* GL_ARB_draw_buffers */

#ifndef GL_ARB_draw_buffers_blend
#define GL_ARB_draw_buffers_blend 1
extern void  glBlendEquationiARB (GLuint buf, GLenum mode);
extern void  glBlendEquationSeparateiARB (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
extern void  glBlendFunciARB (GLuint buf, GLenum src, GLenum dst);
extern void  glBlendFuncSeparateiARB (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
#endif
#endif /* GL_ARB_draw_buffers_blend */

#ifndef GL_ARB_draw_elements_base_vertex
#define GL_ARB_draw_elements_base_vertex 1
#endif /* GL_ARB_draw_elements_base_vertex */

#ifndef GL_ARB_draw_indirect
#define GL_ARB_draw_indirect 1
#endif /* GL_ARB_draw_indirect */

#ifndef GL_ARB_draw_instanced
#define GL_ARB_draw_instanced 1
extern void  glDrawArraysInstancedARB (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
extern void  glDrawElementsInstancedARB (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
#endif
#endif /* GL_ARB_draw_instanced */

#ifndef GL_ARB_enhanced_layouts
#define GL_ARB_enhanced_layouts 1
#endif /* GL_ARB_enhanced_layouts */

#ifndef GL_ARB_explicit_attrib_location
#define GL_ARB_explicit_attrib_location 1
#endif /* GL_ARB_explicit_attrib_location */

#ifndef GL_ARB_explicit_uniform_location
#define GL_ARB_explicit_uniform_location 1
#endif /* GL_ARB_explicit_uniform_location */

#ifndef GL_ARB_fragment_coord_conventions
#define GL_ARB_fragment_coord_conventions 1
#endif /* GL_ARB_fragment_coord_conventions */

#ifndef GL_ARB_fragment_layer_viewport
#define GL_ARB_fragment_layer_viewport 1
#endif /* GL_ARB_fragment_layer_viewport */

#ifndef GL_ARB_fragment_program
#define GL_ARB_fragment_program 1
#define GL_FRAGMENT_PROGRAM_ARB           0x8804
#define GL_PROGRAM_FORMAT_ASCII_ARB       0x8875
#define GL_PROGRAM_LENGTH_ARB             0x8627
#define GL_PROGRAM_FORMAT_ARB             0x8876
#define GL_PROGRAM_BINDING_ARB            0x8677
#define GL_PROGRAM_INSTRUCTIONS_ARB       0x88A0
#define GL_MAX_PROGRAM_INSTRUCTIONS_ARB   0x88A1
#define GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A2
#define GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A3
#define GL_PROGRAM_TEMPORARIES_ARB        0x88A4
#define GL_MAX_PROGRAM_TEMPORARIES_ARB    0x88A5
#define GL_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A6
#define GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A7
#define GL_PROGRAM_PARAMETERS_ARB         0x88A8
#define GL_MAX_PROGRAM_PARAMETERS_ARB     0x88A9
#define GL_PROGRAM_NATIVE_PARAMETERS_ARB  0x88AA
#define GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB 0x88AB
#define GL_PROGRAM_ATTRIBS_ARB            0x88AC
#define GL_MAX_PROGRAM_ATTRIBS_ARB        0x88AD
#define GL_PROGRAM_NATIVE_ATTRIBS_ARB     0x88AE
#define GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB 0x88AF
#define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB 0x88B4
#define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB 0x88B5
#define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB 0x88B6
#define GL_PROGRAM_ALU_INSTRUCTIONS_ARB   0x8805
#define GL_PROGRAM_TEX_INSTRUCTIONS_ARB   0x8806
#define GL_PROGRAM_TEX_INDIRECTIONS_ARB   0x8807
#define GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x8808
#define GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x8809
#define GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x880A
#define GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB 0x880B
#define GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB 0x880C
#define GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB 0x880D
#define GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x880E
#define GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x880F
#define GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x8810
#define GL_PROGRAM_STRING_ARB             0x8628
#define GL_PROGRAM_ERROR_POSITION_ARB     0x864B
#define GL_CURRENT_MATRIX_ARB             0x8641
#define GL_TRANSPOSE_CURRENT_MATRIX_ARB   0x88B7
#define GL_CURRENT_MATRIX_STACK_DEPTH_ARB 0x8640
#define GL_MAX_PROGRAM_MATRICES_ARB       0x862F
#define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB 0x862E
#define GL_MAX_TEXTURE_COORDS_ARB         0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_ARB    0x8872
#define GL_PROGRAM_ERROR_STRING_ARB       0x8874
#define GL_MATRIX0_ARB                    0x88C0
#define GL_MATRIX1_ARB                    0x88C1
#define GL_MATRIX2_ARB                    0x88C2
#define GL_MATRIX3_ARB                    0x88C3
#define GL_MATRIX4_ARB                    0x88C4
#define GL_MATRIX5_ARB                    0x88C5
#define GL_MATRIX6_ARB                    0x88C6
#define GL_MATRIX7_ARB                    0x88C7
#define GL_MATRIX8_ARB                    0x88C8
#define GL_MATRIX9_ARB                    0x88C9
#define GL_MATRIX10_ARB                   0x88CA
#define GL_MATRIX11_ARB                   0x88CB
#define GL_MATRIX12_ARB                   0x88CC
#define GL_MATRIX13_ARB                   0x88CD
#define GL_MATRIX14_ARB                   0x88CE
#define GL_MATRIX15_ARB                   0x88CF
#define GL_MATRIX16_ARB                   0x88D0
#define GL_MATRIX17_ARB                   0x88D1
#define GL_MATRIX18_ARB                   0x88D2
#define GL_MATRIX19_ARB                   0x88D3
#define GL_MATRIX20_ARB                   0x88D4
#define GL_MATRIX21_ARB                   0x88D5
#define GL_MATRIX22_ARB                   0x88D6
#define GL_MATRIX23_ARB                   0x88D7
#define GL_MATRIX24_ARB                   0x88D8
#define GL_MATRIX25_ARB                   0x88D9
#define GL_MATRIX26_ARB                   0x88DA
#define GL_MATRIX27_ARB                   0x88DB
#define GL_MATRIX28_ARB                   0x88DC
#define GL_MATRIX29_ARB                   0x88DD
#define GL_MATRIX30_ARB                   0x88DE
#define GL_MATRIX31_ARB                   0x88DF
extern void  glProgramStringARB (GLenum target, GLenum format, GLsizei len, const void *string);
extern void  glBindProgramARB (GLenum target, GLuint program);
extern void  glDeleteProgramsARB (GLsizei n, const GLuint *programs);
extern void  glGenProgramsARB (GLsizei n, GLuint *programs);
extern void  glProgramEnvParameter4dARB (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glProgramEnvParameter4dvARB (GLenum target, GLuint index, const GLdouble *params);
extern void  glProgramEnvParameter4fARB (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void  glProgramEnvParameter4fvARB (GLenum target, GLuint index, const GLfloat *params);
extern void  glProgramLocalParameter4dARB (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glProgramLocalParameter4dvARB (GLenum target, GLuint index, const GLdouble *params);
extern void  glProgramLocalParameter4fARB (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void  glProgramLocalParameter4fvARB (GLenum target, GLuint index, const GLfloat *params);
extern void  glGetProgramEnvParameterdvARB (GLenum target, GLuint index, GLdouble *params);
extern void  glGetProgramEnvParameterfvARB (GLenum target, GLuint index, GLfloat *params);
extern void  glGetProgramLocalParameterdvARB (GLenum target, GLuint index, GLdouble *params);
extern void  glGetProgramLocalParameterfvARB (GLenum target, GLuint index, GLfloat *params);
extern void  glGetProgramivARB (GLenum target, GLenum pname, GLint *params);
extern void  glGetProgramStringARB (GLenum target, GLenum pname, void *string);
extern GLboolean  glIsProgramARB (GLuint program);
#endif
#endif /* GL_ARB_fragment_program */

#ifndef GL_ARB_fragment_program_shadow
#define GL_ARB_fragment_program_shadow 1
#endif /* GL_ARB_fragment_program_shadow */

#ifndef GL_ARB_fragment_shader
#define GL_ARB_fragment_shader 1
#define GL_FRAGMENT_SHADER_ARB            0x8B30
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB 0x8B49
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB 0x8B8B
#endif /* GL_ARB_fragment_shader */

#ifndef GL_ARB_fragment_shader_interlock
#define GL_ARB_fragment_shader_interlock 1
#endif /* GL_ARB_fragment_shader_interlock */

#ifndef GL_ARB_framebuffer_no_attachments
#define GL_ARB_framebuffer_no_attachments 1
#endif /* GL_ARB_framebuffer_no_attachments */

#ifndef GL_ARB_framebuffer_object
#define GL_ARB_framebuffer_object 1
#endif /* GL_ARB_framebuffer_object */

#ifndef GL_ARB_framebuffer_sRGB
#define GL_ARB_framebuffer_sRGB 1
#endif /* GL_ARB_framebuffer_sRGB */

#ifndef GL_ARB_geometry_shader4
#define GL_ARB_geometry_shader4 1
#define GL_LINES_ADJACENCY_ARB            0x000A
#define GL_LINE_STRIP_ADJACENCY_ARB       0x000B
#define GL_TRIANGLES_ADJACENCY_ARB        0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_ARB   0x000D
#define GL_PROGRAM_POINT_SIZE_ARB         0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB 0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB 0x8DA9
#define GL_GEOMETRY_SHADER_ARB            0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_ARB      0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_ARB        0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_ARB       0x8DDC
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_ARB 0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_ARB 0x8DDE
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_ARB 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB 0x8DE1
#ifdef GL_GLEXT_PROTOTYPES
extern void  glProgramParameteriARB (GLuint program, GLenum pname, GLint value);
extern void  glFramebufferTextureARB (GLenum target, GLenum attachment, GLuint texture, GLint level);
extern void  glFramebufferTextureLayerARB (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
extern void  glFramebufferTextureFaceARB (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
#endif
#endif /* GL_ARB_geometry_shader4 */

#ifndef GL_ARB_get_program_binary
#define GL_ARB_get_program_binary 1
#endif /* GL_ARB_get_program_binary */

#ifndef GL_ARB_get_texture_sub_image
#define GL_ARB_get_texture_sub_image 1
#endif /* GL_ARB_get_texture_sub_image */

#ifndef GL_ARB_gl_spirv
#define GL_ARB_gl_spirv 1
#define GL_SHADER_BINARY_FORMAT_SPIR_V_ARB 0x9551
#define GL_SPIR_V_BINARY_ARB              0x9552
#ifdef GL_GLEXT_PROTOTYPES
extern void  glSpecializeShaderARB (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
#endif
#endif /* GL_ARB_gl_spirv */

#ifndef GL_ARB_gpu_shader5
#define GL_ARB_gpu_shader5 1
#endif /* GL_ARB_gpu_shader5 */

#ifndef GL_ARB_gpu_shader_fp64
#define GL_ARB_gpu_shader_fp64 1
#endif /* GL_ARB_gpu_shader_fp64 */

#ifndef GL_ARB_gpu_shader_int64
#define GL_ARB_gpu_shader_int64 1
#define GL_INT64_ARB                      0x140E
#define GL_INT64_VEC2_ARB                 0x8FE9
#define GL_INT64_VEC3_ARB                 0x8FEA
#define GL_INT64_VEC4_ARB                 0x8FEB
#define GL_UNSIGNED_INT64_VEC2_ARB        0x8FF5
#define GL_UNSIGNED_INT64_VEC3_ARB        0x8FF6
#define GL_UNSIGNED_INT64_VEC4_ARB        0x8FF7
extern void  glUniform1i64ARB (GLint location, GLint64 x);
extern void  glUniform2i64ARB (GLint location, GLint64 x, GLint64 y);
extern void  glUniform3i64ARB (GLint location, GLint64 x, GLint64 y, GLint64 z);
extern void  glUniform4i64ARB (GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
extern void  glUniform1i64vARB (GLint location, GLsizei count, const GLint64 *value);
extern void  glUniform2i64vARB (GLint location, GLsizei count, const GLint64 *value);
extern void  glUniform3i64vARB (GLint location, GLsizei count, const GLint64 *value);
extern void  glUniform4i64vARB (GLint location, GLsizei count, const GLint64 *value);
extern void  glUniform1ui64ARB (GLint location, GLuint64 x);
extern void  glUniform2ui64ARB (GLint location, GLuint64 x, GLuint64 y);
extern void  glUniform3ui64ARB (GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
extern void  glUniform4ui64ARB (GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
extern void  glUniform1ui64vARB (GLint location, GLsizei count, const GLuint64 *value);
extern void  glUniform2ui64vARB (GLint location, GLsizei count, const GLuint64 *value);
extern void  glUniform3ui64vARB (GLint location, GLsizei count, const GLuint64 *value);
extern void  glUniform4ui64vARB (GLint location, GLsizei count, const GLuint64 *value);
extern void  glGetUniformi64vARB (GLuint program, GLint location, GLint64 *params);
extern void  glGetUniformui64vARB (GLuint program, GLint location, GLuint64 *params);
extern void  glGetnUniformi64vARB (GLuint program, GLint location, GLsizei bufSize, GLint64 *params);
extern void  glGetnUniformui64vARB (GLuint program, GLint location, GLsizei bufSize, GLuint64 *params);
extern void  glProgramUniform1i64ARB (GLuint program, GLint location, GLint64 x);
extern void  glProgramUniform2i64ARB (GLuint program, GLint location, GLint64 x, GLint64 y);
extern void  glProgramUniform3i64ARB (GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z);
extern void  glProgramUniform4i64ARB (GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
extern void  glProgramUniform1i64vARB (GLuint program, GLint location, GLsizei count, const GLint64 *value);
extern void  glProgramUniform2i64vARB (GLuint program, GLint location, GLsizei count, const GLint64 *value);
extern void  glProgramUniform3i64vARB (GLuint program, GLint location, GLsizei count, const GLint64 *value);
extern void  glProgramUniform4i64vARB (GLuint program, GLint location, GLsizei count, const GLint64 *value);
extern void  glProgramUniform1ui64ARB (GLuint program, GLint location, GLuint64 x);
extern void  glProgramUniform2ui64ARB (GLuint program, GLint location, GLuint64 x, GLuint64 y);
extern void  glProgramUniform3ui64ARB (GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
extern void  glProgramUniform4ui64ARB (GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
extern void  glProgramUniform1ui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 *value);
extern void  glProgramUniform2ui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 *value);
extern void  glProgramUniform3ui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 *value);
extern void  glProgramUniform4ui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 *value);
#endif
#endif /* GL_ARB_gpu_shader_int64 */

#ifndef GL_ARB_half_float_pixel
#define GL_ARB_half_float_pixel 1
typedef khronos_uint16_t GLhalfARB;
#define GL_HALF_FLOAT_ARB                 0x140B
#endif /* GL_ARB_half_float_pixel */

#ifndef GL_ARB_half_float_vertex
#define GL_ARB_half_float_vertex 1
#endif /* GL_ARB_half_float_vertex */

#ifndef GL_ARB_imaging
#define GL_ARB_imaging 1
#define GL_CONVOLUTION_BORDER_MODE        0x8013
#define GL_CONVOLUTION_FILTER_SCALE       0x8014
#define GL_CONVOLUTION_FILTER_BIAS        0x8015
#define GL_REDUCE                         0x8016
#define GL_CONVOLUTION_FORMAT             0x8017
#define GL_CONVOLUTION_WIDTH              0x8018
#define GL_CONVOLUTION_HEIGHT             0x8019
#define GL_MAX_CONVOLUTION_WIDTH          0x801A
#define GL_MAX_CONVOLUTION_HEIGHT         0x801B
#define GL_POST_CONVOLUTION_RED_SCALE     0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE   0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE    0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE   0x801F
#define GL_POST_CONVOLUTION_RED_BIAS      0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS    0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS     0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS    0x8023
#define GL_HISTOGRAM_WIDTH                0x8026
#define GL_HISTOGRAM_FORMAT               0x8027
#define GL_HISTOGRAM_RED_SIZE             0x8028
#define GL_HISTOGRAM_GREEN_SIZE           0x8029
#define GL_HISTOGRAM_BLUE_SIZE            0x802A
#define GL_HISTOGRAM_ALPHA_SIZE           0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE       0x802C
#define GL_HISTOGRAM_SINK                 0x802D
#define GL_MINMAX_FORMAT                  0x802F
#define GL_MINMAX_SINK                    0x8030
#define GL_TABLE_TOO_LARGE                0x8031
#define GL_COLOR_MATRIX                   0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH       0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH   0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE    0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE  0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE   0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE  0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS     0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS   0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS    0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS   0x80BB
#define GL_COLOR_TABLE_SCALE              0x80D6
#define GL_COLOR_TABLE_BIAS               0x80D7
#define GL_COLOR_TABLE_FORMAT             0x80D8
#define GL_COLOR_TABLE_WIDTH              0x80D9
#define GL_COLOR_TABLE_RED_SIZE           0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE         0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE          0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE         0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE     0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE     0x80DF
#define GL_CONSTANT_BORDER                0x8151
#define GL_REPLICATE_BORDER               0x8153
#define GL_CONVOLUTION_BORDER_COLOR       0x8154
extern void  glColorTable (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table);
extern void  glColorTableParameterfv (GLenum target, GLenum pname, const GLfloat *params);
extern void  glColorTableParameteriv (GLenum target, GLenum pname, const GLint *params);
extern void  glCopyColorTable (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern void  glGetColorTable (GLenum target, GLenum format, GLenum type, void *table);
extern void  glGetColorTableParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void  glGetColorTableParameteriv (GLenum target, GLenum pname, GLint *params);
extern void  glColorSubTable (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data);
extern void  glCopyColorSubTable (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
extern void  glConvolutionFilter1D (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image);
extern void  glConvolutionFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image);
extern void  glConvolutionParameterf (GLenum target, GLenum pname, GLfloat params);
extern void  glConvolutionParameterfv (GLenum target, GLenum pname, const GLfloat *params);
extern void  glConvolutionParameteri (GLenum target, GLenum pname, GLint params);
extern void  glConvolutionParameteriv (GLenum target, GLenum pname, const GLint *params);
extern void  glCopyConvolutionFilter1D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern void  glCopyConvolutionFilter2D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, void *image);
extern void  glGetConvolutionParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void  glGetConvolutionParameteriv (GLenum target, GLenum pname, GLint *params);
extern void  glGetSeparableFilter (GLenum target, GLenum format, GLenum type, void *row, void *column, void *span);
extern void  glSeparableFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column);
extern void  glGetHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, void *values);
extern void  glGetHistogramParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void  glGetHistogramParameteriv (GLenum target, GLenum pname, GLint *params);
extern void  glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, void *values);
extern void  glGetMinmaxParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void  glGetMinmaxParameteriv (GLenum target, GLenum pname, GLint *params);
extern void  glHistogram (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
extern void  glMinmax (GLenum target, GLenum internalformat, GLboolean sink);
extern void  glResetHistogram (GLenum target);
extern void  glResetMinmax (GLenum target);
#endif
#endif /* GL_ARB_imaging */

#ifndef GL_ARB_indirect_parameters
#define GL_ARB_indirect_parameters 1
#define GL_PARAMETER_BUFFER_ARB           0x80EE
#define GL_PARAMETER_BUFFER_BINDING_ARB   0x80EF
extern void  glMultiDrawArraysIndirectCountARB (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
extern void  glMultiDrawElementsIndirectCountARB (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
#endif
#endif /* GL_ARB_indirect_parameters */

#ifndef GL_ARB_instanced_arrays
#define GL_ARB_instanced_arrays 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB 0x88FE
extern void  glVertexAttribDivisorARB (GLuint index, GLuint divisor);
#endif
#endif /* GL_ARB_instanced_arrays */

#ifndef GL_ARB_internalformat_query
#define GL_ARB_internalformat_query 1
#endif /* GL_ARB_internalformat_query */

#ifndef GL_ARB_internalformat_query2
#define GL_ARB_internalformat_query2 1
#define GL_SRGB_DECODE_ARB                0x8299
#define GL_VIEW_CLASS_EAC_R11             0x9383
#define GL_VIEW_CLASS_EAC_RG11            0x9384
#define GL_VIEW_CLASS_ETC2_RGB            0x9385
#define GL_VIEW_CLASS_ETC2_RGBA           0x9386
#define GL_VIEW_CLASS_ETC2_EAC_RGBA       0x9387
#define GL_VIEW_CLASS_ASTC_4x4_RGBA       0x9388
#define GL_VIEW_CLASS_ASTC_5x4_RGBA       0x9389
#define GL_VIEW_CLASS_ASTC_5x5_RGBA       0x938A
#define GL_VIEW_CLASS_ASTC_6x5_RGBA       0x938B
#define GL_VIEW_CLASS_ASTC_6x6_RGBA       0x938C
#define GL_VIEW_CLASS_ASTC_8x5_RGBA       0x938D
#define GL_VIEW_CLASS_ASTC_8x6_RGBA       0x938E
#define GL_VIEW_CLASS_ASTC_8x8_RGBA       0x938F
#define GL_VIEW_CLASS_ASTC_10x5_RGBA      0x9390
#define GL_VIEW_CLASS_ASTC_10x6_RGBA      0x9391
#define GL_VIEW_CLASS_ASTC_10x8_RGBA      0x9392
#define GL_VIEW_CLASS_ASTC_10x10_RGBA     0x9393
#define GL_VIEW_CLASS_ASTC_12x10_RGBA     0x9394
#define GL_VIEW_CLASS_ASTC_12x12_RGBA     0x9395
#endif /* GL_ARB_internalformat_query2 */

#ifndef GL_ARB_invalidate_subdata
#define GL_ARB_invalidate_subdata 1
#endif /* GL_ARB_invalidate_subdata */

#ifndef GL_ARB_map_buffer_alignment
#define GL_ARB_map_buffer_alignment 1
#endif /* GL_ARB_map_buffer_alignment */

#ifndef GL_ARB_map_buffer_range
#define GL_ARB_map_buffer_range 1
#endif /* GL_ARB_map_buffer_range */

#ifndef GL_ARB_matrix_palette
#define GL_ARB_matrix_palette 1
#define GL_MATRIX_PALETTE_ARB             0x8840
#define GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB 0x8841
#define GL_MAX_PALETTE_MATRICES_ARB       0x8842
#define GL_CURRENT_PALETTE_MATRIX_ARB     0x8843
#define GL_MATRIX_INDEX_ARRAY_ARB         0x8844
#define GL_CURRENT_MATRIX_INDEX_ARB       0x8845
#define GL_MATRIX_INDEX_ARRAY_SIZE_ARB    0x8846
#define GL_MATRIX_INDEX_ARRAY_TYPE_ARB    0x8847
#define GL_MATRIX_INDEX_ARRAY_STRIDE_ARB  0x8848
#define GL_MATRIX_INDEX_ARRAY_POINTER_ARB 0x8849
extern void  glCurrentPaletteMatrixARB (GLint index);
extern void  glMatrixIndexubvARB (GLint size, const GLubyte *indices);
extern void  glMatrixIndexusvARB (GLint size, const GLushort *indices);
extern void  glMatrixIndexuivARB (GLint size, const GLuint *indices);
extern void  glMatrixIndexPointerARB (GLint size, GLenum type, GLsizei stride, const void *pointer);
#endif
#endif /* GL_ARB_matrix_palette */

#ifndef GL_ARB_multi_bind
#define GL_ARB_multi_bind 1
#endif /* GL_ARB_multi_bind */

#ifndef GL_ARB_multi_draw_indirect
#define GL_ARB_multi_draw_indirect 1
#endif /* GL_ARB_multi_draw_indirect */

#ifndef GL_ARB_multisample
#define GL_ARB_multisample 1
#define GL_MULTISAMPLE_ARB                0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE_ARB   0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_ARB        0x809F
#define GL_SAMPLE_COVERAGE_ARB            0x80A0
#define GL_SAMPLE_BUFFERS_ARB             0x80A8
#define GL_SAMPLES_ARB                    0x80A9
#define GL_SAMPLE_COVERAGE_VALUE_ARB      0x80AA
#define GL_SAMPLE_COVERAGE_INVERT_ARB     0x80AB
#define GL_MULTISAMPLE_BIT_ARB            0x20000000
extern void  glSampleCoverageARB (GLfloat value, GLboolean invert);
#endif
#endif /* GL_ARB_multisample */

#ifndef GL_ARB_multitexture
#define GL_ARB_multitexture 1
#define GL_TEXTURE0_ARB                   0x84C0
#define GL_TEXTURE1_ARB                   0x84C1
#define GL_TEXTURE2_ARB                   0x84C2
#define GL_TEXTURE3_ARB                   0x84C3
#define GL_TEXTURE4_ARB                   0x84C4
#define GL_TEXTURE5_ARB                   0x84C5
#define GL_TEXTURE6_ARB                   0x84C6
#define GL_TEXTURE7_ARB                   0x84C7
#define GL_TEXTURE8_ARB                   0x84C8
#define GL_TEXTURE9_ARB                   0x84C9
#define GL_TEXTURE10_ARB                  0x84CA
#define GL_TEXTURE11_ARB                  0x84CB
#define GL_TEXTURE12_ARB                  0x84CC
#define GL_TEXTURE13_ARB                  0x84CD
#define GL_TEXTURE14_ARB                  0x84CE
#define GL_TEXTURE15_ARB                  0x84CF
#define GL_TEXTURE16_ARB                  0x84D0
#define GL_TEXTURE17_ARB                  0x84D1
#define GL_TEXTURE18_ARB                  0x84D2
#define GL_TEXTURE19_ARB                  0x84D3
#define GL_TEXTURE20_ARB                  0x84D4
#define GL_TEXTURE21_ARB                  0x84D5
#define GL_TEXTURE22_ARB                  0x84D6
#define GL_TEXTURE23_ARB                  0x84D7
#define GL_TEXTURE24_ARB                  0x84D8
#define GL_TEXTURE25_ARB                  0x84D9
#define GL_TEXTURE26_ARB                  0x84DA
#define GL_TEXTURE27_ARB                  0x84DB
#define GL_TEXTURE28_ARB                  0x84DC
#define GL_TEXTURE29_ARB                  0x84DD
#define GL_TEXTURE30_ARB                  0x84DE
#define GL_TEXTURE31_ARB                  0x84DF
#define GL_ACTIVE_TEXTURE_ARB             0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE_ARB      0x84E1
#define GL_MAX_TEXTURE_UNITS_ARB          0x84E2
extern void  glActiveTextureARB (GLenum texture);
extern void  glClientActiveTextureARB (GLenum texture);
extern void  glMultiTexCoord1dARB (GLenum target, GLdouble s);
extern void  glMultiTexCoord1dvARB (GLenum target, const GLdouble *v);
extern void  glMultiTexCoord1fARB (GLenum target, GLfloat s);
extern void  glMultiTexCoord1fvARB (GLenum target, const GLfloat *v);
extern void  glMultiTexCoord1iARB (GLenum target, GLint s);
extern void  glMultiTexCoord1ivARB (GLenum target, const GLint *v);
extern void  glMultiTexCoord1sARB (GLenum target, GLshort s);
extern void  glMultiTexCoord1svARB (GLenum target, const GLshort *v);
extern void  glMultiTexCoord2dARB (GLenum target, GLdouble s, GLdouble t);
extern void  glMultiTexCoord2dvARB (GLenum target, const GLdouble *v);
extern void  glMultiTexCoord2fARB (GLenum target, GLfloat s, GLfloat t);
extern void  glMultiTexCoord2fvARB (GLenum target, const GLfloat *v);
extern void  glMultiTexCoord2iARB (GLenum target, GLint s, GLint t);
extern void  glMultiTexCoord2ivARB (GLenum target, const GLint *v);
extern void  glMultiTexCoord2sARB (GLenum target, GLshort s, GLshort t);
extern void  glMultiTexCoord2svARB (GLenum target, const GLshort *v);
extern void  glMultiTexCoord3dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r);
extern void  glMultiTexCoord3dvARB (GLenum target, const GLdouble *v);
extern void  glMultiTexCoord3fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r);
extern void  glMultiTexCoord3fvARB (GLenum target, const GLfloat *v);
extern void  glMultiTexCoord3iARB (GLenum target, GLint s, GLint t, GLint r);
extern void  glMultiTexCoord3ivARB (GLenum target, const GLint *v);
extern void  glMultiTexCoord3sARB (GLenum target, GLshort s, GLshort t, GLshort r);
extern void  glMultiTexCoord3svARB (GLenum target, const GLshort *v);
extern void  glMultiTexCoord4dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
extern void  glMultiTexCoord4dvARB (GLenum target, const GLdouble *v);
extern void  glMultiTexCoord4fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern void  glMultiTexCoord4fvARB (GLenum target, const GLfloat *v);
extern void  glMultiTexCoord4iARB (GLenum target, GLint s, GLint t, GLint r, GLint q);
extern void  glMultiTexCoord4ivARB (GLenum target, const GLint *v);
extern void  glMultiTexCoord4sARB (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
extern void  glMultiTexCoord4svARB (GLenum target, const GLshort *v);
#endif
#endif /* GL_ARB_multitexture */

#ifndef GL_ARB_occlusion_query
#define GL_ARB_occlusion_query 1
#define GL_QUERY_COUNTER_BITS_ARB         0x8864
#define GL_CURRENT_QUERY_ARB              0x8865
#define GL_QUERY_RESULT_ARB               0x8866
#define GL_QUERY_RESULT_AVAILABLE_ARB     0x8867
#define GL_SAMPLES_PASSED_ARB             0x8914
extern void  glGenQueriesARB (GLsizei n, GLuint *ids);
extern void  glDeleteQueriesARB (GLsizei n, const GLuint *ids);
extern GLboolean  glIsQueryARB (GLuint id);
extern void  glBeginQueryARB (GLenum target, GLuint id);
extern void  glEndQueryARB (GLenum target);
extern void  glGetQueryivARB (GLenum target, GLenum pname, GLint *params);
extern void  glGetQueryObjectivARB (GLuint id, GLenum pname, GLint *params);
extern void  glGetQueryObjectuivARB (GLuint id, GLenum pname, GLuint *params);
#endif
#endif /* GL_ARB_occlusion_query */

#ifndef GL_ARB_occlusion_query2
#define GL_ARB_occlusion_query2 1
#endif /* GL_ARB_occlusion_query2 */

#ifndef GL_ARB_parallel_shader_compile
#define GL_ARB_parallel_shader_compile 1
#define GL_MAX_SHADER_COMPILER_THREADS_ARB 0x91B0
#define GL_COMPLETION_STATUS_ARB          0x91B1
extern void  glMaxShaderCompilerThreadsARB (GLuint count);
#endif
#endif /* GL_ARB_parallel_shader_compile */

#ifndef GL_ARB_pipeline_statistics_query
#define GL_ARB_pipeline_statistics_query 1
#define GL_VERTICES_SUBMITTED_ARB         0x82EE
#define GL_PRIMITIVES_SUBMITTED_ARB       0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS_ARB  0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES_ARB 0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS_ARB 0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED_ARB 0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS_ARB 0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS_ARB 0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES_ARB  0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES_ARB 0x82F7
#endif /* GL_ARB_pipeline_statistics_query */

#ifndef GL_ARB_pixel_buffer_object
#define GL_ARB_pixel_buffer_object 1
#define GL_PIXEL_PACK_BUFFER_ARB          0x88EB
#define GL_PIXEL_UNPACK_BUFFER_ARB        0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_ARB  0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_ARB 0x88EF
#endif /* GL_ARB_pixel_buffer_object */

#ifndef GL_ARB_point_parameters
#define GL_ARB_point_parameters 1
#define GL_POINT_SIZE_MIN_ARB             0x8126
#define GL_POINT_SIZE_MAX_ARB             0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_ARB  0x8128
#define GL_POINT_DISTANCE_ATTENUATION_ARB 0x8129
extern void  glPointParameterfARB (GLenum pname, GLfloat param);
extern void  glPointParameterfvARB (GLenum pname, const GLfloat *params);
#endif
#endif /* GL_ARB_point_parameters */

#ifndef GL_ARB_point_sprite
#define GL_ARB_point_sprite 1
#define GL_POINT_SPRITE_ARB               0x8861
#define GL_COORD_REPLACE_ARB              0x8862
#endif /* GL_ARB_point_sprite */

#ifndef GL_ARB_polygon_offset_clamp
#define GL_ARB_polygon_offset_clamp 1
#endif /* GL_ARB_polygon_offset_clamp */

#ifndef GL_ARB_post_depth_coverage
#define GL_ARB_post_depth_coverage 1
#endif /* GL_ARB_post_depth_coverage */

#ifndef GL_ARB_program_interface_query
#define GL_ARB_program_interface_query 1
#endif /* GL_ARB_program_interface_query */

#ifndef GL_ARB_provoking_vertex
#define GL_ARB_provoking_vertex 1
#endif /* GL_ARB_provoking_vertex */

#ifndef GL_ARB_query_buffer_object
#define GL_ARB_query_buffer_object 1
#endif /* GL_ARB_query_buffer_object */

#ifndef GL_ARB_robust_buffer_access_behavior
#define GL_ARB_robust_buffer_access_behavior 1
#endif /* GL_ARB_robust_buffer_access_behavior */

#ifndef GL_ARB_robustness
#define GL_ARB_robustness 1
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB 0x00000004
#define GL_LOSE_CONTEXT_ON_RESET_ARB      0x8252
#define GL_GUILTY_CONTEXT_RESET_ARB       0x8253
#define GL_INNOCENT_CONTEXT_RESET_ARB     0x8254
#define GL_UNKNOWN_CONTEXT_RESET_ARB      0x8255
#define GL_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define GL_NO_RESET_NOTIFICATION_ARB      0x8261
extern GLenum  glGetGraphicsResetStatusARB (void);
extern void  glGetnTexImageARB (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *img);
extern void  glReadnPixelsARB (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
extern void  glGetnCompressedTexImageARB (GLenum target, GLint lod, GLsizei bufSize, void *img);
extern void  glGetnUniformfvARB (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
extern void  glGetnUniformivARB (GLuint program, GLint location, GLsizei bufSize, GLint *params);
extern void  glGetnUniformuivARB (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
extern void  glGetnUniformdvARB (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
extern void  glGetnMapdvARB (GLenum target, GLenum query, GLsizei bufSize, GLdouble *v);
extern void  glGetnMapfvARB (GLenum target, GLenum query, GLsizei bufSize, GLfloat *v);
extern void  glGetnMapivARB (GLenum target, GLenum query, GLsizei bufSize, GLint *v);
extern void  glGetnPixelMapfvARB (GLenum map, GLsizei bufSize, GLfloat *values);
extern void  glGetnPixelMapuivARB (GLenum map, GLsizei bufSize, GLuint *values);
extern void  glGetnPixelMapusvARB (GLenum map, GLsizei bufSize, GLushort *values);
extern void  glGetnPolygonStippleARB (GLsizei bufSize, GLubyte *pattern);
extern void  glGetnColorTableARB (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table);
extern void  glGetnConvolutionFilterARB (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image);
extern void  glGetnSeparableFilterARB (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span);
extern void  glGetnHistogramARB (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
extern void  glGetnMinmaxARB (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
#endif
#endif /* GL_ARB_robustness */

#ifndef GL_ARB_robustness_isolation
#define GL_ARB_robustness_isolation 1
#endif /* GL_ARB_robustness_isolation */

#ifndef GL_ARB_sample_locations
#define GL_ARB_sample_locations 1
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_ARB 0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_ARB 0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_ARB 0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_ARB 0x9340
#define GL_SAMPLE_LOCATION_ARB            0x8E50
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_ARB 0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_ARB 0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_ARB 0x9343
extern void  glFramebufferSampleLocationsfvARB (GLenum target, GLuint start, GLsizei count, const GLfloat *v);
extern void  glNamedFramebufferSampleLocationsfvARB (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
extern void  glEvaluateDepthValuesARB (void);
#endif
#endif /* GL_ARB_sample_locations */

#ifndef GL_ARB_sample_shading
#define GL_ARB_sample_shading 1
#define GL_SAMPLE_SHADING_ARB             0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_ARB   0x8C37
extern void  glMinSampleShadingARB (GLfloat value);
#endif
#endif /* GL_ARB_sample_shading */

#ifndef GL_ARB_sampler_objects
#define GL_ARB_sampler_objects 1
#endif /* GL_ARB_sampler_objects */

#ifndef GL_ARB_seamless_cube_map
#define GL_ARB_seamless_cube_map 1
#endif /* GL_ARB_seamless_cube_map */

#ifndef GL_ARB_seamless_cubemap_per_texture
#define GL_ARB_seamless_cubemap_per_texture 1
#endif /* GL_ARB_seamless_cubemap_per_texture */

#ifndef GL_ARB_separate_shader_objects
#define GL_ARB_separate_shader_objects 1
#endif /* GL_ARB_separate_shader_objects */

#ifndef GL_ARB_shader_atomic_counter_ops
#define GL_ARB_shader_atomic_counter_ops 1
#endif /* GL_ARB_shader_atomic_counter_ops */

#ifndef GL_ARB_shader_atomic_counters
#define GL_ARB_shader_atomic_counters 1
#endif /* GL_ARB_shader_atomic_counters */

#ifndef GL_ARB_shader_ballot
#define GL_ARB_shader_ballot 1
#endif /* GL_ARB_shader_ballot */

#ifndef GL_ARB_shader_bit_encoding
#define GL_ARB_shader_bit_encoding 1
#endif /* GL_ARB_shader_bit_encoding */

#ifndef GL_ARB_shader_clock
#define GL_ARB_shader_clock 1
#endif /* GL_ARB_shader_clock */

#ifndef GL_ARB_shader_draw_parameters
#define GL_ARB_shader_draw_parameters 1
#endif /* GL_ARB_shader_draw_parameters */

#ifndef GL_ARB_shader_group_vote
#define GL_ARB_shader_group_vote 1
#endif /* GL_ARB_shader_group_vote */

#ifndef GL_ARB_shader_image_load_store
#define GL_ARB_shader_image_load_store 1
#endif /* GL_ARB_shader_image_load_store */

#ifndef GL_ARB_shader_image_size
#define GL_ARB_shader_image_size 1
#endif /* GL_ARB_shader_image_size */

#ifndef GL_ARB_shader_objects
#define GL_ARB_shader_objects 1
#ifdef __APPLE__
typedef void *GLhandleARB;
#else
typedef unsigned int GLhandleARB;
#endif
typedef char GLcharARB;
#define GL_PROGRAM_OBJECT_ARB             0x8B40
#define GL_SHADER_OBJECT_ARB              0x8B48
#define GL_OBJECT_TYPE_ARB                0x8B4E
#define GL_OBJECT_SUBTYPE_ARB             0x8B4F
#define GL_FLOAT_VEC2_ARB                 0x8B50
#define GL_FLOAT_VEC3_ARB                 0x8B51
#define GL_FLOAT_VEC4_ARB                 0x8B52
#define GL_INT_VEC2_ARB                   0x8B53
#define GL_INT_VEC3_ARB                   0x8B54
#define GL_INT_VEC4_ARB                   0x8B55
#define GL_BOOL_ARB                       0x8B56
#define GL_BOOL_VEC2_ARB                  0x8B57
#define GL_BOOL_VEC3_ARB                  0x8B58
#define GL_BOOL_VEC4_ARB                  0x8B59
#define GL_FLOAT_MAT2_ARB                 0x8B5A
#define GL_FLOAT_MAT3_ARB                 0x8B5B
#define GL_FLOAT_MAT4_ARB                 0x8B5C
#define GL_SAMPLER_1D_ARB                 0x8B5D
#define GL_SAMPLER_2D_ARB                 0x8B5E
#define GL_SAMPLER_3D_ARB                 0x8B5F
#define GL_SAMPLER_CUBE_ARB               0x8B60
#define GL_SAMPLER_1D_SHADOW_ARB          0x8B61
#define GL_SAMPLER_2D_SHADOW_ARB          0x8B62
#define GL_SAMPLER_2D_RECT_ARB            0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW_ARB     0x8B64
#define GL_OBJECT_DELETE_STATUS_ARB       0x8B80
#define GL_OBJECT_COMPILE_STATUS_ARB      0x8B81
#define GL_OBJECT_LINK_STATUS_ARB         0x8B82
#define GL_OBJECT_VALIDATE_STATUS_ARB     0x8B83
#define GL_OBJECT_INFO_LOG_LENGTH_ARB     0x8B84
#define GL_OBJECT_ATTACHED_OBJECTS_ARB    0x8B85
#define GL_OBJECT_ACTIVE_UNIFORMS_ARB     0x8B86
#define GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB 0x8B87
#define GL_OBJECT_SHADER_SOURCE_LENGTH_ARB 0x8B88
extern void  glDeleteObjectARB (GLhandleARB obj);
extern GLhandleARB  glGetHandleARB (GLenum pname);
extern void  glDetachObjectARB (GLhandleARB containerObj, GLhandleARB attachedObj);
extern GLhandleARB  glCreateShaderObjectARB (GLenum shaderType);
extern void  glShaderSourceARB (GLhandleARB shaderObj, GLsizei count, const GLcharARB **string, const GLint *length);
extern void  glCompileShaderARB (GLhandleARB shaderObj);
extern GLhandleARB  glCreateProgramObjectARB (void);
extern void  glAttachObjectARB (GLhandleARB containerObj, GLhandleARB obj);
extern void  glLinkProgramARB (GLhandleARB programObj);
extern void  glUseProgramObjectARB (GLhandleARB programObj);
extern void  glValidateProgramARB (GLhandleARB programObj);
extern void  glUniform1fARB (GLint location, GLfloat v0);
extern void  glUniform2fARB (GLint location, GLfloat v0, GLfloat v1);
extern void  glUniform3fARB (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern void  glUniform4fARB (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern void  glUniform1iARB (GLint location, GLint v0);
extern void  glUniform2iARB (GLint location, GLint v0, GLint v1);
extern void  glUniform3iARB (GLint location, GLint v0, GLint v1, GLint v2);
extern void  glUniform4iARB (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern void  glUniform1fvARB (GLint location, GLsizei count, const GLfloat *value);
extern void  glUniform2fvARB (GLint location, GLsizei count, const GLfloat *value);
extern void  glUniform3fvARB (GLint location, GLsizei count, const GLfloat *value);
extern void  glUniform4fvARB (GLint location, GLsizei count, const GLfloat *value);
extern void  glUniform1ivARB (GLint location, GLsizei count, const GLint *value);
extern void  glUniform2ivARB (GLint location, GLsizei count, const GLint *value);
extern void  glUniform3ivARB (GLint location, GLsizei count, const GLint *value);
extern void  glUniform4ivARB (GLint location, GLsizei count, const GLint *value);
extern void  glUniformMatrix2fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glUniformMatrix3fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glUniformMatrix4fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glGetObjectParameterfvARB (GLhandleARB obj, GLenum pname, GLfloat *params);
extern void  glGetObjectParameterivARB (GLhandleARB obj, GLenum pname, GLint *params);
extern void  glGetInfoLogARB (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog);
extern void  glGetAttachedObjectsARB (GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj);
extern GLint  glGetUniformLocationARB (GLhandleARB programObj, const GLcharARB *name);
extern void  glGetActiveUniformARB (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
extern void  glGetUniformfvARB (GLhandleARB programObj, GLint location, GLfloat *params);
extern void  glGetUniformivARB (GLhandleARB programObj, GLint location, GLint *params);
extern void  glGetShaderSourceARB (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source);
#endif
#endif /* GL_ARB_shader_objects */

#ifndef GL_ARB_shader_precision
#define GL_ARB_shader_precision 1
#endif /* GL_ARB_shader_precision */

#ifndef GL_ARB_shader_stencil_export
#define GL_ARB_shader_stencil_export 1
#endif /* GL_ARB_shader_stencil_export */

#ifndef GL_ARB_shader_storage_buffer_object
#define GL_ARB_shader_storage_buffer_object 1
#endif /* GL_ARB_shader_storage_buffer_object */

#ifndef GL_ARB_shader_subroutine
#define GL_ARB_shader_subroutine 1
#endif /* GL_ARB_shader_subroutine */

#ifndef GL_ARB_shader_texture_image_samples
#define GL_ARB_shader_texture_image_samples 1
#endif /* GL_ARB_shader_texture_image_samples */

#ifndef GL_ARB_shader_texture_lod
#define GL_ARB_shader_texture_lod 1
#endif /* GL_ARB_shader_texture_lod */

#ifndef GL_ARB_shader_viewport_layer_array
#define GL_ARB_shader_viewport_layer_array 1
#endif /* GL_ARB_shader_viewport_layer_array */

#ifndef GL_ARB_shading_language_100
#define GL_ARB_shading_language_100 1
#define GL_SHADING_LANGUAGE_VERSION_ARB   0x8B8C
#endif /* GL_ARB_shading_language_100 */

#ifndef GL_ARB_shading_language_420pack
#define GL_ARB_shading_language_420pack 1
#endif /* GL_ARB_shading_language_420pack */

#ifndef GL_ARB_shading_language_include
#define GL_ARB_shading_language_include 1
#define GL_SHADER_INCLUDE_ARB             0x8DAE
#define GL_NAMED_STRING_LENGTH_ARB        0x8DE9
#define GL_NAMED_STRING_TYPE_ARB          0x8DEA
extern void  glNamedStringARB (GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string);
extern void  glDeleteNamedStringARB (GLint namelen, const GLchar *name);
extern void  glCompileShaderIncludeARB (GLuint shader, GLsizei count, const GLchar *const*path, const GLint *length);
extern GLboolean  glIsNamedStringARB (GLint namelen, const GLchar *name);
extern void  glGetNamedStringARB (GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string);
extern void  glGetNamedStringivARB (GLint namelen, const GLchar *name, GLenum pname, GLint *params);
#endif
#endif /* GL_ARB_shading_language_include */

#ifndef GL_ARB_shading_language_packing
#define GL_ARB_shading_language_packing 1
#endif /* GL_ARB_shading_language_packing */

#ifndef GL_ARB_shadow
#define GL_ARB_shadow 1
#define GL_TEXTURE_COMPARE_MODE_ARB       0x884C
#define GL_TEXTURE_COMPARE_FUNC_ARB       0x884D
#define GL_COMPARE_R_TO_TEXTURE_ARB       0x884E
#endif /* GL_ARB_shadow */

#ifndef GL_ARB_shadow_ambient
#define GL_ARB_shadow_ambient 1
#define GL_TEXTURE_COMPARE_FAIL_VALUE_ARB 0x80BF
#endif /* GL_ARB_shadow_ambient */

#ifndef GL_ARB_sparse_buffer
#define GL_ARB_sparse_buffer 1
#define GL_SPARSE_STORAGE_BIT_ARB         0x0400
#define GL_SPARSE_BUFFER_PAGE_SIZE_ARB    0x82F8
extern void  glBufferPageCommitmentARB (GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
extern void  glNamedBufferPageCommitmentEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
extern void  glNamedBufferPageCommitmentARB (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
#endif
#endif /* GL_ARB_sparse_buffer */

#ifndef GL_ARB_sparse_texture
#define GL_ARB_sparse_texture 1
#define GL_TEXTURE_SPARSE_ARB             0x91A6
#define GL_VIRTUAL_PAGE_SIZE_INDEX_ARB    0x91A7
#define GL_NUM_SPARSE_LEVELS_ARB          0x91AA
#define GL_NUM_VIRTUAL_PAGE_SIZES_ARB     0x91A8
#define GL_VIRTUAL_PAGE_SIZE_X_ARB        0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_ARB        0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_ARB        0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_ARB    0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_ARB 0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_ARB 0x919A
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_ARB 0x91A9
extern void  glTexPageCommitmentARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
#endif
#endif /* GL_ARB_sparse_texture */

#ifndef GL_ARB_sparse_texture2
#define GL_ARB_sparse_texture2 1
#endif /* GL_ARB_sparse_texture2 */

#ifndef GL_ARB_sparse_texture_clamp
#define GL_ARB_sparse_texture_clamp 1
#endif /* GL_ARB_sparse_texture_clamp */

#ifndef GL_ARB_spirv_extensions
#define GL_ARB_spirv_extensions 1
#endif /* GL_ARB_spirv_extensions */

#ifndef GL_ARB_stencil_texturing
#define GL_ARB_stencil_texturing 1
#endif /* GL_ARB_stencil_texturing */

#ifndef GL_ARB_sync
#define GL_ARB_sync 1
#endif /* GL_ARB_sync */

#ifndef GL_ARB_tessellation_shader
#define GL_ARB_tessellation_shader 1
#endif /* GL_ARB_tessellation_shader */

#ifndef GL_ARB_texture_barrier
#define GL_ARB_texture_barrier 1
#endif /* GL_ARB_texture_barrier */

#ifndef GL_ARB_texture_border_clamp
#define GL_ARB_texture_border_clamp 1
#define GL_CLAMP_TO_BORDER_ARB            0x812D
#endif /* GL_ARB_texture_border_clamp */

#ifndef GL_ARB_texture_buffer_object
#define GL_ARB_texture_buffer_object 1
#define GL_TEXTURE_BUFFER_ARB             0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_ARB    0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_ARB     0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_ARB 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_ARB      0x8C2E
extern void  glTexBufferARB (GLenum target, GLenum internalformat, GLuint buffer);
#endif
#endif /* GL_ARB_texture_buffer_object */

#ifndef GL_ARB_texture_buffer_object_rgb32
#define GL_ARB_texture_buffer_object_rgb32 1
#endif /* GL_ARB_texture_buffer_object_rgb32 */

#ifndef GL_ARB_texture_buffer_range
#define GL_ARB_texture_buffer_range 1
#endif /* GL_ARB_texture_buffer_range */

#ifndef GL_ARB_texture_compression
#define GL_ARB_texture_compression 1
#define GL_COMPRESSED_ALPHA_ARB           0x84E9
#define GL_COMPRESSED_LUMINANCE_ARB       0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA_ARB 0x84EB
#define GL_COMPRESSED_INTENSITY_ARB       0x84EC
#define GL_COMPRESSED_RGB_ARB             0x84ED
#define GL_COMPRESSED_RGBA_ARB            0x84EE
#define GL_TEXTURE_COMPRESSION_HINT_ARB   0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB 0x86A0
#define GL_TEXTURE_COMPRESSED_ARB         0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A3
extern void  glCompressedTexImage3DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
extern void  glCompressedTexImage2DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
extern void  glCompressedTexImage1DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
extern void  glCompressedTexSubImage3DARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
extern void  glCompressedTexSubImage2DARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
extern void  glCompressedTexSubImage1DARB (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
extern void  glGetCompressedTexImageARB (GLenum target, GLint level, void *img);
#endif
#endif /* GL_ARB_texture_compression */

#ifndef GL_ARB_texture_compression_bptc
#define GL_ARB_texture_compression_bptc 1
#define GL_COMPRESSED_RGBA_BPTC_UNORM_ARB 0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB 0x8E8F
#endif /* GL_ARB_texture_compression_bptc */

#ifndef GL_ARB_texture_compression_rgtc
#define GL_ARB_texture_compression_rgtc 1
#endif /* GL_ARB_texture_compression_rgtc */

#ifndef GL_ARB_texture_cube_map
#define GL_ARB_texture_cube_map 1
#define GL_NORMAL_MAP_ARB                 0x8511
#define GL_REFLECTION_MAP_ARB             0x8512
#define GL_TEXTURE_CUBE_MAP_ARB           0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_ARB   0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARB     0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB  0x851C
#endif /* GL_ARB_texture_cube_map */

#ifndef GL_ARB_texture_cube_map_array
#define GL_ARB_texture_cube_map_array 1
#define GL_TEXTURE_CUBE_MAP_ARRAY_ARB     0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB 0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY_ARB     0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900F
#endif /* GL_ARB_texture_cube_map_array */

#ifndef GL_ARB_texture_env_add
#define GL_ARB_texture_env_add 1
#endif /* GL_ARB_texture_env_add */

#ifndef GL_ARB_texture_env_combine
#define GL_ARB_texture_env_combine 1
#define GL_COMBINE_ARB                    0x8570
#define GL_COMBINE_RGB_ARB                0x8571
#define GL_COMBINE_ALPHA_ARB              0x8572
#define GL_SOURCE0_RGB_ARB                0x8580
#define GL_SOURCE1_RGB_ARB                0x8581
#define GL_SOURCE2_RGB_ARB                0x8582
#define GL_SOURCE0_ALPHA_ARB              0x8588
#define GL_SOURCE1_ALPHA_ARB              0x8589
#define GL_SOURCE2_ALPHA_ARB              0x858A
#define GL_OPERAND0_RGB_ARB               0x8590
#define GL_OPERAND1_RGB_ARB               0x8591
#define GL_OPERAND2_RGB_ARB               0x8592
#define GL_OPERAND0_ALPHA_ARB             0x8598
#define GL_OPERAND1_ALPHA_ARB             0x8599
#define GL_OPERAND2_ALPHA_ARB             0x859A
#define GL_RGB_SCALE_ARB                  0x8573
#define GL_ADD_SIGNED_ARB                 0x8574
#define GL_INTERPOLATE_ARB                0x8575
#define GL_SUBTRACT_ARB                   0x84E7
#define GL_CONSTANT_ARB                   0x8576
#define GL_PRIMARY_COLOR_ARB              0x8577
#define GL_PREVIOUS_ARB                   0x8578
#endif /* GL_ARB_texture_env_combine */

#ifndef GL_ARB_texture_env_crossbar
#define GL_ARB_texture_env_crossbar 1
#endif /* GL_ARB_texture_env_crossbar */

#ifndef GL_ARB_texture_env_dot3
#define GL_ARB_texture_env_dot3 1
#define GL_DOT3_RGB_ARB                   0x86AE
#define GL_DOT3_RGBA_ARB                  0x86AF
#endif /* GL_ARB_texture_env_dot3 */

#ifndef GL_ARB_texture_filter_anisotropic
#define GL_ARB_texture_filter_anisotropic 1
#endif /* GL_ARB_texture_filter_anisotropic */

#ifndef GL_ARB_texture_filter_minmax
#define GL_ARB_texture_filter_minmax 1
#define GL_TEXTURE_REDUCTION_MODE_ARB     0x9366
#define GL_WEIGHTED_AVERAGE_ARB           0x9367
#endif /* GL_ARB_texture_filter_minmax */

#ifndef GL_ARB_texture_float
#define GL_ARB_texture_float 1
#define GL_TEXTURE_RED_TYPE_ARB           0x8C10
#define GL_TEXTURE_GREEN_TYPE_ARB         0x8C11
#define GL_TEXTURE_BLUE_TYPE_ARB          0x8C12
#define GL_TEXTURE_ALPHA_TYPE_ARB         0x8C13
#define GL_TEXTURE_LUMINANCE_TYPE_ARB     0x8C14
#define GL_TEXTURE_INTENSITY_TYPE_ARB     0x8C15
#define GL_TEXTURE_DEPTH_TYPE_ARB         0x8C16
#define GL_UNSIGNED_NORMALIZED_ARB        0x8C17
#define GL_RGBA32F_ARB                    0x8814
#define GL_RGB32F_ARB                     0x8815
#define GL_ALPHA32F_ARB                   0x8816
#define GL_INTENSITY32F_ARB               0x8817
#define GL_LUMINANCE32F_ARB               0x8818
#define GL_LUMINANCE_ALPHA32F_ARB         0x8819
#define GL_RGBA16F_ARB                    0x881A
#define GL_RGB16F_ARB                     0x881B
#define GL_ALPHA16F_ARB                   0x881C
#define GL_INTENSITY16F_ARB               0x881D
#define GL_LUMINANCE16F_ARB               0x881E
#define GL_LUMINANCE_ALPHA16F_ARB         0x881F
#endif /* GL_ARB_texture_float */

#ifndef GL_ARB_texture_gather
#define GL_ARB_texture_gather 1
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5F
#define GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS_ARB 0x8F9F
#endif /* GL_ARB_texture_gather */

#ifndef GL_ARB_texture_mirror_clamp_to_edge
#define GL_ARB_texture_mirror_clamp_to_edge 1
#endif /* GL_ARB_texture_mirror_clamp_to_edge */

#ifndef GL_ARB_texture_mirrored_repeat
#define GL_ARB_texture_mirrored_repeat 1
#define GL_MIRRORED_REPEAT_ARB            0x8370
#endif /* GL_ARB_texture_mirrored_repeat */

#ifndef GL_ARB_texture_multisample
#define GL_ARB_texture_multisample 1
#endif /* GL_ARB_texture_multisample */

#ifndef GL_ARB_texture_non_power_of_two
#define GL_ARB_texture_non_power_of_two 1
#endif /* GL_ARB_texture_non_power_of_two */

#ifndef GL_ARB_texture_query_levels
#define GL_ARB_texture_query_levels 1
#endif /* GL_ARB_texture_query_levels */

#ifndef GL_ARB_texture_query_lod
#define GL_ARB_texture_query_lod 1
#endif /* GL_ARB_texture_query_lod */

#ifndef GL_ARB_texture_rectangle
#define GL_ARB_texture_rectangle 1
#define GL_TEXTURE_RECTANGLE_ARB          0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_ARB  0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_ARB    0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB 0x84F8
#endif /* GL_ARB_texture_rectangle */

#ifndef GL_ARB_texture_rg
#define GL_ARB_texture_rg 1
#endif /* GL_ARB_texture_rg */

#ifndef GL_ARB_texture_rgb10_a2ui
#define GL_ARB_texture_rgb10_a2ui 1
#endif /* GL_ARB_texture_rgb10_a2ui */

#ifndef GL_ARB_texture_stencil8
#define GL_ARB_texture_stencil8 1
#endif /* GL_ARB_texture_stencil8 */

#ifndef GL_ARB_texture_storage
#define GL_ARB_texture_storage 1
#endif /* GL_ARB_texture_storage */

#ifndef GL_ARB_texture_storage_multisample
#define GL_ARB_texture_storage_multisample 1
#endif /* GL_ARB_texture_storage_multisample */

#ifndef GL_ARB_texture_swizzle
#define GL_ARB_texture_swizzle 1
#endif /* GL_ARB_texture_swizzle */

#ifndef GL_ARB_texture_view
#define GL_ARB_texture_view 1
#endif /* GL_ARB_texture_view */

#ifndef GL_ARB_timer_query
#define GL_ARB_timer_query 1
#endif /* GL_ARB_timer_query */

#ifndef GL_ARB_transform_feedback2
#define GL_ARB_transform_feedback2 1
#endif /* GL_ARB_transform_feedback2 */

#ifndef GL_ARB_transform_feedback3
#define GL_ARB_transform_feedback3 1
#endif /* GL_ARB_transform_feedback3 */

#ifndef GL_ARB_transform_feedback_instanced
#define GL_ARB_transform_feedback_instanced 1
#endif /* GL_ARB_transform_feedback_instanced */

#ifndef GL_ARB_transform_feedback_overflow_query
#define GL_ARB_transform_feedback_overflow_query 1
#define GL_TRANSFORM_FEEDBACK_OVERFLOW_ARB 0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB 0x82ED
#endif /* GL_ARB_transform_feedback_overflow_query */

#ifndef GL_ARB_transpose_matrix
#define GL_ARB_transpose_matrix 1
#define GL_TRANSPOSE_MODELVIEW_MATRIX_ARB 0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX_ARB 0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX_ARB   0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX_ARB     0x84E6
extern void  glLoadTransposeMatrixfARB (const GLfloat *m);
extern void  glLoadTransposeMatrixdARB (const GLdouble *m);
extern void  glMultTransposeMatrixfARB (const GLfloat *m);
extern void  glMultTransposeMatrixdARB (const GLdouble *m);
#endif
#endif /* GL_ARB_transpose_matrix */

#ifndef GL_ARB_uniform_buffer_object
#define GL_ARB_uniform_buffer_object 1
#endif /* GL_ARB_uniform_buffer_object */

#ifndef GL_ARB_vertex_array_bgra
#define GL_ARB_vertex_array_bgra 1
#endif /* GL_ARB_vertex_array_bgra */

#ifndef GL_ARB_vertex_array_object
#define GL_ARB_vertex_array_object 1
#endif /* GL_ARB_vertex_array_object */

#ifndef GL_ARB_vertex_attrib_64bit
#define GL_ARB_vertex_attrib_64bit 1
#endif /* GL_ARB_vertex_attrib_64bit */

#ifndef GL_ARB_vertex_attrib_binding
#define GL_ARB_vertex_attrib_binding 1
#endif /* GL_ARB_vertex_attrib_binding */

#ifndef GL_ARB_vertex_blend
#define GL_ARB_vertex_blend 1
#define GL_MAX_VERTEX_UNITS_ARB           0x86A4
#define GL_ACTIVE_VERTEX_UNITS_ARB        0x86A5
#define GL_WEIGHT_SUM_UNITY_ARB           0x86A6
#define GL_VERTEX_BLEND_ARB               0x86A7
#define GL_CURRENT_WEIGHT_ARB             0x86A8
#define GL_WEIGHT_ARRAY_TYPE_ARB          0x86A9
#define GL_WEIGHT_ARRAY_STRIDE_ARB        0x86AA
#define GL_WEIGHT_ARRAY_SIZE_ARB          0x86AB
#define GL_WEIGHT_ARRAY_POINTER_ARB       0x86AC
#define GL_WEIGHT_ARRAY_ARB               0x86AD
#define GL_MODELVIEW0_ARB                 0x1700
#define GL_MODELVIEW1_ARB                 0x850A
#define GL_MODELVIEW2_ARB                 0x8722
#define GL_MODELVIEW3_ARB                 0x8723
#define GL_MODELVIEW4_ARB                 0x8724
#define GL_MODELVIEW5_ARB                 0x8725
#define GL_MODELVIEW6_ARB                 0x8726
#define GL_MODELVIEW7_ARB                 0x8727
#define GL_MODELVIEW8_ARB                 0x8728
#define GL_MODELVIEW9_ARB                 0x8729
#define GL_MODELVIEW10_ARB                0x872A
#define GL_MODELVIEW11_ARB                0x872B
#define GL_MODELVIEW12_ARB                0x872C
#define GL_MODELVIEW13_ARB                0x872D
#define GL_MODELVIEW14_ARB                0x872E
#define GL_MODELVIEW15_ARB                0x872F
#define GL_MODELVIEW16_ARB                0x8730
#define GL_MODELVIEW17_ARB                0x8731
#define GL_MODELVIEW18_ARB                0x8732
#define GL_MODELVIEW19_ARB                0x8733
#define GL_MODELVIEW20_ARB                0x8734
#define GL_MODELVIEW21_ARB                0x8735
#define GL_MODELVIEW22_ARB                0x8736
#define GL_MODELVIEW23_ARB                0x8737
#define GL_MODELVIEW24_ARB                0x8738
#define GL_MODELVIEW25_ARB                0x8739
#define GL_MODELVIEW26_ARB                0x873A
#define GL_MODELVIEW27_ARB                0x873B
#define GL_MODELVIEW28_ARB                0x873C
#define GL_MODELVIEW29_ARB                0x873D
#define GL_MODELVIEW30_ARB                0x873E
#define GL_MODELVIEW31_ARB                0x873F
extern void  glWeightbvARB (GLint size, const GLbyte *weights);
extern void  glWeightsvARB (GLint size, const GLshort *weights);
extern void  glWeightivARB (GLint size, const GLint *weights);
extern void  glWeightfvARB (GLint size, const GLfloat *weights);
extern void  glWeightdvARB (GLint size, const GLdouble *weights);
extern void  glWeightubvARB (GLint size, const GLubyte *weights);
extern void  glWeightusvARB (GLint size, const GLushort *weights);
extern void  glWeightuivARB (GLint size, const GLuint *weights);
extern void  glWeightPointerARB (GLint size, GLenum type, GLsizei stride, const void *pointer);
extern void  glVertexBlendARB (GLint count);
#endif
#endif /* GL_ARB_vertex_blend */

#ifndef GL_ARB_vertex_buffer_object
#define GL_ARB_vertex_buffer_object 1
typedef khronos_ssize_t GLsizeiptrARB;
typedef khronos_intptr_t GLintptrARB;
#define GL_BUFFER_SIZE_ARB                0x8764
#define GL_BUFFER_USAGE_ARB               0x8765
#define GL_ARRAY_BUFFER_ARB               0x8892
#define GL_ELEMENT_ARRAY_BUFFER_ARB       0x8893
#define GL_ARRAY_BUFFER_BINDING_ARB       0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB 0x8895
#define GL_VERTEX_ARRAY_BUFFER_BINDING_ARB 0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING_ARB 0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING_ARB 0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING_ARB 0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB 0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB 0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB 0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB 0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB 0x889E
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB 0x889F
#define GL_READ_ONLY_ARB                  0x88B8
#define GL_WRITE_ONLY_ARB                 0x88B9
#define GL_READ_WRITE_ARB                 0x88BA
#define GL_BUFFER_ACCESS_ARB              0x88BB
#define GL_BUFFER_MAPPED_ARB              0x88BC
#define GL_BUFFER_MAP_POINTER_ARB         0x88BD
#define GL_STREAM_DRAW_ARB                0x88E0
#define GL_STREAM_READ_ARB                0x88E1
#define GL_STREAM_COPY_ARB                0x88E2
#define GL_STATIC_DRAW_ARB                0x88E4
#define GL_STATIC_READ_ARB                0x88E5
#define GL_STATIC_COPY_ARB                0x88E6
#define GL_DYNAMIC_DRAW_ARB               0x88E8
#define GL_DYNAMIC_READ_ARB               0x88E9
#define GL_DYNAMIC_COPY_ARB               0x88EA
extern void  glBindBufferARB (GLenum target, GLuint buffer);
extern void  glDeleteBuffersARB (GLsizei n, const GLuint *buffers);
extern void  glGenBuffersARB (GLsizei n, GLuint *buffers);
extern GLboolean  glIsBufferARB (GLuint buffer);
extern void  glBufferDataARB (GLenum target, GLsizeiptrARB size, const void *data, GLenum usage);
extern void  glBufferSubDataARB (GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void *data);
extern void  glGetBufferSubDataARB (GLenum target, GLintptrARB offset, GLsizeiptrARB size, void *data);
extern void * glMapBufferARB (GLenum target, GLenum access);
extern GLboolean  glUnmapBufferARB (GLenum target);
extern void  glGetBufferParameterivARB (GLenum target, GLenum pname, GLint *params);
extern void  glGetBufferPointervARB (GLenum target, GLenum pname, void **params);
#endif
#endif /* GL_ARB_vertex_buffer_object */

#ifndef GL_ARB_vertex_program
#define GL_ARB_vertex_program 1
#define GL_COLOR_SUM_ARB                  0x8458
#define GL_VERTEX_PROGRAM_ARB             0x8620
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB   0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB 0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB   0x8625
#define GL_CURRENT_VERTEX_ATTRIB_ARB      0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE_ARB  0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_ARB    0x8643
#define GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB 0x8645
#define GL_MAX_VERTEX_ATTRIBS_ARB         0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB 0x886A
#define GL_PROGRAM_ADDRESS_REGISTERS_ARB  0x88B0
#define GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB 0x88B1
#define GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB 0x88B2
#define GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB 0x88B3
extern void  glVertexAttrib1dARB (GLuint index, GLdouble x);
extern void  glVertexAttrib1dvARB (GLuint index, const GLdouble *v);
extern void  glVertexAttrib1fARB (GLuint index, GLfloat x);
extern void  glVertexAttrib1fvARB (GLuint index, const GLfloat *v);
extern void  glVertexAttrib1sARB (GLuint index, GLshort x);
extern void  glVertexAttrib1svARB (GLuint index, const GLshort *v);
extern void  glVertexAttrib2dARB (GLuint index, GLdouble x, GLdouble y);
extern void  glVertexAttrib2dvARB (GLuint index, const GLdouble *v);
extern void  glVertexAttrib2fARB (GLuint index, GLfloat x, GLfloat y);
extern void  glVertexAttrib2fvARB (GLuint index, const GLfloat *v);
extern void  glVertexAttrib2sARB (GLuint index, GLshort x, GLshort y);
extern void  glVertexAttrib2svARB (GLuint index, const GLshort *v);
extern void  glVertexAttrib3dARB (GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern void  glVertexAttrib3dvARB (GLuint index, const GLdouble *v);
extern void  glVertexAttrib3fARB (GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern void  glVertexAttrib3fvARB (GLuint index, const GLfloat *v);
extern void  glVertexAttrib3sARB (GLuint index, GLshort x, GLshort y, GLshort z);
extern void  glVertexAttrib3svARB (GLuint index, const GLshort *v);
extern void  glVertexAttrib4NbvARB (GLuint index, const GLbyte *v);
extern void  glVertexAttrib4NivARB (GLuint index, const GLint *v);
extern void  glVertexAttrib4NsvARB (GLuint index, const GLshort *v);
extern void  glVertexAttrib4NubARB (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
extern void  glVertexAttrib4NubvARB (GLuint index, const GLubyte *v);
extern void  glVertexAttrib4NuivARB (GLuint index, const GLuint *v);
extern void  glVertexAttrib4NusvARB (GLuint index, const GLushort *v);
extern void  glVertexAttrib4bvARB (GLuint index, const GLbyte *v);
extern void  glVertexAttrib4dARB (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glVertexAttrib4dvARB (GLuint index, const GLdouble *v);
extern void  glVertexAttrib4fARB (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void  glVertexAttrib4fvARB (GLuint index, const GLfloat *v);
extern void  glVertexAttrib4ivARB (GLuint index, const GLint *v);
extern void  glVertexAttrib4sARB (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
extern void  glVertexAttrib4svARB (GLuint index, const GLshort *v);
extern void  glVertexAttrib4ubvARB (GLuint index, const GLubyte *v);
extern void  glVertexAttrib4uivARB (GLuint index, const GLuint *v);
extern void  glVertexAttrib4usvARB (GLuint index, const GLushort *v);
extern void  glVertexAttribPointerARB (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
extern void  glEnableVertexAttribArrayARB (GLuint index);
extern void  glDisableVertexAttribArrayARB (GLuint index);
extern void  glGetVertexAttribdvARB (GLuint index, GLenum pname, GLdouble *params);
extern void  glGetVertexAttribfvARB (GLuint index, GLenum pname, GLfloat *params);
extern void  glGetVertexAttribivARB (GLuint index, GLenum pname, GLint *params);
extern void  glGetVertexAttribPointervARB (GLuint index, GLenum pname, void **pointer);
#endif
#endif /* GL_ARB_vertex_program */

#ifndef GL_ARB_vertex_shader
#define GL_ARB_vertex_shader 1
#define GL_VERTEX_SHADER_ARB              0x8B31
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB 0x8B4A
#define GL_MAX_VARYING_FLOATS_ARB         0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB 0x8B4D
#define GL_OBJECT_ACTIVE_ATTRIBUTES_ARB   0x8B89
#define GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB 0x8B8A
extern void  glBindAttribLocationARB (GLhandleARB programObj, GLuint index, const GLcharARB *name);
extern void  glGetActiveAttribARB (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
extern GLint  glGetAttribLocationARB (GLhandleARB programObj, const GLcharARB *name);
#endif
#endif /* GL_ARB_vertex_shader */

#ifndef GL_ARB_vertex_type_10f_11f_11f_rev
#define GL_ARB_vertex_type_10f_11f_11f_rev 1
#endif /* GL_ARB_vertex_type_10f_11f_11f_rev */

#ifndef GL_ARB_vertex_type_2_10_10_10_rev
#define GL_ARB_vertex_type_2_10_10_10_rev 1
#endif /* GL_ARB_vertex_type_2_10_10_10_rev */

#ifndef GL_ARB_viewport_array
#define GL_ARB_viewport_array 1
extern void  glDepthRangeArraydvNV (GLuint first, GLsizei count, const GLdouble *v);
extern void  glDepthRangeIndexeddNV (GLuint index, GLdouble n, GLdouble f);
#endif
#endif /* GL_ARB_viewport_array */

#ifndef GL_ARB_window_pos
#define GL_ARB_window_pos 1
extern void  glWindowPos2dARB (GLdouble x, GLdouble y);
extern void  glWindowPos2dvARB (const GLdouble *v);
extern void  glWindowPos2fARB (GLfloat x, GLfloat y);
extern void  glWindowPos2fvARB (const GLfloat *v);
extern void  glWindowPos2iARB (GLint x, GLint y);
extern void  glWindowPos2ivARB (const GLint *v);
extern void  glWindowPos2sARB (GLshort x, GLshort y);
extern void  glWindowPos2svARB (const GLshort *v);
extern void  glWindowPos3dARB (GLdouble x, GLdouble y, GLdouble z);
extern void  glWindowPos3dvARB (const GLdouble *v);
extern void  glWindowPos3fARB (GLfloat x, GLfloat y, GLfloat z);
extern void  glWindowPos3fvARB (const GLfloat *v);
extern void  glWindowPos3iARB (GLint x, GLint y, GLint z);
extern void  glWindowPos3ivARB (const GLint *v);
extern void  glWindowPos3sARB (GLshort x, GLshort y, GLshort z);
extern void  glWindowPos3svARB (const GLshort *v);
#endif
#endif /* GL_ARB_window_pos */

#ifndef GL_KHR_blend_equation_advanced
#define GL_KHR_blend_equation_advanced 1
#define GL_MULTIPLY_KHR                   0x9294
#define GL_SCREEN_KHR                     0x9295
#define GL_OVERLAY_KHR                    0x9296
#define GL_DARKEN_KHR                     0x9297
#define GL_LIGHTEN_KHR                    0x9298
#define GL_COLORDODGE_KHR                 0x9299
#define GL_COLORBURN_KHR                  0x929A
#define GL_HARDLIGHT_KHR                  0x929B
#define GL_SOFTLIGHT_KHR                  0x929C
#define GL_DIFFERENCE_KHR                 0x929E
#define GL_EXCLUSION_KHR                  0x92A0
#define GL_HSL_HUE_KHR                    0x92AD
#define GL_HSL_SATURATION_KHR             0x92AE
#define GL_HSL_COLOR_KHR                  0x92AF
#define GL_HSL_LUMINOSITY_KHR             0x92B0
extern void  glBlendBarrierKHR (void);
#endif
#endif /* GL_KHR_blend_equation_advanced */

#ifndef GL_KHR_blend_equation_advanced_coherent
#define GL_KHR_blend_equation_advanced_coherent 1
#define GL_BLEND_ADVANCED_COHERENT_KHR    0x9285
#endif /* GL_KHR_blend_equation_advanced_coherent */

#ifndef GL_KHR_context_flush_control
#define GL_KHR_context_flush_control 1
#endif /* GL_KHR_context_flush_control */

#ifndef GL_KHR_debug
#define GL_KHR_debug 1
#endif /* GL_KHR_debug */

#ifndef GL_KHR_no_error
#define GL_KHR_no_error 1
#define GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR  0x00000008
#endif /* GL_KHR_no_error */

#ifndef GL_KHR_parallel_shader_compile
#define GL_KHR_parallel_shader_compile 1
#define GL_MAX_SHADER_COMPILER_THREADS_KHR 0x91B0
#define GL_COMPLETION_STATUS_KHR          0x91B1
extern void  glMaxShaderCompilerThreadsKHR (GLuint count);
#endif
#endif /* GL_KHR_parallel_shader_compile */

#ifndef GL_KHR_robust_buffer_access_behavior
#define GL_KHR_robust_buffer_access_behavior 1
#endif /* GL_KHR_robust_buffer_access_behavior */

#ifndef GL_KHR_robustness
#define GL_KHR_robustness 1
#define GL_CONTEXT_ROBUST_ACCESS          0x90F3
#endif /* GL_KHR_robustness */

#ifndef GL_KHR_shader_subgroup
#define GL_KHR_shader_subgroup 1
#define GL_SUBGROUP_SIZE_KHR              0x9532
#define GL_SUBGROUP_SUPPORTED_STAGES_KHR  0x9533
#define GL_SUBGROUP_SUPPORTED_FEATURES_KHR 0x9534
#define GL_SUBGROUP_QUAD_ALL_STAGES_KHR   0x9535
#define GL_SUBGROUP_FEATURE_BASIC_BIT_KHR 0x00000001
#define GL_SUBGROUP_FEATURE_VOTE_BIT_KHR  0x00000002
#define GL_SUBGROUP_FEATURE_ARITHMETIC_BIT_KHR 0x00000004
#define GL_SUBGROUP_FEATURE_BALLOT_BIT_KHR 0x00000008
#define GL_SUBGROUP_FEATURE_SHUFFLE_BIT_KHR 0x00000010
#define GL_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT_KHR 0x00000020
#define GL_SUBGROUP_FEATURE_CLUSTERED_BIT_KHR 0x00000040
#define GL_SUBGROUP_FEATURE_QUAD_BIT_KHR  0x00000080
#endif /* GL_KHR_shader_subgroup */

#ifndef GL_KHR_texture_compression_astc_hdr
#define GL_KHR_texture_compression_astc_hdr 1
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR   0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR   0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR   0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR   0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR   0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR   0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR   0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR   0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR  0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR  0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR  0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR 0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR 0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR 0x93BD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR 0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR 0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR 0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR 0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR 0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR 0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR 0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR 0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR 0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR 0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR 0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR 0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR 0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR 0x93DD
#endif /* GL_KHR_texture_compression_astc_hdr */

#ifndef GL_KHR_texture_compression_astc_ldr
#define GL_KHR_texture_compression_astc_ldr 1
#endif /* GL_KHR_texture_compression_astc_ldr */

#ifndef GL_KHR_texture_compression_astc_sliced_3d
#define GL_KHR_texture_compression_astc_sliced_3d 1
#endif /* GL_KHR_texture_compression_astc_sliced_3d */

#ifndef GL_OES_byte_coordinates
#define GL_OES_byte_coordinates 1
extern void  glMultiTexCoord1bOES (GLenum texture, GLbyte s);
extern void  glMultiTexCoord1bvOES (GLenum texture, const GLbyte *coords);
extern void  glMultiTexCoord2bOES (GLenum texture, GLbyte s, GLbyte t);
extern void  glMultiTexCoord2bvOES (GLenum texture, const GLbyte *coords);
extern void  glMultiTexCoord3bOES (GLenum texture, GLbyte s, GLbyte t, GLbyte r);
extern void  glMultiTexCoord3bvOES (GLenum texture, const GLbyte *coords);
extern void  glMultiTexCoord4bOES (GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q);
extern void  glMultiTexCoord4bvOES (GLenum texture, const GLbyte *coords);
extern void  glTexCoord1bOES (GLbyte s);
extern void  glTexCoord1bvOES (const GLbyte *coords);
extern void  glTexCoord2bOES (GLbyte s, GLbyte t);
extern void  glTexCoord2bvOES (const GLbyte *coords);
extern void  glTexCoord3bOES (GLbyte s, GLbyte t, GLbyte r);
extern void  glTexCoord3bvOES (const GLbyte *coords);
extern void  glTexCoord4bOES (GLbyte s, GLbyte t, GLbyte r, GLbyte q);
extern void  glTexCoord4bvOES (const GLbyte *coords);
extern void  glVertex2bOES (GLbyte x, GLbyte y);
extern void  glVertex2bvOES (const GLbyte *coords);
extern void  glVertex3bOES (GLbyte x, GLbyte y, GLbyte z);
extern void  glVertex3bvOES (const GLbyte *coords);
extern void  glVertex4bOES (GLbyte x, GLbyte y, GLbyte z, GLbyte w);
extern void  glVertex4bvOES (const GLbyte *coords);
#endif
#endif /* GL_OES_byte_coordinates */

#ifndef GL_OES_compressed_paletted_texture
#define GL_OES_compressed_paletted_texture 1
#define GL_PALETTE4_RGB8_OES              0x8B90
#define GL_PALETTE4_RGBA8_OES             0x8B91
#define GL_PALETTE4_R5_G6_B5_OES          0x8B92
#define GL_PALETTE4_RGBA4_OES             0x8B93
#define GL_PALETTE4_RGB5_A1_OES           0x8B94
#define GL_PALETTE8_RGB8_OES              0x8B95
#define GL_PALETTE8_RGBA8_OES             0x8B96
#define GL_PALETTE8_R5_G6_B5_OES          0x8B97
#define GL_PALETTE8_RGBA4_OES             0x8B98
#define GL_PALETTE8_RGB5_A1_OES           0x8B99
#endif /* GL_OES_compressed_paletted_texture */

#ifndef GL_OES_fixed_point
#define GL_OES_fixed_point 1
typedef khronos_int32_t GLfixed;
#define GL_FIXED_OES                      0x140C
extern void  glAlphaFuncxOES (GLenum func, GLfixed ref);
extern void  glClearColorxOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
extern void  glClearDepthxOES (GLfixed depth);
extern void  glClipPlanexOES (GLenum plane, const GLfixed *equation);
extern void  glColor4xOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
extern void  glDepthRangexOES (GLfixed n, GLfixed f);
extern void  glFogxOES (GLenum pname, GLfixed param);
extern void  glFogxvOES (GLenum pname, const GLfixed *param);
extern void  glFrustumxOES (GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
extern void  glGetClipPlanexOES (GLenum plane, GLfixed *equation);
extern void  glGetFixedvOES (GLenum pname, GLfixed *params);
extern void  glGetTexEnvxvOES (GLenum target, GLenum pname, GLfixed *params);
extern void  glGetTexParameterxvOES (GLenum target, GLenum pname, GLfixed *params);
extern void  glLightModelxOES (GLenum pname, GLfixed param);
extern void  glLightModelxvOES (GLenum pname, const GLfixed *param);
extern void  glLightxOES (GLenum light, GLenum pname, GLfixed param);
extern void  glLightxvOES (GLenum light, GLenum pname, const GLfixed *params);
extern void  glLineWidthxOES (GLfixed width);
extern void  glLoadMatrixxOES (const GLfixed *m);
extern void  glMaterialxOES (GLenum face, GLenum pname, GLfixed param);
extern void  glMaterialxvOES (GLenum face, GLenum pname, const GLfixed *param);
extern void  glMultMatrixxOES (const GLfixed *m);
extern void  glMultiTexCoord4xOES (GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
extern void  glNormal3xOES (GLfixed nx, GLfixed ny, GLfixed nz);
extern void  glOrthoxOES (GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
extern void  glPointParameterxvOES (GLenum pname, const GLfixed *params);
extern void  glPointSizexOES (GLfixed size);
extern void  glPolygonOffsetxOES (GLfixed factor, GLfixed units);
extern void  glRotatexOES (GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
extern void  glScalexOES (GLfixed x, GLfixed y, GLfixed z);
extern void  glTexEnvxOES (GLenum target, GLenum pname, GLfixed param);
extern void  glTexEnvxvOES (GLenum target, GLenum pname, const GLfixed *params);
extern void  glTexParameterxOES (GLenum target, GLenum pname, GLfixed param);
extern void  glTexParameterxvOES (GLenum target, GLenum pname, const GLfixed *params);
extern void  glTranslatexOES (GLfixed x, GLfixed y, GLfixed z);
extern void  glAccumxOES (GLenum op, GLfixed value);
extern void  glBitmapxOES (GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte *bitmap);
extern void  glBlendColorxOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
extern void  glClearAccumxOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
extern void  glColor3xOES (GLfixed red, GLfixed green, GLfixed blue);
extern void  glColor3xvOES (const GLfixed *components);
extern void  glColor4xvOES (const GLfixed *components);
extern void  glConvolutionParameterxOES (GLenum target, GLenum pname, GLfixed param);
extern void  glConvolutionParameterxvOES (GLenum target, GLenum pname, const GLfixed *params);
extern void  glEvalCoord1xOES (GLfixed u);
extern void  glEvalCoord1xvOES (const GLfixed *coords);
extern void  glEvalCoord2xOES (GLfixed u, GLfixed v);
extern void  glEvalCoord2xvOES (const GLfixed *coords);
extern void  glFeedbackBufferxOES (GLsizei n, GLenum type, const GLfixed *buffer);
extern void  glGetConvolutionParameterxvOES (GLenum target, GLenum pname, GLfixed *params);
extern void  glGetHistogramParameterxvOES (GLenum target, GLenum pname, GLfixed *params);
extern void  glGetLightxOES (GLenum light, GLenum pname, GLfixed *params);
extern void  glGetMapxvOES (GLenum target, GLenum query, GLfixed *v);
extern void  glGetMaterialxOES (GLenum face, GLenum pname, GLfixed param);
extern void  glGetPixelMapxv (GLenum map, GLint size, GLfixed *values);
extern void  glGetTexGenxvOES (GLenum coord, GLenum pname, GLfixed *params);
extern void  glGetTexLevelParameterxvOES (GLenum target, GLint level, GLenum pname, GLfixed *params);
extern void  glIndexxOES (GLfixed component);
extern void  glIndexxvOES (const GLfixed *component);
extern void  glLoadTransposeMatrixxOES (const GLfixed *m);
extern void  glMap1xOES (GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points);
extern void  glMap2xOES (GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points);
extern void  glMapGrid1xOES (GLint n, GLfixed u1, GLfixed u2);
extern void  glMapGrid2xOES (GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2);
extern void  glMultTransposeMatrixxOES (const GLfixed *m);
extern void  glMultiTexCoord1xOES (GLenum texture, GLfixed s);
extern void  glMultiTexCoord1xvOES (GLenum texture, const GLfixed *coords);
extern void  glMultiTexCoord2xOES (GLenum texture, GLfixed s, GLfixed t);
extern void  glMultiTexCoord2xvOES (GLenum texture, const GLfixed *coords);
extern void  glMultiTexCoord3xOES (GLenum texture, GLfixed s, GLfixed t, GLfixed r);
extern void  glMultiTexCoord3xvOES (GLenum texture, const GLfixed *coords);
extern void  glMultiTexCoord4xvOES (GLenum texture, const GLfixed *coords);
extern void  glNormal3xvOES (const GLfixed *coords);
extern void  glPassThroughxOES (GLfixed token);
extern void  glPixelMapx (GLenum map, GLint size, const GLfixed *values);
extern void  glPixelStorex (GLenum pname, GLfixed param);
extern void  glPixelTransferxOES (GLenum pname, GLfixed param);
extern void  glPixelZoomxOES (GLfixed xfactor, GLfixed yfactor);
extern void  glPrioritizeTexturesxOES (GLsizei n, const GLuint *textures, const GLfixed *priorities);
extern void  glRasterPos2xOES (GLfixed x, GLfixed y);
extern void  glRasterPos2xvOES (const GLfixed *coords);
extern void  glRasterPos3xOES (GLfixed x, GLfixed y, GLfixed z);
extern void  glRasterPos3xvOES (const GLfixed *coords);
extern void  glRasterPos4xOES (GLfixed x, GLfixed y, GLfixed z, GLfixed w);
extern void  glRasterPos4xvOES (const GLfixed *coords);
extern void  glRectxOES (GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2);
extern void  glRectxvOES (const GLfixed *v1, const GLfixed *v2);
extern void  glTexCoord1xOES (GLfixed s);
extern void  glTexCoord1xvOES (const GLfixed *coords);
extern void  glTexCoord2xOES (GLfixed s, GLfixed t);
extern void  glTexCoord2xvOES (const GLfixed *coords);
extern void  glTexCoord3xOES (GLfixed s, GLfixed t, GLfixed r);
extern void  glTexCoord3xvOES (const GLfixed *coords);
extern void  glTexCoord4xOES (GLfixed s, GLfixed t, GLfixed r, GLfixed q);
extern void  glTexCoord4xvOES (const GLfixed *coords);
extern void  glTexGenxOES (GLenum coord, GLenum pname, GLfixed param);
extern void  glTexGenxvOES (GLenum coord, GLenum pname, const GLfixed *params);
extern void  glVertex2xOES (GLfixed x);
extern void  glVertex2xvOES (const GLfixed *coords);
extern void  glVertex3xOES (GLfixed x, GLfixed y);
extern void  glVertex3xvOES (const GLfixed *coords);
extern void  glVertex4xOES (GLfixed x, GLfixed y, GLfixed z);
extern void  glVertex4xvOES (const GLfixed *coords);
#endif
#endif /* GL_OES_fixed_point */

#ifndef GL_OES_query_matrix
#define GL_OES_query_matrix 1
extern GLbitfield  glQueryMatrixxOES (GLfixed *mantissa, GLint *exponent);
#endif
#endif /* GL_OES_query_matrix */

#ifndef GL_OES_read_format
#define GL_OES_read_format 1
#define GL_IMPLEMENTATION_COLOR_READ_TYPE_OES 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES 0x8B9B
#endif /* GL_OES_read_format */

#ifndef GL_OES_single_precision
#define GL_OES_single_precision 1
extern void  glClearDepthfOES (GLclampf depth);
extern void  glClipPlanefOES (GLenum plane, const GLfloat *equation);
extern void  glDepthRangefOES (GLclampf n, GLclampf f);
extern void  glFrustumfOES (GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
extern void  glGetClipPlanefOES (GLenum plane, GLfloat *equation);
extern void  glOrthofOES (GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
#endif
#endif /* GL_OES_single_precision */

#ifndef GL_3DFX_multisample
#define GL_3DFX_multisample 1
#define GL_MULTISAMPLE_3DFX               0x86B2
#define GL_SAMPLE_BUFFERS_3DFX            0x86B3
#define GL_SAMPLES_3DFX                   0x86B4
#define GL_MULTISAMPLE_BIT_3DFX           0x20000000
#endif /* GL_3DFX_multisample */

#ifndef GL_3DFX_tbuffer
#define GL_3DFX_tbuffer 1
extern void  glTbufferMask3DFX (GLuint mask);
#endif
#endif /* GL_3DFX_tbuffer */

#ifndef GL_3DFX_texture_compression_FXT1
#define GL_3DFX_texture_compression_FXT1 1
#define GL_COMPRESSED_RGB_FXT1_3DFX       0x86B0
#define GL_COMPRESSED_RGBA_FXT1_3DFX      0x86B1
#endif /* GL_3DFX_texture_compression_FXT1 */

#ifndef GL_AMD_blend_minmax_factor
#define GL_AMD_blend_minmax_factor 1
#define GL_FACTOR_MIN_AMD                 0x901C
#define GL_FACTOR_MAX_AMD                 0x901D
#endif /* GL_AMD_blend_minmax_factor */

#ifndef GL_AMD_conservative_depth
#define GL_AMD_conservative_depth 1
#endif /* GL_AMD_conservative_depth */

#ifndef GL_AMD_debug_output
#define GL_AMD_debug_output 1
#define GL_MAX_DEBUG_MESSAGE_LENGTH_AMD   0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_AMD  0x9144
#define GL_DEBUG_LOGGED_MESSAGES_AMD      0x9145
#define GL_DEBUG_SEVERITY_HIGH_AMD        0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_AMD      0x9147
#define GL_DEBUG_SEVERITY_LOW_AMD         0x9148
#define GL_DEBUG_CATEGORY_API_ERROR_AMD   0x9149
#define GL_DEBUG_CATEGORY_WINDOW_SYSTEM_AMD 0x914A
#define GL_DEBUG_CATEGORY_DEPRECATION_AMD 0x914B
#define GL_DEBUG_CATEGORY_UNDEFINED_BEHAVIOR_AMD 0x914C
#define GL_DEBUG_CATEGORY_PERFORMANCE_AMD 0x914D
#define GL_DEBUG_CATEGORY_SHADER_COMPILER_AMD 0x914E
#define GL_DEBUG_CATEGORY_APPLICATION_AMD 0x914F
#define GL_DEBUG_CATEGORY_OTHER_AMD       0x9150
extern void  glDebugMessageEnableAMD (GLenum category, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
extern void  glDebugMessageInsertAMD (GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar *buf);
extern void  glDebugMessageCallbackAMD (GLDEBUGPROCAMD callback, void *userParam);
extern GLuint  glGetDebugMessageLogAMD (GLuint count, GLsizei bufSize, GLenum *categories, GLuint *severities, GLuint *ids, GLsizei *lengths, GLchar *message);
#endif
#endif /* GL_AMD_debug_output */

#ifndef GL_AMD_depth_clamp_separate
#define GL_AMD_depth_clamp_separate 1
#define GL_DEPTH_CLAMP_NEAR_AMD           0x901E
#define GL_DEPTH_CLAMP_FAR_AMD            0x901F
#endif /* GL_AMD_depth_clamp_separate */

#ifndef GL_AMD_draw_buffers_blend
#define GL_AMD_draw_buffers_blend 1
extern void  glBlendFuncIndexedAMD (GLuint buf, GLenum src, GLenum dst);
extern void  glBlendFuncSeparateIndexedAMD (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
extern void  glBlendEquationIndexedAMD (GLuint buf, GLenum mode);
extern void  glBlendEquationSeparateIndexedAMD (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
#endif
#endif /* GL_AMD_draw_buffers_blend */

#ifndef GL_AMD_framebuffer_multisample_advanced
#define GL_AMD_framebuffer_multisample_advanced 1
#define GL_RENDERBUFFER_STORAGE_SAMPLES_AMD 0x91B2
#define GL_MAX_COLOR_FRAMEBUFFER_SAMPLES_AMD 0x91B3
#define GL_MAX_COLOR_FRAMEBUFFER_STORAGE_SAMPLES_AMD 0x91B4
#define GL_MAX_DEPTH_STENCIL_FRAMEBUFFER_SAMPLES_AMD 0x91B5
#define GL_NUM_SUPPORTED_MULTISAMPLE_MODES_AMD 0x91B6
#define GL_SUPPORTED_MULTISAMPLE_MODES_AMD 0x91B7
extern void  glRenderbufferStorageMultisampleAdvancedAMD (GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
extern void  glNamedRenderbufferStorageMultisampleAdvancedAMD (GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
#endif
#endif /* GL_AMD_framebuffer_multisample_advanced */

#ifndef GL_AMD_framebuffer_sample_positions
#define GL_AMD_framebuffer_sample_positions 1
#define GL_SUBSAMPLE_DISTANCE_AMD         0x883F
#define GL_PIXELS_PER_SAMPLE_PATTERN_X_AMD 0x91AE
#define GL_PIXELS_PER_SAMPLE_PATTERN_Y_AMD 0x91AF
#define GL_ALL_PIXELS_AMD                 0xFFFFFFFF
extern void  glFramebufferSamplePositionsfvAMD (GLenum target, GLuint numsamples, GLuint pixelindex, const GLfloat *values);
extern void  glNamedFramebufferSamplePositionsfvAMD (GLuint framebuffer, GLuint numsamples, GLuint pixelindex, const GLfloat *values);
extern void  glGetFramebufferParameterfvAMD (GLenum target, GLenum pname, GLuint numsamples, GLuint pixelindex, GLsizei size, GLfloat *values);
extern void  glGetNamedFramebufferParameterfvAMD (GLuint framebuffer, GLenum pname, GLuint numsamples, GLuint pixelindex, GLsizei size, GLfloat *values);
#endif
#endif /* GL_AMD_framebuffer_sample_positions */

#ifndef GL_AMD_gcn_shader
#define GL_AMD_gcn_shader 1
#endif /* GL_AMD_gcn_shader */

#ifndef GL_AMD_gpu_shader_half_float
#define GL_AMD_gpu_shader_half_float 1
#define GL_FLOAT16_NV                     0x8FF8
#define GL_FLOAT16_VEC2_NV                0x8FF9
#define GL_FLOAT16_VEC3_NV                0x8FFA
#define GL_FLOAT16_VEC4_NV                0x8FFB
#define GL_FLOAT16_MAT2_AMD               0x91C5
#define GL_FLOAT16_MAT3_AMD               0x91C6
#define GL_FLOAT16_MAT4_AMD               0x91C7
#define GL_FLOAT16_MAT2x3_AMD             0x91C8
#define GL_FLOAT16_MAT2x4_AMD             0x91C9
#define GL_FLOAT16_MAT3x2_AMD             0x91CA
#define GL_FLOAT16_MAT3x4_AMD             0x91CB
#define GL_FLOAT16_MAT4x2_AMD             0x91CC
#define GL_FLOAT16_MAT4x3_AMD             0x91CD
#endif /* GL_AMD_gpu_shader_half_float */

#ifndef GL_AMD_gpu_shader_int16
#define GL_AMD_gpu_shader_int16 1
#endif /* GL_AMD_gpu_shader_int16 */

#ifndef GL_AMD_gpu_shader_int64
#define GL_AMD_gpu_shader_int64 1
typedef khronos_int64_t GLint64EXT;
#define GL_INT64_NV                       0x140E
#define GL_UNSIGNED_INT64_NV              0x140F
#define GL_INT8_NV                        0x8FE0
#define GL_INT8_VEC2_NV                   0x8FE1
#define GL_INT8_VEC3_NV                   0x8FE2
#define GL_INT8_VEC4_NV                   0x8FE3
#define GL_INT16_NV                       0x8FE4
#define GL_INT16_VEC2_NV                  0x8FE5
#define GL_INT16_VEC3_NV                  0x8FE6
#define GL_INT16_VEC4_NV                  0x8FE7
#define GL_INT64_VEC2_NV                  0x8FE9
#define GL_INT64_VEC3_NV                  0x8FEA
#define GL_INT64_VEC4_NV                  0x8FEB
#define GL_UNSIGNED_INT8_NV               0x8FEC
#define GL_UNSIGNED_INT8_VEC2_NV          0x8FED
#define GL_UNSIGNED_INT8_VEC3_NV          0x8FEE
#define GL_UNSIGNED_INT8_VEC4_NV          0x8FEF
#define GL_UNSIGNED_INT16_NV              0x8FF0
#define GL_UNSIGNED_INT16_VEC2_NV         0x8FF1
#define GL_UNSIGNED_INT16_VEC3_NV         0x8FF2
#define GL_UNSIGNED_INT16_VEC4_NV         0x8FF3
#define GL_UNSIGNED_INT64_VEC2_NV         0x8FF5
#define GL_UNSIGNED_INT64_VEC3_NV         0x8FF6
#define GL_UNSIGNED_INT64_VEC4_NV         0x8FF7
extern void  glUniform1i64NV (GLint location, GLint64EXT x);
extern void  glUniform2i64NV (GLint location, GLint64EXT x, GLint64EXT y);
extern void  glUniform3i64NV (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
extern void  glUniform4i64NV (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
extern void  glUniform1i64vNV (GLint location, GLsizei count, const GLint64EXT *value);
extern void  glUniform2i64vNV (GLint location, GLsizei count, const GLint64EXT *value);
extern void  glUniform3i64vNV (GLint location, GLsizei count, const GLint64EXT *value);
extern void  glUniform4i64vNV (GLint location, GLsizei count, const GLint64EXT *value);
extern void  glUniform1ui64NV (GLint location, GLuint64EXT x);
extern void  glUniform2ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y);
extern void  glUniform3ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
extern void  glUniform4ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
extern void  glUniform1ui64vNV (GLint location, GLsizei count, const GLuint64EXT *value);
extern void  glUniform2ui64vNV (GLint location, GLsizei count, const GLuint64EXT *value);
extern void  glUniform3ui64vNV (GLint location, GLsizei count, const GLuint64EXT *value);
extern void  glUniform4ui64vNV (GLint location, GLsizei count, const GLuint64EXT *value);
extern void  glGetUniformi64vNV (GLuint program, GLint location, GLint64EXT *params);
extern void  glGetUniformui64vNV (GLuint program, GLint location, GLuint64EXT *params);
extern void  glProgramUniform1i64NV (GLuint program, GLint location, GLint64EXT x);
extern void  glProgramUniform2i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
extern void  glProgramUniform3i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
extern void  glProgramUniform4i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
extern void  glProgramUniform1i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
extern void  glProgramUniform2i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
extern void  glProgramUniform3i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
extern void  glProgramUniform4i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
extern void  glProgramUniform1ui64NV (GLuint program, GLint location, GLuint64EXT x);
extern void  glProgramUniform2ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
extern void  glProgramUniform3ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
extern void  glProgramUniform4ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
extern void  glProgramUniform1ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
extern void  glProgramUniform2ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
extern void  glProgramUniform3ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
extern void  glProgramUniform4ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
#endif
#endif /* GL_AMD_gpu_shader_int64 */

#ifndef GL_AMD_interleaved_elements
#define GL_AMD_interleaved_elements 1
#define GL_VERTEX_ELEMENT_SWIZZLE_AMD     0x91A4
#define GL_VERTEX_ID_SWIZZLE_AMD          0x91A5
extern void  glVertexAttribParameteriAMD (GLuint index, GLenum pname, GLint param);
#endif
#endif /* GL_AMD_interleaved_elements */

#ifndef GL_AMD_multi_draw_indirect
#define GL_AMD_multi_draw_indirect 1
extern void  glMultiDrawArraysIndirectAMD (GLenum mode, const void *indirect, GLsizei primcount, GLsizei stride);
extern void  glMultiDrawElementsIndirectAMD (GLenum mode, GLenum type, const void *indirect, GLsizei primcount, GLsizei stride);
#endif
#endif /* GL_AMD_multi_draw_indirect */

#ifndef GL_AMD_name_gen_delete
#define GL_AMD_name_gen_delete 1
#define GL_DATA_BUFFER_AMD                0x9151
#define GL_PERFORMANCE_MONITOR_AMD        0x9152
#define GL_QUERY_OBJECT_AMD               0x9153
#define GL_VERTEX_ARRAY_OBJECT_AMD        0x9154
#define GL_SAMPLER_OBJECT_AMD             0x9155
extern void  glGenNamesAMD (GLenum identifier, GLuint num, GLuint *names);
extern void  glDeleteNamesAMD (GLenum identifier, GLuint num, const GLuint *names);
extern GLboolean  glIsNameAMD (GLenum identifier, GLuint name);
#endif
#endif /* GL_AMD_name_gen_delete */

#ifndef GL_AMD_occlusion_query_event
#define GL_AMD_occlusion_query_event 1
#define GL_OCCLUSION_QUERY_EVENT_MASK_AMD 0x874F
#define GL_QUERY_DEPTH_PASS_EVENT_BIT_AMD 0x00000001
#define GL_QUERY_DEPTH_FAIL_EVENT_BIT_AMD 0x00000002
#define GL_QUERY_STENCIL_FAIL_EVENT_BIT_AMD 0x00000004
#define GL_QUERY_DEPTH_BOUNDS_FAIL_EVENT_BIT_AMD 0x00000008
#define GL_QUERY_ALL_EVENT_BITS_AMD       0xFFFFFFFF
extern void  glQueryObjectParameteruiAMD (GLenum target, GLuint id, GLenum pname, GLuint param);
#endif
#endif /* GL_AMD_occlusion_query_event */

#ifndef GL_AMD_performance_monitor
#define GL_AMD_performance_monitor 1
#define GL_COUNTER_TYPE_AMD               0x8BC0
#define GL_COUNTER_RANGE_AMD              0x8BC1
#define GL_UNSIGNED_INT64_AMD             0x8BC2
#define GL_PERCENTAGE_AMD                 0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD   0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD        0x8BC5
#define GL_PERFMON_RESULT_AMD             0x8BC6
extern void  glGetPerfMonitorGroupsAMD (GLint *numGroups, GLsizei groupsSize, GLuint *groups);
extern void  glGetPerfMonitorCountersAMD (GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
extern void  glGetPerfMonitorGroupStringAMD (GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
extern void  glGetPerfMonitorCounterStringAMD (GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
extern void  glGetPerfMonitorCounterInfoAMD (GLuint group, GLuint counter, GLenum pname, void *data);
extern void  glGenPerfMonitorsAMD (GLsizei n, GLuint *monitors);
extern void  glDeletePerfMonitorsAMD (GLsizei n, GLuint *monitors);
extern void  glSelectPerfMonitorCountersAMD (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
extern void  glBeginPerfMonitorAMD (GLuint monitor);
extern void  glEndPerfMonitorAMD (GLuint monitor);
extern void  glGetPerfMonitorCounterDataAMD (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
#endif
#endif /* GL_AMD_performance_monitor */

#ifndef GL_AMD_pinned_memory
#define GL_AMD_pinned_memory 1
#define GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD 0x9160
#endif /* GL_AMD_pinned_memory */

#ifndef GL_AMD_query_buffer_object
#define GL_AMD_query_buffer_object 1
#define GL_QUERY_BUFFER_AMD               0x9192
#define GL_QUERY_BUFFER_BINDING_AMD       0x9193
#define GL_QUERY_RESULT_NO_WAIT_AMD       0x9194
#endif /* GL_AMD_query_buffer_object */

#ifndef GL_AMD_sample_positions
#define GL_AMD_sample_positions 1
extern void  glSetMultisamplefvAMD (GLenum pname, GLuint index, const GLfloat *val);
#endif
#endif /* GL_AMD_sample_positions */

#ifndef GL_AMD_seamless_cubemap_per_texture
#define GL_AMD_seamless_cubemap_per_texture 1
#endif /* GL_AMD_seamless_cubemap_per_texture */

#ifndef GL_AMD_shader_atomic_counter_ops
#define GL_AMD_shader_atomic_counter_ops 1
#endif /* GL_AMD_shader_atomic_counter_ops */

#ifndef GL_AMD_shader_ballot
#define GL_AMD_shader_ballot 1
#endif /* GL_AMD_shader_ballot */

#ifndef GL_AMD_shader_explicit_vertex_parameter
#define GL_AMD_shader_explicit_vertex_parameter 1
#endif /* GL_AMD_shader_explicit_vertex_parameter */

#ifndef GL_AMD_shader_gpu_shader_half_float_fetch
#define GL_AMD_shader_gpu_shader_half_float_fetch 1
#endif /* GL_AMD_shader_gpu_shader_half_float_fetch */

#ifndef GL_AMD_shader_image_load_store_lod
#define GL_AMD_shader_image_load_store_lod 1
#endif /* GL_AMD_shader_image_load_store_lod */

#ifndef GL_AMD_shader_stencil_export
#define GL_AMD_shader_stencil_export 1
#endif /* GL_AMD_shader_stencil_export */

#ifndef GL_AMD_shader_trinary_minmax
#define GL_AMD_shader_trinary_minmax 1
#endif /* GL_AMD_shader_trinary_minmax */

#ifndef GL_AMD_sparse_texture
#define GL_AMD_sparse_texture 1
#define GL_VIRTUAL_PAGE_SIZE_X_AMD        0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_AMD        0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_AMD        0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_AMD    0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_AMD 0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS 0x919A
#define GL_MIN_SPARSE_LEVEL_AMD           0x919B
#define GL_MIN_LOD_WARNING_AMD            0x919C
#define GL_TEXTURE_STORAGE_SPARSE_BIT_AMD 0x00000001
extern void  glTexStorageSparseAMD (GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags);
extern void  glTextureStorageSparseAMD (GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags);
#endif
#endif /* GL_AMD_sparse_texture */

#ifndef GL_AMD_stencil_operation_extended
#define GL_AMD_stencil_operation_extended 1
#define GL_SET_AMD                        0x874A
#define GL_REPLACE_VALUE_AMD              0x874B
#define GL_STENCIL_OP_VALUE_AMD           0x874C
#define GL_STENCIL_BACK_OP_VALUE_AMD      0x874D
extern void  glStencilOpValueAMD (GLenum face, GLuint value);
#endif
#endif /* GL_AMD_stencil_operation_extended */

#ifndef GL_AMD_texture_gather_bias_lod
#define GL_AMD_texture_gather_bias_lod 1
#endif /* GL_AMD_texture_gather_bias_lod */

#ifndef GL_AMD_texture_texture4
#define GL_AMD_texture_texture4 1
#endif /* GL_AMD_texture_texture4 */

#ifndef GL_AMD_transform_feedback3_lines_triangles
#define GL_AMD_transform_feedback3_lines_triangles 1
#endif /* GL_AMD_transform_feedback3_lines_triangles */

#ifndef GL_AMD_transform_feedback4
#define GL_AMD_transform_feedback4 1
#define GL_STREAM_RASTERIZATION_AMD       0x91A0
#endif /* GL_AMD_transform_feedback4 */

#ifndef GL_AMD_vertex_shader_layer
#define GL_AMD_vertex_shader_layer 1
#endif /* GL_AMD_vertex_shader_layer */

#ifndef GL_AMD_vertex_shader_tessellator
#define GL_AMD_vertex_shader_tessellator 1
#define GL_SAMPLER_BUFFER_AMD             0x9001
#define GL_INT_SAMPLER_BUFFER_AMD         0x9002
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_AMD 0x9003
#define GL_TESSELLATION_MODE_AMD          0x9004
#define GL_TESSELLATION_FACTOR_AMD        0x9005
#define GL_DISCRETE_AMD                   0x9006
#define GL_CONTINUOUS_AMD                 0x9007
extern void  glTessellationFactorAMD (GLfloat factor);
extern void  glTessellationModeAMD (GLenum mode);
#endif
#endif /* GL_AMD_vertex_shader_tessellator */

#ifndef GL_AMD_vertex_shader_viewport_index
#define GL_AMD_vertex_shader_viewport_index 1
#endif /* GL_AMD_vertex_shader_viewport_index */

#ifndef GL_APPLE_aux_depth_stencil
#define GL_APPLE_aux_depth_stencil 1
#define GL_AUX_DEPTH_STENCIL_APPLE        0x8A14
#endif /* GL_APPLE_aux_depth_stencil */

#ifndef GL_APPLE_client_storage
#define GL_APPLE_client_storage 1
#define GL_UNPACK_CLIENT_STORAGE_APPLE    0x85B2
#endif /* GL_APPLE_client_storage */

#ifndef GL_APPLE_element_array
#define GL_APPLE_element_array 1
#define GL_ELEMENT_ARRAY_APPLE            0x8A0C
#define GL_ELEMENT_ARRAY_TYPE_APPLE       0x8A0D
#define GL_ELEMENT_ARRAY_POINTER_APPLE    0x8A0E
extern void  glElementPointerAPPLE (GLenum type, const void *pointer);
extern void  glDrawElementArrayAPPLE (GLenum mode, GLint first, GLsizei count);
extern void  glDrawRangeElementArrayAPPLE (GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
extern void  glMultiDrawElementArrayAPPLE (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
extern void  glMultiDrawRangeElementArrayAPPLE (GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount);
#endif
#endif /* GL_APPLE_element_array */

#ifndef GL_APPLE_fence
#define GL_APPLE_fence 1
#define GL_DRAW_PIXELS_APPLE              0x8A0A
#define GL_FENCE_APPLE                    0x8A0B
extern void  glGenFencesAPPLE (GLsizei n, GLuint *fences);
extern void  glDeleteFencesAPPLE (GLsizei n, const GLuint *fences);
extern void  glSetFenceAPPLE (GLuint fence);
extern GLboolean  glIsFenceAPPLE (GLuint fence);
extern GLboolean  glTestFenceAPPLE (GLuint fence);
extern void  glFinishFenceAPPLE (GLuint fence);
extern GLboolean  glTestObjectAPPLE (GLenum object, GLuint name);
extern void  glFinishObjectAPPLE (GLenum object, GLint name);
#endif
#endif /* GL_APPLE_fence */

#ifndef GL_APPLE_float_pixels
#define GL_APPLE_float_pixels 1
#define GL_HALF_APPLE                     0x140B
#define GL_RGBA_FLOAT32_APPLE             0x8814
#define GL_RGB_FLOAT32_APPLE              0x8815
#define GL_ALPHA_FLOAT32_APPLE            0x8816
#define GL_INTENSITY_FLOAT32_APPLE        0x8817
#define GL_LUMINANCE_FLOAT32_APPLE        0x8818
#define GL_LUMINANCE_ALPHA_FLOAT32_APPLE  0x8819
#define GL_RGBA_FLOAT16_APPLE             0x881A
#define GL_RGB_FLOAT16_APPLE              0x881B
#define GL_ALPHA_FLOAT16_APPLE            0x881C
#define GL_INTENSITY_FLOAT16_APPLE        0x881D
#define GL_LUMINANCE_FLOAT16_APPLE        0x881E
#define GL_LUMINANCE_ALPHA_FLOAT16_APPLE  0x881F
#define GL_COLOR_FLOAT_APPLE              0x8A0F
#endif /* GL_APPLE_float_pixels */

#ifndef GL_APPLE_flush_buffer_range
#define GL_APPLE_flush_buffer_range 1
#define GL_BUFFER_SERIALIZED_MODIFY_APPLE 0x8A12
#define GL_BUFFER_FLUSHING_UNMAP_APPLE    0x8A13
extern void  glBufferParameteriAPPLE (GLenum target, GLenum pname, GLint param);
extern void  glFlushMappedBufferRangeAPPLE (GLenum target, GLintptr offset, GLsizeiptr size);
#endif
#endif /* GL_APPLE_flush_buffer_range */

#ifndef GL_APPLE_object_purgeable
#define GL_APPLE_object_purgeable 1
#define GL_BUFFER_OBJECT_APPLE            0x85B3
#define GL_RELEASED_APPLE                 0x8A19
#define GL_VOLATILE_APPLE                 0x8A1A
#define GL_RETAINED_APPLE                 0x8A1B
#define GL_UNDEFINED_APPLE                0x8A1C
#define GL_PURGEABLE_APPLE                0x8A1D
extern GLenum  glObjectPurgeableAPPLE (GLenum objectType, GLuint name, GLenum option);
extern GLenum  glObjectUnpurgeableAPPLE (GLenum objectType, GLuint name, GLenum option);
extern void  glGetObjectParameterivAPPLE (GLenum objectType, GLuint name, GLenum pname, GLint *params);
#endif
#endif /* GL_APPLE_object_purgeable */

#ifndef GL_APPLE_rgb_422
#define GL_APPLE_rgb_422 1
#define GL_RGB_422_APPLE                  0x8A1F
#define GL_UNSIGNED_SHORT_8_8_APPLE       0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE   0x85BB
#define GL_RGB_RAW_422_APPLE              0x8A51
#endif /* GL_APPLE_rgb_422 */

#ifndef GL_APPLE_row_bytes
#define GL_APPLE_row_bytes 1
#define GL_PACK_ROW_BYTES_APPLE           0x8A15
#define GL_UNPACK_ROW_BYTES_APPLE         0x8A16
#endif /* GL_APPLE_row_bytes */

#ifndef GL_APPLE_specular_vector
#define GL_APPLE_specular_vector 1
#define GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE 0x85B0
#endif /* GL_APPLE_specular_vector */

#ifndef GL_APPLE_texture_range
#define GL_APPLE_texture_range 1
#define GL_TEXTURE_RANGE_LENGTH_APPLE     0x85B7
#define GL_TEXTURE_RANGE_POINTER_APPLE    0x85B8
#define GL_TEXTURE_STORAGE_HINT_APPLE     0x85BC
#define GL_STORAGE_PRIVATE_APPLE          0x85BD
#define GL_STORAGE_CACHED_APPLE           0x85BE
#define GL_STORAGE_SHARED_APPLE           0x85BF
extern void  glTextureRangeAPPLE (GLenum target, GLsizei length, const void *pointer);
extern void  glGetTexParameterPointervAPPLE (GLenum target, GLenum pname, void **params);
#endif
#endif /* GL_APPLE_texture_range */

#ifndef GL_APPLE_transform_hint
#define GL_APPLE_transform_hint 1
#define GL_TRANSFORM_HINT_APPLE           0x85B1
#endif /* GL_APPLE_transform_hint */

#ifndef GL_APPLE_vertex_array_object
#define GL_APPLE_vertex_array_object 1
#define GL_VERTEX_ARRAY_BINDING_APPLE     0x85B5
extern void  glBindVertexArrayAPPLE (GLuint array);
extern void  glDeleteVertexArraysAPPLE (GLsizei n, const GLuint *arrays);
extern void  glGenVertexArraysAPPLE (GLsizei n, GLuint *arrays);
extern GLboolean  glIsVertexArrayAPPLE (GLuint array);
#endif
#endif /* GL_APPLE_vertex_array_object */

#ifndef GL_APPLE_vertex_array_range
#define GL_APPLE_vertex_array_range 1
#define GL_VERTEX_ARRAY_RANGE_APPLE       0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE 0x851E
#define GL_VERTEX_ARRAY_STORAGE_HINT_APPLE 0x851F
#define GL_VERTEX_ARRAY_RANGE_POINTER_APPLE 0x8521
#define GL_STORAGE_CLIENT_APPLE           0x85B4
extern void  glVertexArrayRangeAPPLE (GLsizei length, void *pointer);
extern void  glFlushVertexArrayRangeAPPLE (GLsizei length, void *pointer);
extern void  glVertexArrayParameteriAPPLE (GLenum pname, GLint param);
#endif
#endif /* GL_APPLE_vertex_array_range */

#ifndef GL_APPLE_vertex_program_evaluators
#define GL_APPLE_vertex_program_evaluators 1
#define GL_VERTEX_ATTRIB_MAP1_APPLE       0x8A00
#define GL_VERTEX_ATTRIB_MAP2_APPLE       0x8A01
#define GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE  0x8A02
#define GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE 0x8A03
#define GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE 0x8A04
#define GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE 0x8A05
#define GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE  0x8A06
#define GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE 0x8A07
#define GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE 0x8A08
#define GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE 0x8A09
extern void  glEnableVertexAttribAPPLE (GLuint index, GLenum pname);
extern void  glDisableVertexAttribAPPLE (GLuint index, GLenum pname);
extern GLboolean  glIsVertexAttribEnabledAPPLE (GLuint index, GLenum pname);
extern void  glMapVertexAttrib1dAPPLE (GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
extern void  glMapVertexAttrib1fAPPLE (GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
extern void  glMapVertexAttrib2dAPPLE (GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
extern void  glMapVertexAttrib2fAPPLE (GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
#endif
#endif /* GL_APPLE_vertex_program_evaluators */

#ifndef GL_APPLE_ycbcr_422
#define GL_APPLE_ycbcr_422 1
#define GL_YCBCR_422_APPLE                0x85B9
#endif /* GL_APPLE_ycbcr_422 */

#ifndef GL_ATI_draw_buffers
#define GL_ATI_draw_buffers 1
#define GL_MAX_DRAW_BUFFERS_ATI           0x8824
#define GL_DRAW_BUFFER0_ATI               0x8825
#define GL_DRAW_BUFFER1_ATI               0x8826
#define GL_DRAW_BUFFER2_ATI               0x8827
#define GL_DRAW_BUFFER3_ATI               0x8828
#define GL_DRAW_BUFFER4_ATI               0x8829
#define GL_DRAW_BUFFER5_ATI               0x882A
#define GL_DRAW_BUFFER6_ATI               0x882B
#define GL_DRAW_BUFFER7_ATI               0x882C
#define GL_DRAW_BUFFER8_ATI               0x882D
#define GL_DRAW_BUFFER9_ATI               0x882E
#define GL_DRAW_BUFFER10_ATI              0x882F
#define GL_DRAW_BUFFER11_ATI              0x8830
#define GL_DRAW_BUFFER12_ATI              0x8831
#define GL_DRAW_BUFFER13_ATI              0x8832
#define GL_DRAW_BUFFER14_ATI              0x8833
#define GL_DRAW_BUFFER15_ATI              0x8834
extern void  glDrawBuffersATI (GLsizei n, const GLenum *bufs);
#endif
#endif /* GL_ATI_draw_buffers */

#ifndef GL_ATI_element_array
#define GL_ATI_element_array 1
#define GL_ELEMENT_ARRAY_ATI              0x8768
#define GL_ELEMENT_ARRAY_TYPE_ATI         0x8769
#define GL_ELEMENT_ARRAY_POINTER_ATI      0x876A
extern void  glElementPointerATI (GLenum type, const void *pointer);
extern void  glDrawElementArrayATI (GLenum mode, GLsizei count);
extern void  glDrawRangeElementArrayATI (GLenum mode, GLuint start, GLuint end, GLsizei count);
#endif
#endif /* GL_ATI_element_array */

#ifndef GL_ATI_envmap_bumpmap
#define GL_ATI_envmap_bumpmap 1
#define GL_BUMP_ROT_MATRIX_ATI            0x8775
#define GL_BUMP_ROT_MATRIX_SIZE_ATI       0x8776
#define GL_BUMP_NUM_TEX_UNITS_ATI         0x8777
#define GL_BUMP_TEX_UNITS_ATI             0x8778
#define GL_DUDV_ATI                       0x8779
#define GL_DU8DV8_ATI                     0x877A
#define GL_BUMP_ENVMAP_ATI                0x877B
#define GL_BUMP_TARGET_ATI                0x877C
extern void  glTexBumpParameterivATI (GLenum pname, const GLint *param);
extern void  glTexBumpParameterfvATI (GLenum pname, const GLfloat *param);
extern void  glGetTexBumpParameterivATI (GLenum pname, GLint *param);
extern void  glGetTexBumpParameterfvATI (GLenum pname, GLfloat *param);
#endif
#endif /* GL_ATI_envmap_bumpmap */

#ifndef GL_ATI_fragment_shader
#define GL_ATI_fragment_shader 1
#define GL_FRAGMENT_SHADER_ATI            0x8920
#define GL_REG_0_ATI                      0x8921
#define GL_REG_1_ATI                      0x8922
#define GL_REG_2_ATI                      0x8923
#define GL_REG_3_ATI                      0x8924
#define GL_REG_4_ATI                      0x8925
#define GL_REG_5_ATI                      0x8926
#define GL_REG_6_ATI                      0x8927
#define GL_REG_7_ATI                      0x8928
#define GL_REG_8_ATI                      0x8929
#define GL_REG_9_ATI                      0x892A
#define GL_REG_10_ATI                     0x892B
#define GL_REG_11_ATI                     0x892C
#define GL_REG_12_ATI                     0x892D
#define GL_REG_13_ATI                     0x892E
#define GL_REG_14_ATI                     0x892F
#define GL_REG_15_ATI                     0x8930
#define GL_REG_16_ATI                     0x8931
#define GL_REG_17_ATI                     0x8932
#define GL_REG_18_ATI                     0x8933
#define GL_REG_19_ATI                     0x8934
#define GL_REG_20_ATI                     0x8935
#define GL_REG_21_ATI                     0x8936
#define GL_REG_22_ATI                     0x8937
#define GL_REG_23_ATI                     0x8938
#define GL_REG_24_ATI                     0x8939
#define GL_REG_25_ATI                     0x893A
#define GL_REG_26_ATI                     0x893B
#define GL_REG_27_ATI                     0x893C
#define GL_REG_28_ATI                     0x893D
#define GL_REG_29_ATI                     0x893E
#define GL_REG_30_ATI                     0x893F
#define GL_REG_31_ATI                     0x8940
#define GL_CON_0_ATI                      0x8941
#define GL_CON_1_ATI                      0x8942
#define GL_CON_2_ATI                      0x8943
#define GL_CON_3_ATI                      0x8944
#define GL_CON_4_ATI                      0x8945
#define GL_CON_5_ATI                      0x8946
#define GL_CON_6_ATI                      0x8947
#define GL_CON_7_ATI                      0x8948
#define GL_CON_8_ATI                      0x8949
#define GL_CON_9_ATI                      0x894A
#define GL_CON_10_ATI                     0x894B
#define GL_CON_11_ATI                     0x894C
#define GL_CON_12_ATI                     0x894D
#define GL_CON_13_ATI                     0x894E
#define GL_CON_14_ATI                     0x894F
#define GL_CON_15_ATI                     0x8950
#define GL_CON_16_ATI                     0x8951
#define GL_CON_17_ATI                     0x8952
#define GL_CON_18_ATI                     0x8953
#define GL_CON_19_ATI                     0x8954
#define GL_CON_20_ATI                     0x8955
#define GL_CON_21_ATI                     0x8956
#define GL_CON_22_ATI                     0x8957
#define GL_CON_23_ATI                     0x8958
#define GL_CON_24_ATI                     0x8959
#define GL_CON_25_ATI                     0x895A
#define GL_CON_26_ATI                     0x895B
#define GL_CON_27_ATI                     0x895C
#define GL_CON_28_ATI                     0x895D
#define GL_CON_29_ATI                     0x895E
#define GL_CON_30_ATI                     0x895F
#define GL_CON_31_ATI                     0x8960
#define GL_MOV_ATI                        0x8961
#define GL_ADD_ATI                        0x8963
#define GL_MUL_ATI                        0x8964
#define GL_SUB_ATI                        0x8965
#define GL_DOT3_ATI                       0x8966
#define GL_DOT4_ATI                       0x8967
#define GL_MAD_ATI                        0x8968
#define GL_LERP_ATI                       0x8969
#define GL_CND_ATI                        0x896A
#define GL_CND0_ATI                       0x896B
#define GL_DOT2_ADD_ATI                   0x896C
#define GL_SECONDARY_INTERPOLATOR_ATI     0x896D
#define GL_NUM_FRAGMENT_REGISTERS_ATI     0x896E
#define GL_NUM_FRAGMENT_CONSTANTS_ATI     0x896F
#define GL_NUM_PASSES_ATI                 0x8970
#define GL_NUM_INSTRUCTIONS_PER_PASS_ATI  0x8971
#define GL_NUM_INSTRUCTIONS_TOTAL_ATI     0x8972
#define GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI 0x8973
#define GL_NUM_LOOPBACK_COMPONENTS_ATI    0x8974
#define GL_COLOR_ALPHA_PAIRING_ATI        0x8975
#define GL_SWIZZLE_STR_ATI                0x8976
#define GL_SWIZZLE_STQ_ATI                0x8977
#define GL_SWIZZLE_STR_DR_ATI             0x8978
#define GL_SWIZZLE_STQ_DQ_ATI             0x8979
#define GL_SWIZZLE_STRQ_ATI               0x897A
#define GL_SWIZZLE_STRQ_DQ_ATI            0x897B
#define GL_RED_BIT_ATI                    0x00000001
#define GL_GREEN_BIT_ATI                  0x00000002
#define GL_BLUE_BIT_ATI                   0x00000004
#define GL_2X_BIT_ATI                     0x00000001
#define GL_4X_BIT_ATI                     0x00000002
#define GL_8X_BIT_ATI                     0x00000004
#define GL_HALF_BIT_ATI                   0x00000008
#define GL_QUARTER_BIT_ATI                0x00000010
#define GL_EIGHTH_BIT_ATI                 0x00000020
#define GL_SATURATE_BIT_ATI               0x00000040
#define GL_COMP_BIT_ATI                   0x00000002
#define GL_NEGATE_BIT_ATI                 0x00000004
#define GL_BIAS_BIT_ATI                   0x00000008
extern GLuint  glGenFragmentShadersATI (GLuint range);
extern void  glBindFragmentShaderATI (GLuint id);
extern void  glDeleteFragmentShaderATI (GLuint id);
extern void  glBeginFragmentShaderATI (void);
extern void  glEndFragmentShaderATI (void);
extern void  glPassTexCoordATI (GLuint dst, GLuint coord, GLenum swizzle);
extern void  glSampleMapATI (GLuint dst, GLuint interp, GLenum swizzle);
extern void  glColorFragmentOp1ATI (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
extern void  glColorFragmentOp2ATI (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
extern void  glColorFragmentOp3ATI (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
extern void  glAlphaFragmentOp1ATI (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
extern void  glAlphaFragmentOp2ATI (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
extern void  glAlphaFragmentOp3ATI (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
extern void  glSetFragmentShaderConstantATI (GLuint dst, const GLfloat *value);
#endif
#endif /* GL_ATI_fragment_shader */

#ifndef GL_ATI_map_object_buffer
#define GL_ATI_map_object_buffer 1
extern void * glMapObjectBufferATI (GLuint buffer);
extern void  glUnmapObjectBufferATI (GLuint buffer);
#endif
#endif /* GL_ATI_map_object_buffer */

#ifndef GL_ATI_meminfo
#define GL_ATI_meminfo 1
#define GL_VBO_FREE_MEMORY_ATI            0x87FB
#define GL_TEXTURE_FREE_MEMORY_ATI        0x87FC
#define GL_RENDERBUFFER_FREE_MEMORY_ATI   0x87FD
#endif /* GL_ATI_meminfo */

#ifndef GL_ATI_pixel_format_float
#define GL_ATI_pixel_format_float 1
#define GL_RGBA_FLOAT_MODE_ATI            0x8820
#define GL_COLOR_CLEAR_UNCLAMPED_VALUE_ATI 0x8835
#endif /* GL_ATI_pixel_format_float */

#ifndef GL_ATI_pn_triangles
#define GL_ATI_pn_triangles 1
#define GL_PN_TRIANGLES_ATI               0x87F0
#define GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI 0x87F1
#define GL_PN_TRIANGLES_POINT_MODE_ATI    0x87F2
#define GL_PN_TRIANGLES_NORMAL_MODE_ATI   0x87F3
#define GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI 0x87F4
#define GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI 0x87F5
#define GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI 0x87F6
#define GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI 0x87F7
#define GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI 0x87F8
extern void  glPNTrianglesiATI (GLenum pname, GLint param);
extern void  glPNTrianglesfATI (GLenum pname, GLfloat param);
#endif
#endif /* GL_ATI_pn_triangles */

#ifndef GL_ATI_separate_stencil
#define GL_ATI_separate_stencil 1
#define GL_STENCIL_BACK_FUNC_ATI          0x8800
#define GL_STENCIL_BACK_FAIL_ATI          0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI 0x8803
extern void  glStencilOpSeparateATI (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
extern void  glStencilFuncSeparateATI (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
#endif
#endif /* GL_ATI_separate_stencil */

#ifndef GL_ATI_text_fragment_shader
#define GL_ATI_text_fragment_shader 1
#define GL_TEXT_FRAGMENT_SHADER_ATI       0x8200
#endif /* GL_ATI_text_fragment_shader */

#ifndef GL_ATI_texture_env_combine3
#define GL_ATI_texture_env_combine3 1
#define GL_MODULATE_ADD_ATI               0x8744
#define GL_MODULATE_SIGNED_ADD_ATI        0x8745
#define GL_MODULATE_SUBTRACT_ATI          0x8746
#endif /* GL_ATI_texture_env_combine3 */

#ifndef GL_ATI_texture_float
#define GL_ATI_texture_float 1
#define GL_RGBA_FLOAT32_ATI               0x8814
#define GL_RGB_FLOAT32_ATI                0x8815
#define GL_ALPHA_FLOAT32_ATI              0x8816
#define GL_INTENSITY_FLOAT32_ATI          0x8817
#define GL_LUMINANCE_FLOAT32_ATI          0x8818
#define GL_LUMINANCE_ALPHA_FLOAT32_ATI    0x8819
#define GL_RGBA_FLOAT16_ATI               0x881A
#define GL_RGB_FLOAT16_ATI                0x881B
#define GL_ALPHA_FLOAT16_ATI              0x881C
#define GL_INTENSITY_FLOAT16_ATI          0x881D
#define GL_LUMINANCE_FLOAT16_ATI          0x881E
#define GL_LUMINANCE_ALPHA_FLOAT16_ATI    0x881F
#endif /* GL_ATI_texture_float */

#ifndef GL_ATI_texture_mirror_once
#define GL_ATI_texture_mirror_once 1
#define GL_MIRROR_CLAMP_ATI               0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_ATI       0x8743
#endif /* GL_ATI_texture_mirror_once */

#ifndef GL_ATI_vertex_array_object
#define GL_ATI_vertex_array_object 1
#define GL_STATIC_ATI                     0x8760
#define GL_DYNAMIC_ATI                    0x8761
#define GL_PRESERVE_ATI                   0x8762
#define GL_DISCARD_ATI                    0x8763
#define GL_OBJECT_BUFFER_SIZE_ATI         0x8764
#define GL_OBJECT_BUFFER_USAGE_ATI        0x8765
#define GL_ARRAY_OBJECT_BUFFER_ATI        0x8766
#define GL_ARRAY_OBJECT_OFFSET_ATI        0x8767
extern GLuint  glNewObjectBufferATI (GLsizei size, const void *pointer, GLenum usage);
extern GLboolean  glIsObjectBufferATI (GLuint buffer);
extern void  glUpdateObjectBufferATI (GLuint buffer, GLuint offset, GLsizei size, const void *pointer, GLenum preserve);
extern void  glGetObjectBufferfvATI (GLuint buffer, GLenum pname, GLfloat *params);
extern void  glGetObjectBufferivATI (GLuint buffer, GLenum pname, GLint *params);
extern void  glFreeObjectBufferATI (GLuint buffer);
extern void  glArrayObjectATI (GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
extern void  glGetArrayObjectfvATI (GLenum array, GLenum pname, GLfloat *params);
extern void  glGetArrayObjectivATI (GLenum array, GLenum pname, GLint *params);
extern void  glVariantArrayObjectATI (GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
extern void  glGetVariantArrayObjectfvATI (GLuint id, GLenum pname, GLfloat *params);
extern void  glGetVariantArrayObjectivATI (GLuint id, GLenum pname, GLint *params);
#endif
#endif /* GL_ATI_vertex_array_object */

#ifndef GL_ATI_vertex_attrib_array_object
#define GL_ATI_vertex_attrib_array_object 1
extern void  glVertexAttribArrayObjectATI (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset);
extern void  glGetVertexAttribArrayObjectfvATI (GLuint index, GLenum pname, GLfloat *params);
extern void  glGetVertexAttribArrayObjectivATI (GLuint index, GLenum pname, GLint *params);
#endif
#endif /* GL_ATI_vertex_attrib_array_object */

#ifndef GL_ATI_vertex_streams
#define GL_ATI_vertex_streams 1
#define GL_MAX_VERTEX_STREAMS_ATI         0x876B
#define GL_VERTEX_STREAM0_ATI             0x876C
#define GL_VERTEX_STREAM1_ATI             0x876D
#define GL_VERTEX_STREAM2_ATI             0x876E
#define GL_VERTEX_STREAM3_ATI             0x876F
#define GL_VERTEX_STREAM4_ATI             0x8770
#define GL_VERTEX_STREAM5_ATI             0x8771
#define GL_VERTEX_STREAM6_ATI             0x8772
#define GL_VERTEX_STREAM7_ATI             0x8773
#define GL_VERTEX_SOURCE_ATI              0x8774
extern void  glVertexStream1sATI (GLenum stream, GLshort x);
extern void  glVertexStream1svATI (GLenum stream, const GLshort *coords);
extern void  glVertexStream1iATI (GLenum stream, GLint x);
extern void  glVertexStream1ivATI (GLenum stream, const GLint *coords);
extern void  glVertexStream1fATI (GLenum stream, GLfloat x);
extern void  glVertexStream1fvATI (GLenum stream, const GLfloat *coords);
extern void  glVertexStream1dATI (GLenum stream, GLdouble x);
extern void  glVertexStream1dvATI (GLenum stream, const GLdouble *coords);
extern void  glVertexStream2sATI (GLenum stream, GLshort x, GLshort y);
extern void  glVertexStream2svATI (GLenum stream, const GLshort *coords);
extern void  glVertexStream2iATI (GLenum stream, GLint x, GLint y);
extern void  glVertexStream2ivATI (GLenum stream, const GLint *coords);
extern void  glVertexStream2fATI (GLenum stream, GLfloat x, GLfloat y);
extern void  glVertexStream2fvATI (GLenum stream, const GLfloat *coords);
extern void  glVertexStream2dATI (GLenum stream, GLdouble x, GLdouble y);
extern void  glVertexStream2dvATI (GLenum stream, const GLdouble *coords);
extern void  glVertexStream3sATI (GLenum stream, GLshort x, GLshort y, GLshort z);
extern void  glVertexStream3svATI (GLenum stream, const GLshort *coords);
extern void  glVertexStream3iATI (GLenum stream, GLint x, GLint y, GLint z);
extern void  glVertexStream3ivATI (GLenum stream, const GLint *coords);
extern void  glVertexStream3fATI (GLenum stream, GLfloat x, GLfloat y, GLfloat z);
extern void  glVertexStream3fvATI (GLenum stream, const GLfloat *coords);
extern void  glVertexStream3dATI (GLenum stream, GLdouble x, GLdouble y, GLdouble z);
extern void  glVertexStream3dvATI (GLenum stream, const GLdouble *coords);
extern void  glVertexStream4sATI (GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w);
extern void  glVertexStream4svATI (GLenum stream, const GLshort *coords);
extern void  glVertexStream4iATI (GLenum stream, GLint x, GLint y, GLint z, GLint w);
extern void  glVertexStream4ivATI (GLenum stream, const GLint *coords);
extern void  glVertexStream4fATI (GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void  glVertexStream4fvATI (GLenum stream, const GLfloat *coords);
extern void  glVertexStream4dATI (GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glVertexStream4dvATI (GLenum stream, const GLdouble *coords);
extern void  glNormalStream3bATI (GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz);
extern void  glNormalStream3bvATI (GLenum stream, const GLbyte *coords);
extern void  glNormalStream3sATI (GLenum stream, GLshort nx, GLshort ny, GLshort nz);
extern void  glNormalStream3svATI (GLenum stream, const GLshort *coords);
extern void  glNormalStream3iATI (GLenum stream, GLint nx, GLint ny, GLint nz);
extern void  glNormalStream3ivATI (GLenum stream, const GLint *coords);
extern void  glNormalStream3fATI (GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz);
extern void  glNormalStream3fvATI (GLenum stream, const GLfloat *coords);
extern void  glNormalStream3dATI (GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz);
extern void  glNormalStream3dvATI (GLenum stream, const GLdouble *coords);
extern void  glClientActiveVertexStreamATI (GLenum stream);
extern void  glVertexBlendEnviATI (GLenum pname, GLint param);
extern void  glVertexBlendEnvfATI (GLenum pname, GLfloat param);
#endif
#endif /* GL_ATI_vertex_streams */

#ifndef GL_EXT_422_pixels
#define GL_EXT_422_pixels 1
#define GL_422_EXT                        0x80CC
#define GL_422_REV_EXT                    0x80CD
#define GL_422_AVERAGE_EXT                0x80CE
#define GL_422_REV_AVERAGE_EXT            0x80CF
#endif /* GL_EXT_422_pixels */

#ifndef GL_EXT_EGL_image_storage
#define GL_EXT_EGL_image_storage 1
extern void  glEGLImageTargetTexStorageEXT (GLenum target, GLeglImageOES image, const GLint* attrib_list);
extern void  glEGLImageTargetTextureStorageEXT (GLuint texture, GLeglImageOES image, const GLint* attrib_list);
#endif
#endif /* GL_EXT_EGL_image_storage */

#ifndef GL_EXT_EGL_sync
#define GL_EXT_EGL_sync 1
#endif /* GL_EXT_EGL_sync */

#ifndef GL_EXT_abgr
#define GL_EXT_abgr 1
#define GL_ABGR_EXT                       0x8000
#endif /* GL_EXT_abgr */

#ifndef GL_EXT_bgra
#define GL_EXT_bgra 1
#define GL_BGR_EXT                        0x80E0
#define GL_BGRA_EXT                       0x80E1
#endif /* GL_EXT_bgra */

#ifndef GL_EXT_bindable_uniform
#define GL_EXT_bindable_uniform 1
#define GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT 0x8DE2
#define GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT 0x8DE3
#define GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT 0x8DE4
#define GL_MAX_BINDABLE_UNIFORM_SIZE_EXT  0x8DED
#define GL_UNIFORM_BUFFER_EXT             0x8DEE
#define GL_UNIFORM_BUFFER_BINDING_EXT     0x8DEF
extern void  glUniformBufferEXT (GLuint program, GLint location, GLuint buffer);
extern GLint  glGetUniformBufferSizeEXT (GLuint program, GLint location);
extern GLintptr  glGetUniformOffsetEXT (GLuint program, GLint location);
#endif
#endif /* GL_EXT_bindable_uniform */

#ifndef GL_EXT_blend_color
#define GL_EXT_blend_color 1
#define GL_CONSTANT_COLOR_EXT             0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR_EXT   0x8002
#define GL_CONSTANT_ALPHA_EXT             0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA_EXT   0x8004
#define GL_BLEND_COLOR_EXT                0x8005
extern void  glBlendColorEXT (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
#endif
#endif /* GL_EXT_blend_color */

#ifndef GL_EXT_blend_equation_separate
#define GL_EXT_blend_equation_separate 1
#define GL_BLEND_EQUATION_RGB_EXT         0x8009
#define GL_BLEND_EQUATION_ALPHA_EXT       0x883D
extern void  glBlendEquationSeparateEXT (GLenum modeRGB, GLenum modeAlpha);
#endif
#endif /* GL_EXT_blend_equation_separate */

#ifndef GL_EXT_blend_func_separate
#define GL_EXT_blend_func_separate 1
#define GL_BLEND_DST_RGB_EXT              0x80C8
#define GL_BLEND_SRC_RGB_EXT              0x80C9
#define GL_BLEND_DST_ALPHA_EXT            0x80CA
#define GL_BLEND_SRC_ALPHA_EXT            0x80CB
extern void  glBlendFuncSeparateEXT (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
#endif
#endif /* GL_EXT_blend_func_separate */

#ifndef GL_EXT_blend_logic_op
#define GL_EXT_blend_logic_op 1
#endif /* GL_EXT_blend_logic_op */

#ifndef GL_EXT_blend_minmax
#define GL_EXT_blend_minmax 1
#define GL_MIN_EXT                        0x8007
#define GL_MAX_EXT                        0x8008
#define GL_FUNC_ADD_EXT                   0x8006
#define GL_BLEND_EQUATION_EXT             0x8009
extern void  glBlendEquationEXT (GLenum mode);
#endif
#endif /* GL_EXT_blend_minmax */

#ifndef GL_EXT_blend_subtract
#define GL_EXT_blend_subtract 1
#define GL_FUNC_SUBTRACT_EXT              0x800A
#define GL_FUNC_REVERSE_SUBTRACT_EXT      0x800B
#endif /* GL_EXT_blend_subtract */

#ifndef GL_EXT_clip_volume_hint
#define GL_EXT_clip_volume_hint 1
#define GL_CLIP_VOLUME_CLIPPING_HINT_EXT  0x80F0
#endif /* GL_EXT_clip_volume_hint */

#ifndef GL_EXT_cmyka
#define GL_EXT_cmyka 1
#define GL_CMYK_EXT                       0x800C
#define GL_CMYKA_EXT                      0x800D
#define GL_PACK_CMYK_HINT_EXT             0x800E
#define GL_UNPACK_CMYK_HINT_EXT           0x800F
#endif /* GL_EXT_cmyka */

#ifndef GL_EXT_color_subtable
#define GL_EXT_color_subtable 1
extern void  glColorSubTableEXT (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data);
extern void  glCopyColorSubTableEXT (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
#endif
#endif /* GL_EXT_color_subtable */

#ifndef GL_EXT_compiled_vertex_array
#define GL_EXT_compiled_vertex_array 1
#define GL_ARRAY_ELEMENT_LOCK_FIRST_EXT   0x81A8
#define GL_ARRAY_ELEMENT_LOCK_COUNT_EXT   0x81A9
extern void  glLockArraysEXT (GLint first, GLsizei count);
extern void  glUnlockArraysEXT (void);
#endif
#endif /* GL_EXT_compiled_vertex_array */

#ifndef GL_EXT_convolution
#define GL_EXT_convolution 1
#define GL_CONVOLUTION_1D_EXT             0x8010
#define GL_CONVOLUTION_2D_EXT             0x8011
#define GL_SEPARABLE_2D_EXT               0x8012
#define GL_CONVOLUTION_BORDER_MODE_EXT    0x8013
#define GL_CONVOLUTION_FILTER_SCALE_EXT   0x8014
#define GL_CONVOLUTION_FILTER_BIAS_EXT    0x8015
#define GL_REDUCE_EXT                     0x8016
#define GL_CONVOLUTION_FORMAT_EXT         0x8017
#define GL_CONVOLUTION_WIDTH_EXT          0x8018
#define GL_CONVOLUTION_HEIGHT_EXT         0x8019
#define GL_MAX_CONVOLUTION_WIDTH_EXT      0x801A
#define GL_MAX_CONVOLUTION_HEIGHT_EXT     0x801B
#define GL_POST_CONVOLUTION_RED_SCALE_EXT 0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE_EXT 0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE_EXT 0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE_EXT 0x801F
#define GL_POST_CONVOLUTION_RED_BIAS_EXT  0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS_EXT 0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS_EXT 0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS_EXT 0x8023
extern void  glConvolutionFilter1DEXT (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image);
extern void  glConvolutionFilter2DEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image);
extern void  glConvolutionParameterfEXT (GLenum target, GLenum pname, GLfloat params);
extern void  glConvolutionParameterfvEXT (GLenum target, GLenum pname, const GLfloat *params);
extern void  glConvolutionParameteriEXT (GLenum target, GLenum pname, GLint params);
extern void  glConvolutionParameterivEXT (GLenum target, GLenum pname, const GLint *params);
extern void  glCopyConvolutionFilter1DEXT (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern void  glCopyConvolutionFilter2DEXT (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glGetConvolutionFilterEXT (GLenum target, GLenum format, GLenum type, void *image);
extern void  glGetConvolutionParameterfvEXT (GLenum target, GLenum pname, GLfloat *params);
extern void  glGetConvolutionParameterivEXT (GLenum target, GLenum pname, GLint *params);
extern void  glGetSeparableFilterEXT (GLenum target, GLenum format, GLenum type, void *row, void *column, void *span);
extern void  glSeparableFilter2DEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column);
#endif
#endif /* GL_EXT_convolution */

#ifndef GL_EXT_coordinate_frame
#define GL_EXT_coordinate_frame 1
#define GL_TANGENT_ARRAY_EXT              0x8439
#define GL_BINORMAL_ARRAY_EXT             0x843A
#define GL_CURRENT_TANGENT_EXT            0x843B
#define GL_CURRENT_BINORMAL_EXT           0x843C
#define GL_TANGENT_ARRAY_TYPE_EXT         0x843E
#define GL_TANGENT_ARRAY_STRIDE_EXT       0x843F
#define GL_BINORMAL_ARRAY_TYPE_EXT        0x8440
#define GL_BINORMAL_ARRAY_STRIDE_EXT      0x8441
#define GL_TANGENT_ARRAY_POINTER_EXT      0x8442
#define GL_BINORMAL_ARRAY_POINTER_EXT     0x8443
#define GL_MAP1_TANGENT_EXT               0x8444
#define GL_MAP2_TANGENT_EXT               0x8445
#define GL_MAP1_BINORMAL_EXT              0x8446
#define GL_MAP2_BINORMAL_EXT              0x8447
extern void  glTangent3bEXT (GLbyte tx, GLbyte ty, GLbyte tz);
extern void  glTangent3bvEXT (const GLbyte *v);
extern void  glTangent3dEXT (GLdouble tx, GLdouble ty, GLdouble tz);
extern void  glTangent3dvEXT (const GLdouble *v);
extern void  glTangent3fEXT (GLfloat tx, GLfloat ty, GLfloat tz);
extern void  glTangent3fvEXT (const GLfloat *v);
extern void  glTangent3iEXT (GLint tx, GLint ty, GLint tz);
extern void  glTangent3ivEXT (const GLint *v);
extern void  glTangent3sEXT (GLshort tx, GLshort ty, GLshort tz);
extern void  glTangent3svEXT (const GLshort *v);
extern void  glBinormal3bEXT (GLbyte bx, GLbyte by, GLbyte bz);
extern void  glBinormal3bvEXT (const GLbyte *v);
extern void  glBinormal3dEXT (GLdouble bx, GLdouble by, GLdouble bz);
extern void  glBinormal3dvEXT (const GLdouble *v);
extern void  glBinormal3fEXT (GLfloat bx, GLfloat by, GLfloat bz);
extern void  glBinormal3fvEXT (const GLfloat *v);
extern void  glBinormal3iEXT (GLint bx, GLint by, GLint bz);
extern void  glBinormal3ivEXT (const GLint *v);
extern void  glBinormal3sEXT (GLshort bx, GLshort by, GLshort bz);
extern void  glBinormal3svEXT (const GLshort *v);
extern void  glTangentPointerEXT (GLenum type, GLsizei stride, const void *pointer);
extern void  glBinormalPointerEXT (GLenum type, GLsizei stride, const void *pointer);
#endif
#endif /* GL_EXT_coordinate_frame */

#ifndef GL_EXT_copy_texture
#define GL_EXT_copy_texture 1
extern void  glCopyTexImage1DEXT (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
extern void  glCopyTexImage2DEXT (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern void  glCopyTexSubImage1DEXT (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
extern void  glCopyTexSubImage2DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glCopyTexSubImage3DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
#endif
#endif /* GL_EXT_copy_texture */

#ifndef GL_EXT_cull_vertex
#define GL_EXT_cull_vertex 1
#define GL_CULL_VERTEX_EXT                0x81AA
#define GL_CULL_VERTEX_EYE_POSITION_EXT   0x81AB
#define GL_CULL_VERTEX_OBJECT_POSITION_EXT 0x81AC
extern void  glCullParameterdvEXT (GLenum pname, GLdouble *params);
extern void  glCullParameterfvEXT (GLenum pname, GLfloat *params);
#endif
#endif /* GL_EXT_cull_vertex */

#ifndef GL_EXT_debug_label
#define GL_EXT_debug_label 1
#define GL_PROGRAM_PIPELINE_OBJECT_EXT    0x8A4F
#define GL_PROGRAM_OBJECT_EXT             0x8B40
#define GL_SHADER_OBJECT_EXT              0x8B48
#define GL_BUFFER_OBJECT_EXT              0x9151
#define GL_QUERY_OBJECT_EXT               0x9153
#define GL_VERTEX_ARRAY_OBJECT_EXT        0x9154
extern void  glLabelObjectEXT (GLenum type, GLuint object, GLsizei length, const GLchar *label);
extern void  glGetObjectLabelEXT (GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
#endif
#endif /* GL_EXT_debug_label */

#ifndef GL_EXT_debug_marker
#define GL_EXT_debug_marker 1
extern void  glInsertEventMarkerEXT (GLsizei length, const GLchar *marker);
extern void  glPushGroupMarkerEXT (GLsizei length, const GLchar *marker);
extern void  glPopGroupMarkerEXT (void);
#endif
#endif /* GL_EXT_debug_marker */

#ifndef GL_EXT_depth_bounds_test
#define GL_EXT_depth_bounds_test 1
#define GL_DEPTH_BOUNDS_TEST_EXT          0x8890
#define GL_DEPTH_BOUNDS_EXT               0x8891
extern void  glDepthBoundsEXT (GLclampd zmin, GLclampd zmax);
#endif
#endif /* GL_EXT_depth_bounds_test */

#ifndef GL_EXT_direct_state_access
#define GL_EXT_direct_state_access 1
#define GL_PROGRAM_MATRIX_EXT             0x8E2D
#define GL_TRANSPOSE_PROGRAM_MATRIX_EXT   0x8E2E
#define GL_PROGRAM_MATRIX_STACK_DEPTH_EXT 0x8E2F
extern void  glMatrixLoadfEXT (GLenum mode, const GLfloat *m);
extern void  glMatrixLoaddEXT (GLenum mode, const GLdouble *m);
extern void  glMatrixMultfEXT (GLenum mode, const GLfloat *m);
extern void  glMatrixMultdEXT (GLenum mode, const GLdouble *m);
extern void  glMatrixLoadIdentityEXT (GLenum mode);
extern void  glMatrixRotatefEXT (GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
extern void  glMatrixRotatedEXT (GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
extern void  glMatrixScalefEXT (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
extern void  glMatrixScaledEXT (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
extern void  glMatrixTranslatefEXT (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
extern void  glMatrixTranslatedEXT (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
extern void  glMatrixFrustumEXT (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
extern void  glMatrixOrthoEXT (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
extern void  glMatrixPopEXT (GLenum mode);
extern void  glMatrixPushEXT (GLenum mode);
extern void  glClientAttribDefaultEXT (GLbitfield mask);
extern void  glPushClientAttribDefaultEXT (GLbitfield mask);
extern void  glTextureParameterfEXT (GLuint texture, GLenum target, GLenum pname, GLfloat param);
extern void  glTextureParameterfvEXT (GLuint texture, GLenum target, GLenum pname, const GLfloat *params);
extern void  glTextureParameteriEXT (GLuint texture, GLenum target, GLenum pname, GLint param);
extern void  glTextureParameterivEXT (GLuint texture, GLenum target, GLenum pname, const GLint *params);
extern void  glTextureImage1DEXT (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
extern void  glTextureImage2DEXT (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
extern void  glTextureSubImage1DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
extern void  glTextureSubImage2DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
extern void  glCopyTextureImage1DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
extern void  glCopyTextureImage2DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern void  glCopyTextureSubImage1DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
extern void  glCopyTextureSubImage2DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glGetTextureImageEXT (GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
extern void  glGetTextureParameterfvEXT (GLuint texture, GLenum target, GLenum pname, GLfloat *params);
extern void  glGetTextureParameterivEXT (GLuint texture, GLenum target, GLenum pname, GLint *params);
extern void  glGetTextureLevelParameterfvEXT (GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params);
extern void  glGetTextureLevelParameterivEXT (GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params);
extern void  glTextureImage3DEXT (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
extern void  glTextureSubImage3DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
extern void  glCopyTextureSubImage3DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glBindMultiTextureEXT (GLenum texunit, GLenum target, GLuint texture);
extern void  glMultiTexCoordPointerEXT (GLenum texunit, GLint size, GLenum type, GLsizei stride, const void *pointer);
extern void  glMultiTexEnvfEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat param);
extern void  glMultiTexEnvfvEXT (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
extern void  glMultiTexEnviEXT (GLenum texunit, GLenum target, GLenum pname, GLint param);
extern void  glMultiTexEnvivEXT (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
extern void  glMultiTexGendEXT (GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
extern void  glMultiTexGendvEXT (GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params);
extern void  glMultiTexGenfEXT (GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
extern void  glMultiTexGenfvEXT (GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params);
extern void  glMultiTexGeniEXT (GLenum texunit, GLenum coord, GLenum pname, GLint param);
extern void  glMultiTexGenivEXT (GLenum texunit, GLenum coord, GLenum pname, const GLint *params);
extern void  glGetMultiTexEnvfvEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
extern void  glGetMultiTexEnvivEXT (GLenum texunit, GLenum target, GLenum pname, GLint *params);
extern void  glGetMultiTexGendvEXT (GLenum texunit, GLenum coord, GLenum pname, GLdouble *params);
extern void  glGetMultiTexGenfvEXT (GLenum texunit, GLenum coord, GLenum pname, GLfloat *params);
extern void  glGetMultiTexGenivEXT (GLenum texunit, GLenum coord, GLenum pname, GLint *params);
extern void  glMultiTexParameteriEXT (GLenum texunit, GLenum target, GLenum pname, GLint param);
extern void  glMultiTexParameterivEXT (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
extern void  glMultiTexParameterfEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat param);
extern void  glMultiTexParameterfvEXT (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
extern void  glMultiTexImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
extern void  glMultiTexImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
extern void  glMultiTexSubImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
extern void  glMultiTexSubImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
extern void  glCopyMultiTexImage1DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
extern void  glCopyMultiTexImage2DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern void  glCopyMultiTexSubImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
extern void  glCopyMultiTexSubImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glGetMultiTexImageEXT (GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
extern void  glGetMultiTexParameterfvEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
extern void  glGetMultiTexParameterivEXT (GLenum texunit, GLenum target, GLenum pname, GLint *params);
extern void  glGetMultiTexLevelParameterfvEXT (GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params);
extern void  glGetMultiTexLevelParameterivEXT (GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params);
extern void  glMultiTexImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
extern void  glMultiTexSubImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
extern void  glCopyMultiTexSubImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glEnableClientStateIndexedEXT (GLenum array, GLuint index);
extern void  glDisableClientStateIndexedEXT (GLenum array, GLuint index);
extern void  glGetFloatIndexedvEXT (GLenum target, GLuint index, GLfloat *data);
extern void  glGetDoubleIndexedvEXT (GLenum target, GLuint index, GLdouble *data);
extern void  glGetPointerIndexedvEXT (GLenum target, GLuint index, void **data);
extern void  glEnableIndexedEXT (GLenum target, GLuint index);
extern void  glDisableIndexedEXT (GLenum target, GLuint index);
extern GLboolean  glIsEnabledIndexedEXT (GLenum target, GLuint index);
extern void  glGetIntegerIndexedvEXT (GLenum target, GLuint index, GLint *data);
extern void  glGetBooleanIndexedvEXT (GLenum target, GLuint index, GLboolean *data);
extern void  glCompressedTextureImage3DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
extern void  glCompressedTextureImage2DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits);
extern void  glCompressedTextureImage1DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits);
extern void  glCompressedTextureSubImage3DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits);
extern void  glCompressedTextureSubImage2DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits);
extern void  glCompressedTextureSubImage1DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits);
extern void  glGetCompressedTextureImageEXT (GLuint texture, GLenum target, GLint lod, void *img);
extern void  glCompressedMultiTexImage3DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
extern void  glCompressedMultiTexImage2DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits);
extern void  glCompressedMultiTexImage1DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits);
extern void  glCompressedMultiTexSubImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits);
extern void  glCompressedMultiTexSubImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits);
extern void  glCompressedMultiTexSubImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits);
extern void  glGetCompressedMultiTexImageEXT (GLenum texunit, GLenum target, GLint lod, void *img);
extern void  glMatrixLoadTransposefEXT (GLenum mode, const GLfloat *m);
extern void  glMatrixLoadTransposedEXT (GLenum mode, const GLdouble *m);
extern void  glMatrixMultTransposefEXT (GLenum mode, const GLfloat *m);
extern void  glMatrixMultTransposedEXT (GLenum mode, const GLdouble *m);
extern void  glNamedBufferDataEXT (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
extern void  glNamedBufferSubDataEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
extern void * glMapNamedBufferEXT (GLuint buffer, GLenum access);
extern GLboolean  glUnmapNamedBufferEXT (GLuint buffer);
extern void  glGetNamedBufferParameterivEXT (GLuint buffer, GLenum pname, GLint *params);
extern void  glGetNamedBufferPointervEXT (GLuint buffer, GLenum pname, void **params);
extern void  glGetNamedBufferSubDataEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
extern void  glProgramUniform1fEXT (GLuint program, GLint location, GLfloat v0);
extern void  glProgramUniform2fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1);
extern void  glProgramUniform3fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern void  glProgramUniform4fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern void  glProgramUniform1iEXT (GLuint program, GLint location, GLint v0);
extern void  glProgramUniform2iEXT (GLuint program, GLint location, GLint v0, GLint v1);
extern void  glProgramUniform3iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
extern void  glProgramUniform4iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern void  glProgramUniform1fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern void  glProgramUniform2fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern void  glProgramUniform3fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern void  glProgramUniform4fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat *value);
extern void  glProgramUniform1ivEXT (GLuint program, GLint location, GLsizei count, const GLint *value);
extern void  glProgramUniform2ivEXT (GLuint program, GLint location, GLsizei count, const GLint *value);
extern void  glProgramUniform3ivEXT (GLuint program, GLint location, GLsizei count, const GLint *value);
extern void  glProgramUniform4ivEXT (GLuint program, GLint location, GLsizei count, const GLint *value);
extern void  glProgramUniformMatrix2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix2x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix3x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix2x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix4x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix3x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glProgramUniformMatrix4x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
extern void  glTextureBufferEXT (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
extern void  glMultiTexBufferEXT (GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
extern void  glTextureParameterIivEXT (GLuint texture, GLenum target, GLenum pname, const GLint *params);
extern void  glTextureParameterIuivEXT (GLuint texture, GLenum target, GLenum pname, const GLuint *params);
extern void  glGetTextureParameterIivEXT (GLuint texture, GLenum target, GLenum pname, GLint *params);
extern void  glGetTextureParameterIuivEXT (GLuint texture, GLenum target, GLenum pname, GLuint *params);
extern void  glMultiTexParameterIivEXT (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
extern void  glMultiTexParameterIuivEXT (GLenum texunit, GLenum target, GLenum pname, const GLuint *params);
extern void  glGetMultiTexParameterIivEXT (GLenum texunit, GLenum target, GLenum pname, GLint *params);
extern void  glGetMultiTexParameterIuivEXT (GLenum texunit, GLenum target, GLenum pname, GLuint *params);
extern void  glProgramUniform1uiEXT (GLuint program, GLint location, GLuint v0);
extern void  glProgramUniform2uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1);
extern void  glProgramUniform3uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
extern void  glProgramUniform4uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
extern void  glProgramUniform1uivEXT (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern void  glProgramUniform2uivEXT (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern void  glProgramUniform3uivEXT (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern void  glProgramUniform4uivEXT (GLuint program, GLint location, GLsizei count, const GLuint *value);
extern void  glNamedProgramLocalParameters4fvEXT (GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params);
extern void  glNamedProgramLocalParameterI4iEXT (GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
extern void  glNamedProgramLocalParameterI4ivEXT (GLuint program, GLenum target, GLuint index, const GLint *params);
extern void  glNamedProgramLocalParametersI4ivEXT (GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params);
extern void  glNamedProgramLocalParameterI4uiEXT (GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
extern void  glNamedProgramLocalParameterI4uivEXT (GLuint program, GLenum target, GLuint index, const GLuint *params);
extern void  glNamedProgramLocalParametersI4uivEXT (GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params);
extern void  glGetNamedProgramLocalParameterIivEXT (GLuint program, GLenum target, GLuint index, GLint *params);
extern void  glGetNamedProgramLocalParameterIuivEXT (GLuint program, GLenum target, GLuint index, GLuint *params);
extern void  glEnableClientStateiEXT (GLenum array, GLuint index);
extern void  glDisableClientStateiEXT (GLenum array, GLuint index);
extern void  glGetFloati_vEXT (GLenum pname, GLuint index, GLfloat *params);
extern void  glGetDoublei_vEXT (GLenum pname, GLuint index, GLdouble *params);
extern void  glGetPointeri_vEXT (GLenum pname, GLuint index, void **params);
extern void  glNamedProgramStringEXT (GLuint program, GLenum target, GLenum format, GLsizei len, const void *string);
extern void  glNamedProgramLocalParameter4dEXT (GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glNamedProgramLocalParameter4dvEXT (GLuint program, GLenum target, GLuint index, const GLdouble *params);
extern void  glNamedProgramLocalParameter4fEXT (GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void  glNamedProgramLocalParameter4fvEXT (GLuint program, GLenum target, GLuint index, const GLfloat *params);
extern void  glGetNamedProgramLocalParameterdvEXT (GLuint program, GLenum target, GLuint index, GLdouble *params);
extern void  glGetNamedProgramLocalParameterfvEXT (GLuint program, GLenum target, GLuint index, GLfloat *params);
extern void  glGetNamedProgramivEXT (GLuint program, GLenum target, GLenum pname, GLint *params);
extern void  glGetNamedProgramStringEXT (GLuint program, GLenum target, GLenum pname, void *string);
extern void  glNamedRenderbufferStorageEXT (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
extern void  glGetNamedRenderbufferParameterivEXT (GLuint renderbuffer, GLenum pname, GLint *params);
extern void  glNamedRenderbufferStorageMultisampleEXT (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
extern void  glNamedRenderbufferStorageMultisampleCoverageEXT (GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
extern GLenum  glCheckNamedFramebufferStatusEXT (GLuint framebuffer, GLenum target);
extern void  glNamedFramebufferTexture1DEXT (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void  glNamedFramebufferTexture2DEXT (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void  glNamedFramebufferTexture3DEXT (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
extern void  glNamedFramebufferRenderbufferEXT (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern void  glGetNamedFramebufferAttachmentParameterivEXT (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
extern void  glGenerateTextureMipmapEXT (GLuint texture, GLenum target);
extern void  glGenerateMultiTexMipmapEXT (GLenum texunit, GLenum target);
extern void  glFramebufferDrawBufferEXT (GLuint framebuffer, GLenum mode);
extern void  glFramebufferDrawBuffersEXT (GLuint framebuffer, GLsizei n, const GLenum *bufs);
extern void  glFramebufferReadBufferEXT (GLuint framebuffer, GLenum mode);
extern void  glGetFramebufferParameterivEXT (GLuint framebuffer, GLenum pname, GLint *params);
extern void  glNamedCopyBufferSubDataEXT (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
extern void  glNamedFramebufferTextureEXT (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
extern void  glNamedFramebufferTextureLayerEXT (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
extern void  glNamedFramebufferTextureFaceEXT (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
extern void  glTextureRenderbufferEXT (GLuint texture, GLenum target, GLuint renderbuffer);
extern void  glMultiTexRenderbufferEXT (GLenum texunit, GLenum target, GLuint renderbuffer);
extern void  glVertexArrayVertexOffsetEXT (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
extern void  glVertexArrayColorOffsetEXT (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
extern void  glVertexArrayEdgeFlagOffsetEXT (GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset);
extern void  glVertexArrayIndexOffsetEXT (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
extern void  glVertexArrayNormalOffsetEXT (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
extern void  glVertexArrayTexCoordOffsetEXT (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
extern void  glVertexArrayMultiTexCoordOffsetEXT (GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset);
extern void  glVertexArrayFogCoordOffsetEXT (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
extern void  glVertexArraySecondaryColorOffsetEXT (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
extern void  glVertexArrayVertexAttribOffsetEXT (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset);
extern void  glVertexArrayVertexAttribIOffsetEXT (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
extern void  glEnableVertexArrayEXT (GLuint vaobj, GLenum array);
extern void  glDisableVertexArrayEXT (GLuint vaobj, GLenum array);
extern void  glEnableVertexArrayAttribEXT (GLuint vaobj, GLuint index);
extern void  glDisableVertexArrayAttribEXT (GLuint vaobj, GLuint index);
extern void  glGetVertexArrayIntegervEXT (GLuint vaobj, GLenum pname, GLint *param);
extern void  glGetVertexArrayPointervEXT (GLuint vaobj, GLenum pname, void **param);
extern void  glGetVertexArrayIntegeri_vEXT (GLuint vaobj, GLuint index, GLenum pname, GLint *param);
extern void  glGetVertexArrayPointeri_vEXT (GLuint vaobj, GLuint index, GLenum pname, void **param);
extern void * glMapNamedBufferRangeEXT (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
extern void  glFlushMappedNamedBufferRangeEXT (GLuint buffer, GLintptr offset, GLsizeiptr length);
extern void  glNamedBufferStorageEXT (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
extern void  glClearNamedBufferDataEXT (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
extern void  glClearNamedBufferSubDataEXT (GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
extern void  glNamedFramebufferParameteriEXT (GLuint framebuffer, GLenum pname, GLint param);
extern void  glGetNamedFramebufferParameterivEXT (GLuint framebuffer, GLenum pname, GLint *params);
extern void  glProgramUniform1dEXT (GLuint program, GLint location, GLdouble x);
extern void  glProgramUniform2dEXT (GLuint program, GLint location, GLdouble x, GLdouble y);
extern void  glProgramUniform3dEXT (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
extern void  glProgramUniform4dEXT (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glProgramUniform1dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern void  glProgramUniform2dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern void  glProgramUniform3dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern void  glProgramUniform4dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble *value);
extern void  glProgramUniformMatrix2dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix3dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix4dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix2x3dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix2x4dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix3x2dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix3x4dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix4x2dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glProgramUniformMatrix4x3dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
extern void  glTextureBufferRangeEXT (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
extern void  glTextureStorage1DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
extern void  glTextureStorage2DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
extern void  glTextureStorage3DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
extern void  glTextureStorage2DMultisampleEXT (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
extern void  glTextureStorage3DMultisampleEXT (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
extern void  glVertexArrayBindVertexBufferEXT (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
extern void  glVertexArrayVertexAttribFormatEXT (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
extern void  glVertexArrayVertexAttribIFormatEXT (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
extern void  glVertexArrayVertexAttribLFormatEXT (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
extern void  glVertexArrayVertexAttribBindingEXT (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
extern void  glVertexArrayVertexBindingDivisorEXT (GLuint vaobj, GLuint bindingindex, GLuint divisor);
extern void  glVertexArrayVertexAttribLOffsetEXT (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
extern void  glTexturePageCommitmentEXT (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
extern void  glVertexArrayVertexAttribDivisorEXT (GLuint vaobj, GLuint index, GLuint divisor);
#endif
#endif /* GL_EXT_direct_state_access */

#ifndef GL_EXT_draw_buffers2
#define GL_EXT_draw_buffers2 1
extern void  glColorMaskIndexedEXT (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
#endif
#endif /* GL_EXT_draw_buffers2 */

#ifndef GL_EXT_draw_instanced
#define GL_EXT_draw_instanced 1
extern void  glDrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
extern void  glDrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
#endif
#endif /* GL_EXT_draw_instanced */

#ifndef GL_EXT_draw_range_elements
#define GL_EXT_draw_range_elements 1
#define GL_MAX_ELEMENTS_VERTICES_EXT      0x80E8
#define GL_MAX_ELEMENTS_INDICES_EXT       0x80E9
extern void  glDrawRangeElementsEXT (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
#endif
#endif /* GL_EXT_draw_range_elements */

#ifndef GL_EXT_external_buffer
#define GL_EXT_external_buffer 1
typedef void *GLeglClientBufferEXT;
extern void  glBufferStorageExternalEXT (GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);
extern void  glNamedBufferStorageExternalEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);
#endif
#endif /* GL_EXT_external_buffer */

#ifndef GL_EXT_fog_coord
#define GL_EXT_fog_coord 1
#define GL_FOG_COORDINATE_SOURCE_EXT      0x8450
#define GL_FOG_COORDINATE_EXT             0x8451
#define GL_FRAGMENT_DEPTH_EXT             0x8452
#define GL_CURRENT_FOG_COORDINATE_EXT     0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE_EXT  0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE_EXT 0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER_EXT 0x8456
#define GL_FOG_COORDINATE_ARRAY_EXT       0x8457
extern void  glFogCoordfEXT (GLfloat coord);
extern void  glFogCoordfvEXT (const GLfloat *coord);
extern void  glFogCoorddEXT (GLdouble coord);
extern void  glFogCoorddvEXT (const GLdouble *coord);
extern void  glFogCoordPointerEXT (GLenum type, GLsizei stride, const void *pointer);
#endif
#endif /* GL_EXT_fog_coord */

#ifndef GL_EXT_framebuffer_blit
#define GL_EXT_framebuffer_blit 1
#define GL_READ_FRAMEBUFFER_EXT           0x8CA8
#define GL_DRAW_FRAMEBUFFER_EXT           0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_EXT   0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_EXT   0x8CAA
extern void  glBlitFramebufferEXT (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
#endif
#endif /* GL_EXT_framebuffer_blit */

#ifndef GL_EXT_framebuffer_multisample
#define GL_EXT_framebuffer_multisample 1
#define GL_RENDERBUFFER_SAMPLES_EXT       0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x8D56
#define GL_MAX_SAMPLES_EXT                0x8D57
extern void  glRenderbufferStorageMultisampleEXT (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
#endif
#endif /* GL_EXT_framebuffer_multisample */

#ifndef GL_EXT_framebuffer_multisample_blit_scaled
#define GL_EXT_framebuffer_multisample_blit_scaled 1
#define GL_SCALED_RESOLVE_FASTEST_EXT     0x90BA
#define GL_SCALED_RESOLVE_NICEST_EXT      0x90BB
#endif /* GL_EXT_framebuffer_multisample_blit_scaled */

#ifndef GL_EXT_framebuffer_object
#define GL_EXT_framebuffer_object 1
#define GL_INVALID_FRAMEBUFFER_OPERATION_EXT 0x0506
#define GL_MAX_RENDERBUFFER_SIZE_EXT      0x84E8
#define GL_FRAMEBUFFER_BINDING_EXT        0x8CA6
#define GL_RENDERBUFFER_BINDING_EXT       0x8CA7
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE_EXT       0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT 0x8CD9
#define GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT 0x8CDA
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED_EXT    0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS_EXT      0x8CDF
#define GL_COLOR_ATTACHMENT0_EXT          0x8CE0
#define GL_COLOR_ATTACHMENT1_EXT          0x8CE1
#define GL_COLOR_ATTACHMENT2_EXT          0x8CE2
#define GL_COLOR_ATTACHMENT3_EXT          0x8CE3
#define GL_COLOR_ATTACHMENT4_EXT          0x8CE4
#define GL_COLOR_ATTACHMENT5_EXT          0x8CE5
#define GL_COLOR_ATTACHMENT6_EXT          0x8CE6
#define GL_COLOR_ATTACHMENT7_EXT          0x8CE7
#define GL_COLOR_ATTACHMENT8_EXT          0x8CE8
#define GL_COLOR_ATTACHMENT9_EXT          0x8CE9
#define GL_COLOR_ATTACHMENT10_EXT         0x8CEA
#define GL_COLOR_ATTACHMENT11_EXT         0x8CEB
#define GL_COLOR_ATTACHMENT12_EXT         0x8CEC
#define GL_COLOR_ATTACHMENT13_EXT         0x8CED
#define GL_COLOR_ATTACHMENT14_EXT         0x8CEE
#define GL_COLOR_ATTACHMENT15_EXT         0x8CEF
#define GL_DEPTH_ATTACHMENT_EXT           0x8D00
#define GL_STENCIL_ATTACHMENT_EXT         0x8D20
#define GL_FRAMEBUFFER_EXT                0x8D40
#define GL_RENDERBUFFER_EXT               0x8D41
#define GL_RENDERBUFFER_WIDTH_EXT         0x8D42
#define GL_RENDERBUFFER_HEIGHT_EXT        0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT_EXT 0x8D44
#define GL_STENCIL_INDEX1_EXT             0x8D46
#define GL_STENCIL_INDEX4_EXT             0x8D47
#define GL_STENCIL_INDEX8_EXT             0x8D48
#define GL_STENCIL_INDEX16_EXT            0x8D49
#define GL_RENDERBUFFER_RED_SIZE_EXT      0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE_EXT    0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE_EXT     0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE_EXT    0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE_EXT    0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE_EXT  0x8D55
extern GLboolean  glIsRenderbufferEXT (GLuint renderbuffer);
extern void  glBindRenderbufferEXT (GLenum target, GLuint renderbuffer);
extern void  glDeleteRenderbuffersEXT (GLsizei n, const GLuint *renderbuffers);
extern void  glGenRenderbuffersEXT (GLsizei n, GLuint *renderbuffers);
extern void  glRenderbufferStorageEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
extern void  glGetRenderbufferParameterivEXT (GLenum target, GLenum pname, GLint *params);
extern GLboolean  glIsFramebufferEXT (GLuint framebuffer);
extern void  glBindFramebufferEXT (GLenum target, GLuint framebuffer);
extern void  glDeleteFramebuffersEXT (GLsizei n, const GLuint *framebuffers);
extern void  glGenFramebuffersEXT (GLsizei n, GLuint *framebuffers);
extern GLenum  glCheckFramebufferStatusEXT (GLenum target);
extern void  glFramebufferTexture1DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void  glFramebufferTexture2DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern void  glFramebufferTexture3DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
extern void  glFramebufferRenderbufferEXT (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern void  glGetFramebufferAttachmentParameterivEXT (GLenum target, GLenum attachment, GLenum pname, GLint *params);
extern void  glGenerateMipmapEXT (GLenum target);
#endif
#endif /* GL_EXT_framebuffer_object */

#ifndef GL_EXT_framebuffer_sRGB
#define GL_EXT_framebuffer_sRGB 1
#define GL_FRAMEBUFFER_SRGB_EXT           0x8DB9
#define GL_FRAMEBUFFER_SRGB_CAPABLE_EXT   0x8DBA
#endif /* GL_EXT_framebuffer_sRGB */

#ifndef GL_EXT_geometry_shader4
#define GL_EXT_geometry_shader4 1
#define GL_GEOMETRY_SHADER_EXT            0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_EXT      0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_EXT        0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_EXT       0x8DDC
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT 0x8C29
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT 0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_EXT 0x8DDE
#define GL_MAX_VARYING_COMPONENTS_EXT     0x8B4B
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT 0x8DE1
#define GL_LINES_ADJACENCY_EXT            0x000A
#define GL_LINE_STRIP_ADJACENCY_EXT       0x000B
#define GL_TRIANGLES_ADJACENCY_EXT        0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT   0x000D
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT 0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT 0x8DA9
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT 0x8DA7
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT 0x8CD4
#define GL_PROGRAM_POINT_SIZE_EXT         0x8642
extern void  glProgramParameteriEXT (GLuint program, GLenum pname, GLint value);
#endif
#endif /* GL_EXT_geometry_shader4 */

#ifndef GL_EXT_gpu_program_parameters
#define GL_EXT_gpu_program_parameters 1
extern void  glProgramEnvParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat *params);
extern void  glProgramLocalParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat *params);
#endif
#endif /* GL_EXT_gpu_program_parameters */

#ifndef GL_EXT_gpu_shader4
#define GL_EXT_gpu_shader4 1
#define GL_SAMPLER_1D_ARRAY_EXT           0x8DC0
#define GL_SAMPLER_2D_ARRAY_EXT           0x8DC1
#define GL_SAMPLER_BUFFER_EXT             0x8DC2
#define GL_SAMPLER_1D_ARRAY_SHADOW_EXT    0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW_EXT    0x8DC4
#define GL_SAMPLER_CUBE_SHADOW_EXT        0x8DC5
#define GL_UNSIGNED_INT_VEC2_EXT          0x8DC6
#define GL_UNSIGNED_INT_VEC3_EXT          0x8DC7
#define GL_UNSIGNED_INT_VEC4_EXT          0x8DC8
#define GL_INT_SAMPLER_1D_EXT             0x8DC9
#define GL_INT_SAMPLER_2D_EXT             0x8DCA
#define GL_INT_SAMPLER_3D_EXT             0x8DCB
#define GL_INT_SAMPLER_CUBE_EXT           0x8DCC
#define GL_INT_SAMPLER_2D_RECT_EXT        0x8DCD
#define GL_INT_SAMPLER_1D_ARRAY_EXT       0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY_EXT       0x8DCF
#define GL_INT_SAMPLER_BUFFER_EXT         0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_1D_EXT    0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D_EXT    0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D_EXT    0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE_EXT  0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT_EXT 0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY_EXT 0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY_EXT 0x8DD7
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT 0x8DD8
#define GL_MIN_PROGRAM_TEXEL_OFFSET_EXT   0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET_EXT   0x8905
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER_EXT 0x88FD
extern void  glGetUniformuivEXT (GLuint program, GLint location, GLuint *params);
extern void  glBindFragDataLocationEXT (GLuint program, GLuint color, const GLchar *name);
extern GLint  glGetFragDataLocationEXT (GLuint program, const GLchar *name);
extern void  glUniform1uiEXT (GLint location, GLuint v0);
extern void  glUniform2uiEXT (GLint location, GLuint v0, GLuint v1);
extern void  glUniform3uiEXT (GLint location, GLuint v0, GLuint v1, GLuint v2);
extern void  glUniform4uiEXT (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
extern void  glUniform1uivEXT (GLint location, GLsizei count, const GLuint *value);
extern void  glUniform2uivEXT (GLint location, GLsizei count, const GLuint *value);
extern void  glUniform3uivEXT (GLint location, GLsizei count, const GLuint *value);
extern void  glUniform4uivEXT (GLint location, GLsizei count, const GLuint *value);
extern void  glVertexAttribI1iEXT (GLuint index, GLint x);
extern void  glVertexAttribI2iEXT (GLuint index, GLint x, GLint y);
extern void  glVertexAttribI3iEXT (GLuint index, GLint x, GLint y, GLint z);
extern void  glVertexAttribI4iEXT (GLuint index, GLint x, GLint y, GLint z, GLint w);
extern void  glVertexAttribI1uiEXT (GLuint index, GLuint x);
extern void  glVertexAttribI2uiEXT (GLuint index, GLuint x, GLuint y);
extern void  glVertexAttribI3uiEXT (GLuint index, GLuint x, GLuint y, GLuint z);
extern void  glVertexAttribI4uiEXT (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
extern void  glVertexAttribI1ivEXT (GLuint index, const GLint *v);
extern void  glVertexAttribI2ivEXT (GLuint index, const GLint *v);
extern void  glVertexAttribI3ivEXT (GLuint index, const GLint *v);
extern void  glVertexAttribI4ivEXT (GLuint index, const GLint *v);
extern void  glVertexAttribI1uivEXT (GLuint index, const GLuint *v);
extern void  glVertexAttribI2uivEXT (GLuint index, const GLuint *v);
extern void  glVertexAttribI3uivEXT (GLuint index, const GLuint *v);
extern void  glVertexAttribI4uivEXT (GLuint index, const GLuint *v);
extern void  glVertexAttribI4bvEXT (GLuint index, const GLbyte *v);
extern void  glVertexAttribI4svEXT (GLuint index, const GLshort *v);
extern void  glVertexAttribI4ubvEXT (GLuint index, const GLubyte *v);
extern void  glVertexAttribI4usvEXT (GLuint index, const GLushort *v);
extern void  glVertexAttribIPointerEXT (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
extern void  glGetVertexAttribIivEXT (GLuint index, GLenum pname, GLint *params);
extern void  glGetVertexAttribIuivEXT (GLuint index, GLenum pname, GLuint *params);
#endif
#endif /* GL_EXT_gpu_shader4 */

#ifndef GL_EXT_histogram
#define GL_EXT_histogram 1
#define GL_HISTOGRAM_EXT                  0x8024
#define GL_PROXY_HISTOGRAM_EXT            0x8025
#define GL_HISTOGRAM_WIDTH_EXT            0x8026
#define GL_HISTOGRAM_FORMAT_EXT           0x8027
#define GL_HISTOGRAM_RED_SIZE_EXT         0x8028
#define GL_HISTOGRAM_GREEN_SIZE_EXT       0x8029
#define GL_HISTOGRAM_BLUE_SIZE_EXT        0x802A
#define GL_HISTOGRAM_ALPHA_SIZE_EXT       0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE_EXT   0x802C
#define GL_HISTOGRAM_SINK_EXT             0x802D
#define GL_MINMAX_EXT                     0x802E
#define GL_MINMAX_FORMAT_EXT              0x802F
#define GL_MINMAX_SINK_EXT                0x8030
#define GL_TABLE_TOO_LARGE_EXT            0x8031
extern void  glGetHistogramEXT (GLenum target, GLboolean reset, GLenum format, GLenum type, void *values);
extern void  glGetHistogramParameterfvEXT (GLenum target, GLenum pname, GLfloat *params);
extern void  glGetHistogramParameterivEXT (GLenum target, GLenum pname, GLint *params);
extern void  glGetMinmaxEXT (GLenum target, GLboolean reset, GLenum format, GLenum type, void *values);
extern void  glGetMinmaxParameterfvEXT (GLenum target, GLenum pname, GLfloat *params);
extern void  glGetMinmaxParameterivEXT (GLenum target, GLenum pname, GLint *params);
extern void  glHistogramEXT (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
extern void  glMinmaxEXT (GLenum target, GLenum internalformat, GLboolean sink);
extern void  glResetHistogramEXT (GLenum target);
extern void  glResetMinmaxEXT (GLenum target);
#endif
#endif /* GL_EXT_histogram */

#ifndef GL_EXT_index_array_formats
#define GL_EXT_index_array_formats 1
#define GL_IUI_V2F_EXT                    0x81AD
#define GL_IUI_V3F_EXT                    0x81AE
#define GL_IUI_N3F_V2F_EXT                0x81AF
#define GL_IUI_N3F_V3F_EXT                0x81B0
#define GL_T2F_IUI_V2F_EXT                0x81B1
#define GL_T2F_IUI_V3F_EXT                0x81B2
#define GL_T2F_IUI_N3F_V2F_EXT            0x81B3
#define GL_T2F_IUI_N3F_V3F_EXT            0x81B4
#endif /* GL_EXT_index_array_formats */

#ifndef GL_EXT_index_func
#define GL_EXT_index_func 1
#define GL_INDEX_TEST_EXT                 0x81B5
#define GL_INDEX_TEST_FUNC_EXT            0x81B6
#define GL_INDEX_TEST_REF_EXT             0x81B7
extern void  glIndexFuncEXT (GLenum func, GLclampf ref);
#endif
#endif /* GL_EXT_index_func */

#ifndef GL_EXT_index_material
#define GL_EXT_index_material 1
#define GL_INDEX_MATERIAL_EXT             0x81B8
#define GL_INDEX_MATERIAL_PARAMETER_EXT   0x81B9
#define GL_INDEX_MATERIAL_FACE_EXT        0x81BA
extern void  glIndexMaterialEXT (GLenum face, GLenum mode);
#endif
#endif /* GL_EXT_index_material */

#ifndef GL_EXT_index_texture
#define GL_EXT_index_texture 1
#endif /* GL_EXT_index_texture */

#ifndef GL_EXT_light_texture
#define GL_EXT_light_texture 1
#define GL_FRAGMENT_MATERIAL_EXT          0x8349
#define GL_FRAGMENT_NORMAL_EXT            0x834A
#define GL_FRAGMENT_COLOR_EXT             0x834C
#define GL_ATTENUATION_EXT                0x834D
#define GL_SHADOW_ATTENUATION_EXT         0x834E
#define GL_TEXTURE_APPLICATION_MODE_EXT   0x834F
#define GL_TEXTURE_LIGHT_EXT              0x8350
#define GL_TEXTURE_MATERIAL_FACE_EXT      0x8351
#define GL_TEXTURE_MATERIAL_PARAMETER_EXT 0x8352
extern void  glApplyTextureEXT (GLenum mode);
extern void  glTextureLightEXT (GLenum pname);
extern void  glTextureMaterialEXT (GLenum face, GLenum mode);
#endif
#endif /* GL_EXT_light_texture */

#ifndef GL_EXT_memory_object
#define GL_EXT_memory_object 1
#define GL_TEXTURE_TILING_EXT             0x9580
#define GL_DEDICATED_MEMORY_OBJECT_EXT    0x9581
#define GL_PROTECTED_MEMORY_OBJECT_EXT    0x959B
#define GL_NUM_TILING_TYPES_EXT           0x9582
#define GL_TILING_TYPES_EXT               0x9583
#define GL_OPTIMAL_TILING_EXT             0x9584
#define GL_LINEAR_TILING_EXT              0x9585
#define GL_NUM_DEVICE_UUIDS_EXT           0x9596
#define GL_DEVICE_UUID_EXT                0x9597
#define GL_DRIVER_UUID_EXT                0x9598
#define GL_UUID_SIZE_EXT                  16
extern void  glGetUnsignedBytevEXT (GLenum pname, GLubyte *data);
extern void  glGetUnsignedBytei_vEXT (GLenum target, GLuint index, GLubyte *data);
extern void  glDeleteMemoryObjectsEXT (GLsizei n, const GLuint *memoryObjects);
extern GLboolean  glIsMemoryObjectEXT (GLuint memoryObject);
extern void  glCreateMemoryObjectsEXT (GLsizei n, GLuint *memoryObjects);
extern void  glMemoryObjectParameterivEXT (GLuint memoryObject, GLenum pname, const GLint *params);
extern void  glGetMemoryObjectParameterivEXT (GLuint memoryObject, GLenum pname, GLint *params);
extern void  glTexStorageMem2DEXT (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
extern void  glTexStorageMem2DMultisampleEXT (GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
extern void  glTexStorageMem3DEXT (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
extern void  glTexStorageMem3DMultisampleEXT (GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
extern void  glBufferStorageMemEXT (GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset);
extern void  glTextureStorageMem2DEXT (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
extern void  glTextureStorageMem2DMultisampleEXT (GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
extern void  glTextureStorageMem3DEXT (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
extern void  glTextureStorageMem3DMultisampleEXT (GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
extern void  glNamedBufferStorageMemEXT (GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset);
extern void  glTexStorageMem1DEXT (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset);
extern void  glTextureStorageMem1DEXT (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset);
#endif
#endif /* GL_EXT_memory_object */

#ifndef GL_EXT_memory_object_fd
#define GL_EXT_memory_object_fd 1
#define GL_HANDLE_TYPE_OPAQUE_FD_EXT      0x9586
extern void  glImportMemoryFdEXT (GLuint memory, GLuint64 size, GLenum handleType, GLint fd);
#endif
#endif /* GL_EXT_memory_object_fd */

#ifndef GL_EXT_memory_object_win32
#define GL_EXT_memory_object_win32 1
#define GL_HANDLE_TYPE_OPAQUE_WIN32_EXT   0x9587
#define GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT 0x9588
#define GL_DEVICE_LUID_EXT                0x9599
#define GL_DEVICE_NODE_MASK_EXT           0x959A
#define GL_LUID_SIZE_EXT                  8
#define GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT 0x9589
#define GL_HANDLE_TYPE_D3D12_RESOURCE_EXT 0x958A
#define GL_HANDLE_TYPE_D3D11_IMAGE_EXT    0x958B
#define GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT 0x958C
extern void  glImportMemoryWin32HandleEXT (GLuint memory, GLuint64 size, GLenum handleType, void *handle);
extern void  glImportMemoryWin32NameEXT (GLuint memory, GLuint64 size, GLenum handleType, const void *name);
#endif
#endif /* GL_EXT_memory_object_win32 */

#ifndef GL_EXT_misc_attribute
#define GL_EXT_misc_attribute 1
#endif /* GL_EXT_misc_attribute */

#ifndef GL_EXT_multi_draw_arrays
#define GL_EXT_multi_draw_arrays 1
extern void  glMultiDrawArraysEXT (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
extern void  glMultiDrawElementsEXT (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount);
#endif
#endif /* GL_EXT_multi_draw_arrays */

#ifndef GL_EXT_multisample
#define GL_EXT_multisample 1
#define GL_MULTISAMPLE_EXT                0x809D
#define GL_SAMPLE_ALPHA_TO_MASK_EXT       0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_EXT        0x809F
#define GL_SAMPLE_MASK_EXT                0x80A0
#define GL_1PASS_EXT                      0x80A1
#define GL_2PASS_0_EXT                    0x80A2
#define GL_2PASS_1_EXT                    0x80A3
#define GL_4PASS_0_EXT                    0x80A4
#define GL_4PASS_1_EXT                    0x80A5
#define GL_4PASS_2_EXT                    0x80A6
#define GL_4PASS_3_EXT                    0x80A7
#define GL_SAMPLE_BUFFERS_EXT             0x80A8
#define GL_SAMPLES_EXT                    0x80A9
#define GL_SAMPLE_MASK_VALUE_EXT          0x80AA
#define GL_SAMPLE_MASK_INVERT_EXT         0x80AB
#define GL_SAMPLE_PATTERN_EXT             0x80AC
#define GL_MULTISAMPLE_BIT_EXT            0x20000000
extern void  glSampleMaskEXT (GLclampf value, GLboolean invert);
extern void  glSamplePatternEXT (GLenum pattern);
#endif
#endif /* GL_EXT_multisample */

#ifndef GL_EXT_multiview_tessellation_geometry_shader
#define GL_EXT_multiview_tessellation_geometry_shader 1
#endif /* GL_EXT_multiview_tessellation_geometry_shader */

#ifndef GL_EXT_multiview_texture_multisample
#define GL_EXT_multiview_texture_multisample 1
#endif /* GL_EXT_multiview_texture_multisample */

#ifndef GL_EXT_multiview_timer_query
#define GL_EXT_multiview_timer_query 1
#endif /* GL_EXT_multiview_timer_query */

#ifndef GL_EXT_packed_depth_stencil
#define GL_EXT_packed_depth_stencil 1
#define GL_DEPTH_STENCIL_EXT              0x84F9
#define GL_UNSIGNED_INT_24_8_EXT          0x84FA
#define GL_DEPTH24_STENCIL8_EXT           0x88F0
#define GL_TEXTURE_STENCIL_SIZE_EXT       0x88F1
#endif /* GL_EXT_packed_depth_stencil */

#ifndef GL_EXT_packed_float
#define GL_EXT_packed_float 1
#define GL_R11F_G11F_B10F_EXT             0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV_EXT 0x8C3B
#define GL_RGBA_SIGNED_COMPONENTS_EXT     0x8C3C
#endif /* GL_EXT_packed_float */

#ifndef GL_EXT_packed_pixels
#define GL_EXT_packed_pixels 1
#define GL_UNSIGNED_BYTE_3_3_2_EXT        0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4_EXT     0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1_EXT     0x8034
#define GL_UNSIGNED_INT_8_8_8_8_EXT       0x8035
#define GL_UNSIGNED_INT_10_10_10_2_EXT    0x8036
#endif /* GL_EXT_packed_pixels */

#ifndef GL_EXT_paletted_texture
#define GL_EXT_paletted_texture 1
#define GL_COLOR_INDEX1_EXT               0x80E2
#define GL_COLOR_INDEX2_EXT               0x80E3
#define GL_COLOR_INDEX4_EXT               0x80E4
#define GL_COLOR_INDEX8_EXT               0x80E5
#define GL_COLOR_INDEX12_EXT              0x80E6
#define GL_COLOR_INDEX16_EXT              0x80E7
#define GL_TEXTURE_INDEX_SIZE_EXT         0x80ED
extern void  glColorTableEXT (GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void *table);
extern void  glGetColorTableEXT (GLenum target, GLenum format, GLenum type, void *data);
extern void  glGetColorTableParameterivEXT (GLenum target, GLenum pname, GLint *params);
extern void  glGetColorTableParameterfvEXT (GLenum target, GLenum pname, GLfloat *params);
#endif
#endif /* GL_EXT_paletted_texture */

#ifndef GL_EXT_pixel_buffer_object
#define GL_EXT_pixel_buffer_object 1
#define GL_PIXEL_PACK_BUFFER_EXT          0x88EB
#define GL_PIXEL_UNPACK_BUFFER_EXT        0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_EXT  0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_EXT 0x88EF
#endif /* GL_EXT_pixel_buffer_object */

#ifndef GL_EXT_pixel_transform
#define GL_EXT_pixel_transform 1
#define GL_PIXEL_TRANSFORM_2D_EXT         0x8330
#define GL_PIXEL_MAG_FILTER_EXT           0x8331
#define GL_PIXEL_MIN_FILTER_EXT           0x8332
#define GL_PIXEL_CUBIC_WEIGHT_EXT         0x8333
#define GL_CUBIC_EXT                      0x8334
#define GL_AVERAGE_EXT                    0x8335
#define GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT 0x8336
#define GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT 0x8337
#define GL_PIXEL_TRANSFORM_2D_MATRIX_EXT  0x8338
extern void  glPixelTransformParameteriEXT (GLenum target, GLenum pname, GLint param);
extern void  glPixelTransformParameterfEXT (GLenum target, GLenum pname, GLfloat param);
extern void  glPixelTransformParameterivEXT (GLenum target, GLenum pname, const GLint *params);
extern void  glPixelTransformParameterfvEXT (GLenum target, GLenum pname, const GLfloat *params);
extern void  glGetPixelTransformParameterivEXT (GLenum target, GLenum pname, GLint *params);
extern void  glGetPixelTransformParameterfvEXT (GLenum target, GLenum pname, GLfloat *params);
#endif
#endif /* GL_EXT_pixel_transform */

#ifndef GL_EXT_pixel_transform_color_table
#define GL_EXT_pixel_transform_color_table 1
#endif /* GL_EXT_pixel_transform_color_table */

#ifndef GL_EXT_point_parameters
#define GL_EXT_point_parameters 1
#define GL_POINT_SIZE_MIN_EXT             0x8126
#define GL_POINT_SIZE_MAX_EXT             0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_EXT  0x8128
#define GL_DISTANCE_ATTENUATION_EXT       0x8129
extern void  glPointParameterfEXT (GLenum pname, GLfloat param);
extern void  glPointParameterfvEXT (GLenum pname, const GLfloat *params);
#endif
#endif /* GL_EXT_point_parameters */

#ifndef GL_EXT_polygon_offset
#define GL_EXT_polygon_offset 1
#define GL_POLYGON_OFFSET_EXT             0x8037
#define GL_POLYGON_OFFSET_FACTOR_EXT      0x8038
#define GL_POLYGON_OFFSET_BIAS_EXT        0x8039
extern void  glPolygonOffsetEXT (GLfloat factor, GLfloat bias);
#endif
#endif /* GL_EXT_polygon_offset */

#ifndef GL_EXT_polygon_offset_clamp
#define GL_EXT_polygon_offset_clamp 1
#define GL_POLYGON_OFFSET_CLAMP_EXT       0x8E1B
extern void  glPolygonOffsetClampEXT (GLfloat factor, GLfloat units, GLfloat clamp);
#endif
#endif /* GL_EXT_polygon_offset_clamp */

#ifndef GL_EXT_post_depth_coverage
#define GL_EXT_post_depth_coverage 1
#endif /* GL_EXT_post_depth_coverage */

#ifndef GL_EXT_provoking_vertex
#define GL_EXT_provoking_vertex 1
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION_EXT 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION_EXT    0x8E4D
#define GL_LAST_VERTEX_CONVENTION_EXT     0x8E4E
#define GL_PROVOKING_VERTEX_EXT           0x8E4F
extern void  glProvokingVertexEXT (GLenum mode);
#endif
#endif /* GL_EXT_provoking_vertex */

#ifndef GL_EXT_raster_multisample
#define GL_EXT_raster_multisample 1
#define GL_RASTER_MULTISAMPLE_EXT         0x9327
#define GL_RASTER_SAMPLES_EXT             0x9328
#define GL_MAX_RASTER_SAMPLES_EXT         0x9329
#define GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT 0x932A
#define GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT 0x932B
#define GL_EFFECTIVE_RASTER_SAMPLES_EXT   0x932C
extern void  glRasterSamplesEXT (GLuint samples, GLboolean fixedsamplelocations);
#endif
#endif /* GL_EXT_raster_multisample */

#ifndef GL_EXT_rescale_normal
#define GL_EXT_rescale_normal 1
#define GL_RESCALE_NORMAL_EXT             0x803A
#endif /* GL_EXT_rescale_normal */

#ifndef GL_EXT_secondary_color
#define GL_EXT_secondary_color 1
#define GL_COLOR_SUM_EXT                  0x8458
#define GL_CURRENT_SECONDARY_COLOR_EXT    0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE_EXT 0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE_EXT 0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT 0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER_EXT 0x845D
#define GL_SECONDARY_COLOR_ARRAY_EXT      0x845E
extern void  glSecondaryColor3bEXT (GLbyte red, GLbyte green, GLbyte blue);
extern void  glSecondaryColor3bvEXT (const GLbyte *v);
extern void  glSecondaryColor3dEXT (GLdouble red, GLdouble green, GLdouble blue);
extern void  glSecondaryColor3dvEXT (const GLdouble *v);
extern void  glSecondaryColor3fEXT (GLfloat red, GLfloat green, GLfloat blue);
extern void  glSecondaryColor3fvEXT (const GLfloat *v);
extern void  glSecondaryColor3iEXT (GLint red, GLint green, GLint blue);
extern void  glSecondaryColor3ivEXT (const GLint *v);
extern void  glSecondaryColor3sEXT (GLshort red, GLshort green, GLshort blue);
extern void  glSecondaryColor3svEXT (const GLshort *v);
extern void  glSecondaryColor3ubEXT (GLubyte red, GLubyte green, GLubyte blue);
extern void  glSecondaryColor3ubvEXT (const GLubyte *v);
extern void  glSecondaryColor3uiEXT (GLuint red, GLuint green, GLuint blue);
extern void  glSecondaryColor3uivEXT (const GLuint *v);
extern void  glSecondaryColor3usEXT (GLushort red, GLushort green, GLushort blue);
extern void  glSecondaryColor3usvEXT (const GLushort *v);
extern void  glSecondaryColorPointerEXT (GLint size, GLenum type, GLsizei stride, const void *pointer);
#endif
#endif /* GL_EXT_secondary_color */

#ifndef GL_EXT_semaphore
#define GL_EXT_semaphore 1
#define GL_LAYOUT_GENERAL_EXT             0x958D
#define GL_LAYOUT_COLOR_ATTACHMENT_EXT    0x958E
#define GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT 0x958F
#define GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT 0x9590
#define GL_LAYOUT_SHADER_READ_ONLY_EXT    0x9591
#define GL_LAYOUT_TRANSFER_SRC_EXT        0x9592
#define GL_LAYOUT_TRANSFER_DST_EXT        0x9593
#define GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT 0x9530
#define GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT 0x9531
extern void  glGenSemaphoresEXT (GLsizei n, GLuint *semaphores);
extern void  glDeleteSemaphoresEXT (GLsizei n, const GLuint *semaphores);
extern GLboolean  glIsSemaphoreEXT (GLuint semaphore);
extern void  glSemaphoreParameterui64vEXT (GLuint semaphore, GLenum pname, const GLuint64 *params);
extern void  glGetSemaphoreParameterui64vEXT (GLuint semaphore, GLenum pname, GLuint64 *params);
extern void  glWaitSemaphoreEXT (GLuint semaphore, GLuint numBufferBarriers, const GLuint *buffers, GLuint numTextureBarriers, const GLuint *textures, const GLenum *srcLayouts);
extern void  glSignalSemaphoreEXT (GLuint semaphore, GLuint numBufferBarriers, const GLuint *buffers, GLuint numTextureBarriers, const GLuint *textures, const GLenum *dstLayouts);
#endif
#endif /* GL_EXT_semaphore */

#ifndef GL_EXT_semaphore_fd
#define GL_EXT_semaphore_fd 1
extern void  glImportSemaphoreFdEXT (GLuint semaphore, GLenum handleType, GLint fd);
#endif
#endif /* GL_EXT_semaphore_fd */

#ifndef GL_EXT_semaphore_win32
#define GL_EXT_semaphore_win32 1
#define GL_HANDLE_TYPE_D3D12_FENCE_EXT    0x9594
#define GL_D3D12_FENCE_VALUE_EXT          0x9595
extern void  glImportSemaphoreWin32HandleEXT (GLuint semaphore, GLenum handleType, void *handle);
extern void  glImportSemaphoreWin32NameEXT (GLuint semaphore, GLenum handleType, const void *name);
#endif
#endif /* GL_EXT_semaphore_win32 */

#ifndef GL_EXT_separate_shader_objects
#define GL_EXT_separate_shader_objects 1
#define GL_ACTIVE_PROGRAM_EXT             0x8B8D
extern void  glUseShaderProgramEXT (GLenum type, GLuint program);
extern void  glActiveProgramEXT (GLuint program);
extern GLuint  glCreateShaderProgramEXT (GLenum type, const GLchar *string);
#endif
#endif /* GL_EXT_separate_shader_objects */

#ifndef GL_EXT_separate_specular_color
#define GL_EXT_separate_specular_color 1
#define GL_LIGHT_MODEL_COLOR_CONTROL_EXT  0x81F8
#define GL_SINGLE_COLOR_EXT               0x81F9
#define GL_SEPARATE_SPECULAR_COLOR_EXT    0x81FA
#endif /* GL_EXT_separate_specular_color */

#ifndef GL_EXT_shader_framebuffer_fetch
#define GL_EXT_shader_framebuffer_fetch 1
#define GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT 0x8A52
#endif /* GL_EXT_shader_framebuffer_fetch */

#ifndef GL_EXT_shader_framebuffer_fetch_non_coherent
#define GL_EXT_shader_framebuffer_fetch_non_coherent 1
extern void  glFramebufferFetchBarrierEXT (void);
#endif
#endif /* GL_EXT_shader_framebuffer_fetch_non_coherent */

#ifndef GL_EXT_shader_image_load_formatted
#define GL_EXT_shader_image_load_formatted 1
#endif /* GL_EXT_shader_image_load_formatted */

#ifndef GL_EXT_shader_image_load_store
#define GL_EXT_shader_image_load_store 1
#define GL_MAX_IMAGE_UNITS_EXT            0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS_EXT 0x8F39
#define GL_IMAGE_BINDING_NAME_EXT         0x8F3A
#define GL_IMAGE_BINDING_LEVEL_EXT        0x8F3B
#define GL_IMAGE_BINDING_LAYERED_EXT      0x8F3C
#define GL_IMAGE_BINDING_LAYER_EXT        0x8F3D
#define GL_IMAGE_BINDING_ACCESS_EXT       0x8F3E
#define GL_IMAGE_1D_EXT                   0x904C
#define GL_IMAGE_2D_EXT                   0x904D
#define GL_IMAGE_3D_EXT                   0x904E
#define GL_IMAGE_2D_RECT_EXT              0x904F
#define GL_IMAGE_CUBE_EXT                 0x9050
#define GL_IMAGE_BUFFER_EXT               0x9051
#define GL_IMAGE_1D_ARRAY_EXT             0x9052
#define GL_IMAGE_2D_ARRAY_EXT             0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY_EXT       0x9054
#define GL_IMAGE_2D_MULTISAMPLE_EXT       0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x9056
#define GL_INT_IMAGE_1D_EXT               0x9057
#define GL_INT_IMAGE_2D_EXT               0x9058
#define GL_INT_IMAGE_3D_EXT               0x9059
#define GL_INT_IMAGE_2D_RECT_EXT          0x905A
#define GL_INT_IMAGE_CUBE_EXT             0x905B
#define GL_INT_IMAGE_BUFFER_EXT           0x905C
#define GL_INT_IMAGE_1D_ARRAY_EXT         0x905D
#define GL_INT_IMAGE_2D_ARRAY_EXT         0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT   0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE_EXT   0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x9061
#define GL_UNSIGNED_INT_IMAGE_1D_EXT      0x9062
#define GL_UNSIGNED_INT_IMAGE_2D_EXT      0x9063
#define GL_UNSIGNED_INT_IMAGE_3D_EXT      0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT_EXT 0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE_EXT    0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER_EXT  0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY_EXT 0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY_EXT 0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_EXT 0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x906C
#define GL_MAX_IMAGE_SAMPLES_EXT          0x906D
#define GL_IMAGE_BINDING_FORMAT_EXT       0x906E
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT 0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT_EXT  0x00000002
#define GL_UNIFORM_BARRIER_BIT_EXT        0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT_EXT  0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT 0x00000020
#define GL_COMMAND_BARRIER_BIT_EXT        0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT_EXT   0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT_EXT 0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT_EXT  0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT_EXT    0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT 0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT_EXT 0x00001000
#define GL_ALL_BARRIER_BITS_EXT           0xFFFFFFFF
extern void  glBindImageTextureEXT (GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format);
extern void  glMemoryBarrierEXT (GLbitfield barriers);
#endif
#endif /* GL_EXT_shader_image_load_store */

#ifndef GL_EXT_shader_integer_mix
#define GL_EXT_shader_integer_mix 1
#endif /* GL_EXT_shader_integer_mix */

#ifndef GL_EXT_shader_samples_identical
#define GL_EXT_shader_samples_identical 1
#endif /* GL_EXT_shader_samples_identical */

#ifndef GL_EXT_shadow_funcs
#define GL_EXT_shadow_funcs 1
#endif /* GL_EXT_shadow_funcs */

#ifndef GL_EXT_shared_texture_palette
#define GL_EXT_shared_texture_palette 1
#define GL_SHARED_TEXTURE_PALETTE_EXT     0x81FB
#endif /* GL_EXT_shared_texture_palette */

#ifndef GL_EXT_sparse_texture2
#define GL_EXT_sparse_texture2 1
#endif /* GL_EXT_sparse_texture2 */

#ifndef GL_EXT_stencil_clear_tag
#define GL_EXT_stencil_clear_tag 1
#define GL_STENCIL_TAG_BITS_EXT           0x88F2
#define GL_STENCIL_CLEAR_TAG_VALUE_EXT    0x88F3
extern void  glStencilClearTagEXT (GLsizei stencilTagBits, GLuint stencilClearTag);
#endif
#endif /* GL_EXT_stencil_clear_tag */

#ifndef GL_EXT_stencil_two_side
#define GL_EXT_stencil_two_side 1
#define GL_STENCIL_TEST_TWO_SIDE_EXT      0x8910
#define GL_ACTIVE_STENCIL_FACE_EXT        0x8911
extern void  glActiveStencilFaceEXT (GLenum face);
#endif
#endif /* GL_EXT_stencil_two_side */

#ifndef GL_EXT_stencil_wrap
#define GL_EXT_stencil_wrap 1
#define GL_INCR_WRAP_EXT                  0x8507
#define GL_DECR_WRAP_EXT                  0x8508
#endif /* GL_EXT_stencil_wrap */

#ifndef GL_EXT_subtexture
#define GL_EXT_subtexture 1
extern void  glTexSubImage1DEXT (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
extern void  glTexSubImage2DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
#endif
#endif /* GL_EXT_subtexture */

#ifndef GL_EXT_texture
#define GL_EXT_texture 1
#define GL_ALPHA4_EXT                     0x803B
#define GL_ALPHA8_EXT                     0x803C
#define GL_ALPHA12_EXT                    0x803D
#define GL_ALPHA16_EXT                    0x803E
#define GL_LUMINANCE4_EXT                 0x803F
#define GL_LUMINANCE8_EXT                 0x8040
#define GL_LUMINANCE12_EXT                0x8041
#define GL_LUMINANCE16_EXT                0x8042
#define GL_LUMINANCE4_ALPHA4_EXT          0x8043
#define GL_LUMINANCE6_ALPHA2_EXT          0x8044
#define GL_LUMINANCE8_ALPHA8_EXT          0x8045
#define GL_LUMINANCE12_ALPHA4_EXT         0x8046
#define GL_LUMINANCE12_ALPHA12_EXT        0x8047
#define GL_LUMINANCE16_ALPHA16_EXT        0x8048
#define GL_INTENSITY_EXT                  0x8049
#define GL_INTENSITY4_EXT                 0x804A
#define GL_INTENSITY8_EXT                 0x804B
#define GL_INTENSITY12_EXT                0x804C
#define GL_INTENSITY16_EXT                0x804D
#define GL_RGB2_EXT                       0x804E
#define GL_RGB4_EXT                       0x804F
#define GL_RGB5_EXT                       0x8050
#define GL_RGB8_EXT                       0x8051
#define GL_RGB10_EXT                      0x8052
#define GL_RGB12_EXT                      0x8053
#define GL_RGB16_EXT                      0x8054
#define GL_RGBA2_EXT                      0x8055
#define GL_RGBA4_EXT                      0x8056
#define GL_RGB5_A1_EXT                    0x8057
#define GL_RGBA8_EXT                      0x8058
#define GL_RGB10_A2_EXT                   0x8059
#define GL_RGBA12_EXT                     0x805A
#define GL_RGBA16_EXT                     0x805B
#define GL_TEXTURE_RED_SIZE_EXT           0x805C
#define GL_TEXTURE_GREEN_SIZE_EXT         0x805D
#define GL_TEXTURE_BLUE_SIZE_EXT          0x805E
#define GL_TEXTURE_ALPHA_SIZE_EXT         0x805F
#define GL_TEXTURE_LUMINANCE_SIZE_EXT     0x8060
#define GL_TEXTURE_INTENSITY_SIZE_EXT     0x8061
#define GL_REPLACE_EXT                    0x8062
#define GL_PROXY_TEXTURE_1D_EXT           0x8063
#define GL_PROXY_TEXTURE_2D_EXT           0x8064
#define GL_TEXTURE_TOO_LARGE_EXT          0x8065
#endif /* GL_EXT_texture */

#ifndef GL_EXT_texture3D
#define GL_EXT_texture3D 1
#define GL_PACK_SKIP_IMAGES_EXT           0x806B
#define GL_PACK_IMAGE_HEIGHT_EXT          0x806C
#define GL_UNPACK_SKIP_IMAGES_EXT         0x806D
#define GL_UNPACK_IMAGE_HEIGHT_EXT        0x806E
#define GL_TEXTURE_3D_EXT                 0x806F
#define GL_PROXY_TEXTURE_3D_EXT           0x8070
#define GL_TEXTURE_DEPTH_EXT              0x8071
#define GL_TEXTURE_WRAP_R_EXT             0x8072
#define GL_MAX_3D_TEXTURE_SIZE_EXT        0x8073
extern void  glTexImage3DEXT (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
extern void  glTexSubImage3DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
#endif
#endif /* GL_EXT_texture3D */

#ifndef GL_EXT_texture_array
#define GL_EXT_texture_array 1
#define GL_TEXTURE_1D_ARRAY_EXT           0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY_EXT     0x8C19
#define GL_TEXTURE_2D_ARRAY_EXT           0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY_EXT     0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY_EXT   0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY_EXT   0x8C1D
#define GL_MAX_ARRAY_TEXTURE_LAYERS_EXT   0x88FF
#define GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT 0x884E
extern void  glFramebufferTextureLayerEXT (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
#endif
#endif /* GL_EXT_texture_array */

#ifndef GL_EXT_texture_buffer_object
#define GL_EXT_texture_buffer_object 1
#define GL_TEXTURE_BUFFER_EXT             0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_EXT    0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_EXT     0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_EXT      0x8C2E
extern void  glTexBufferEXT (GLenum target, GLenum internalformat, GLuint buffer);
#endif
#endif /* GL_EXT_texture_buffer_object */

#ifndef GL_EXT_texture_compression_latc
#define GL_EXT_texture_compression_latc 1
#define GL_COMPRESSED_LUMINANCE_LATC1_EXT 0x8C70
#define GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_EXT 0x8C71
#define GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_EXT 0x8C72
#define GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_EXT 0x8C73
#endif /* GL_EXT_texture_compression_latc */

#ifndef GL_EXT_texture_compression_rgtc
#define GL_EXT_texture_compression_rgtc 1
#define GL_COMPRESSED_RED_RGTC1_EXT       0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1_EXT 0x8DBC
#define GL_COMPRESSED_RED_GREEN_RGTC2_EXT 0x8DBD
#define GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT 0x8DBE
#endif /* GL_EXT_texture_compression_rgtc */

#ifndef GL_EXT_texture_compression_s3tc
#define GL_EXT_texture_compression_s3tc 1
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT   0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT  0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT  0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT  0x83F3
#endif /* GL_EXT_texture_compression_s3tc */

#ifndef GL_EXT_texture_cube_map
#define GL_EXT_texture_cube_map 1
#define GL_NORMAL_MAP_EXT                 0x8511
#define GL_REFLECTION_MAP_EXT             0x8512
#define GL_TEXTURE_CUBE_MAP_EXT           0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_EXT   0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_EXT     0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT  0x851C
#endif /* GL_EXT_texture_cube_map */

#ifndef GL_EXT_texture_env_add
#define GL_EXT_texture_env_add 1
#endif /* GL_EXT_texture_env_add */

#ifndef GL_EXT_texture_env_combine
#define GL_EXT_texture_env_combine 1
#define GL_COMBINE_EXT                    0x8570
#define GL_COMBINE_RGB_EXT                0x8571
#define GL_COMBINE_ALPHA_EXT              0x8572
#define GL_RGB_SCALE_EXT                  0x8573
#define GL_ADD_SIGNED_EXT                 0x8574
#define GL_INTERPOLATE_EXT                0x8575
#define GL_CONSTANT_EXT                   0x8576
#define GL_PRIMARY_COLOR_EXT              0x8577
#define GL_PREVIOUS_EXT                   0x8578
#define GL_SOURCE0_RGB_EXT                0x8580
#define GL_SOURCE1_RGB_EXT                0x8581
#define GL_SOURCE2_RGB_EXT                0x8582
#define GL_SOURCE0_ALPHA_EXT              0x8588
#define GL_SOURCE1_ALPHA_EXT              0x8589
#define GL_SOURCE2_ALPHA_EXT              0x858A
#define GL_OPERAND0_RGB_EXT               0x8590
#define GL_OPERAND1_RGB_EXT               0x8591
#define GL_OPERAND2_RGB_EXT               0x8592
#define GL_OPERAND0_ALPHA_EXT             0x8598
#define GL_OPERAND1_ALPHA_EXT             0x8599
#define GL_OPERAND2_ALPHA_EXT             0x859A
#endif /* GL_EXT_texture_env_combine */

#ifndef GL_EXT_texture_env_dot3
#define GL_EXT_texture_env_dot3 1
#define GL_DOT3_RGB_EXT                   0x8740
#define GL_DOT3_RGBA_EXT                  0x8741
#endif /* GL_EXT_texture_env_dot3 */

#ifndef GL_EXT_texture_filter_anisotropic
#define GL_EXT_texture_filter_anisotropic 1
#define GL_TEXTURE_MAX_ANISOTROPY_EXT     0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF
#endif /* GL_EXT_texture_filter_anisotropic */

#ifndef GL_EXT_texture_filter_minmax
#define GL_EXT_texture_filter_minmax 1
#define GL_TEXTURE_REDUCTION_MODE_EXT     0x9366
#define GL_WEIGHTED_AVERAGE_EXT           0x9367
#endif /* GL_EXT_texture_filter_minmax */

#ifndef GL_EXT_texture_integer
#define GL_EXT_texture_integer 1
#define GL_RGBA32UI_EXT                   0x8D70
#define GL_RGB32UI_EXT                    0x8D71
#define GL_ALPHA32UI_EXT                  0x8D72
#define GL_INTENSITY32UI_EXT              0x8D73
#define GL_LUMINANCE32UI_EXT              0x8D74
#define GL_LUMINANCE_ALPHA32UI_EXT        0x8D75
#define GL_RGBA16UI_EXT                   0x8D76
#define GL_RGB16UI_EXT                    0x8D77
#define GL_ALPHA16UI_EXT                  0x8D78
#define GL_INTENSITY16UI_EXT              0x8D79
#define GL_LUMINANCE16UI_EXT              0x8D7A
#define GL_LUMINANCE_ALPHA16UI_EXT        0x8D7B
#define GL_RGBA8UI_EXT                    0x8D7C
#define GL_RGB8UI_EXT                     0x8D7D
#define GL_ALPHA8UI_EXT                   0x8D7E
#define GL_INTENSITY8UI_EXT               0x8D7F
#define GL_LUMINANCE8UI_EXT               0x8D80
#define GL_LUMINANCE_ALPHA8UI_EXT         0x8D81
#define GL_RGBA32I_EXT                    0x8D82
#define GL_RGB32I_EXT                     0x8D83
#define GL_ALPHA32I_EXT                   0x8D84
#define GL_INTENSITY32I_EXT               0x8D85
#define GL_LUMINANCE32I_EXT               0x8D86
#define GL_LUMINANCE_ALPHA32I_EXT         0x8D87
#define GL_RGBA16I_EXT                    0x8D88
#define GL_RGB16I_EXT                     0x8D89
#define GL_ALPHA16I_EXT                   0x8D8A
#define GL_INTENSITY16I_EXT               0x8D8B
#define GL_LUMINANCE16I_EXT               0x8D8C
#define GL_LUMINANCE_ALPHA16I_EXT         0x8D8D
#define GL_RGBA8I_EXT                     0x8D8E
#define GL_RGB8I_EXT                      0x8D8F
#define GL_ALPHA8I_EXT                    0x8D90
#define GL_INTENSITY8I_EXT                0x8D91
#define GL_LUMINANCE8I_EXT                0x8D92
#define GL_LUMINANCE_ALPHA8I_EXT          0x8D93
#define GL_RED_INTEGER_EXT                0x8D94
#define GL_GREEN_INTEGER_EXT              0x8D95
#define GL_BLUE_INTEGER_EXT               0x8D96
#define GL_ALPHA_INTEGER_EXT              0x8D97
#define GL_RGB_INTEGER_EXT                0x8D98
#define GL_RGBA_INTEGER_EXT               0x8D99
#define GL_BGR_INTEGER_EXT                0x8D9A
#define GL_BGRA_INTEGER_EXT               0x8D9B
#define GL_LUMINANCE_INTEGER_EXT          0x8D9C
#define GL_LUMINANCE_ALPHA_INTEGER_EXT    0x8D9D
#define GL_RGBA_INTEGER_MODE_EXT          0x8D9E
extern void  glTexParameterIivEXT (GLenum target, GLenum pname, const GLint *params);
extern void  glTexParameterIuivEXT (GLenum target, GLenum pname, const GLuint *params);
extern void  glGetTexParameterIivEXT (GLenum target, GLenum pname, GLint *params);
extern void  glGetTexParameterIuivEXT (GLenum target, GLenum pname, GLuint *params);
extern void  glClearColorIiEXT (GLint red, GLint green, GLint blue, GLint alpha);
extern void  glClearColorIuiEXT (GLuint red, GLuint green, GLuint blue, GLuint alpha);
#endif
#endif /* GL_EXT_texture_integer */

#ifndef GL_EXT_texture_lod_bias
#define GL_EXT_texture_lod_bias 1
#define GL_MAX_TEXTURE_LOD_BIAS_EXT       0x84FD
#define GL_TEXTURE_FILTER_CONTROL_EXT     0x8500
#define GL_TEXTURE_LOD_BIAS_EXT           0x8501
#endif /* GL_EXT_texture_lod_bias */

#ifndef GL_EXT_texture_mirror_clamp
#define GL_EXT_texture_mirror_clamp 1
#define GL_MIRROR_CLAMP_EXT               0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_EXT       0x8743
#define GL_MIRROR_CLAMP_TO_BORDER_EXT     0x8912
#endif /* GL_EXT_texture_mirror_clamp */

#ifndef GL_EXT_texture_object
#define GL_EXT_texture_object 1
#define GL_TEXTURE_PRIORITY_EXT           0x8066
#define GL_TEXTURE_RESIDENT_EXT           0x8067
#define GL_TEXTURE_1D_BINDING_EXT         0x8068
#define GL_TEXTURE_2D_BINDING_EXT         0x8069
#define GL_TEXTURE_3D_BINDING_EXT         0x806A
extern GLboolean  glAreTexturesResidentEXT (GLsizei n, const GLuint *textures, GLboolean *residences);
extern void  glBindTextureEXT (GLenum target, GLuint texture);
extern void  glDeleteTexturesEXT (GLsizei n, const GLuint *textures);
extern void  glGenTexturesEXT (GLsizei n, GLuint *textures);
extern GLboolean  glIsTextureEXT (GLuint texture);
extern void  glPrioritizeTexturesEXT (GLsizei n, const GLuint *textures, const GLclampf *priorities);
#endif
#endif /* GL_EXT_texture_object */

#ifndef GL_EXT_texture_perturb_normal
#define GL_EXT_texture_perturb_normal 1
#define GL_PERTURB_EXT                    0x85AE
#define GL_TEXTURE_NORMAL_EXT             0x85AF
extern void  glTextureNormalEXT (GLenum mode);
#endif
#endif /* GL_EXT_texture_perturb_normal */

#ifndef GL_EXT_texture_sRGB
#define GL_EXT_texture_sRGB 1
#define GL_SRGB_EXT                       0x8C40
#define GL_SRGB8_EXT                      0x8C41
#define GL_SRGB_ALPHA_EXT                 0x8C42
#define GL_SRGB8_ALPHA8_EXT               0x8C43
#define GL_SLUMINANCE_ALPHA_EXT           0x8C44
#define GL_SLUMINANCE8_ALPHA8_EXT         0x8C45
#define GL_SLUMINANCE_EXT                 0x8C46
#define GL_SLUMINANCE8_EXT                0x8C47
#define GL_COMPRESSED_SRGB_EXT            0x8C48
#define GL_COMPRESSED_SRGB_ALPHA_EXT      0x8C49
#define GL_COMPRESSED_SLUMINANCE_EXT      0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA_EXT 0x8C4B
#define GL_COMPRESSED_SRGB_S3TC_DXT1_EXT  0x8C4C
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT 0x8C4D
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT 0x8C4E
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT 0x8C4F
#endif /* GL_EXT_texture_sRGB */

#ifndef GL_EXT_texture_sRGB_R8
#define GL_EXT_texture_sRGB_R8 1
#define GL_SR8_EXT                        0x8FBD
#endif /* GL_EXT_texture_sRGB_R8 */

#ifndef GL_EXT_texture_sRGB_RG8
#define GL_EXT_texture_sRGB_RG8 1
#define GL_SRG8_EXT                       0x8FBE
#endif /* GL_EXT_texture_sRGB_RG8 */

#ifndef GL_EXT_texture_sRGB_decode
#define GL_EXT_texture_sRGB_decode 1
#define GL_TEXTURE_SRGB_DECODE_EXT        0x8A48
#define GL_DECODE_EXT                     0x8A49
#define GL_SKIP_DECODE_EXT                0x8A4A
#endif /* GL_EXT_texture_sRGB_decode */

#ifndef GL_EXT_texture_shadow_lod
#define GL_EXT_texture_shadow_lod 1
#endif /* GL_EXT_texture_shadow_lod */

#ifndef GL_EXT_texture_shared_exponent
#define GL_EXT_texture_shared_exponent 1
#define GL_RGB9_E5_EXT                    0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV_EXT   0x8C3E
#define GL_TEXTURE_SHARED_SIZE_EXT        0x8C3F
#endif /* GL_EXT_texture_shared_exponent */

#ifndef GL_EXT_texture_snorm
#define GL_EXT_texture_snorm 1
#define GL_ALPHA_SNORM                    0x9010
#define GL_LUMINANCE_SNORM                0x9011
#define GL_LUMINANCE_ALPHA_SNORM          0x9012
#define GL_INTENSITY_SNORM                0x9013
#define GL_ALPHA8_SNORM                   0x9014
#define GL_LUMINANCE8_SNORM               0x9015
#define GL_LUMINANCE8_ALPHA8_SNORM        0x9016
#define GL_INTENSITY8_SNORM               0x9017
#define GL_ALPHA16_SNORM                  0x9018
#define GL_LUMINANCE16_SNORM              0x9019
#define GL_LUMINANCE16_ALPHA16_SNORM      0x901A
#define GL_INTENSITY16_SNORM              0x901B
#define GL_RED_SNORM                      0x8F90
#define GL_RG_SNORM                       0x8F91
#define GL_RGB_SNORM                      0x8F92
#define GL_RGBA_SNORM                     0x8F93
#endif /* GL_EXT_texture_snorm */

#ifndef GL_EXT_texture_storage
#define GL_EXT_texture_storage 1
#define GL_TEXTURE_IMMUTABLE_FORMAT_EXT   0x912F
#define GL_RGBA32F_EXT                    0x8814
#define GL_RGB32F_EXT                     0x8815
#define GL_ALPHA32F_EXT                   0x8816
#define GL_LUMINANCE32F_EXT               0x8818
#define GL_LUMINANCE_ALPHA32F_EXT         0x8819
#define GL_RGBA16F_EXT                    0x881A
#define GL_RGB16F_EXT                     0x881B
#define GL_ALPHA16F_EXT                   0x881C
#define GL_LUMINANCE16F_EXT               0x881E
#define GL_LUMINANCE_ALPHA16F_EXT         0x881F
#define GL_BGRA8_EXT                      0x93A1
#define GL_R8_EXT                         0x8229
#define GL_RG8_EXT                        0x822B
#define GL_R32F_EXT                       0x822E
#define GL_RG32F_EXT                      0x8230
#define GL_R16F_EXT                       0x822D
#define GL_RG16F_EXT                      0x822F
extern void  glTexStorage1DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
extern void  glTexStorage2DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
extern void  glTexStorage3DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
#endif
#endif /* GL_EXT_texture_storage */

#ifndef GL_EXT_texture_swizzle
#define GL_EXT_texture_swizzle 1
#define GL_TEXTURE_SWIZZLE_R_EXT          0x8E42
#define GL_TEXTURE_SWIZZLE_G_EXT          0x8E43
#define GL_TEXTURE_SWIZZLE_B_EXT          0x8E44
#define GL_TEXTURE_SWIZZLE_A_EXT          0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA_EXT       0x8E46
#endif /* GL_EXT_texture_swizzle */

#ifndef GL_EXT_timer_query
#define GL_EXT_timer_query 1
#define GL_TIME_ELAPSED_EXT               0x88BF
extern void  glGetQueryObjecti64vEXT (GLuint id, GLenum pname, GLint64 *params);
extern void  glGetQueryObjectui64vEXT (GLuint id, GLenum pname, GLuint64 *params);
#endif
#endif /* GL_EXT_timer_query */

#ifndef GL_EXT_transform_feedback
#define GL_EXT_transform_feedback 1
#define GL_TRANSFORM_FEEDBACK_BUFFER_EXT  0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_START_EXT 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_EXT 0x8C85
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_EXT 0x8C8F
#define GL_INTERLEAVED_ATTRIBS_EXT        0x8C8C
#define GL_SEPARATE_ATTRIBS_EXT           0x8C8D
#define GL_PRIMITIVES_GENERATED_EXT       0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_EXT 0x8C88
#define GL_RASTERIZER_DISCARD_EXT         0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_EXT 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_EXT 0x8C8B
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_EXT 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS_EXT 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_EXT 0x8C7F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH_EXT 0x8C76
extern void  glBeginTransformFeedbackEXT (GLenum primitiveMode);
extern void  glEndTransformFeedbackEXT (void);
extern void  glBindBufferRangeEXT (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
extern void  glBindBufferOffsetEXT (GLenum target, GLuint index, GLuint buffer, GLintptr offset);
extern void  glBindBufferBaseEXT (GLenum target, GLuint index, GLuint buffer);
extern void  glTransformFeedbackVaryingsEXT (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
extern void  glGetTransformFeedbackVaryingEXT (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
#endif
#endif /* GL_EXT_transform_feedback */

#ifndef GL_EXT_vertex_array
#define GL_EXT_vertex_array 1
#define GL_VERTEX_ARRAY_EXT               0x8074
#define GL_NORMAL_ARRAY_EXT               0x8075
#define GL_COLOR_ARRAY_EXT                0x8076
#define GL_INDEX_ARRAY_EXT                0x8077
#define GL_TEXTURE_COORD_ARRAY_EXT        0x8078
#define GL_EDGE_FLAG_ARRAY_EXT            0x8079
#define GL_VERTEX_ARRAY_SIZE_EXT          0x807A
#define GL_VERTEX_ARRAY_TYPE_EXT          0x807B
#define GL_VERTEX_ARRAY_STRIDE_EXT        0x807C
#define GL_VERTEX_ARRAY_COUNT_EXT         0x807D
#define GL_NORMAL_ARRAY_TYPE_EXT          0x807E
#define GL_NORMAL_ARRAY_STRIDE_EXT        0x807F
#define GL_NORMAL_ARRAY_COUNT_EXT         0x8080
#define GL_COLOR_ARRAY_SIZE_EXT           0x8081
#define GL_COLOR_ARRAY_TYPE_EXT           0x8082
#define GL_COLOR_ARRAY_STRIDE_EXT         0x8083
#define GL_COLOR_ARRAY_COUNT_EXT          0x8084
#define GL_INDEX_ARRAY_TYPE_EXT           0x8085
#define GL_INDEX_ARRAY_STRIDE_EXT         0x8086
#define GL_INDEX_ARRAY_COUNT_EXT          0x8087
#define GL_TEXTURE_COORD_ARRAY_SIZE_EXT   0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE_EXT   0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE_EXT 0x808A
#define GL_TEXTURE_COORD_ARRAY_COUNT_EXT  0x808B
#define GL_EDGE_FLAG_ARRAY_STRIDE_EXT     0x808C
#define GL_EDGE_FLAG_ARRAY_COUNT_EXT      0x808D
#define GL_VERTEX_ARRAY_POINTER_EXT       0x808E
#define GL_NORMAL_ARRAY_POINTER_EXT       0x808F
#define GL_COLOR_ARRAY_POINTER_EXT        0x8090
#define GL_INDEX_ARRAY_POINTER_EXT        0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER_EXT 0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER_EXT    0x8093
extern void  glArrayElementEXT (GLint i);
extern void  glColorPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer);
extern void  glDrawArraysEXT (GLenum mode, GLint first, GLsizei count);
extern void  glEdgeFlagPointerEXT (GLsizei stride, GLsizei count, const GLboolean *pointer);
extern void  glGetPointervEXT (GLenum pname, void **params);
extern void  glIndexPointerEXT (GLenum type, GLsizei stride, GLsizei count, const void *pointer);
extern void  glNormalPointerEXT (GLenum type, GLsizei stride, GLsizei count, const void *pointer);
extern void  glTexCoordPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer);
extern void  glVertexPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer);
#endif
#endif /* GL_EXT_vertex_array */

#ifndef GL_EXT_vertex_array_bgra
#define GL_EXT_vertex_array_bgra 1
#endif /* GL_EXT_vertex_array_bgra */

#ifndef GL_EXT_vertex_attrib_64bit
#define GL_EXT_vertex_attrib_64bit 1
#define GL_DOUBLE_VEC2_EXT                0x8FFC
#define GL_DOUBLE_VEC3_EXT                0x8FFD
#define GL_DOUBLE_VEC4_EXT                0x8FFE
#define GL_DOUBLE_MAT2_EXT                0x8F46
#define GL_DOUBLE_MAT3_EXT                0x8F47
#define GL_DOUBLE_MAT4_EXT                0x8F48
#define GL_DOUBLE_MAT2x3_EXT              0x8F49
#define GL_DOUBLE_MAT2x4_EXT              0x8F4A
#define GL_DOUBLE_MAT3x2_EXT              0x8F4B
#define GL_DOUBLE_MAT3x4_EXT              0x8F4C
#define GL_DOUBLE_MAT4x2_EXT              0x8F4D
#define GL_DOUBLE_MAT4x3_EXT              0x8F4E
extern void  glVertexAttribL1dEXT (GLuint index, GLdouble x);
extern void  glVertexAttribL2dEXT (GLuint index, GLdouble x, GLdouble y);
extern void  glVertexAttribL3dEXT (GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern void  glVertexAttribL4dEXT (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glVertexAttribL1dvEXT (GLuint index, const GLdouble *v);
extern void  glVertexAttribL2dvEXT (GLuint index, const GLdouble *v);
extern void  glVertexAttribL3dvEXT (GLuint index, const GLdouble *v);
extern void  glVertexAttribL4dvEXT (GLuint index, const GLdouble *v);
extern void  glVertexAttribLPointerEXT (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
extern void  glGetVertexAttribLdvEXT (GLuint index, GLenum pname, GLdouble *params);
#endif
#endif /* GL_EXT_vertex_attrib_64bit */

#ifndef GL_EXT_vertex_shader
#define GL_EXT_vertex_shader 1
#define GL_VERTEX_SHADER_EXT              0x8780
#define GL_VERTEX_SHADER_BINDING_EXT      0x8781
#define GL_OP_INDEX_EXT                   0x8782
#define GL_OP_NEGATE_EXT                  0x8783
#define GL_OP_DOT3_EXT                    0x8784
#define GL_OP_DOT4_EXT                    0x8785
#define GL_OP_MUL_EXT                     0x8786
#define GL_OP_ADD_EXT                     0x8787
#define GL_OP_MADD_EXT                    0x8788
#define GL_OP_FRAC_EXT                    0x8789
#define GL_OP_MAX_EXT                     0x878A
#define GL_OP_MIN_EXT                     0x878B
#define GL_OP_SET_GE_EXT                  0x878C
#define GL_OP_SET_LT_EXT                  0x878D
#define GL_OP_CLAMP_EXT                   0x878E
#define GL_OP_FLOOR_EXT                   0x878F
#define GL_OP_ROUND_EXT                   0x8790
#define GL_OP_EXP_BASE_2_EXT              0x8791
#define GL_OP_LOG_BASE_2_EXT              0x8792
#define GL_OP_POWER_EXT                   0x8793
#define GL_OP_RECIP_EXT                   0x8794
#define GL_OP_RECIP_SQRT_EXT              0x8795
#define GL_OP_SUB_EXT                     0x8796
#define GL_OP_CROSS_PRODUCT_EXT           0x8797
#define GL_OP_MULTIPLY_MATRIX_EXT         0x8798
#define GL_OP_MOV_EXT                     0x8799
#define GL_OUTPUT_VERTEX_EXT              0x879A
#define GL_OUTPUT_COLOR0_EXT              0x879B
#define GL_OUTPUT_COLOR1_EXT              0x879C
#define GL_OUTPUT_TEXTURE_COORD0_EXT      0x879D
#define GL_OUTPUT_TEXTURE_COORD1_EXT      0x879E
#define GL_OUTPUT_TEXTURE_COORD2_EXT      0x879F
#define GL_OUTPUT_TEXTURE_COORD3_EXT      0x87A0
#define GL_OUTPUT_TEXTURE_COORD4_EXT      0x87A1
#define GL_OUTPUT_TEXTURE_COORD5_EXT      0x87A2
#define GL_OUTPUT_TEXTURE_COORD6_EXT      0x87A3
#define GL_OUTPUT_TEXTURE_COORD7_EXT      0x87A4
#define GL_OUTPUT_TEXTURE_COORD8_EXT      0x87A5
#define GL_OUTPUT_TEXTURE_COORD9_EXT      0x87A6
#define GL_OUTPUT_TEXTURE_COORD10_EXT     0x87A7
#define GL_OUTPUT_TEXTURE_COORD11_EXT     0x87A8
#define GL_OUTPUT_TEXTURE_COORD12_EXT     0x87A9
#define GL_OUTPUT_TEXTURE_COORD13_EXT     0x87AA
#define GL_OUTPUT_TEXTURE_COORD14_EXT     0x87AB
#define GL_OUTPUT_TEXTURE_COORD15_EXT     0x87AC
#define GL_OUTPUT_TEXTURE_COORD16_EXT     0x87AD
#define GL_OUTPUT_TEXTURE_COORD17_EXT     0x87AE
#define GL_OUTPUT_TEXTURE_COORD18_EXT     0x87AF
#define GL_OUTPUT_TEXTURE_COORD19_EXT     0x87B0
#define GL_OUTPUT_TEXTURE_COORD20_EXT     0x87B1
#define GL_OUTPUT_TEXTURE_COORD21_EXT     0x87B2
#define GL_OUTPUT_TEXTURE_COORD22_EXT     0x87B3
#define GL_OUTPUT_TEXTURE_COORD23_EXT     0x87B4
#define GL_OUTPUT_TEXTURE_COORD24_EXT     0x87B5
#define GL_OUTPUT_TEXTURE_COORD25_EXT     0x87B6
#define GL_OUTPUT_TEXTURE_COORD26_EXT     0x87B7
#define GL_OUTPUT_TEXTURE_COORD27_EXT     0x87B8
#define GL_OUTPUT_TEXTURE_COORD28_EXT     0x87B9
#define GL_OUTPUT_TEXTURE_COORD29_EXT     0x87BA
#define GL_OUTPUT_TEXTURE_COORD30_EXT     0x87BB
#define GL_OUTPUT_TEXTURE_COORD31_EXT     0x87BC
#define GL_OUTPUT_FOG_EXT                 0x87BD
#define GL_SCALAR_EXT                     0x87BE
#define GL_VECTOR_EXT                     0x87BF
#define GL_MATRIX_EXT                     0x87C0
#define GL_VARIANT_EXT                    0x87C1
#define GL_INVARIANT_EXT                  0x87C2
#define GL_LOCAL_CONSTANT_EXT             0x87C3
#define GL_LOCAL_EXT                      0x87C4
#define GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87C5
#define GL_MAX_VERTEX_SHADER_VARIANTS_EXT 0x87C6
#define GL_MAX_VERTEX_SHADER_INVARIANTS_EXT 0x87C7
#define GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87C8
#define GL_MAX_VERTEX_SHADER_LOCALS_EXT   0x87C9
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CA
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT 0x87CB
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87CC
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT 0x87CD
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT 0x87CE
#define GL_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CF
#define GL_VERTEX_SHADER_VARIANTS_EXT     0x87D0
#define GL_VERTEX_SHADER_INVARIANTS_EXT   0x87D1
#define GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87D2
#define GL_VERTEX_SHADER_LOCALS_EXT       0x87D3
#define GL_VERTEX_SHADER_OPTIMIZED_EXT    0x87D4
#define GL_X_EXT                          0x87D5
#define GL_Y_EXT                          0x87D6
#define GL_Z_EXT                          0x87D7
#define GL_W_EXT                          0x87D8
#define GL_NEGATIVE_X_EXT                 0x87D9
#define GL_NEGATIVE_Y_EXT                 0x87DA
#define GL_NEGATIVE_Z_EXT                 0x87DB
#define GL_NEGATIVE_W_EXT                 0x87DC
#define GL_ZERO_EXT                       0x87DD
#define GL_ONE_EXT                        0x87DE
#define GL_NEGATIVE_ONE_EXT               0x87DF
#define GL_NORMALIZED_RANGE_EXT           0x87E0
#define GL_FULL_RANGE_EXT                 0x87E1
#define GL_CURRENT_VERTEX_EXT             0x87E2
#define GL_MVP_MATRIX_EXT                 0x87E3
#define GL_VARIANT_VALUE_EXT              0x87E4
#define GL_VARIANT_DATATYPE_EXT           0x87E5
#define GL_VARIANT_ARRAY_STRIDE_EXT       0x87E6
#define GL_VARIANT_ARRAY_TYPE_EXT         0x87E7
#define GL_VARIANT_ARRAY_EXT              0x87E8
#define GL_VARIANT_ARRAY_POINTER_EXT      0x87E9
#define GL_INVARIANT_VALUE_EXT            0x87EA
#define GL_INVARIANT_DATATYPE_EXT         0x87EB
#define GL_LOCAL_CONSTANT_VALUE_EXT       0x87EC
#define GL_LOCAL_CONSTANT_DATATYPE_EXT    0x87ED
extern void  glBeginVertexShaderEXT (void);
extern void  glEndVertexShaderEXT (void);
extern void  glBindVertexShaderEXT (GLuint id);
extern GLuint  glGenVertexShadersEXT (GLuint range);
extern void  glDeleteVertexShaderEXT (GLuint id);
extern void  glShaderOp1EXT (GLenum op, GLuint res, GLuint arg1);
extern void  glShaderOp2EXT (GLenum op, GLuint res, GLuint arg1, GLuint arg2);
extern void  glShaderOp3EXT (GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3);
extern void  glSwizzleEXT (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
extern void  glWriteMaskEXT (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
extern void  glInsertComponentEXT (GLuint res, GLuint src, GLuint num);
extern void  glExtractComponentEXT (GLuint res, GLuint src, GLuint num);
extern GLuint  glGenSymbolsEXT (GLenum datatype, GLenum storagetype, GLenum range, GLuint components);
extern void  glSetInvariantEXT (GLuint id, GLenum type, const void *addr);
extern void  glSetLocalConstantEXT (GLuint id, GLenum type, const void *addr);
extern void  glVariantbvEXT (GLuint id, const GLbyte *addr);
extern void  glVariantsvEXT (GLuint id, const GLshort *addr);
extern void  glVariantivEXT (GLuint id, const GLint *addr);
extern void  glVariantfvEXT (GLuint id, const GLfloat *addr);
extern void  glVariantdvEXT (GLuint id, const GLdouble *addr);
extern void  glVariantubvEXT (GLuint id, const GLubyte *addr);
extern void  glVariantusvEXT (GLuint id, const GLushort *addr);
extern void  glVariantuivEXT (GLuint id, const GLuint *addr);
extern void  glVariantPointerEXT (GLuint id, GLenum type, GLuint stride, const void *addr);
extern void  glEnableVariantClientStateEXT (GLuint id);
extern void  glDisableVariantClientStateEXT (GLuint id);
extern GLuint  glBindLightParameterEXT (GLenum light, GLenum value);
extern GLuint  glBindMaterialParameterEXT (GLenum face, GLenum value);
extern GLuint  glBindTexGenParameterEXT (GLenum unit, GLenum coord, GLenum value);
extern GLuint  glBindTextureUnitParameterEXT (GLenum unit, GLenum value);
extern GLuint  glBindParameterEXT (GLenum value);
extern GLboolean  glIsVariantEnabledEXT (GLuint id, GLenum cap);
extern void  glGetVariantBooleanvEXT (GLuint id, GLenum value, GLboolean *data);
extern void  glGetVariantIntegervEXT (GLuint id, GLenum value, GLint *data);
extern void  glGetVariantFloatvEXT (GLuint id, GLenum value, GLfloat *data);
extern void  glGetVariantPointervEXT (GLuint id, GLenum value, void **data);
extern void  glGetInvariantBooleanvEXT (GLuint id, GLenum value, GLboolean *data);
extern void  glGetInvariantIntegervEXT (GLuint id, GLenum value, GLint *data);
extern void  glGetInvariantFloatvEXT (GLuint id, GLenum value, GLfloat *data);
extern void  glGetLocalConstantBooleanvEXT (GLuint id, GLenum value, GLboolean *data);
extern void  glGetLocalConstantIntegervEXT (GLuint id, GLenum value, GLint *data);
extern void  glGetLocalConstantFloatvEXT (GLuint id, GLenum value, GLfloat *data);
#endif
#endif /* GL_EXT_vertex_shader */

#ifndef GL_EXT_vertex_weighting
#define GL_EXT_vertex_weighting 1
#define GL_MODELVIEW0_STACK_DEPTH_EXT     0x0BA3
#define GL_MODELVIEW1_STACK_DEPTH_EXT     0x8502
#define GL_MODELVIEW0_MATRIX_EXT          0x0BA6
#define GL_MODELVIEW1_MATRIX_EXT          0x8506
#define GL_VERTEX_WEIGHTING_EXT           0x8509
#define GL_MODELVIEW0_EXT                 0x1700
#define GL_MODELVIEW1_EXT                 0x850A
#define GL_CURRENT_VERTEX_WEIGHT_EXT      0x850B
#define GL_VERTEX_WEIGHT_ARRAY_EXT        0x850C
#define GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT   0x850D
#define GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT   0x850E
#define GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT 0x850F
#define GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT 0x8510
extern void  glVertexWeightfEXT (GLfloat weight);
extern void  glVertexWeightfvEXT (const GLfloat *weight);
extern void  glVertexWeightPointerEXT (GLint size, GLenum type, GLsizei stride, const void *pointer);
#endif
#endif /* GL_EXT_vertex_weighting */

#ifndef GL_EXT_win32_keyed_mutex
#define GL_EXT_win32_keyed_mutex 1
extern GLboolean  glAcquireKeyedMutexWin32EXT (GLuint memory, GLuint64 key, GLuint timeout);
extern GLboolean  glReleaseKeyedMutexWin32EXT (GLuint memory, GLuint64 key);
#endif
#endif /* GL_EXT_win32_keyed_mutex */

#ifndef GL_EXT_window_rectangles
#define GL_EXT_window_rectangles 1
#define GL_INCLUSIVE_EXT                  0x8F10
#define GL_EXCLUSIVE_EXT                  0x8F11
#define GL_WINDOW_RECTANGLE_EXT           0x8F12
#define GL_WINDOW_RECTANGLE_MODE_EXT      0x8F13
#define GL_MAX_WINDOW_RECTANGLES_EXT      0x8F14
#define GL_NUM_WINDOW_RECTANGLES_EXT      0x8F15
extern void  glWindowRectanglesEXT (GLenum mode, GLsizei count, const GLint *box);
#endif
#endif /* GL_EXT_window_rectangles */

#ifndef GL_EXT_x11_sync_object
#define GL_EXT_x11_sync_object 1
#define GL_SYNC_X11_FENCE_EXT             0x90E1
extern GLsync  glImportSyncEXT (GLenum external_sync_type, GLintptr external_sync, GLbitfield flags);
#endif
#endif /* GL_EXT_x11_sync_object */

#ifndef GL_GREMEDY_frame_terminator
#define GL_GREMEDY_frame_terminator 1
extern void  glFrameTerminatorGREMEDY (void);
#endif
#endif /* GL_GREMEDY_frame_terminator */

#ifndef GL_GREMEDY_string_marker
#define GL_GREMEDY_string_marker 1
extern void  glStringMarkerGREMEDY (GLsizei len, const void *string);
#endif
#endif /* GL_GREMEDY_string_marker */

#ifndef GL_HP_convolution_border_modes
#define GL_HP_convolution_border_modes 1
#define GL_IGNORE_BORDER_HP               0x8150
#define GL_CONSTANT_BORDER_HP             0x8151
#define GL_REPLICATE_BORDER_HP            0x8153
#define GL_CONVOLUTION_BORDER_COLOR_HP    0x8154
#endif /* GL_HP_convolution_border_modes */

#ifndef GL_HP_image_transform
#define GL_HP_image_transform 1
#define GL_IMAGE_SCALE_X_HP               0x8155
#define GL_IMAGE_SCALE_Y_HP               0x8156
#define GL_IMAGE_TRANSLATE_X_HP           0x8157
#define GL_IMAGE_TRANSLATE_Y_HP           0x8158
#define GL_IMAGE_ROTATE_ANGLE_HP          0x8159
#define GL_IMAGE_ROTATE_ORIGIN_X_HP       0x815A
#define GL_IMAGE_ROTATE_ORIGIN_Y_HP       0x815B
#define GL_IMAGE_MAG_FILTER_HP            0x815C
#define GL_IMAGE_MIN_FILTER_HP            0x815D
#define GL_IMAGE_CUBIC_WEIGHT_HP          0x815E
#define GL_CUBIC_HP                       0x815F
#define GL_AVERAGE_HP                     0x8160
#define GL_IMAGE_TRANSFORM_2D_HP          0x8161
#define GL_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP 0x8162
#define GL_PROXY_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP 0x8163
extern void  glImageTransformParameteriHP (GLenum target, GLenum pname, GLint param);
extern void  glImageTransformParameterfHP (GLenum target, GLenum pname, GLfloat param);
extern void  glImageTransformParameterivHP (GLenum target, GLenum pname, const GLint *params);
extern void  glImageTransformParameterfvHP (GLenum target, GLenum pname, const GLfloat *params);
extern void  glGetImageTransformParameterivHP (GLenum target, GLenum pname, GLint *params);
extern void  glGetImageTransformParameterfvHP (GLenum target, GLenum pname, GLfloat *params);
#endif
#endif /* GL_HP_image_transform */

#ifndef GL_HP_occlusion_test
#define GL_HP_occlusion_test 1
#define GL_OCCLUSION_TEST_HP              0x8165
#define GL_OCCLUSION_TEST_RESULT_HP       0x8166
#endif /* GL_HP_occlusion_test */

#ifndef GL_HP_texture_lighting
#define GL_HP_texture_lighting 1
#define GL_TEXTURE_LIGHTING_MODE_HP       0x8167
#define GL_TEXTURE_POST_SPECULAR_HP       0x8168
#define GL_TEXTURE_PRE_SPECULAR_HP        0x8169
#endif /* GL_HP_texture_lighting */

#ifndef GL_IBM_cull_vertex
#define GL_IBM_cull_vertex 1
#define GL_CULL_VERTEX_IBM                103050
#endif /* GL_IBM_cull_vertex */

#ifndef GL_IBM_multimode_draw_arrays
#define GL_IBM_multimode_draw_arrays 1
extern void  glMultiModeDrawArraysIBM (const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride);
extern void  glMultiModeDrawElementsIBM (const GLenum *mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount, GLint modestride);
#endif
#endif /* GL_IBM_multimode_draw_arrays */

#ifndef GL_IBM_rasterpos_clip
#define GL_IBM_rasterpos_clip 1
#define GL_RASTER_POSITION_UNCLIPPED_IBM  0x19262
#endif /* GL_IBM_rasterpos_clip */

#ifndef GL_IBM_static_data
#define GL_IBM_static_data 1
#define GL_ALL_STATIC_DATA_IBM            103060
#define GL_STATIC_VERTEX_ARRAY_IBM        103061
extern void  glFlushStaticDataIBM (GLenum target);
#endif
#endif /* GL_IBM_static_data */

#ifndef GL_IBM_texture_mirrored_repeat
#define GL_IBM_texture_mirrored_repeat 1
#define GL_MIRRORED_REPEAT_IBM            0x8370
#endif /* GL_IBM_texture_mirrored_repeat */

#ifndef GL_IBM_vertex_array_lists
#define GL_IBM_vertex_array_lists 1
#define GL_VERTEX_ARRAY_LIST_IBM          103070
#define GL_NORMAL_ARRAY_LIST_IBM          103071
#define GL_COLOR_ARRAY_LIST_IBM           103072
#define GL_INDEX_ARRAY_LIST_IBM           103073
#define GL_TEXTURE_COORD_ARRAY_LIST_IBM   103074
#define GL_EDGE_FLAG_ARRAY_LIST_IBM       103075
#define GL_FOG_COORDINATE_ARRAY_LIST_IBM  103076
#define GL_SECONDARY_COLOR_ARRAY_LIST_IBM 103077
#define GL_VERTEX_ARRAY_LIST_STRIDE_IBM   103080
#define GL_NORMAL_ARRAY_LIST_STRIDE_IBM   103081
#define GL_COLOR_ARRAY_LIST_STRIDE_IBM    103082
#define GL_INDEX_ARRAY_LIST_STRIDE_IBM    103083
#define GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM 103084
#define GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM 103085
#define GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM 103086
#define GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM 103087
extern void  glColorPointerListIBM (GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride);
extern void  glSecondaryColorPointerListIBM (GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride);
extern void  glEdgeFlagPointerListIBM (GLint stride, const GLboolean **pointer, GLint ptrstride);
extern void  glFogCoordPointerListIBM (GLenum type, GLint stride, const void **pointer, GLint ptrstride);
extern void  glIndexPointerListIBM (GLenum type, GLint stride, const void **pointer, GLint ptrstride);
extern void  glNormalPointerListIBM (GLenum type, GLint stride, const void **pointer, GLint ptrstride);
extern void  glTexCoordPointerListIBM (GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride);
extern void  glVertexPointerListIBM (GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride);
#endif
#endif /* GL_IBM_vertex_array_lists */

#ifndef GL_INGR_blend_func_separate
#define GL_INGR_blend_func_separate 1
extern void  glBlendFuncSeparateINGR (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
#endif
#endif /* GL_INGR_blend_func_separate */

#ifndef GL_INGR_color_clamp
#define GL_INGR_color_clamp 1
#define GL_RED_MIN_CLAMP_INGR             0x8560
#define GL_GREEN_MIN_CLAMP_INGR           0x8561
#define GL_BLUE_MIN_CLAMP_INGR            0x8562
#define GL_ALPHA_MIN_CLAMP_INGR           0x8563
#define GL_RED_MAX_CLAMP_INGR             0x8564
#define GL_GREEN_MAX_CLAMP_INGR           0x8565
#define GL_BLUE_MAX_CLAMP_INGR            0x8566
#define GL_ALPHA_MAX_CLAMP_INGR           0x8567
#endif /* GL_INGR_color_clamp */

#ifndef GL_INGR_interlace_read
#define GL_INGR_interlace_read 1
#define GL_INTERLACE_READ_INGR            0x8568
#endif /* GL_INGR_interlace_read */

#ifndef GL_INTEL_blackhole_render
#define GL_INTEL_blackhole_render 1
#define GL_BLACKHOLE_RENDER_INTEL         0x83FC
#endif /* GL_INTEL_blackhole_render */

#ifndef GL_INTEL_conservative_rasterization
#define GL_INTEL_conservative_rasterization 1
#define GL_CONSERVATIVE_RASTERIZATION_INTEL 0x83FE
#endif /* GL_INTEL_conservative_rasterization */

#ifndef GL_INTEL_fragment_shader_ordering
#define GL_INTEL_fragment_shader_ordering 1
#endif /* GL_INTEL_fragment_shader_ordering */

#ifndef GL_INTEL_framebuffer_CMAA
#define GL_INTEL_framebuffer_CMAA 1
extern void  glApplyFramebufferAttachmentCMAAINTEL (void);
#endif
#endif /* GL_INTEL_framebuffer_CMAA */

#ifndef GL_INTEL_map_texture
#define GL_INTEL_map_texture 1
#define GL_TEXTURE_MEMORY_LAYOUT_INTEL    0x83FF
#define GL_LAYOUT_DEFAULT_INTEL           0
#define GL_LAYOUT_LINEAR_INTEL            1
#define GL_LAYOUT_LINEAR_CPU_CACHED_INTEL 2
extern void  glSyncTextureINTEL (GLuint texture);
extern void  glUnmapTexture2DINTEL (GLuint texture, GLint level);
extern void * glMapTexture2DINTEL (GLuint texture, GLint level, GLbitfield access, GLint *stride, GLenum *layout);
#endif
#endif /* GL_INTEL_map_texture */

#ifndef GL_INTEL_parallel_arrays
#define GL_INTEL_parallel_arrays 1
#define GL_PARALLEL_ARRAYS_INTEL          0x83F4
#define GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL 0x83F5
#define GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL 0x83F6
#define GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL 0x83F7
#define GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL 0x83F8
extern void  glVertexPointervINTEL (GLint size, GLenum type, const void **pointer);
extern void  glNormalPointervINTEL (GLenum type, const void **pointer);
extern void  glColorPointervINTEL (GLint size, GLenum type, const void **pointer);
extern void  glTexCoordPointervINTEL (GLint size, GLenum type, const void **pointer);
#endif
#endif /* GL_INTEL_parallel_arrays */

#ifndef GL_INTEL_performance_query
#define GL_INTEL_performance_query 1
#define GL_PERFQUERY_SINGLE_CONTEXT_INTEL 0x00000000
#define GL_PERFQUERY_GLOBAL_CONTEXT_INTEL 0x00000001
#define GL_PERFQUERY_WAIT_INTEL           0x83FB
#define GL_PERFQUERY_FLUSH_INTEL          0x83FA
#define GL_PERFQUERY_DONOT_FLUSH_INTEL    0x83F9
#define GL_PERFQUERY_COUNTER_EVENT_INTEL  0x94F0
#define GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL 0x94F1
#define GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL 0x94F2
#define GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL 0x94F3
#define GL_PERFQUERY_COUNTER_RAW_INTEL    0x94F4
#define GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL 0x94F5
#define GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL 0x94F8
#define GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL 0x94F9
#define GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL 0x94FA
#define GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL 0x94FB
#define GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL 0x94FC
#define GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL 0x94FD
#define GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL 0x94FE
#define GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL 0x94FF
#define GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL 0x9500
extern void  glBeginPerfQueryINTEL (GLuint queryHandle);
extern void  glCreatePerfQueryINTEL (GLuint queryId, GLuint *queryHandle);
extern void  glDeletePerfQueryINTEL (GLuint queryHandle);
extern void  glEndPerfQueryINTEL (GLuint queryHandle);
extern void  glGetFirstPerfQueryIdINTEL (GLuint *queryId);
extern void  glGetNextPerfQueryIdINTEL (GLuint queryId, GLuint *nextQueryId);
extern void  glGetPerfCounterInfoINTEL (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue);
extern void  glGetPerfQueryDataINTEL (GLuint queryHandle, GLuint flags, GLsizei dataSize, void *data, GLuint *bytesWritten);
extern void  glGetPerfQueryIdByNameINTEL (GLchar *queryName, GLuint *queryId);
extern void  glGetPerfQueryInfoINTEL (GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask);
#endif
#endif /* GL_INTEL_performance_query */

#ifndef GL_MESAX_texture_stack
#define GL_MESAX_texture_stack 1
#define GL_TEXTURE_1D_STACK_MESAX         0x8759
#define GL_TEXTURE_2D_STACK_MESAX         0x875A
#define GL_PROXY_TEXTURE_1D_STACK_MESAX   0x875B
#define GL_PROXY_TEXTURE_2D_STACK_MESAX   0x875C
#define GL_TEXTURE_1D_STACK_BINDING_MESAX 0x875D
#define GL_TEXTURE_2D_STACK_BINDING_MESAX 0x875E
#endif /* GL_MESAX_texture_stack */

#ifndef GL_MESA_framebuffer_flip_x
#define GL_MESA_framebuffer_flip_x 1
#define GL_FRAMEBUFFER_FLIP_X_MESA        0x8BBC
#endif /* GL_MESA_framebuffer_flip_x */

#ifndef GL_MESA_framebuffer_flip_y
#define GL_MESA_framebuffer_flip_y 1
#define GL_FRAMEBUFFER_FLIP_Y_MESA        0x8BBB
extern void  glFramebufferParameteriMESA (GLenum target, GLenum pname, GLint param);
extern void  glGetFramebufferParameterivMESA (GLenum target, GLenum pname, GLint *params);
#endif
#endif /* GL_MESA_framebuffer_flip_y */

#ifndef GL_MESA_framebuffer_swap_xy
#define GL_MESA_framebuffer_swap_xy 1
#define GL_FRAMEBUFFER_SWAP_XY_MESA       0x8BBD
#endif /* GL_MESA_framebuffer_swap_xy */

#ifndef GL_MESA_pack_invert
#define GL_MESA_pack_invert 1
#define GL_PACK_INVERT_MESA               0x8758
#endif /* GL_MESA_pack_invert */

#ifndef GL_MESA_program_binary_formats
#define GL_MESA_program_binary_formats 1
#define GL_PROGRAM_BINARY_FORMAT_MESA     0x875F
#endif /* GL_MESA_program_binary_formats */

#ifndef GL_MESA_resize_buffers
#define GL_MESA_resize_buffers 1
extern void  glResizeBuffersMESA (void);
#endif
#endif /* GL_MESA_resize_buffers */

#ifndef GL_MESA_shader_integer_functions
#define GL_MESA_shader_integer_functions 1
#endif /* GL_MESA_shader_integer_functions */

#ifndef GL_MESA_tile_raster_order
#define GL_MESA_tile_raster_order 1
#define GL_TILE_RASTER_ORDER_FIXED_MESA   0x8BB8
#define GL_TILE_RASTER_ORDER_INCREASING_X_MESA 0x8BB9
#define GL_TILE_RASTER_ORDER_INCREASING_Y_MESA 0x8BBA
#endif /* GL_MESA_tile_raster_order */

#ifndef GL_MESA_window_pos
#define GL_MESA_window_pos 1
extern void  glWindowPos2dMESA (GLdouble x, GLdouble y);
extern void  glWindowPos2dvMESA (const GLdouble *v);
extern void  glWindowPos2fMESA (GLfloat x, GLfloat y);
extern void  glWindowPos2fvMESA (const GLfloat *v);
extern void  glWindowPos2iMESA (GLint x, GLint y);
extern void  glWindowPos2ivMESA (const GLint *v);
extern void  glWindowPos2sMESA (GLshort x, GLshort y);
extern void  glWindowPos2svMESA (const GLshort *v);
extern void  glWindowPos3dMESA (GLdouble x, GLdouble y, GLdouble z);
extern void  glWindowPos3dvMESA (const GLdouble *v);
extern void  glWindowPos3fMESA (GLfloat x, GLfloat y, GLfloat z);
extern void  glWindowPos3fvMESA (const GLfloat *v);
extern void  glWindowPos3iMESA (GLint x, GLint y, GLint z);
extern void  glWindowPos3ivMESA (const GLint *v);
extern void  glWindowPos3sMESA (GLshort x, GLshort y, GLshort z);
extern void  glWindowPos3svMESA (const GLshort *v);
extern void  glWindowPos4dMESA (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glWindowPos4dvMESA (const GLdouble *v);
extern void  glWindowPos4fMESA (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void  glWindowPos4fvMESA (const GLfloat *v);
extern void  glWindowPos4iMESA (GLint x, GLint y, GLint z, GLint w);
extern void  glWindowPos4ivMESA (const GLint *v);
extern void  glWindowPos4sMESA (GLshort x, GLshort y, GLshort z, GLshort w);
extern void  glWindowPos4svMESA (const GLshort *v);
#endif
#endif /* GL_MESA_window_pos */

#ifndef GL_MESA_ycbcr_texture
#define GL_MESA_ycbcr_texture 1
#define GL_UNSIGNED_SHORT_8_8_MESA        0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_MESA    0x85BB
#define GL_YCBCR_MESA                     0x8757
#endif /* GL_MESA_ycbcr_texture */

#ifndef GL_NVX_blend_equation_advanced_multi_draw_buffers
#define GL_NVX_blend_equation_advanced_multi_draw_buffers 1
#endif /* GL_NVX_blend_equation_advanced_multi_draw_buffers */

#ifndef GL_NVX_conditional_render
#define GL_NVX_conditional_render 1
extern void  glBeginConditionalRenderNVX (GLuint id);
extern void  glEndConditionalRenderNVX (void);
#endif
#endif /* GL_NVX_conditional_render */

#ifndef GL_NVX_gpu_memory_info
#define GL_NVX_gpu_memory_info 1
#define GL_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX 0x9047
#define GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX 0x9048
#define GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX 0x9049
#define GL_GPU_MEMORY_INFO_EVICTION_COUNT_NVX 0x904A
#define GL_GPU_MEMORY_INFO_EVICTED_MEMORY_NVX 0x904B
#endif /* GL_NVX_gpu_memory_info */

#ifndef GL_NVX_gpu_multicast2
#define GL_NVX_gpu_multicast2 1
#define GL_UPLOAD_GPU_MASK_NVX            0x954A
extern void  glUploadGpuMaskNVX (GLbitfield mask);
extern void  glMulticastViewportArrayvNVX (GLuint gpu, GLuint first, GLsizei count, const GLfloat *v);
extern void  glMulticastViewportPositionWScaleNVX (GLuint gpu, GLuint index, GLfloat xcoeff, GLfloat ycoeff);
extern void  glMulticastScissorArrayvNVX (GLuint gpu, GLuint first, GLsizei count, const GLint *v);
extern GLuint  glAsyncCopyBufferSubDataNVX (GLsizei waitSemaphoreCount, const GLuint *waitSemaphoreArray, const GLuint64 *fenceValueArray, GLuint readGpu, GLbitfield writeGpuMask, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, GLsizei signalSemaphoreCount, const GLuint *signalSemaphoreArray, const GLuint64 *signalValueArray);
extern GLuint  glAsyncCopyImageSubDataNVX (GLsizei waitSemaphoreCount, const GLuint *waitSemaphoreArray, const GLuint64 *waitValueArray, GLuint srcGpu, GLbitfield dstGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth, GLsizei signalSemaphoreCount, const GLuint *signalSemaphoreArray, const GLuint64 *signalValueArray);
#endif
#endif /* GL_NVX_gpu_multicast2 */

#ifndef GL_NVX_linked_gpu_multicast
#define GL_NVX_linked_gpu_multicast 1
#define GL_LGPU_SEPARATE_STORAGE_BIT_NVX  0x0800
#define GL_MAX_LGPU_GPUS_NVX              0x92BA
extern void  glLGPUNamedBufferSubDataNVX (GLbitfield gpuMask, GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
extern void  glLGPUCopyImageSubDataNVX (GLuint sourceGpu, GLbitfield destinationGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srxY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
extern void  glLGPUInterlockNVX (void);
#endif
#endif /* GL_NVX_linked_gpu_multicast */

#ifndef GL_NVX_progress_fence
#define GL_NVX_progress_fence 1
extern GLuint  glCreateProgressFenceNVX (void);
extern void  glSignalSemaphoreui64NVX (GLuint signalGpu, GLsizei fenceObjectCount, const GLuint *semaphoreArray, const GLuint64 *fenceValueArray);
extern void  glWaitSemaphoreui64NVX (GLuint waitGpu, GLsizei fenceObjectCount, const GLuint *semaphoreArray, const GLuint64 *fenceValueArray);
extern void  glClientWaitSemaphoreui64NVX (GLsizei fenceObjectCount, const GLuint *semaphoreArray, const GLuint64 *fenceValueArray);
#endif
#endif /* GL_NVX_progress_fence */

#ifndef GL_NV_alpha_to_coverage_dither_control
#define GL_NV_alpha_to_coverage_dither_control 1
#define GL_ALPHA_TO_COVERAGE_DITHER_DEFAULT_NV 0x934D
#define GL_ALPHA_TO_COVERAGE_DITHER_ENABLE_NV 0x934E
#define GL_ALPHA_TO_COVERAGE_DITHER_DISABLE_NV 0x934F
#define GL_ALPHA_TO_COVERAGE_DITHER_MODE_NV 0x92BF
extern void  glAlphaToCoverageDitherControlNV (GLenum mode);
#endif
#endif /* GL_NV_alpha_to_coverage_dither_control */

#ifndef GL_NV_bindless_multi_draw_indirect
#define GL_NV_bindless_multi_draw_indirect 1
extern void  glMultiDrawArraysIndirectBindlessNV (GLenum mode, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
extern void  glMultiDrawElementsIndirectBindlessNV (GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
#endif
#endif /* GL_NV_bindless_multi_draw_indirect */

#ifndef GL_NV_bindless_multi_draw_indirect_count
#define GL_NV_bindless_multi_draw_indirect_count 1
extern void  glMultiDrawArraysIndirectBindlessCountNV (GLenum mode, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
extern void  glMultiDrawElementsIndirectBindlessCountNV (GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
#endif
#endif /* GL_NV_bindless_multi_draw_indirect_count */

#ifndef GL_NV_bindless_texture
#define GL_NV_bindless_texture 1
extern GLuint64  glGetTextureHandleNV (GLuint texture);
extern GLuint64  glGetTextureSamplerHandleNV (GLuint texture, GLuint sampler);
extern void  glMakeTextureHandleResidentNV (GLuint64 handle);
extern void  glMakeTextureHandleNonResidentNV (GLuint64 handle);
extern GLuint64  glGetImageHandleNV (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
extern void  glMakeImageHandleResidentNV (GLuint64 handle, GLenum access);
extern void  glMakeImageHandleNonResidentNV (GLuint64 handle);
extern void  glUniformHandleui64NV (GLint location, GLuint64 value);
extern void  glUniformHandleui64vNV (GLint location, GLsizei count, const GLuint64 *value);
extern void  glProgramUniformHandleui64NV (GLuint program, GLint location, GLuint64 value);
extern void  glProgramUniformHandleui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64 *values);
extern GLboolean  glIsTextureHandleResidentNV (GLuint64 handle);
extern GLboolean  glIsImageHandleResidentNV (GLuint64 handle);
#endif
#endif /* GL_NV_bindless_texture */

#ifndef GL_NV_blend_equation_advanced
#define GL_NV_blend_equation_advanced 1
#define GL_BLEND_OVERLAP_NV               0x9281
#define GL_BLEND_PREMULTIPLIED_SRC_NV     0x9280
#define GL_BLUE_NV                        0x1905
#define GL_COLORBURN_NV                   0x929A
#define GL_COLORDODGE_NV                  0x9299
#define GL_CONJOINT_NV                    0x9284
#define GL_CONTRAST_NV                    0x92A1
#define GL_DARKEN_NV                      0x9297
#define GL_DIFFERENCE_NV                  0x929E
#define GL_DISJOINT_NV                    0x9283
#define GL_DST_ATOP_NV                    0x928F
#define GL_DST_IN_NV                      0x928B
#define GL_DST_NV                         0x9287
#define GL_DST_OUT_NV                     0x928D
#define GL_DST_OVER_NV                    0x9289
#define GL_EXCLUSION_NV                   0x92A0
#define GL_GREEN_NV                       0x1904
#define GL_HARDLIGHT_NV                   0x929B
#define GL_HARDMIX_NV                     0x92A9
#define GL_HSL_COLOR_NV                   0x92AF
#define GL_HSL_HUE_NV                     0x92AD
#define GL_HSL_LUMINOSITY_NV              0x92B0
#define GL_HSL_SATURATION_NV              0x92AE
#define GL_INVERT_OVG_NV                  0x92B4
#define GL_INVERT_RGB_NV                  0x92A3
#define GL_LIGHTEN_NV                     0x9298
#define GL_LINEARBURN_NV                  0x92A5
#define GL_LINEARDODGE_NV                 0x92A4
#define GL_LINEARLIGHT_NV                 0x92A7
#define GL_MINUS_CLAMPED_NV               0x92B3
#define GL_MINUS_NV                       0x929F
#define GL_MULTIPLY_NV                    0x9294
#define GL_OVERLAY_NV                     0x9296
#define GL_PINLIGHT_NV                    0x92A8
#define GL_PLUS_CLAMPED_ALPHA_NV          0x92B2
#define GL_PLUS_CLAMPED_NV                0x92B1
#define GL_PLUS_DARKER_NV                 0x9292
#define GL_PLUS_NV                        0x9291
#define GL_RED_NV                         0x1903
#define GL_SCREEN_NV                      0x9295
#define GL_SOFTLIGHT_NV                   0x929C
#define GL_SRC_ATOP_NV                    0x928E
#define GL_SRC_IN_NV                      0x928A
#define GL_SRC_NV                         0x9286
#define GL_SRC_OUT_NV                     0x928C
#define GL_SRC_OVER_NV                    0x9288
#define GL_UNCORRELATED_NV                0x9282
#define GL_VIVIDLIGHT_NV                  0x92A6
#define GL_XOR_NV                         0x1506
extern void  glBlendParameteriNV (GLenum pname, GLint value);
extern void  glBlendBarrierNV (void);
#endif
#endif /* GL_NV_blend_equation_advanced */

#ifndef GL_NV_blend_equation_advanced_coherent
#define GL_NV_blend_equation_advanced_coherent 1
#define GL_BLEND_ADVANCED_COHERENT_NV     0x9285
#endif /* GL_NV_blend_equation_advanced_coherent */

#ifndef GL_NV_blend_minmax_factor
#define GL_NV_blend_minmax_factor 1
#endif /* GL_NV_blend_minmax_factor */

#ifndef GL_NV_blend_square
#define GL_NV_blend_square 1
#endif /* GL_NV_blend_square */

#ifndef GL_NV_clip_space_w_scaling
#define GL_NV_clip_space_w_scaling 1
#define GL_VIEWPORT_POSITION_W_SCALE_NV   0x937C
#define GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV 0x937D
#define GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV 0x937E
extern void  glViewportPositionWScaleNV (GLuint index, GLfloat xcoeff, GLfloat ycoeff);
#endif
#endif /* GL_NV_clip_space_w_scaling */

#ifndef GL_NV_command_list
#define GL_NV_command_list 1
#define GL_TERMINATE_SEQUENCE_COMMAND_NV  0x0000
#define GL_NOP_COMMAND_NV                 0x0001
#define GL_DRAW_ELEMENTS_COMMAND_NV       0x0002
#define GL_DRAW_ARRAYS_COMMAND_NV         0x0003
#define GL_DRAW_ELEMENTS_STRIP_COMMAND_NV 0x0004
#define GL_DRAW_ARRAYS_STRIP_COMMAND_NV   0x0005
#define GL_DRAW_ELEMENTS_INSTANCED_COMMAND_NV 0x0006
#define GL_DRAW_ARRAYS_INSTANCED_COMMAND_NV 0x0007
#define GL_ELEMENT_ADDRESS_COMMAND_NV     0x0008
#define GL_ATTRIBUTE_ADDRESS_COMMAND_NV   0x0009
#define GL_UNIFORM_ADDRESS_COMMAND_NV     0x000A
#define GL_BLEND_COLOR_COMMAND_NV         0x000B
#define GL_STENCIL_REF_COMMAND_NV         0x000C
#define GL_LINE_WIDTH_COMMAND_NV          0x000D
#define GL_POLYGON_OFFSET_COMMAND_NV      0x000E
#define GL_ALPHA_REF_COMMAND_NV           0x000F
#define GL_VIEWPORT_COMMAND_NV            0x0010
#define GL_SCISSOR_COMMAND_NV             0x0011
#define GL_FRONT_FACE_COMMAND_NV          0x0012
extern void  glCreateStatesNV (GLsizei n, GLuint *states);
extern void  glDeleteStatesNV (GLsizei n, const GLuint *states);
extern GLboolean  glIsStateNV (GLuint state);
extern void  glStateCaptureNV (GLuint state, GLenum mode);
extern GLuint  glGetCommandHeaderNV (GLenum tokenID, GLuint size);
extern GLushort  glGetStageIndexNV (GLenum shadertype);
extern void  glDrawCommandsNV (GLenum primitiveMode, GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, GLuint count);
extern void  glDrawCommandsAddressNV (GLenum primitiveMode, const GLuint64 *indirects, const GLsizei *sizes, GLuint count);
extern void  glDrawCommandsStatesNV (GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
extern void  glDrawCommandsStatesAddressNV (const GLuint64 *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
extern void  glCreateCommandListsNV (GLsizei n, GLuint *lists);
extern void  glDeleteCommandListsNV (GLsizei n, const GLuint *lists);
extern GLboolean  glIsCommandListNV (GLuint list);
extern void  glListDrawCommandsStatesClientNV (GLuint list, GLuint segment, const void **indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
extern void  glCommandListSegmentsNV (GLuint list, GLuint segments);
extern void  glCompileCommandListNV (GLuint list);
extern void  glCallCommandListNV (GLuint list);
#endif
#endif /* GL_NV_command_list */

#ifndef GL_NV_compute_program5
#define GL_NV_compute_program5 1
#define GL_COMPUTE_PROGRAM_NV             0x90FB
#define GL_COMPUTE_PROGRAM_PARAMETER_BUFFER_NV 0x90FC
#endif /* GL_NV_compute_program5 */

#ifndef GL_NV_compute_shader_derivatives
#define GL_NV_compute_shader_derivatives 1
#endif /* GL_NV_compute_shader_derivatives */

#ifndef GL_NV_conditional_render
#define GL_NV_conditional_render 1
#define GL_QUERY_WAIT_NV                  0x8E13
#define GL_QUERY_NO_WAIT_NV               0x8E14
#define GL_QUERY_BY_REGION_WAIT_NV        0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT_NV     0x8E16
extern void  glBeginConditionalRenderNV (GLuint id, GLenum mode);
extern void  glEndConditionalRenderNV (void);
#endif
#endif /* GL_NV_conditional_render */

#ifndef GL_NV_conservative_raster
#define GL_NV_conservative_raster 1
#define GL_CONSERVATIVE_RASTERIZATION_NV  0x9346
#define GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV 0x9347
#define GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV 0x9348
#define GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV 0x9349
extern void  glSubpixelPrecisionBiasNV (GLuint xbits, GLuint ybits);
#endif
#endif /* GL_NV_conservative_raster */

#ifndef GL_NV_conservative_raster_dilate
#define GL_NV_conservative_raster_dilate 1
#define GL_CONSERVATIVE_RASTER_DILATE_NV  0x9379
#define GL_CONSERVATIVE_RASTER_DILATE_RANGE_NV 0x937A
#define GL_CONSERVATIVE_RASTER_DILATE_GRANULARITY_NV 0x937B
extern void  glConservativeRasterParameterfNV (GLenum pname, GLfloat value);
#endif
#endif /* GL_NV_conservative_raster_dilate */

#ifndef GL_NV_conservative_raster_pre_snap
#define GL_NV_conservative_raster_pre_snap 1
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV 0x9550
#endif /* GL_NV_conservative_raster_pre_snap */

#ifndef GL_NV_conservative_raster_pre_snap_triangles
#define GL_NV_conservative_raster_pre_snap_triangles 1
#define GL_CONSERVATIVE_RASTER_MODE_NV    0x954D
#define GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV 0x954E
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV 0x954F
extern void  glConservativeRasterParameteriNV (GLenum pname, GLint param);
#endif
#endif /* GL_NV_conservative_raster_pre_snap_triangles */

#ifndef GL_NV_conservative_raster_underestimation
#define GL_NV_conservative_raster_underestimation 1
#endif /* GL_NV_conservative_raster_underestimation */

#ifndef GL_NV_copy_depth_to_color
#define GL_NV_copy_depth_to_color 1
#define GL_DEPTH_STENCIL_TO_RGBA_NV       0x886E
#define GL_DEPTH_STENCIL_TO_BGRA_NV       0x886F
#endif /* GL_NV_copy_depth_to_color */

#ifndef GL_NV_copy_image
#define GL_NV_copy_image 1
extern void  glCopyImageSubDataNV (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
#endif
#endif /* GL_NV_copy_image */

#ifndef GL_NV_deep_texture3D
#define GL_NV_deep_texture3D 1
#define GL_MAX_DEEP_3D_TEXTURE_WIDTH_HEIGHT_NV 0x90D0
#define GL_MAX_DEEP_3D_TEXTURE_DEPTH_NV   0x90D1
#endif /* GL_NV_deep_texture3D */

#ifndef GL_NV_depth_buffer_float
#define GL_NV_depth_buffer_float 1
#define GL_DEPTH_COMPONENT32F_NV          0x8DAB
#define GL_DEPTH32F_STENCIL8_NV           0x8DAC
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV 0x8DAD
#define GL_DEPTH_BUFFER_FLOAT_MODE_NV     0x8DAF
extern void  glDepthRangedNV (GLdouble zNear, GLdouble zFar);
extern void  glClearDepthdNV (GLdouble depth);
extern void  glDepthBoundsdNV (GLdouble zmin, GLdouble zmax);
#endif
#endif /* GL_NV_depth_buffer_float */

#ifndef GL_NV_depth_clamp
#define GL_NV_depth_clamp 1
#define GL_DEPTH_CLAMP_NV                 0x864F
#endif /* GL_NV_depth_clamp */

#ifndef GL_NV_draw_texture
#define GL_NV_draw_texture 1
extern void  glDrawTextureNV (GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
#endif
#endif /* GL_NV_draw_texture */

#ifndef GL_NV_draw_vulkan_image
#define GL_NV_draw_vulkan_image 1
extern void  glDrawVkImageNV (GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
extern GLVULKANPROCNV  glGetVkProcAddrNV (const GLchar *name);
extern void  glWaitVkSemaphoreNV (GLuint64 vkSemaphore);
extern void  glSignalVkSemaphoreNV (GLuint64 vkSemaphore);
extern void  glSignalVkFenceNV (GLuint64 vkFence);
#endif
#endif /* GL_NV_draw_vulkan_image */

#ifndef GL_NV_evaluators
#define GL_NV_evaluators 1
#define GL_EVAL_2D_NV                     0x86C0
#define GL_EVAL_TRIANGULAR_2D_NV          0x86C1
#define GL_MAP_TESSELLATION_NV            0x86C2
#define GL_MAP_ATTRIB_U_ORDER_NV          0x86C3
#define GL_MAP_ATTRIB_V_ORDER_NV          0x86C4
#define GL_EVAL_FRACTIONAL_TESSELLATION_NV 0x86C5
#define GL_EVAL_VERTEX_ATTRIB0_NV         0x86C6
#define GL_EVAL_VERTEX_ATTRIB1_NV         0x86C7
#define GL_EVAL_VERTEX_ATTRIB2_NV         0x86C8
#define GL_EVAL_VERTEX_ATTRIB3_NV         0x86C9
#define GL_EVAL_VERTEX_ATTRIB4_NV         0x86CA
#define GL_EVAL_VERTEX_ATTRIB5_NV         0x86CB
#define GL_EVAL_VERTEX_ATTRIB6_NV         0x86CC
#define GL_EVAL_VERTEX_ATTRIB7_NV         0x86CD
#define GL_EVAL_VERTEX_ATTRIB8_NV         0x86CE
#define GL_EVAL_VERTEX_ATTRIB9_NV         0x86CF
#define GL_EVAL_VERTEX_ATTRIB10_NV        0x86D0
#define GL_EVAL_VERTEX_ATTRIB11_NV        0x86D1
#define GL_EVAL_VERTEX_ATTRIB12_NV        0x86D2
#define GL_EVAL_VERTEX_ATTRIB13_NV        0x86D3
#define GL_EVAL_VERTEX_ATTRIB14_NV        0x86D4
#define GL_EVAL_VERTEX_ATTRIB15_NV        0x86D5
#define GL_MAX_MAP_TESSELLATION_NV        0x86D6
#define GL_MAX_RATIONAL_EVAL_ORDER_NV     0x86D7
extern void  glMapControlPointsNV (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void *points);
extern void  glMapParameterivNV (GLenum target, GLenum pname, const GLint *params);
extern void  glMapParameterfvNV (GLenum target, GLenum pname, const GLfloat *params);
extern void  glGetMapControlPointsNV (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void *points);
extern void  glGetMapParameterivNV (GLenum target, GLenum pname, GLint *params);
extern void  glGetMapParameterfvNV (GLenum target, GLenum pname, GLfloat *params);
extern void  glGetMapAttribParameterivNV (GLenum target, GLuint index, GLenum pname, GLint *params);
extern void  glGetMapAttribParameterfvNV (GLenum target, GLuint index, GLenum pname, GLfloat *params);
extern void  glEvalMapsNV (GLenum target, GLenum mode);
#endif
#endif /* GL_NV_evaluators */

#ifndef GL_NV_explicit_multisample
#define GL_NV_explicit_multisample 1
#define GL_SAMPLE_POSITION_NV             0x8E50
#define GL_SAMPLE_MASK_NV                 0x8E51
#define GL_SAMPLE_MASK_VALUE_NV           0x8E52
#define GL_TEXTURE_BINDING_RENDERBUFFER_NV 0x8E53
#define GL_TEXTURE_RENDERBUFFER_DATA_STORE_BINDING_NV 0x8E54
#define GL_TEXTURE_RENDERBUFFER_NV        0x8E55
#define GL_SAMPLER_RENDERBUFFER_NV        0x8E56
#define GL_INT_SAMPLER_RENDERBUFFER_NV    0x8E57
#define GL_UNSIGNED_INT_SAMPLER_RENDERBUFFER_NV 0x8E58
#define GL_MAX_SAMPLE_MASK_WORDS_NV       0x8E59
extern void  glGetMultisamplefvNV (GLenum pname, GLuint index, GLfloat *val);
extern void  glSampleMaskIndexedNV (GLuint index, GLbitfield mask);
extern void  glTexRenderbufferNV (GLenum target, GLuint renderbuffer);
#endif
#endif /* GL_NV_explicit_multisample */

#ifndef GL_NV_fence
#define GL_NV_fence 1
#define GL_ALL_COMPLETED_NV               0x84F2
#define GL_FENCE_STATUS_NV                0x84F3
#define GL_FENCE_CONDITION_NV             0x84F4
extern void  glDeleteFencesNV (GLsizei n, const GLuint *fences);
extern void  glGenFencesNV (GLsizei n, GLuint *fences);
extern GLboolean  glIsFenceNV (GLuint fence);
extern GLboolean  glTestFenceNV (GLuint fence);
extern void  glGetFenceivNV (GLuint fence, GLenum pname, GLint *params);
extern void  glFinishFenceNV (GLuint fence);
extern void  glSetFenceNV (GLuint fence, GLenum condition);
#endif
#endif /* GL_NV_fence */

#ifndef GL_NV_fill_rectangle
#define GL_NV_fill_rectangle 1
#define GL_FILL_RECTANGLE_NV              0x933C
#endif /* GL_NV_fill_rectangle */

#ifndef GL_NV_float_buffer
#define GL_NV_float_buffer 1
#define GL_FLOAT_R_NV                     0x8880
#define GL_FLOAT_RG_NV                    0x8881
#define GL_FLOAT_RGB_NV                   0x8882
#define GL_FLOAT_RGBA_NV                  0x8883
#define GL_FLOAT_R16_NV                   0x8884
#define GL_FLOAT_R32_NV                   0x8885
#define GL_FLOAT_RG16_NV                  0x8886
#define GL_FLOAT_RG32_NV                  0x8887
#define GL_FLOAT_RGB16_NV                 0x8888
#define GL_FLOAT_RGB32_NV                 0x8889
#define GL_FLOAT_RGBA16_NV                0x888A
#define GL_FLOAT_RGBA32_NV                0x888B
#define GL_TEXTURE_FLOAT_COMPONENTS_NV    0x888C
#define GL_FLOAT_CLEAR_COLOR_VALUE_NV     0x888D
#define GL_FLOAT_RGBA_MODE_NV             0x888E
#endif /* GL_NV_float_buffer */

#ifndef GL_NV_fog_distance
#define GL_NV_fog_distance 1
#define GL_FOG_DISTANCE_MODE_NV           0x855A
#define GL_EYE_RADIAL_NV                  0x855B
#define GL_EYE_PLANE_ABSOLUTE_NV          0x855C
#endif /* GL_NV_fog_distance */

#ifndef GL_NV_fragment_coverage_to_color
#define GL_NV_fragment_coverage_to_color 1
#define GL_FRAGMENT_COVERAGE_TO_COLOR_NV  0x92DD
#define GL_FRAGMENT_COVERAGE_COLOR_NV     0x92DE
extern void  glFragmentCoverageColorNV (GLuint color);
#endif
#endif /* GL_NV_fragment_coverage_to_color */

#ifndef GL_NV_fragment_program
#define GL_NV_fragment_program 1
#define GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV 0x8868
#define GL_FRAGMENT_PROGRAM_NV            0x8870
#define GL_MAX_TEXTURE_COORDS_NV          0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_NV     0x8872
#define GL_FRAGMENT_PROGRAM_BINDING_NV    0x8873
#define GL_PROGRAM_ERROR_STRING_NV        0x8874
extern void  glProgramNamedParameter4fNV (GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void  glProgramNamedParameter4fvNV (GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v);
extern void  glProgramNamedParameter4dNV (GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glProgramNamedParameter4dvNV (GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v);
extern void  glGetProgramNamedParameterfvNV (GLuint id, GLsizei len, const GLubyte *name, GLfloat *params);
extern void  glGetProgramNamedParameterdvNV (GLuint id, GLsizei len, const GLubyte *name, GLdouble *params);
#endif
#endif /* GL_NV_fragment_program */

#ifndef GL_NV_fragment_program2
#define GL_NV_fragment_program2 1
#define GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV 0x88F4
#define GL_MAX_PROGRAM_CALL_DEPTH_NV      0x88F5
#define GL_MAX_PROGRAM_IF_DEPTH_NV        0x88F6
#define GL_MAX_PROGRAM_LOOP_DEPTH_NV      0x88F7
#define GL_MAX_PROGRAM_LOOP_COUNT_NV      0x88F8
#endif /* GL_NV_fragment_program2 */

#ifndef GL_NV_fragment_program4
#define GL_NV_fragment_program4 1
#endif /* GL_NV_fragment_program4 */

#ifndef GL_NV_fragment_program_option
#define GL_NV_fragment_program_option 1
#endif /* GL_NV_fragment_program_option */

#ifndef GL_NV_fragment_shader_barycentric
#define GL_NV_fragment_shader_barycentric 1
#endif /* GL_NV_fragment_shader_barycentric */

#ifndef GL_NV_fragment_shader_interlock
#define GL_NV_fragment_shader_interlock 1
#endif /* GL_NV_fragment_shader_interlock */

#ifndef GL_NV_framebuffer_mixed_samples
#define GL_NV_framebuffer_mixed_samples 1
#define GL_COVERAGE_MODULATION_TABLE_NV   0x9331
#define GL_COLOR_SAMPLES_NV               0x8E20
#define GL_DEPTH_SAMPLES_NV               0x932D
#define GL_STENCIL_SAMPLES_NV             0x932E
#define GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV 0x932F
#define GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV 0x9330
#define GL_COVERAGE_MODULATION_NV         0x9332
#define GL_COVERAGE_MODULATION_TABLE_SIZE_NV 0x9333
extern void  glCoverageModulationTableNV (GLsizei n, const GLfloat *v);
extern void  glGetCoverageModulationTableNV (GLsizei bufSize, GLfloat *v);
extern void  glCoverageModulationNV (GLenum components);
#endif
#endif /* GL_NV_framebuffer_mixed_samples */

#ifndef GL_NV_framebuffer_multisample_coverage
#define GL_NV_framebuffer_multisample_coverage 1
#define GL_RENDERBUFFER_COVERAGE_SAMPLES_NV 0x8CAB
#define GL_RENDERBUFFER_COLOR_SAMPLES_NV  0x8E10
#define GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV 0x8E11
#define GL_MULTISAMPLE_COVERAGE_MODES_NV  0x8E12
extern void  glRenderbufferStorageMultisampleCoverageNV (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
#endif
#endif /* GL_NV_framebuffer_multisample_coverage */

#ifndef GL_NV_geometry_program4
#define GL_NV_geometry_program4 1
#define GL_GEOMETRY_PROGRAM_NV            0x8C26
#define GL_MAX_PROGRAM_OUTPUT_VERTICES_NV 0x8C27
#define GL_MAX_PROGRAM_TOTAL_OUTPUT_COMPONENTS_NV 0x8C28
extern void  glProgramVertexLimitNV (GLenum target, GLint limit);
extern void  glFramebufferTextureEXT (GLenum target, GLenum attachment, GLuint texture, GLint level);
extern void  glFramebufferTextureFaceEXT (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
#endif
#endif /* GL_NV_geometry_program4 */

#ifndef GL_NV_geometry_shader4
#define GL_NV_geometry_shader4 1
#endif /* GL_NV_geometry_shader4 */

#ifndef GL_NV_geometry_shader_passthrough
#define GL_NV_geometry_shader_passthrough 1
#endif /* GL_NV_geometry_shader_passthrough */

#ifndef GL_NV_gpu_multicast
#define GL_NV_gpu_multicast 1
#define GL_PER_GPU_STORAGE_BIT_NV         0x0800
#define GL_MULTICAST_GPUS_NV              0x92BA
#define GL_RENDER_GPU_MASK_NV             0x9558
#define GL_PER_GPU_STORAGE_NV             0x9548
#define GL_MULTICAST_PROGRAMMABLE_SAMPLE_LOCATION_NV 0x9549
extern void  glRenderGpuMaskNV (GLbitfield mask);
extern void  glMulticastBufferSubDataNV (GLbitfield gpuMask, GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
extern void  glMulticastCopyBufferSubDataNV (GLuint readGpu, GLbitfield writeGpuMask, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
extern void  glMulticastCopyImageSubDataNV (GLuint srcGpu, GLbitfield dstGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
extern void  glMulticastBlitFramebufferNV (GLuint srcGpu, GLuint dstGpu, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
extern void  glMulticastFramebufferSampleLocationsfvNV (GLuint gpu, GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
extern void  glMulticastBarrierNV (void);
extern void  glMulticastWaitSyncNV (GLuint signalGpu, GLbitfield waitGpuMask);
extern void  glMulticastGetQueryObjectivNV (GLuint gpu, GLuint id, GLenum pname, GLint *params);
extern void  glMulticastGetQueryObjectuivNV (GLuint gpu, GLuint id, GLenum pname, GLuint *params);
extern void  glMulticastGetQueryObjecti64vNV (GLuint gpu, GLuint id, GLenum pname, GLint64 *params);
extern void  glMulticastGetQueryObjectui64vNV (GLuint gpu, GLuint id, GLenum pname, GLuint64 *params);
#endif
#endif /* GL_NV_gpu_multicast */

#ifndef GL_NV_gpu_program4
#define GL_NV_gpu_program4 1
#define GL_MIN_PROGRAM_TEXEL_OFFSET_NV    0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET_NV    0x8905
#define GL_PROGRAM_ATTRIB_COMPONENTS_NV   0x8906
#define GL_PROGRAM_RESULT_COMPONENTS_NV   0x8907
#define GL_MAX_PROGRAM_ATTRIB_COMPONENTS_NV 0x8908
#define GL_MAX_PROGRAM_RESULT_COMPONENTS_NV 0x8909
#define GL_MAX_PROGRAM_GENERIC_ATTRIBS_NV 0x8DA5
#define GL_MAX_PROGRAM_GENERIC_RESULTS_NV 0x8DA6
extern void  glProgramLocalParameterI4iNV (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
extern void  glProgramLocalParameterI4ivNV (GLenum target, GLuint index, const GLint *params);
extern void  glProgramLocalParametersI4ivNV (GLenum target, GLuint index, GLsizei count, const GLint *params);
extern void  glProgramLocalParameterI4uiNV (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
extern void  glProgramLocalParameterI4uivNV (GLenum target, GLuint index, const GLuint *params);
extern void  glProgramLocalParametersI4uivNV (GLenum target, GLuint index, GLsizei count, const GLuint *params);
extern void  glProgramEnvParameterI4iNV (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
extern void  glProgramEnvParameterI4ivNV (GLenum target, GLuint index, const GLint *params);
extern void  glProgramEnvParametersI4ivNV (GLenum target, GLuint index, GLsizei count, const GLint *params);
extern void  glProgramEnvParameterI4uiNV (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
extern void  glProgramEnvParameterI4uivNV (GLenum target, GLuint index, const GLuint *params);
extern void  glProgramEnvParametersI4uivNV (GLenum target, GLuint index, GLsizei count, const GLuint *params);
extern void  glGetProgramLocalParameterIivNV (GLenum target, GLuint index, GLint *params);
extern void  glGetProgramLocalParameterIuivNV (GLenum target, GLuint index, GLuint *params);
extern void  glGetProgramEnvParameterIivNV (GLenum target, GLuint index, GLint *params);
extern void  glGetProgramEnvParameterIuivNV (GLenum target, GLuint index, GLuint *params);
#endif
#endif /* GL_NV_gpu_program4 */

#ifndef GL_NV_gpu_program5
#define GL_NV_gpu_program5 1
#define GL_MAX_GEOMETRY_PROGRAM_INVOCATIONS_NV 0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_NV 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_NV 0x8E5C
#define GL_FRAGMENT_PROGRAM_INTERPOLATION_OFFSET_BITS_NV 0x8E5D
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_NV 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_NV 0x8E5F
#define GL_MAX_PROGRAM_SUBROUTINE_PARAMETERS_NV 0x8F44
#define GL_MAX_PROGRAM_SUBROUTINE_NUM_NV  0x8F45
extern void  glProgramSubroutineParametersuivNV (GLenum target, GLsizei count, const GLuint *params);
extern void  glGetProgramSubroutineParameteruivNV (GLenum target, GLuint index, GLuint *param);
#endif
#endif /* GL_NV_gpu_program5 */

#ifndef GL_NV_gpu_program5_mem_extended
#define GL_NV_gpu_program5_mem_extended 1
#endif /* GL_NV_gpu_program5_mem_extended */

#ifndef GL_NV_gpu_shader5
#define GL_NV_gpu_shader5 1
#endif /* GL_NV_gpu_shader5 */

#ifndef GL_NV_half_float
#define GL_NV_half_float 1
typedef unsigned short GLhalfNV;
#define GL_HALF_FLOAT_NV                  0x140B
extern void  glVertex2hNV (GLhalfNV x, GLhalfNV y);
extern void  glVertex2hvNV (const GLhalfNV *v);
extern void  glVertex3hNV (GLhalfNV x, GLhalfNV y, GLhalfNV z);
extern void  glVertex3hvNV (const GLhalfNV *v);
extern void  glVertex4hNV (GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
extern void  glVertex4hvNV (const GLhalfNV *v);
extern void  glNormal3hNV (GLhalfNV nx, GLhalfNV ny, GLhalfNV nz);
extern void  glNormal3hvNV (const GLhalfNV *v);
extern void  glColor3hNV (GLhalfNV red, GLhalfNV green, GLhalfNV blue);
extern void  glColor3hvNV (const GLhalfNV *v);
extern void  glColor4hNV (GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha);
extern void  glColor4hvNV (const GLhalfNV *v);
extern void  glTexCoord1hNV (GLhalfNV s);
extern void  glTexCoord1hvNV (const GLhalfNV *v);
extern void  glTexCoord2hNV (GLhalfNV s, GLhalfNV t);
extern void  glTexCoord2hvNV (const GLhalfNV *v);
extern void  glTexCoord3hNV (GLhalfNV s, GLhalfNV t, GLhalfNV r);
extern void  glTexCoord3hvNV (const GLhalfNV *v);
extern void  glTexCoord4hNV (GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
extern void  glTexCoord4hvNV (const GLhalfNV *v);
extern void  glMultiTexCoord1hNV (GLenum target, GLhalfNV s);
extern void  glMultiTexCoord1hvNV (GLenum target, const GLhalfNV *v);
extern void  glMultiTexCoord2hNV (GLenum target, GLhalfNV s, GLhalfNV t);
extern void  glMultiTexCoord2hvNV (GLenum target, const GLhalfNV *v);
extern void  glMultiTexCoord3hNV (GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r);
extern void  glMultiTexCoord3hvNV (GLenum target, const GLhalfNV *v);
extern void  glMultiTexCoord4hNV (GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
extern void  glMultiTexCoord4hvNV (GLenum target, const GLhalfNV *v);
extern void  glFogCoordhNV (GLhalfNV fog);
extern void  glFogCoordhvNV (const GLhalfNV *fog);
extern void  glSecondaryColor3hNV (GLhalfNV red, GLhalfNV green, GLhalfNV blue);
extern void  glSecondaryColor3hvNV (const GLhalfNV *v);
extern void  glVertexWeighthNV (GLhalfNV weight);
extern void  glVertexWeighthvNV (const GLhalfNV *weight);
extern void  glVertexAttrib1hNV (GLuint index, GLhalfNV x);
extern void  glVertexAttrib1hvNV (GLuint index, const GLhalfNV *v);
extern void  glVertexAttrib2hNV (GLuint index, GLhalfNV x, GLhalfNV y);
extern void  glVertexAttrib2hvNV (GLuint index, const GLhalfNV *v);
extern void  glVertexAttrib3hNV (GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z);
extern void  glVertexAttrib3hvNV (GLuint index, const GLhalfNV *v);
extern void  glVertexAttrib4hNV (GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
extern void  glVertexAttrib4hvNV (GLuint index, const GLhalfNV *v);
extern void  glVertexAttribs1hvNV (GLuint index, GLsizei n, const GLhalfNV *v);
extern void  glVertexAttribs2hvNV (GLuint index, GLsizei n, const GLhalfNV *v);
extern void  glVertexAttribs3hvNV (GLuint index, GLsizei n, const GLhalfNV *v);
extern void  glVertexAttribs4hvNV (GLuint index, GLsizei n, const GLhalfNV *v);
#endif
#endif /* GL_NV_half_float */

#ifndef GL_NV_internalformat_sample_query
#define GL_NV_internalformat_sample_query 1
#define GL_MULTISAMPLES_NV                0x9371
#define GL_SUPERSAMPLE_SCALE_X_NV         0x9372
#define GL_SUPERSAMPLE_SCALE_Y_NV         0x9373
#define GL_CONFORMANT_NV                  0x9374
extern void  glGetInternalformatSampleivNV (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint *params);
#endif
#endif /* GL_NV_internalformat_sample_query */

#ifndef GL_NV_light_max_exponent
#define GL_NV_light_max_exponent 1
#define GL_MAX_SHININESS_NV               0x8504
#define GL_MAX_SPOT_EXPONENT_NV           0x8505
#endif /* GL_NV_light_max_exponent */

#ifndef GL_NV_memory_attachment
#define GL_NV_memory_attachment 1
#define GL_ATTACHED_MEMORY_OBJECT_NV      0x95A4
#define GL_ATTACHED_MEMORY_OFFSET_NV      0x95A5
#define GL_MEMORY_ATTACHABLE_ALIGNMENT_NV 0x95A6
#define GL_MEMORY_ATTACHABLE_SIZE_NV      0x95A7
#define GL_MEMORY_ATTACHABLE_NV           0x95A8
#define GL_DETACHED_MEMORY_INCARNATION_NV 0x95A9
#define GL_DETACHED_TEXTURES_NV           0x95AA
#define GL_DETACHED_BUFFERS_NV            0x95AB
#define GL_MAX_DETACHED_TEXTURES_NV       0x95AC
#define GL_MAX_DETACHED_BUFFERS_NV        0x95AD
extern void  glGetMemoryObjectDetachedResourcesuivNV (GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint *params);
extern void  glResetMemoryObjectParameterNV (GLuint memory, GLenum pname);
extern void  glTexAttachMemoryNV (GLenum target, GLuint memory, GLuint64 offset);
extern void  glBufferAttachMemoryNV (GLenum target, GLuint memory, GLuint64 offset);
extern void  glTextureAttachMemoryNV (GLuint texture, GLuint memory, GLuint64 offset);
extern void  glNamedBufferAttachMemoryNV (GLuint buffer, GLuint memory, GLuint64 offset);
#endif
#endif /* GL_NV_memory_attachment */

#ifndef GL_NV_memory_object_sparse
#define GL_NV_memory_object_sparse 1
extern void  glBufferPageCommitmentMemNV (GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
extern void  glTexPageCommitmentMemNV (GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
extern void  glNamedBufferPageCommitmentMemNV (GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
extern void  glTexturePageCommitmentMemNV (GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
#endif
#endif /* GL_NV_memory_object_sparse */

#ifndef GL_NV_mesh_shader
#define GL_NV_mesh_shader 1
#define GL_MESH_SHADER_NV                 0x9559
#define GL_TASK_SHADER_NV                 0x955A
#define GL_MAX_MESH_UNIFORM_BLOCKS_NV     0x8E60
#define GL_MAX_MESH_TEXTURE_IMAGE_UNITS_NV 0x8E61
#define GL_MAX_MESH_IMAGE_UNIFORMS_NV     0x8E62
#define GL_MAX_MESH_UNIFORM_COMPONENTS_NV 0x8E63
#define GL_MAX_MESH_ATOMIC_COUNTER_BUFFERS_NV 0x8E64
#define GL_MAX_MESH_ATOMIC_COUNTERS_NV    0x8E65
#define GL_MAX_MESH_SHADER_STORAGE_BLOCKS_NV 0x8E66
#define GL_MAX_COMBINED_MESH_UNIFORM_COMPONENTS_NV 0x8E67
#define GL_MAX_TASK_UNIFORM_BLOCKS_NV     0x8E68
#define GL_MAX_TASK_TEXTURE_IMAGE_UNITS_NV 0x8E69
#define GL_MAX_TASK_IMAGE_UNIFORMS_NV     0x8E6A
#define GL_MAX_TASK_UNIFORM_COMPONENTS_NV 0x8E6B
#define GL_MAX_TASK_ATOMIC_COUNTER_BUFFERS_NV 0x8E6C
#define GL_MAX_TASK_ATOMIC_COUNTERS_NV    0x8E6D
#define GL_MAX_TASK_SHADER_STORAGE_BLOCKS_NV 0x8E6E
#define GL_MAX_COMBINED_TASK_UNIFORM_COMPONENTS_NV 0x8E6F
#define GL_MAX_MESH_WORK_GROUP_INVOCATIONS_NV 0x95A2
#define GL_MAX_TASK_WORK_GROUP_INVOCATIONS_NV 0x95A3
#define GL_MAX_MESH_TOTAL_MEMORY_SIZE_NV  0x9536
#define GL_MAX_TASK_TOTAL_MEMORY_SIZE_NV  0x9537
#define GL_MAX_MESH_OUTPUT_VERTICES_NV    0x9538
#define GL_MAX_MESH_OUTPUT_PRIMITIVES_NV  0x9539
#define GL_MAX_TASK_OUTPUT_COUNT_NV       0x953A
#define GL_MAX_DRAW_MESH_TASKS_COUNT_NV   0x953D
#define GL_MAX_MESH_VIEWS_NV              0x9557
#define GL_MESH_OUTPUT_PER_VERTEX_GRANULARITY_NV 0x92DF
#define GL_MESH_OUTPUT_PER_PRIMITIVE_GRANULARITY_NV 0x9543
#define GL_MAX_MESH_WORK_GROUP_SIZE_NV    0x953B
#define GL_MAX_TASK_WORK_GROUP_SIZE_NV    0x953C
#define GL_MESH_WORK_GROUP_SIZE_NV        0x953E
#define GL_TASK_WORK_GROUP_SIZE_NV        0x953F
#define GL_MESH_VERTICES_OUT_NV           0x9579
#define GL_MESH_PRIMITIVES_OUT_NV         0x957A
#define GL_MESH_OUTPUT_TYPE_NV            0x957B
#define GL_UNIFORM_BLOCK_REFERENCED_BY_MESH_SHADER_NV 0x959C
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TASK_SHADER_NV 0x959D
#define GL_REFERENCED_BY_MESH_SHADER_NV   0x95A0
#define GL_REFERENCED_BY_TASK_SHADER_NV   0x95A1
#define GL_MESH_SHADER_BIT_NV             0x00000040
#define GL_TASK_SHADER_BIT_NV             0x00000080
#define GL_MESH_SUBROUTINE_NV             0x957C
#define GL_TASK_SUBROUTINE_NV             0x957D
#define GL_MESH_SUBROUTINE_UNIFORM_NV     0x957E
#define GL_TASK_SUBROUTINE_UNIFORM_NV     0x957F
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_MESH_SHADER_NV 0x959E
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TASK_SHADER_NV 0x959F
extern void  glDrawMeshTasksNV (GLuint first, GLuint count);
extern void  glDrawMeshTasksIndirectNV (GLintptr indirect);
extern void  glMultiDrawMeshTasksIndirectNV (GLintptr indirect, GLsizei drawcount, GLsizei stride);
extern void  glMultiDrawMeshTasksIndirectCountNV (GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
#endif
#endif /* GL_NV_mesh_shader */

#ifndef GL_NV_multisample_coverage
#define GL_NV_multisample_coverage 1
#endif /* GL_NV_multisample_coverage */

#ifndef GL_NV_multisample_filter_hint
#define GL_NV_multisample_filter_hint 1
#define GL_MULTISAMPLE_FILTER_HINT_NV     0x8534
#endif /* GL_NV_multisample_filter_hint */

#ifndef GL_NV_occlusion_query
#define GL_NV_occlusion_query 1
#define GL_PIXEL_COUNTER_BITS_NV          0x8864
#define GL_CURRENT_OCCLUSION_QUERY_ID_NV  0x8865
#define GL_PIXEL_COUNT_NV                 0x8866
#define GL_PIXEL_COUNT_AVAILABLE_NV       0x8867
extern void  glGenOcclusionQueriesNV (GLsizei n, GLuint *ids);
extern void  glDeleteOcclusionQueriesNV (GLsizei n, const GLuint *ids);
extern GLboolean  glIsOcclusionQueryNV (GLuint id);
extern void  glBeginOcclusionQueryNV (GLuint id);
extern void  glEndOcclusionQueryNV (void);
extern void  glGetOcclusionQueryivNV (GLuint id, GLenum pname, GLint *params);
extern void  glGetOcclusionQueryuivNV (GLuint id, GLenum pname, GLuint *params);
#endif
#endif /* GL_NV_occlusion_query */

#ifndef GL_NV_packed_depth_stencil
#define GL_NV_packed_depth_stencil 1
#define GL_DEPTH_STENCIL_NV               0x84F9
#define GL_UNSIGNED_INT_24_8_NV           0x84FA
#endif /* GL_NV_packed_depth_stencil */

#ifndef GL_NV_parameter_buffer_object
#define GL_NV_parameter_buffer_object 1
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_BINDINGS_NV 0x8DA0
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_SIZE_NV 0x8DA1
#define GL_VERTEX_PROGRAM_PARAMETER_BUFFER_NV 0x8DA2
#define GL_GEOMETRY_PROGRAM_PARAMETER_BUFFER_NV 0x8DA3
#define GL_FRAGMENT_PROGRAM_PARAMETER_BUFFER_NV 0x8DA4
extern void  glProgramBufferParametersfvNV (GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat *params);
extern void  glProgramBufferParametersIivNV (GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint *params);
extern void  glProgramBufferParametersIuivNV (GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint *params);
#endif
#endif /* GL_NV_parameter_buffer_object */

#ifndef GL_NV_parameter_buffer_object2
#define GL_NV_parameter_buffer_object2 1
#endif /* GL_NV_parameter_buffer_object2 */

#ifndef GL_NV_path_rendering
#define GL_NV_path_rendering 1
#define GL_PATH_FORMAT_SVG_NV             0x9070
#define GL_PATH_FORMAT_PS_NV              0x9071
#define GL_STANDARD_FONT_NAME_NV          0x9072
#define GL_SYSTEM_FONT_NAME_NV            0x9073
#define GL_FILE_NAME_NV                   0x9074
#define GL_PATH_STROKE_WIDTH_NV           0x9075
#define GL_PATH_END_CAPS_NV               0x9076
#define GL_PATH_INITIAL_END_CAP_NV        0x9077
#define GL_PATH_TERMINAL_END_CAP_NV       0x9078
#define GL_PATH_JOIN_STYLE_NV             0x9079
#define GL_PATH_MITER_LIMIT_NV            0x907A
#define GL_PATH_DASH_CAPS_NV              0x907B
#define GL_PATH_INITIAL_DASH_CAP_NV       0x907C
#define GL_PATH_TERMINAL_DASH_CAP_NV      0x907D
#define GL_PATH_DASH_OFFSET_NV            0x907E
#define GL_PATH_CLIENT_LENGTH_NV          0x907F
#define GL_PATH_FILL_MODE_NV              0x9080
#define GL_PATH_FILL_MASK_NV              0x9081
#define GL_PATH_FILL_COVER_MODE_NV        0x9082
#define GL_PATH_STROKE_COVER_MODE_NV      0x9083
#define GL_PATH_STROKE_MASK_NV            0x9084
#define GL_COUNT_UP_NV                    0x9088
#define GL_COUNT_DOWN_NV                  0x9089
#define GL_PATH_OBJECT_BOUNDING_BOX_NV    0x908A
#define GL_CONVEX_HULL_NV                 0x908B
#define GL_BOUNDING_BOX_NV                0x908D
#define GL_TRANSLATE_X_NV                 0x908E
#define GL_TRANSLATE_Y_NV                 0x908F
#define GL_TRANSLATE_2D_NV                0x9090
#define GL_TRANSLATE_3D_NV                0x9091
#define GL_AFFINE_2D_NV                   0x9092
#define GL_AFFINE_3D_NV                   0x9094
#define GL_TRANSPOSE_AFFINE_2D_NV         0x9096
#define GL_TRANSPOSE_AFFINE_3D_NV         0x9098
#define GL_UTF8_NV                        0x909A
#define GL_UTF16_NV                       0x909B
#define GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV 0x909C
#define GL_PATH_COMMAND_COUNT_NV          0x909D
#define GL_PATH_COORD_COUNT_NV            0x909E
#define GL_PATH_DASH_ARRAY_COUNT_NV       0x909F
#define GL_PATH_COMPUTED_LENGTH_NV        0x90A0
#define GL_PATH_FILL_BOUNDING_BOX_NV      0x90A1
#define GL_PATH_STROKE_BOUNDING_BOX_NV    0x90A2
#define GL_SQUARE_NV                      0x90A3
#define GL_ROUND_NV                       0x90A4
#define GL_TRIANGULAR_NV                  0x90A5
#define GL_BEVEL_NV                       0x90A6
#define GL_MITER_REVERT_NV                0x90A7
#define GL_MITER_TRUNCATE_NV              0x90A8
#define GL_SKIP_MISSING_GLYPH_NV          0x90A9
#define GL_USE_MISSING_GLYPH_NV           0x90AA
#define GL_PATH_ERROR_POSITION_NV         0x90AB
#define GL_ACCUM_ADJACENT_PAIRS_NV        0x90AD
#define GL_ADJACENT_PAIRS_NV              0x90AE
#define GL_FIRST_TO_REST_NV               0x90AF
#define GL_PATH_GEN_MODE_NV               0x90B0
#define GL_PATH_GEN_COEFF_NV              0x90B1
#define GL_PATH_GEN_COMPONENTS_NV         0x90B3
#define GL_PATH_STENCIL_FUNC_NV           0x90B7
#define GL_PATH_STENCIL_REF_NV            0x90B8
#define GL_PATH_STENCIL_VALUE_MASK_NV     0x90B9
#define GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV 0x90BD
#define GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV 0x90BE
#define GL_PATH_COVER_DEPTH_FUNC_NV       0x90BF
#define GL_PATH_DASH_OFFSET_RESET_NV      0x90B4
#define GL_MOVE_TO_RESETS_NV              0x90B5
#define GL_MOVE_TO_CONTINUES_NV           0x90B6
#define GL_CLOSE_PATH_NV                  0x00
#define GL_MOVE_TO_NV                     0x02
#define GL_RELATIVE_MOVE_TO_NV            0x03
#define GL_LINE_TO_NV                     0x04
#define GL_RELATIVE_LINE_TO_NV            0x05
#define GL_HORIZONTAL_LINE_TO_NV          0x06
#define GL_RELATIVE_HORIZONTAL_LINE_TO_NV 0x07
#define GL_VERTICAL_LINE_TO_NV            0x08
#define GL_RELATIVE_VERTICAL_LINE_TO_NV   0x09
#define GL_QUADRATIC_CURVE_TO_NV          0x0A
#define GL_RELATIVE_QUADRATIC_CURVE_TO_NV 0x0B
#define GL_CUBIC_CURVE_TO_NV              0x0C
#define GL_RELATIVE_CUBIC_CURVE_TO_NV     0x0D
#define GL_SMOOTH_QUADRATIC_CURVE_TO_NV   0x0E
#define GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV 0x0F
#define GL_SMOOTH_CUBIC_CURVE_TO_NV       0x10
#define GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV 0x11
#define GL_SMALL_CCW_ARC_TO_NV            0x12
#define GL_RELATIVE_SMALL_CCW_ARC_TO_NV   0x13
#define GL_SMALL_CW_ARC_TO_NV             0x14
#define GL_RELATIVE_SMALL_CW_ARC_TO_NV    0x15
#define GL_LARGE_CCW_ARC_TO_NV            0x16
#define GL_RELATIVE_LARGE_CCW_ARC_TO_NV   0x17
#define GL_LARGE_CW_ARC_TO_NV             0x18
#define GL_RELATIVE_LARGE_CW_ARC_TO_NV    0x19
#define GL_RESTART_PATH_NV                0xF0
#define GL_DUP_FIRST_CUBIC_CURVE_TO_NV    0xF2
#define GL_DUP_LAST_CUBIC_CURVE_TO_NV     0xF4
#define GL_RECT_NV                        0xF6
#define GL_CIRCULAR_CCW_ARC_TO_NV         0xF8
#define GL_CIRCULAR_CW_ARC_TO_NV          0xFA
#define GL_CIRCULAR_TANGENT_ARC_TO_NV     0xFC
#define GL_ARC_TO_NV                      0xFE
#define GL_RELATIVE_ARC_TO_NV             0xFF
#define GL_BOLD_BIT_NV                    0x01
#define GL_ITALIC_BIT_NV                  0x02
#define GL_GLYPH_WIDTH_BIT_NV             0x01
#define GL_GLYPH_HEIGHT_BIT_NV            0x02
#define GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV 0x04
#define GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV 0x08
#define GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV 0x10
#define GL_GLYPH_VERTICAL_BEARING_X_BIT_NV 0x20
#define GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV 0x40
#define GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV 0x80
#define GL_GLYPH_HAS_KERNING_BIT_NV       0x100
#define GL_FONT_X_MIN_BOUNDS_BIT_NV       0x00010000
#define GL_FONT_Y_MIN_BOUNDS_BIT_NV       0x00020000
#define GL_FONT_X_MAX_BOUNDS_BIT_NV       0x00040000
#define GL_FONT_Y_MAX_BOUNDS_BIT_NV       0x00080000
#define GL_FONT_UNITS_PER_EM_BIT_NV       0x00100000
#define GL_FONT_ASCENDER_BIT_NV           0x00200000
#define GL_FONT_DESCENDER_BIT_NV          0x00400000
#define GL_FONT_HEIGHT_BIT_NV             0x00800000
#define GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV  0x01000000
#define GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV 0x02000000
#define GL_FONT_UNDERLINE_POSITION_BIT_NV 0x04000000
#define GL_FONT_UNDERLINE_THICKNESS_BIT_NV 0x08000000
#define GL_FONT_HAS_KERNING_BIT_NV        0x10000000
#define GL_ROUNDED_RECT_NV                0xE8
#define GL_RELATIVE_ROUNDED_RECT_NV       0xE9
#define GL_ROUNDED_RECT2_NV               0xEA
#define GL_RELATIVE_ROUNDED_RECT2_NV      0xEB
#define GL_ROUNDED_RECT4_NV               0xEC
#define GL_RELATIVE_ROUNDED_RECT4_NV      0xED
#define GL_ROUNDED_RECT8_NV               0xEE
#define GL_RELATIVE_ROUNDED_RECT8_NV      0xEF
#define GL_RELATIVE_RECT_NV               0xF7
#define GL_FONT_GLYPHS_AVAILABLE_NV       0x9368
#define GL_FONT_TARGET_UNAVAILABLE_NV     0x9369
#define GL_FONT_UNAVAILABLE_NV            0x936A
#define GL_FONT_UNINTELLIGIBLE_NV         0x936B
#define GL_CONIC_CURVE_TO_NV              0x1A
#define GL_RELATIVE_CONIC_CURVE_TO_NV     0x1B
#define GL_FONT_NUM_GLYPH_INDICES_BIT_NV  0x20000000
#define GL_STANDARD_FONT_FORMAT_NV        0x936C
#define GL_2_BYTES_NV                     0x1407
#define GL_3_BYTES_NV                     0x1408
#define GL_4_BYTES_NV                     0x1409
#define GL_EYE_LINEAR_NV                  0x2400
#define GL_OBJECT_LINEAR_NV               0x2401
#define GL_CONSTANT_NV                    0x8576
#define GL_PATH_FOG_GEN_MODE_NV           0x90AC
#define GL_PRIMARY_COLOR_NV               0x852C
#define GL_SECONDARY_COLOR_NV             0x852D
#define GL_PATH_GEN_COLOR_FORMAT_NV       0x90B2
#define GL_PATH_PROJECTION_NV             0x1701
#define GL_PATH_MODELVIEW_NV              0x1700
#define GL_PATH_MODELVIEW_STACK_DEPTH_NV  0x0BA3
#define GL_PATH_MODELVIEW_MATRIX_NV       0x0BA6
#define GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV 0x0D36
#define GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV 0x84E3
#define GL_PATH_PROJECTION_STACK_DEPTH_NV 0x0BA4
#define GL_PATH_PROJECTION_MATRIX_NV      0x0BA7
#define GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV 0x0D38
#define GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV 0x84E4
#define GL_FRAGMENT_INPUT_NV              0x936D
extern GLuint  glGenPathsNV (GLsizei range);
extern void  glDeletePathsNV (GLuint path, GLsizei range);
extern GLboolean  glIsPathNV (GLuint path);
extern void  glPathCommandsNV (GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
extern void  glPathCoordsNV (GLuint path, GLsizei numCoords, GLenum coordType, const void *coords);
extern void  glPathSubCommandsNV (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
extern void  glPathSubCoordsNV (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords);
extern void  glPathStringNV (GLuint path, GLenum format, GLsizei length, const void *pathString);
extern void  glPathGlyphsNV (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
extern void  glPathGlyphRangeNV (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
extern void  glWeightPathsNV (GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights);
extern void  glCopyPathNV (GLuint resultPath, GLuint srcPath);
extern void  glInterpolatePathsNV (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
extern void  glTransformPathNV (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues);
extern void  glPathParameterivNV (GLuint path, GLenum pname, const GLint *value);
extern void  glPathParameteriNV (GLuint path, GLenum pname, GLint value);
extern void  glPathParameterfvNV (GLuint path, GLenum pname, const GLfloat *value);
extern void  glPathParameterfNV (GLuint path, GLenum pname, GLfloat value);
extern void  glPathDashArrayNV (GLuint path, GLsizei dashCount, const GLfloat *dashArray);
extern void  glPathStencilFuncNV (GLenum func, GLint ref, GLuint mask);
extern void  glPathStencilDepthOffsetNV (GLfloat factor, GLfloat units);
extern void  glStencilFillPathNV (GLuint path, GLenum fillMode, GLuint mask);
extern void  glStencilStrokePathNV (GLuint path, GLint reference, GLuint mask);
extern void  glStencilFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues);
extern void  glStencilStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues);
extern void  glPathCoverDepthFuncNV (GLenum func);
extern void  glCoverFillPathNV (GLuint path, GLenum coverMode);
extern void  glCoverStrokePathNV (GLuint path, GLenum coverMode);
extern void  glCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
extern void  glCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
extern void  glGetPathParameterivNV (GLuint path, GLenum pname, GLint *value);
extern void  glGetPathParameterfvNV (GLuint path, GLenum pname, GLfloat *value);
extern void  glGetPathCommandsNV (GLuint path, GLubyte *commands);
extern void  glGetPathCoordsNV (GLuint path, GLfloat *coords);
extern void  glGetPathDashArrayNV (GLuint path, GLfloat *dashArray);
extern void  glGetPathMetricsNV (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics);
extern void  glGetPathMetricRangeNV (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics);
extern void  glGetPathSpacingNV (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing);
extern GLboolean  glIsPointInFillPathNV (GLuint path, GLuint mask, GLfloat x, GLfloat y);
extern GLboolean  glIsPointInStrokePathNV (GLuint path, GLfloat x, GLfloat y);
extern GLfloat  glGetPathLengthNV (GLuint path, GLsizei startSegment, GLsizei numSegments);
extern GLboolean  glPointAlongPathNV (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY);
extern void  glMatrixLoad3x2fNV (GLenum matrixMode, const GLfloat *m);
extern void  glMatrixLoad3x3fNV (GLenum matrixMode, const GLfloat *m);
extern void  glMatrixLoadTranspose3x3fNV (GLenum matrixMode, const GLfloat *m);
extern void  glMatrixMult3x2fNV (GLenum matrixMode, const GLfloat *m);
extern void  glMatrixMult3x3fNV (GLenum matrixMode, const GLfloat *m);
extern void  glMatrixMultTranspose3x3fNV (GLenum matrixMode, const GLfloat *m);
extern void  glStencilThenCoverFillPathNV (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
extern void  glStencilThenCoverStrokePathNV (GLuint path, GLint reference, GLuint mask, GLenum coverMode);
extern void  glStencilThenCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
extern void  glStencilThenCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
extern GLenum  glPathGlyphIndexRangeNV (GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint *baseAndCount);
extern GLenum  glPathGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
extern GLenum  glPathMemoryGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
extern void  glProgramPathFragmentInputGenNV (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat *coeffs);
extern void  glGetProgramResourcefvNV (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei count, GLsizei *length, GLfloat *params);
extern void  glPathColorGenNV (GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat *coeffs);
extern void  glPathTexGenNV (GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat *coeffs);
extern void  glPathFogGenNV (GLenum genMode);
extern void  glGetPathColorGenivNV (GLenum color, GLenum pname, GLint *value);
extern void  glGetPathColorGenfvNV (GLenum color, GLenum pname, GLfloat *value);
extern void  glGetPathTexGenivNV (GLenum texCoordSet, GLenum pname, GLint *value);
extern void  glGetPathTexGenfvNV (GLenum texCoordSet, GLenum pname, GLfloat *value);
#endif
#endif /* GL_NV_path_rendering */

#ifndef GL_NV_path_rendering_shared_edge
#define GL_NV_path_rendering_shared_edge 1
#define GL_SHARED_EDGE_NV                 0xC0
#endif /* GL_NV_path_rendering_shared_edge */

#ifndef GL_NV_pixel_data_range
#define GL_NV_pixel_data_range 1
#define GL_WRITE_PIXEL_DATA_RANGE_NV      0x8878
#define GL_READ_PIXEL_DATA_RANGE_NV       0x8879
#define GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV 0x887A
#define GL_READ_PIXEL_DATA_RANGE_LENGTH_NV 0x887B
#define GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV 0x887C
#define GL_READ_PIXEL_DATA_RANGE_POINTER_NV 0x887D
extern void  glPixelDataRangeNV (GLenum target, GLsizei length, const void *pointer);
extern void  glFlushPixelDataRangeNV (GLenum target);
#endif
#endif /* GL_NV_pixel_data_range */

#ifndef GL_NV_point_sprite
#define GL_NV_point_sprite 1
#define GL_POINT_SPRITE_NV                0x8861
#define GL_COORD_REPLACE_NV               0x8862
#define GL_POINT_SPRITE_R_MODE_NV         0x8863
extern void  glPointParameteriNV (GLenum pname, GLint param);
extern void  glPointParameterivNV (GLenum pname, const GLint *params);
#endif
#endif /* GL_NV_point_sprite */

#ifndef GL_NV_present_video
#define GL_NV_present_video 1
#define GL_FRAME_NV                       0x8E26
#define GL_FIELDS_NV                      0x8E27
#define GL_CURRENT_TIME_NV                0x8E28
#define GL_NUM_FILL_STREAMS_NV            0x8E29
#define GL_PRESENT_TIME_NV                0x8E2A
#define GL_PRESENT_DURATION_NV            0x8E2B
extern void  glPresentFrameKeyedNV (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1);
extern void  glPresentFrameDualFillNV (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3);
extern void  glGetVideoivNV (GLuint video_slot, GLenum pname, GLint *params);
extern void  glGetVideouivNV (GLuint video_slot, GLenum pname, GLuint *params);
extern void  glGetVideoi64vNV (GLuint video_slot, GLenum pname, GLint64EXT *params);
extern void  glGetVideoui64vNV (GLuint video_slot, GLenum pname, GLuint64EXT *params);
#endif
#endif /* GL_NV_present_video */

#ifndef GL_NV_primitive_restart
#define GL_NV_primitive_restart 1
#define GL_PRIMITIVE_RESTART_NV           0x8558
#define GL_PRIMITIVE_RESTART_INDEX_NV     0x8559
extern void  glPrimitiveRestartNV (void);
extern void  glPrimitiveRestartIndexNV (GLuint index);
#endif
#endif /* GL_NV_primitive_restart */

#ifndef GL_NV_primitive_shading_rate
#define GL_NV_primitive_shading_rate 1
#define GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV 0x95B1
#define GL_SHADING_RATE_IMAGE_PALETTE_COUNT_NV 0x95B2
#endif /* GL_NV_primitive_shading_rate */

#ifndef GL_NV_query_resource
#define GL_NV_query_resource 1
#define GL_QUERY_RESOURCE_TYPE_VIDMEM_ALLOC_NV 0x9540
#define GL_QUERY_RESOURCE_MEMTYPE_VIDMEM_NV 0x9542
#define GL_QUERY_RESOURCE_SYS_RESERVED_NV 0x9544
#define GL_QUERY_RESOURCE_TEXTURE_NV      0x9545
#define GL_QUERY_RESOURCE_RENDERBUFFER_NV 0x9546
#define GL_QUERY_RESOURCE_BUFFEROBJECT_NV 0x9547
extern GLint  glQueryResourceNV (GLenum queryType, GLint tagId, GLuint count, GLint *buffer);
#endif
#endif /* GL_NV_query_resource */

#ifndef GL_NV_query_resource_tag
#define GL_NV_query_resource_tag 1
extern void  glGenQueryResourceTagNV (GLsizei n, GLint *tagIds);
extern void  glDeleteQueryResourceTagNV (GLsizei n, const GLint *tagIds);
extern void  glQueryResourceTagNV (GLint tagId, const GLchar *tagString);
#endif
#endif /* GL_NV_query_resource_tag */

#ifndef GL_NV_register_combiners
#define GL_NV_register_combiners 1
#define GL_REGISTER_COMBINERS_NV          0x8522
#define GL_VARIABLE_A_NV                  0x8523
#define GL_VARIABLE_B_NV                  0x8524
#define GL_VARIABLE_C_NV                  0x8525
#define GL_VARIABLE_D_NV                  0x8526
#define GL_VARIABLE_E_NV                  0x8527
#define GL_VARIABLE_F_NV                  0x8528
#define GL_VARIABLE_G_NV                  0x8529
#define GL_CONSTANT_COLOR0_NV             0x852A
#define GL_CONSTANT_COLOR1_NV             0x852B
#define GL_SPARE0_NV                      0x852E
#define GL_SPARE1_NV                      0x852F
#define GL_DISCARD_NV                     0x8530
#define GL_E_TIMES_F_NV                   0x8531
#define GL_SPARE0_PLUS_SECONDARY_COLOR_NV 0x8532
#define GL_UNSIGNED_IDENTITY_NV           0x8536
#define GL_UNSIGNED_INVERT_NV             0x8537
#define GL_EXPAND_NORMAL_NV               0x8538
#define GL_EXPAND_NEGATE_NV               0x8539
#define GL_HALF_BIAS_NORMAL_NV            0x853A
#define GL_HALF_BIAS_NEGATE_NV            0x853B
#define GL_SIGNED_IDENTITY_NV             0x853C
#define GL_SIGNED_NEGATE_NV               0x853D
#define GL_SCALE_BY_TWO_NV                0x853E
#define GL_SCALE_BY_FOUR_NV               0x853F
#define GL_SCALE_BY_ONE_HALF_NV           0x8540
#define GL_BIAS_BY_NEGATIVE_ONE_HALF_NV   0x8541
#define GL_COMBINER_INPUT_NV              0x8542
#define GL_COMBINER_MAPPING_NV            0x8543
#define GL_COMBINER_COMPONENT_USAGE_NV    0x8544
#define GL_COMBINER_AB_DOT_PRODUCT_NV     0x8545
#define GL_COMBINER_CD_DOT_PRODUCT_NV     0x8546
#define GL_COMBINER_MUX_SUM_NV            0x8547
#define GL_COMBINER_SCALE_NV              0x8548
#define GL_COMBINER_BIAS_NV               0x8549
#define GL_COMBINER_AB_OUTPUT_NV          0x854A
#define GL_COMBINER_CD_OUTPUT_NV          0x854B
#define GL_COMBINER_SUM_OUTPUT_NV         0x854C
#define GL_MAX_GENERAL_COMBINERS_NV       0x854D
#define GL_NUM_GENERAL_COMBINERS_NV       0x854E
#define GL_COLOR_SUM_CLAMP_NV             0x854F
#define GL_COMBINER0_NV                   0x8550
#define GL_COMBINER1_NV                   0x8551
#define GL_COMBINER2_NV                   0x8552
#define GL_COMBINER3_NV                   0x8553
#define GL_COMBINER4_NV                   0x8554
#define GL_COMBINER5_NV                   0x8555
#define GL_COMBINER6_NV                   0x8556
#define GL_COMBINER7_NV                   0x8557
extern void  glCombinerParameterfvNV (GLenum pname, const GLfloat *params);
extern void  glCombinerParameterfNV (GLenum pname, GLfloat param);
extern void  glCombinerParameterivNV (GLenum pname, const GLint *params);
extern void  glCombinerParameteriNV (GLenum pname, GLint param);
extern void  glCombinerInputNV (GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
extern void  glCombinerOutputNV (GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
extern void  glFinalCombinerInputNV (GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
extern void  glGetCombinerInputParameterfvNV (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params);
extern void  glGetCombinerInputParameterivNV (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params);
extern void  glGetCombinerOutputParameterfvNV (GLenum stage, GLenum portion, GLenum pname, GLfloat *params);
extern void  glGetCombinerOutputParameterivNV (GLenum stage, GLenum portion, GLenum pname, GLint *params);
extern void  glGetFinalCombinerInputParameterfvNV (GLenum variable, GLenum pname, GLfloat *params);
extern void  glGetFinalCombinerInputParameterivNV (GLenum variable, GLenum pname, GLint *params);
#endif
#endif /* GL_NV_register_combiners */

#ifndef GL_NV_register_combiners2
#define GL_NV_register_combiners2 1
#define GL_PER_STAGE_CONSTANTS_NV         0x8535
extern void  glCombinerStageParameterfvNV (GLenum stage, GLenum pname, const GLfloat *params);
extern void  glGetCombinerStageParameterfvNV (GLenum stage, GLenum pname, GLfloat *params);
#endif
#endif /* GL_NV_register_combiners2 */

#ifndef GL_NV_representative_fragment_test
#define GL_NV_representative_fragment_test 1
#define GL_REPRESENTATIVE_FRAGMENT_TEST_NV 0x937F
#endif /* GL_NV_representative_fragment_test */

#ifndef GL_NV_robustness_video_memory_purge
#define GL_NV_robustness_video_memory_purge 1
#define GL_PURGED_CONTEXT_RESET_NV        0x92BB
#endif /* GL_NV_robustness_video_memory_purge */

#ifndef GL_NV_sample_locations
#define GL_NV_sample_locations 1
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV 0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV 0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV 0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV 0x9340
#define GL_SAMPLE_LOCATION_NV             0x8E50
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_NV 0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV 0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV 0x9343
extern void  glFramebufferSampleLocationsfvNV (GLenum target, GLuint start, GLsizei count, const GLfloat *v);
extern void  glNamedFramebufferSampleLocationsfvNV (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
extern void  glResolveDepthValuesNV (void);
#endif
#endif /* GL_NV_sample_locations */

#ifndef GL_NV_sample_mask_override_coverage
#define GL_NV_sample_mask_override_coverage 1
#endif /* GL_NV_sample_mask_override_coverage */

#ifndef GL_NV_scissor_exclusive
#define GL_NV_scissor_exclusive 1
#define GL_SCISSOR_TEST_EXCLUSIVE_NV      0x9555
#define GL_SCISSOR_BOX_EXCLUSIVE_NV       0x9556
extern void  glScissorExclusiveNV (GLint x, GLint y, GLsizei width, GLsizei height);
extern void  glScissorExclusiveArrayvNV (GLuint first, GLsizei count, const GLint *v);
#endif
#endif /* GL_NV_scissor_exclusive */

#ifndef GL_NV_shader_atomic_counters
#define GL_NV_shader_atomic_counters 1
#endif /* GL_NV_shader_atomic_counters */

#ifndef GL_NV_shader_atomic_float
#define GL_NV_shader_atomic_float 1
#endif /* GL_NV_shader_atomic_float */

#ifndef GL_NV_shader_atomic_float64
#define GL_NV_shader_atomic_float64 1
#endif /* GL_NV_shader_atomic_float64 */

#ifndef GL_NV_shader_atomic_fp16_vector
#define GL_NV_shader_atomic_fp16_vector 1
#endif /* GL_NV_shader_atomic_fp16_vector */

#ifndef GL_NV_shader_atomic_int64
#define GL_NV_shader_atomic_int64 1
#endif /* GL_NV_shader_atomic_int64 */

#ifndef GL_NV_shader_buffer_load
#define GL_NV_shader_buffer_load 1
#define GL_BUFFER_GPU_ADDRESS_NV          0x8F1D
#define GL_GPU_ADDRESS_NV                 0x8F34
#define GL_MAX_SHADER_BUFFER_ADDRESS_NV   0x8F35
extern void  glMakeBufferResidentNV (GLenum target, GLenum access);
extern void  glMakeBufferNonResidentNV (GLenum target);
extern GLboolean  glIsBufferResidentNV (GLenum target);
extern void  glMakeNamedBufferResidentNV (GLuint buffer, GLenum access);
extern void  glMakeNamedBufferNonResidentNV (GLuint buffer);
extern GLboolean  glIsNamedBufferResidentNV (GLuint buffer);
extern void  glGetBufferParameterui64vNV (GLenum target, GLenum pname, GLuint64EXT *params);
extern void  glGetNamedBufferParameterui64vNV (GLuint buffer, GLenum pname, GLuint64EXT *params);
extern void  glGetIntegerui64vNV (GLenum value, GLuint64EXT *result);
extern void  glUniformui64NV (GLint location, GLuint64EXT value);
extern void  glUniformui64vNV (GLint location, GLsizei count, const GLuint64EXT *value);
extern void  glProgramUniformui64NV (GLuint program, GLint location, GLuint64EXT value);
extern void  glProgramUniformui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
#endif
#endif /* GL_NV_shader_buffer_load */

#ifndef GL_NV_shader_buffer_store
#define GL_NV_shader_buffer_store 1
#define GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV 0x00000010
#endif /* GL_NV_shader_buffer_store */

#ifndef GL_NV_shader_storage_buffer_object
#define GL_NV_shader_storage_buffer_object 1
#endif /* GL_NV_shader_storage_buffer_object */

#ifndef GL_NV_shader_subgroup_partitioned
#define GL_NV_shader_subgroup_partitioned 1
#define GL_SUBGROUP_FEATURE_PARTITIONED_BIT_NV 0x00000100
#endif /* GL_NV_shader_subgroup_partitioned */

#ifndef GL_NV_shader_texture_footprint
#define GL_NV_shader_texture_footprint 1
#endif /* GL_NV_shader_texture_footprint */

#ifndef GL_NV_shader_thread_group
#define GL_NV_shader_thread_group 1
#define GL_WARP_SIZE_NV                   0x9339
#define GL_WARPS_PER_SM_NV                0x933A
#define GL_SM_COUNT_NV                    0x933B
#endif /* GL_NV_shader_thread_group */

#ifndef GL_NV_shader_thread_shuffle
#define GL_NV_shader_thread_shuffle 1
#endif /* GL_NV_shader_thread_shuffle */

#ifndef GL_NV_shading_rate_image
#define GL_NV_shading_rate_image 1
#define GL_SHADING_RATE_IMAGE_NV          0x9563
#define GL_SHADING_RATE_NO_INVOCATIONS_NV 0x9564
#define GL_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV 0x9565
#define GL_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV 0x9566
#define GL_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV 0x9567
#define GL_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV 0x9568
#define GL_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV 0x9569
#define GL_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV 0x956A
#define GL_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV 0x956B
#define GL_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV 0x956C
#define GL_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV 0x956D
#define GL_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV 0x956E
#define GL_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV 0x956F
#define GL_SHADING_RATE_IMAGE_BINDING_NV  0x955B
#define GL_SHADING_RATE_IMAGE_TEXEL_WIDTH_NV 0x955C
#define GL_SHADING_RATE_IMAGE_TEXEL_HEIGHT_NV 0x955D
#define GL_SHADING_RATE_IMAGE_PALETTE_SIZE_NV 0x955E
#define GL_MAX_COARSE_FRAGMENT_SAMPLES_NV 0x955F
#define GL_SHADING_RATE_SAMPLE_ORDER_DEFAULT_NV 0x95AE
#define GL_SHADING_RATE_SAMPLE_ORDER_PIXEL_MAJOR_NV 0x95AF
#define GL_SHADING_RATE_SAMPLE_ORDER_SAMPLE_MAJOR_NV 0x95B0
extern void  glBindShadingRateImageNV (GLuint texture);
extern void  glGetShadingRateImagePaletteNV (GLuint viewport, GLuint entry, GLenum *rate);
extern void  glGetShadingRateSampleLocationivNV (GLenum rate, GLuint samples, GLuint index, GLint *location);
extern void  glShadingRateImageBarrierNV (GLboolean synchronize);
extern void  glShadingRateImagePaletteNV (GLuint viewport, GLuint first, GLsizei count, const GLenum *rates);
extern void  glShadingRateSampleOrderNV (GLenum order);
extern void  glShadingRateSampleOrderCustomNV (GLenum rate, GLuint samples, const GLint *locations);
#endif
#endif /* GL_NV_shading_rate_image */

#ifndef GL_NV_stereo_view_rendering
#define GL_NV_stereo_view_rendering 1
#endif /* GL_NV_stereo_view_rendering */

#ifndef GL_NV_tessellation_program5
#define GL_NV_tessellation_program5 1
#define GL_MAX_PROGRAM_PATCH_ATTRIBS_NV   0x86D8
#define GL_TESS_CONTROL_PROGRAM_NV        0x891E
#define GL_TESS_EVALUATION_PROGRAM_NV     0x891F
#define GL_TESS_CONTROL_PROGRAM_PARAMETER_BUFFER_NV 0x8C74
#define GL_TESS_EVALUATION_PROGRAM_PARAMETER_BUFFER_NV 0x8C75
#endif /* GL_NV_tessellation_program5 */

#ifndef GL_NV_texgen_emboss
#define GL_NV_texgen_emboss 1
#define GL_EMBOSS_LIGHT_NV                0x855D
#define GL_EMBOSS_CONSTANT_NV             0x855E
#define GL_EMBOSS_MAP_NV                  0x855F
#endif /* GL_NV_texgen_emboss */

#ifndef GL_NV_texgen_reflection
#define GL_NV_texgen_reflection 1
#define GL_NORMAL_MAP_NV                  0x8511
#define GL_REFLECTION_MAP_NV              0x8512
#endif /* GL_NV_texgen_reflection */

#ifndef GL_NV_texture_barrier
#define GL_NV_texture_barrier 1
extern void  glTextureBarrierNV (void);
#endif
#endif /* GL_NV_texture_barrier */

#ifndef GL_NV_texture_compression_vtc
#define GL_NV_texture_compression_vtc 1
#endif /* GL_NV_texture_compression_vtc */

#ifndef GL_NV_texture_env_combine4
#define GL_NV_texture_env_combine4 1
#define GL_COMBINE4_NV                    0x8503
#define GL_SOURCE3_RGB_NV                 0x8583
#define GL_SOURCE3_ALPHA_NV               0x858B
#define GL_OPERAND3_RGB_NV                0x8593
#define GL_OPERAND3_ALPHA_NV              0x859B
#endif /* GL_NV_texture_env_combine4 */

#ifndef GL_NV_texture_expand_normal
#define GL_NV_texture_expand_normal 1
#define GL_TEXTURE_UNSIGNED_REMAP_MODE_NV 0x888F
#endif /* GL_NV_texture_expand_normal */

#ifndef GL_NV_texture_multisample
#define GL_NV_texture_multisample 1
#define GL_TEXTURE_COVERAGE_SAMPLES_NV    0x9045
#define GL_TEXTURE_COLOR_SAMPLES_NV       0x9046
extern void  glTexImage2DMultisampleCoverageNV (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
extern void  glTexImage3DMultisampleCoverageNV (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
extern void  glTextureImage2DMultisampleNV (GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
extern void  glTextureImage3DMultisampleNV (GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
extern void  glTextureImage2DMultisampleCoverageNV (GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
extern void  glTextureImage3DMultisampleCoverageNV (GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
#endif
#endif /* GL_NV_texture_multisample */

#ifndef GL_NV_texture_rectangle
#define GL_NV_texture_rectangle 1
#define GL_TEXTURE_RECTANGLE_NV           0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_NV   0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_NV     0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_NV  0x84F8
#endif /* GL_NV_texture_rectangle */

#ifndef GL_NV_texture_rectangle_compressed
#define GL_NV_texture_rectangle_compressed 1
#endif /* GL_NV_texture_rectangle_compressed */

#ifndef GL_NV_texture_shader
#define GL_NV_texture_shader 1
#define GL_OFFSET_TEXTURE_RECTANGLE_NV    0x864C
#define GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV 0x864D
#define GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV 0x864E
#define GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV 0x86D9
#define GL_UNSIGNED_INT_S8_S8_8_8_NV      0x86DA
#define GL_UNSIGNED_INT_8_8_S8_S8_REV_NV  0x86DB
#define GL_DSDT_MAG_INTENSITY_NV          0x86DC
#define GL_SHADER_CONSISTENT_NV           0x86DD
#define GL_TEXTURE_SHADER_NV              0x86DE
#define GL_SHADER_OPERATION_NV            0x86DF
#define GL_CULL_MODES_NV                  0x86E0
#define GL_OFFSET_TEXTURE_MATRIX_NV       0x86E1
#define GL_OFFSET_TEXTURE_SCALE_NV        0x86E2
#define GL_OFFSET_TEXTURE_BIAS_NV         0x86E3
#define GL_OFFSET_TEXTURE_2D_MATRIX_NV    0x86E1
#define GL_OFFSET_TEXTURE_2D_SCALE_NV     0x86E2
#define GL_OFFSET_TEXTURE_2D_BIAS_NV      0x86E3
#define GL_PREVIOUS_TEXTURE_INPUT_NV      0x86E4
#define GL_CONST_EYE_NV                   0x86E5
#define GL_PASS_THROUGH_NV                0x86E6
#define GL_CULL_FRAGMENT_NV               0x86E7
#define GL_OFFSET_TEXTURE_2D_NV           0x86E8
#define GL_DEPENDENT_AR_TEXTURE_2D_NV     0x86E9
#define GL_DEPENDENT_GB_TEXTURE_2D_NV     0x86EA
#define GL_DOT_PRODUCT_NV                 0x86EC
#define GL_DOT_PRODUCT_DEPTH_REPLACE_NV   0x86ED
#define GL_DOT_PRODUCT_TEXTURE_2D_NV      0x86EE
#define GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV 0x86F0
#define GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV 0x86F1
#define GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV 0x86F2
#define GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV 0x86F3
#define GL_HILO_NV                        0x86F4
#define GL_DSDT_NV                        0x86F5
#define GL_DSDT_MAG_NV                    0x86F6
#define GL_DSDT_MAG_VIB_NV                0x86F7
#define GL_HILO16_NV                      0x86F8
#define GL_SIGNED_HILO_NV                 0x86F9
#define GL_SIGNED_HILO16_NV               0x86FA
#define GL_SIGNED_RGBA_NV                 0x86FB
#define GL_SIGNED_RGBA8_NV                0x86FC
#define GL_SIGNED_RGB_NV                  0x86FE
#define GL_SIGNED_RGB8_NV                 0x86FF
#define GL_SIGNED_LUMINANCE_NV            0x8701
#define GL_SIGNED_LUMINANCE8_NV           0x8702
#define GL_SIGNED_LUMINANCE_ALPHA_NV      0x8703
#define GL_SIGNED_LUMINANCE8_ALPHA8_NV    0x8704
#define GL_SIGNED_ALPHA_NV                0x8705
#define GL_SIGNED_ALPHA8_NV               0x8706
#define GL_SIGNED_INTENSITY_NV            0x8707
#define GL_SIGNED_INTENSITY8_NV           0x8708
#define GL_DSDT8_NV                       0x8709
#define GL_DSDT8_MAG8_NV                  0x870A
#define GL_DSDT8_MAG8_INTENSITY8_NV       0x870B
#define GL_SIGNED_RGB_UNSIGNED_ALPHA_NV   0x870C
#define GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV 0x870D
#define GL_HI_SCALE_NV                    0x870E
#define GL_LO_SCALE_NV                    0x870F
#define GL_DS_SCALE_NV                    0x8710
#define GL_DT_SCALE_NV                    0x8711
#define GL_MAGNITUDE_SCALE_NV             0x8712
#define GL_VIBRANCE_SCALE_NV              0x8713
#define GL_HI_BIAS_NV                     0x8714
#define GL_LO_BIAS_NV                     0x8715
#define GL_DS_BIAS_NV                     0x8716
#define GL_DT_BIAS_NV                     0x8717
#define GL_MAGNITUDE_BIAS_NV              0x8718
#define GL_VIBRANCE_BIAS_NV               0x8719
#define GL_TEXTURE_BORDER_VALUES_NV       0x871A
#define GL_TEXTURE_HI_SIZE_NV             0x871B
#define GL_TEXTURE_LO_SIZE_NV             0x871C
#define GL_TEXTURE_DS_SIZE_NV             0x871D
#define GL_TEXTURE_DT_SIZE_NV             0x871E
#define GL_TEXTURE_MAG_SIZE_NV            0x871F
#endif /* GL_NV_texture_shader */

#ifndef GL_NV_texture_shader2
#define GL_NV_texture_shader2 1
#define GL_DOT_PRODUCT_TEXTURE_3D_NV      0x86EF
#endif /* GL_NV_texture_shader2 */

#ifndef GL_NV_texture_shader3
#define GL_NV_texture_shader3 1
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV 0x8850
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV 0x8851
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV 0x8852
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV 0x8853
#define GL_OFFSET_HILO_TEXTURE_2D_NV      0x8854
#define GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV 0x8855
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV 0x8856
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV 0x8857
#define GL_DEPENDENT_HILO_TEXTURE_2D_NV   0x8858
#define GL_DEPENDENT_RGB_TEXTURE_3D_NV    0x8859
#define GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV 0x885A
#define GL_DOT_PRODUCT_PASS_THROUGH_NV    0x885B
#define GL_DOT_PRODUCT_TEXTURE_1D_NV      0x885C
#define GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV 0x885D
#define GL_HILO8_NV                       0x885E
#define GL_SIGNED_HILO8_NV                0x885F
#define GL_FORCE_BLUE_TO_ONE_NV           0x8860
#endif /* GL_NV_texture_shader3 */

#ifndef GL_NV_timeline_semaphore
#define GL_NV_timeline_semaphore 1
#define GL_TIMELINE_SEMAPHORE_VALUE_NV    0x9595
#define GL_SEMAPHORE_TYPE_NV              0x95B3
#define GL_SEMAPHORE_TYPE_BINARY_NV       0x95B4
#define GL_SEMAPHORE_TYPE_TIMELINE_NV     0x95B5
#define GL_MAX_TIMELINE_SEMAPHORE_VALUE_DIFFERENCE_NV 0x95B6
extern void  glCreateSemaphoresNV (GLsizei n, GLuint *semaphores);
extern void  glSemaphoreParameterivNV (GLuint semaphore, GLenum pname, const GLint *params);
extern void  glGetSemaphoreParameterivNV (GLuint semaphore, GLenum pname, GLint *params);
#endif
#endif /* GL_NV_timeline_semaphore */

#ifndef GL_NV_transform_feedback
#define GL_NV_transform_feedback 1
#define GL_BACK_PRIMARY_COLOR_NV          0x8C77
#define GL_BACK_SECONDARY_COLOR_NV        0x8C78
#define GL_TEXTURE_COORD_NV               0x8C79
#define GL_CLIP_DISTANCE_NV               0x8C7A
#define GL_VERTEX_ID_NV                   0x8C7B
#define GL_PRIMITIVE_ID_NV                0x8C7C
#define GL_GENERIC_ATTRIB_NV              0x8C7D
#define GL_TRANSFORM_FEEDBACK_ATTRIBS_NV  0x8C7E
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_NV 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_NV 0x8C80
#define GL_ACTIVE_VARYINGS_NV             0x8C81
#define GL_ACTIVE_VARYING_MAX_LENGTH_NV   0x8C82
#define GL_TRANSFORM_FEEDBACK_VARYINGS_NV 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START_NV 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_NV 0x8C85
#define GL_TRANSFORM_FEEDBACK_RECORD_NV   0x8C86
#define GL_PRIMITIVES_GENERATED_NV        0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_NV 0x8C88
#define GL_RASTERIZER_DISCARD_NV          0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_NV 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_NV 0x8C8B
#define GL_INTERLEAVED_ATTRIBS_NV         0x8C8C
#define GL_SEPARATE_ATTRIBS_NV            0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER_NV   0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_NV 0x8C8F
#define GL_LAYER_NV                       0x8DAA
#define GL_NEXT_BUFFER_NV                 -2
#define GL_SKIP_COMPONENTS4_NV            -3
#define GL_SKIP_COMPONENTS3_NV            -4
#define GL_SKIP_COMPONENTS2_NV            -5
#define GL_SKIP_COMPONENTS1_NV            -6
extern void  glBeginTransformFeedbackNV (GLenum primitiveMode);
extern void  glEndTransformFeedbackNV (void);
extern void  glTransformFeedbackAttribsNV (GLsizei count, const GLint *attribs, GLenum bufferMode);
extern void  glBindBufferRangeNV (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
extern void  glBindBufferOffsetNV (GLenum target, GLuint index, GLuint buffer, GLintptr offset);
extern void  glBindBufferBaseNV (GLenum target, GLuint index, GLuint buffer);
extern void  glTransformFeedbackVaryingsNV (GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode);
extern void  glActiveVaryingNV (GLuint program, const GLchar *name);
extern GLint  glGetVaryingLocationNV (GLuint program, const GLchar *name);
extern void  glGetActiveVaryingNV (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
extern void  glGetTransformFeedbackVaryingNV (GLuint program, GLuint index, GLint *location);
extern void  glTransformFeedbackStreamAttribsNV (GLsizei count, const GLint *attribs, GLsizei nbuffers, const GLint *bufstreams, GLenum bufferMode);
#endif
#endif /* GL_NV_transform_feedback */

#ifndef GL_NV_transform_feedback2
#define GL_NV_transform_feedback2 1
#define GL_TRANSFORM_FEEDBACK_NV          0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING_NV  0x8E25
extern void  glBindTransformFeedbackNV (GLenum target, GLuint id);
extern void  glDeleteTransformFeedbacksNV (GLsizei n, const GLuint *ids);
extern void  glGenTransformFeedbacksNV (GLsizei n, GLuint *ids);
extern GLboolean  glIsTransformFeedbackNV (GLuint id);
extern void  glPauseTransformFeedbackNV (void);
extern void  glResumeTransformFeedbackNV (void);
extern void  glDrawTransformFeedbackNV (GLenum mode, GLuint id);
#endif
#endif /* GL_NV_transform_feedback2 */

#ifndef GL_NV_uniform_buffer_unified_memory
#define GL_NV_uniform_buffer_unified_memory 1
#define GL_UNIFORM_BUFFER_UNIFIED_NV      0x936E
#define GL_UNIFORM_BUFFER_ADDRESS_NV      0x936F
#define GL_UNIFORM_BUFFER_LENGTH_NV       0x9370
#endif /* GL_NV_uniform_buffer_unified_memory */

#ifndef GL_NV_vdpau_interop
#define GL_NV_vdpau_interop 1
typedef GLintptr GLvdpauSurfaceNV;
#define GL_SURFACE_STATE_NV               0x86EB
#define GL_SURFACE_REGISTERED_NV          0x86FD
#define GL_SURFACE_MAPPED_NV              0x8700
#define GL_WRITE_DISCARD_NV               0x88BE
extern void  glVDPAUInitNV (const void *vdpDevice, const void *getProcAddress);
extern void  glVDPAUFiniNV (void);
extern GLvdpauSurfaceNV  glVDPAURegisterVideoSurfaceNV (const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames);
extern GLvdpauSurfaceNV  glVDPAURegisterOutputSurfaceNV (const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames);
extern GLboolean  glVDPAUIsSurfaceNV (GLvdpauSurfaceNV surface);
extern void  glVDPAUUnregisterSurfaceNV (GLvdpauSurfaceNV surface);
extern void  glVDPAUGetSurfaceivNV (GLvdpauSurfaceNV surface, GLenum pname, GLsizei count, GLsizei *length, GLint *values);
extern void  glVDPAUSurfaceAccessNV (GLvdpauSurfaceNV surface, GLenum access);
extern void  glVDPAUMapSurfacesNV (GLsizei numSurfaces, const GLvdpauSurfaceNV *surfaces);
extern void  glVDPAUUnmapSurfacesNV (GLsizei numSurface, const GLvdpauSurfaceNV *surfaces);
#endif
#endif /* GL_NV_vdpau_interop */

#ifndef GL_NV_vdpau_interop2
#define GL_NV_vdpau_interop2 1
extern GLvdpauSurfaceNV  glVDPAURegisterVideoSurfaceWithPictureStructureNV (const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames, GLboolean isFrameStructure);
#endif
#endif /* GL_NV_vdpau_interop2 */

#ifndef GL_NV_vertex_array_range
#define GL_NV_vertex_array_range 1
#define GL_VERTEX_ARRAY_RANGE_NV          0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_NV   0x851E
#define GL_VERTEX_ARRAY_RANGE_VALID_NV    0x851F
#define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV 0x8520
#define GL_VERTEX_ARRAY_RANGE_POINTER_NV  0x8521
extern void  glFlushVertexArrayRangeNV (void);
extern void  glVertexArrayRangeNV (GLsizei length, const void *pointer);
#endif
#endif /* GL_NV_vertex_array_range */

#ifndef GL_NV_vertex_array_range2
#define GL_NV_vertex_array_range2 1
#define GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV 0x8533
#endif /* GL_NV_vertex_array_range2 */

#ifndef GL_NV_vertex_attrib_integer_64bit
#define GL_NV_vertex_attrib_integer_64bit 1
extern void  glVertexAttribL1i64NV (GLuint index, GLint64EXT x);
extern void  glVertexAttribL2i64NV (GLuint index, GLint64EXT x, GLint64EXT y);
extern void  glVertexAttribL3i64NV (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
extern void  glVertexAttribL4i64NV (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
extern void  glVertexAttribL1i64vNV (GLuint index, const GLint64EXT *v);
extern void  glVertexAttribL2i64vNV (GLuint index, const GLint64EXT *v);
extern void  glVertexAttribL3i64vNV (GLuint index, const GLint64EXT *v);
extern void  glVertexAttribL4i64vNV (GLuint index, const GLint64EXT *v);
extern void  glVertexAttribL1ui64NV (GLuint index, GLuint64EXT x);
extern void  glVertexAttribL2ui64NV (GLuint index, GLuint64EXT x, GLuint64EXT y);
extern void  glVertexAttribL3ui64NV (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
extern void  glVertexAttribL4ui64NV (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
extern void  glVertexAttribL1ui64vNV (GLuint index, const GLuint64EXT *v);
extern void  glVertexAttribL2ui64vNV (GLuint index, const GLuint64EXT *v);
extern void  glVertexAttribL3ui64vNV (GLuint index, const GLuint64EXT *v);
extern void  glVertexAttribL4ui64vNV (GLuint index, const GLuint64EXT *v);
extern void  glGetVertexAttribLi64vNV (GLuint index, GLenum pname, GLint64EXT *params);
extern void  glGetVertexAttribLui64vNV (GLuint index, GLenum pname, GLuint64EXT *params);
extern void  glVertexAttribLFormatNV (GLuint index, GLint size, GLenum type, GLsizei stride);
#endif
#endif /* GL_NV_vertex_attrib_integer_64bit */

#ifndef GL_NV_vertex_buffer_unified_memory
#define GL_NV_vertex_buffer_unified_memory 1
#define GL_VERTEX_ATTRIB_ARRAY_UNIFIED_NV 0x8F1E
#define GL_ELEMENT_ARRAY_UNIFIED_NV       0x8F1F
#define GL_VERTEX_ATTRIB_ARRAY_ADDRESS_NV 0x8F20
#define GL_VERTEX_ARRAY_ADDRESS_NV        0x8F21
#define GL_NORMAL_ARRAY_ADDRESS_NV        0x8F22
#define GL_COLOR_ARRAY_ADDRESS_NV         0x8F23
#define GL_INDEX_ARRAY_ADDRESS_NV         0x8F24
#define GL_TEXTURE_COORD_ARRAY_ADDRESS_NV 0x8F25
#define GL_EDGE_FLAG_ARRAY_ADDRESS_NV     0x8F26
#define GL_SECONDARY_COLOR_ARRAY_ADDRESS_NV 0x8F27
#define GL_FOG_COORD_ARRAY_ADDRESS_NV     0x8F28
#define GL_ELEMENT_ARRAY_ADDRESS_NV       0x8F29
#define GL_VERTEX_ATTRIB_ARRAY_LENGTH_NV  0x8F2A
#define GL_VERTEX_ARRAY_LENGTH_NV         0x8F2B
#define GL_NORMAL_ARRAY_LENGTH_NV         0x8F2C
#define GL_COLOR_ARRAY_LENGTH_NV          0x8F2D
#define GL_INDEX_ARRAY_LENGTH_NV          0x8F2E
#define GL_TEXTURE_COORD_ARRAY_LENGTH_NV  0x8F2F
#define GL_EDGE_FLAG_ARRAY_LENGTH_NV      0x8F30
#define GL_SECONDARY_COLOR_ARRAY_LENGTH_NV 0x8F31
#define GL_FOG_COORD_ARRAY_LENGTH_NV      0x8F32
#define GL_ELEMENT_ARRAY_LENGTH_NV        0x8F33
#define GL_DRAW_INDIRECT_UNIFIED_NV       0x8F40
#define GL_DRAW_INDIRECT_ADDRESS_NV       0x8F41
#define GL_DRAW_INDIRECT_LENGTH_NV        0x8F42
extern void  glBufferAddressRangeNV (GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length);
extern void  glVertexFormatNV (GLint size, GLenum type, GLsizei stride);
extern void  glNormalFormatNV (GLenum type, GLsizei stride);
extern void  glColorFormatNV (GLint size, GLenum type, GLsizei stride);
extern void  glIndexFormatNV (GLenum type, GLsizei stride);
extern void  glTexCoordFormatNV (GLint size, GLenum type, GLsizei stride);
extern void  glEdgeFlagFormatNV (GLsizei stride);
extern void  glSecondaryColorFormatNV (GLint size, GLenum type, GLsizei stride);
extern void  glFogCoordFormatNV (GLenum type, GLsizei stride);
extern void  glVertexAttribFormatNV (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride);
extern void  glVertexAttribIFormatNV (GLuint index, GLint size, GLenum type, GLsizei stride);
extern void  glGetIntegerui64i_vNV (GLenum value, GLuint index, GLuint64EXT *result);
#endif
#endif /* GL_NV_vertex_buffer_unified_memory */

#ifndef GL_NV_vertex_program
#define GL_NV_vertex_program 1
#define GL_VERTEX_PROGRAM_NV              0x8620
#define GL_VERTEX_STATE_PROGRAM_NV        0x8621
#define GL_ATTRIB_ARRAY_SIZE_NV           0x8623
#define GL_ATTRIB_ARRAY_STRIDE_NV         0x8624
#define GL_ATTRIB_ARRAY_TYPE_NV           0x8625
#define GL_CURRENT_ATTRIB_NV              0x8626
#define GL_PROGRAM_LENGTH_NV              0x8627
#define GL_PROGRAM_STRING_NV              0x8628
#define GL_MODELVIEW_PROJECTION_NV        0x8629
#define GL_IDENTITY_NV                    0x862A
#define GL_INVERSE_NV                     0x862B
#define GL_TRANSPOSE_NV                   0x862C
#define GL_INVERSE_TRANSPOSE_NV           0x862D
#define GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV 0x862E
#define GL_MAX_TRACK_MATRICES_NV          0x862F
#define GL_MATRIX0_NV                     0x8630
#define GL_MATRIX1_NV                     0x8631
#define GL_MATRIX2_NV                     0x8632
#define GL_MATRIX3_NV                     0x8633
#define GL_MATRIX4_NV                     0x8634
#define GL_MATRIX5_NV                     0x8635
#define GL_MATRIX6_NV                     0x8636
#define GL_MATRIX7_NV                     0x8637
#define GL_CURRENT_MATRIX_STACK_DEPTH_NV  0x8640
#define GL_CURRENT_MATRIX_NV              0x8641
#define GL_VERTEX_PROGRAM_POINT_SIZE_NV   0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_NV     0x8643
#define GL_PROGRAM_PARAMETER_NV           0x8644
#define GL_ATTRIB_ARRAY_POINTER_NV        0x8645
#define GL_PROGRAM_TARGET_NV              0x8646
#define GL_PROGRAM_RESIDENT_NV            0x8647
#define GL_TRACK_MATRIX_NV                0x8648
#define GL_TRACK_MATRIX_TRANSFORM_NV      0x8649
#define GL_VERTEX_PROGRAM_BINDING_NV      0x864A
#define GL_PROGRAM_ERROR_POSITION_NV      0x864B
#define GL_VERTEX_ATTRIB_ARRAY0_NV        0x8650
#define GL_VERTEX_ATTRIB_ARRAY1_NV        0x8651
#define GL_VERTEX_ATTRIB_ARRAY2_NV        0x8652
#define GL_VERTEX_ATTRIB_ARRAY3_NV        0x8653
#define GL_VERTEX_ATTRIB_ARRAY4_NV        0x8654
#define GL_VERTEX_ATTRIB_ARRAY5_NV        0x8655
#define GL_VERTEX_ATTRIB_ARRAY6_NV        0x8656
#define GL_VERTEX_ATTRIB_ARRAY7_NV        0x8657
#define GL_VERTEX_ATTRIB_ARRAY8_NV        0x8658
#define GL_VERTEX_ATTRIB_ARRAY9_NV        0x8659
#define GL_VERTEX_ATTRIB_ARRAY10_NV       0x865A
#define GL_VERTEX_ATTRIB_ARRAY11_NV       0x865B
#define GL_VERTEX_ATTRIB_ARRAY12_NV       0x865C
#define GL_VERTEX_ATTRIB_ARRAY13_NV       0x865D
#define GL_VERTEX_ATTRIB_ARRAY14_NV       0x865E
#define GL_VERTEX_ATTRIB_ARRAY15_NV       0x865F
#define GL_MAP1_VERTEX_ATTRIB0_4_NV       0x8660
#define GL_MAP1_VERTEX_ATTRIB1_4_NV       0x8661
#define GL_MAP1_VERTEX_ATTRIB2_4_NV       0x8662
#define GL_MAP1_VERTEX_ATTRIB3_4_NV       0x8663
#define GL_MAP1_VERTEX_ATTRIB4_4_NV       0x8664
#define GL_MAP1_VERTEX_ATTRIB5_4_NV       0x8665
#define GL_MAP1_VERTEX_ATTRIB6_4_NV       0x8666
#define GL_MAP1_VERTEX_ATTRIB7_4_NV       0x8667
#define GL_MAP1_VERTEX_ATTRIB8_4_NV       0x8668
#define GL_MAP1_VERTEX_ATTRIB9_4_NV       0x8669
#define GL_MAP1_VERTEX_ATTRIB10_4_NV      0x866A
#define GL_MAP1_VERTEX_ATTRIB11_4_NV      0x866B
#define GL_MAP1_VERTEX_ATTRIB12_4_NV      0x866C
#define GL_MAP1_VERTEX_ATTRIB13_4_NV      0x866D
#define GL_MAP1_VERTEX_ATTRIB14_4_NV      0x866E
#define GL_MAP1_VERTEX_ATTRIB15_4_NV      0x866F
#define GL_MAP2_VERTEX_ATTRIB0_4_NV       0x8670
#define GL_MAP2_VERTEX_ATTRIB1_4_NV       0x8671
#define GL_MAP2_VERTEX_ATTRIB2_4_NV       0x8672
#define GL_MAP2_VERTEX_ATTRIB3_4_NV       0x8673
#define GL_MAP2_VERTEX_ATTRIB4_4_NV       0x8674
#define GL_MAP2_VERTEX_ATTRIB5_4_NV       0x8675
#define GL_MAP2_VERTEX_ATTRIB6_4_NV       0x8676
#define GL_MAP2_VERTEX_ATTRIB7_4_NV       0x8677
#define GL_MAP2_VERTEX_ATTRIB8_4_NV       0x8678
#define GL_MAP2_VERTEX_ATTRIB9_4_NV       0x8679
#define GL_MAP2_VERTEX_ATTRIB10_4_NV      0x867A
#define GL_MAP2_VERTEX_ATTRIB11_4_NV      0x867B
#define GL_MAP2_VERTEX_ATTRIB12_4_NV      0x867C
#define GL_MAP2_VERTEX_ATTRIB13_4_NV      0x867D
#define GL_MAP2_VERTEX_ATTRIB14_4_NV      0x867E
#define GL_MAP2_VERTEX_ATTRIB15_4_NV      0x867F
extern GLboolean  glAreProgramsResidentNV (GLsizei n, const GLuint *programs, GLboolean *residences);
extern void  glBindProgramNV (GLenum target, GLuint id);
extern void  glDeleteProgramsNV (GLsizei n, const GLuint *programs);
extern void  glExecuteProgramNV (GLenum target, GLuint id, const GLfloat *params);
extern void  glGenProgramsNV (GLsizei n, GLuint *programs);
extern void  glGetProgramParameterdvNV (GLenum target, GLuint index, GLenum pname, GLdouble *params);
extern void  glGetProgramParameterfvNV (GLenum target, GLuint index, GLenum pname, GLfloat *params);
extern void  glGetProgramivNV (GLuint id, GLenum pname, GLint *params);
extern void  glGetProgramStringNV (GLuint id, GLenum pname, GLubyte *program);
extern void  glGetTrackMatrixivNV (GLenum target, GLuint address, GLenum pname, GLint *params);
extern void  glGetVertexAttribdvNV (GLuint index, GLenum pname, GLdouble *params);
extern void  glGetVertexAttribfvNV (GLuint index, GLenum pname, GLfloat *params);
extern void  glGetVertexAttribivNV (GLuint index, GLenum pname, GLint *params);
extern void  glGetVertexAttribPointervNV (GLuint index, GLenum pname, void **pointer);
extern GLboolean  glIsProgramNV (GLuint id);
extern void  glLoadProgramNV (GLenum target, GLuint id, GLsizei len, const GLubyte *program);
extern void  glProgramParameter4dNV (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glProgramParameter4dvNV (GLenum target, GLuint index, const GLdouble *v);
extern void  glProgramParameter4fNV (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void  glProgramParameter4fvNV (GLenum target, GLuint index, const GLfloat *v);
extern void  glProgramParameters4dvNV (GLenum target, GLuint index, GLsizei count, const GLdouble *v);
extern void  glProgramParameters4fvNV (GLenum target, GLuint index, GLsizei count, const GLfloat *v);
extern void  glRequestResidentProgramsNV (GLsizei n, const GLuint *programs);
extern void  glTrackMatrixNV (GLenum target, GLuint address, GLenum matrix, GLenum transform);
extern void  glVertexAttribPointerNV (GLuint index, GLint fsize, GLenum type, GLsizei stride, const void *pointer);
extern void  glVertexAttrib1dNV (GLuint index, GLdouble x);
extern void  glVertexAttrib1dvNV (GLuint index, const GLdouble *v);
extern void  glVertexAttrib1fNV (GLuint index, GLfloat x);
extern void  glVertexAttrib1fvNV (GLuint index, const GLfloat *v);
extern void  glVertexAttrib1sNV (GLuint index, GLshort x);
extern void  glVertexAttrib1svNV (GLuint index, const GLshort *v);
extern void  glVertexAttrib2dNV (GLuint index, GLdouble x, GLdouble y);
extern void  glVertexAttrib2dvNV (GLuint index, const GLdouble *v);
extern void  glVertexAttrib2fNV (GLuint index, GLfloat x, GLfloat y);
extern void  glVertexAttrib2fvNV (GLuint index, const GLfloat *v);
extern void  glVertexAttrib2sNV (GLuint index, GLshort x, GLshort y);
extern void  glVertexAttrib2svNV (GLuint index, const GLshort *v);
extern void  glVertexAttrib3dNV (GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern void  glVertexAttrib3dvNV (GLuint index, const GLdouble *v);
extern void  glVertexAttrib3fNV (GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern void  glVertexAttrib3fvNV (GLuint index, const GLfloat *v);
extern void  glVertexAttrib3sNV (GLuint index, GLshort x, GLshort y, GLshort z);
extern void  glVertexAttrib3svNV (GLuint index, const GLshort *v);
extern void  glVertexAttrib4dNV (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void  glVertexAttrib4dvNV (GLuint index, const GLdouble *v);
extern void  glVertexAttrib4fNV (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void  glVertexAttrib4fvNV (GLuint index, const GLfloat *v);
extern void  glVertexAttrib4sNV (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
extern void  glVertexAttrib4svNV (GLuint index, const GLshort *v);
extern void  glVertexAttrib4ubNV (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
extern void  glVertexAttrib4ubvNV (GLuint index, const GLubyte *v);
extern void  glVertexAttribs1dvNV (GLuint index, GLsizei count, const GLdouble *v);
extern void  glVertexAttribs1fvNV (GLuint index, GLsizei count, const GLfloat *v);
extern void  glVertexAttribs1svNV (GLuint index, GLsizei count, const GLshort *v);
extern void  glVertexAttribs2dvNV (GLuint index, GLsizei count, const GLdouble *v);
extern void  glVertexAttribs2fvNV (GLuint index, GLsizei count, const GLfloat *v);
extern void  glVertexAttribs2svNV (GLuint index, GLsizei count, const GLshort *v);
extern void  glVertexAttribs3dvNV (GLuint index, GLsizei count, const GLdouble *v);
extern void  glVertexAttribs3fvNV (GLuint index, GLsizei count, const GLfloat *v);
extern void  glVertexAttribs3svNV (GLuint index, GLsizei count, const GLshort *v);
extern void  glVertexAttribs4dvNV (GLuint index, GLsizei count, const GLdouble *v);
extern void  glVertexAttribs4fvNV (GLuint index, GLsizei count, const GLfloat *v);
extern void  glVertexAttribs4svNV (GLuint index, GLsizei count, const GLshort *v);
extern void  glVertexAttribs4ubvNV (GLuint index, GLsizei count, const GLubyte *v);
#endif
#endif /* GL_NV_vertex_program */

#ifndef GL_NV_vertex_program1_1
#define GL_NV_vertex_program1_1 1
#endif /* GL_NV_vertex_program1_1 */

#ifndef GL_NV_vertex_program2
#define GL_NV_vertex_program2 1
#endif /* GL_NV_vertex_program2 */

#ifndef GL_NV_vertex_program2_option
#define GL_NV_vertex_program2_option 1
#endif /* GL_NV_vertex_program2_option */

#ifndef GL_NV_vertex_program3
#define GL_NV_vertex_program3 1
#endif /* GL_NV_vertex_program3 */

#ifndef GL_NV_vertex_program4
#define GL_NV_vertex_program4 1
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER_NV 0x88FD
#endif /* GL_NV_vertex_program4 */

#ifndef GL_NV_video_capture
#define GL_NV_video_capture 1
#define GL_VIDEO_BUFFER_NV                0x9020
#define GL_VIDEO_BUFFER_BINDING_NV        0x9021
#define GL_FIELD_UPPER_NV                 0x9022
#define GL_FIELD_LOWER_NV                 0x9023
#define GL_NUM_VIDEO_CAPTURE_STREAMS_NV   0x9024
#define GL_NEXT_VIDEO_CAPTURE_BUFFER_STATUS_NV 0x9025
#define GL_VIDEO_CAPTURE_TO_422_SUPPORTED_NV 0x9026
#define GL_LAST_VIDEO_CAPTURE_STATUS_NV   0x9027
#define GL_VIDEO_BUFFER_PITCH_NV          0x9028
#define GL_VIDEO_COLOR_CONVERSION_MATRIX_NV 0x9029
#define GL_VIDEO_COLOR_CONVERSION_MAX_NV  0x902A
#define GL_VIDEO_COLOR_CONVERSION_MIN_NV  0x902B
#define GL_VIDEO_COLOR_CONVERSION_OFFSET_NV 0x902C
#define GL_VIDEO_BUFFER_INTERNAL_FORMAT_NV 0x902D
#define GL_PARTIAL_SUCCESS_NV             0x902E
#define GL_SUCCESS_NV                     0x902F
#define GL_FAILURE_NV                     0x9030
#define GL_YCBYCR8_422_NV                 0x9031
#define GL_YCBAYCR8A_4224_NV              0x9032
#define GL_Z6Y10Z6CB10Z6Y10Z6CR10_422_NV  0x9033
#define GL_Z6Y10Z6CB10Z6A10Z6Y10Z6CR10Z6A10_4224_NV 0x9034
#define GL_Z4Y12Z4CB12Z4Y12Z4CR12_422_NV  0x9035
#define GL_Z4Y12Z4CB12Z4A12Z4Y12Z4CR12Z4A12_4224_NV 0x9036
#define GL_Z4Y12Z4CB12Z4CR12_444_NV       0x9037
#define GL_VIDEO_CAPTURE_FRAME_WIDTH_NV   0x9038
#define GL_VIDEO_CAPTURE_FRAME_HEIGHT_NV  0x9039
#define GL_VIDEO_CAPTURE_FIELD_UPPER_HEIGHT_NV 0x903A
#define GL_VIDEO_CAPTURE_FIELD_LOWER_HEIGHT_NV 0x903B
#define GL_VIDEO_CAPTURE_SURFACE_ORIGIN_NV 0x903C
extern void  glBeginVideoCaptureNV (GLuint video_capture_slot);
extern void  glBindVideoCaptureStreamBufferNV (GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset);
extern void  glBindVideoCaptureStreamTextureNV (GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture);
extern void  glEndVideoCaptureNV (GLuint video_capture_slot);
extern void  glGetVideoCaptureivNV (GLuint video_capture_slot, GLenum pname, GLint *params);
extern void  glGetVideoCaptureStreamivNV (GLuint video_capture_slot, GLuint stream, GLenum pname, GLint *params);
extern void  glGetVideoCaptureStreamfvNV (GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat *params);
extern void  glGetVideoCaptureStreamdvNV (GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble *params);
extern GLenum  glVideoCaptureNV (GLuint video_capture_slot, GLuint *sequence_num, GLuint64EXT *capture_time);
extern void  glVideoCaptureStreamParameterivNV (GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint *params);
extern void  glVideoCaptureStreamParameterfvNV (GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat *params);
extern void  glVideoCaptureStreamParameterdvNV (GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble *params);
#endif
#endif /* GL_NV_video_capture */

#ifndef GL_NV_viewport_array2
#define GL_NV_viewport_array2 1
#endif /* GL_NV_viewport_array2 */

#ifndef GL_NV_viewport_swizzle
#define GL_NV_viewport_swizzle 1
#define GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV 0x9350
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV 0x9351
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV 0x9352
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV 0x9353
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV 0x9354
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV 0x9355
#define GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV 0x9356
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV 0x9357
#define GL_VIEWPORT_SWIZZLE_X_NV          0x9358
#define GL_VIEWPORT_SWIZZLE_Y_NV          0x9359
#define GL_VIEWPORT_SWIZZLE_Z_NV          0x935A
#define GL_VIEWPORT_SWIZZLE_W_NV          0x935B
extern void  glViewportSwizzleNV (GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew);
#endif
#endif /* GL_NV_viewport_swizzle */

#ifndef GL_OML_interlace
#define GL_OML_interlace 1
#define GL_INTERLACE_OML                  0x8980
#define GL_INTERLACE_READ_OML             0x8981
#endif /* GL_OML_interlace */

#ifndef GL_OML_resample
#define GL_OML_resample 1
#define GL_PACK_RESAMPLE_OML              0x8984
#define GL_UNPACK_RESAMPLE_OML            0x8985
#define GL_RESAMPLE_REPLICATE_OML         0x8986
#define GL_RESAMPLE_ZERO_FILL_OML         0x8987
#define GL_RESAMPLE_AVERAGE_OML           0x8988
#define GL_RESAMPLE_DECIMATE_OML          0x8989
#endif /* GL_OML_resample */

#ifndef GL_OML_subsample
#define GL_OML_subsample 1
#define GL_FORMAT_SUBSAMPLE_24_24_OML     0x8982
#define GL_FORMAT_SUBSAMPLE_244_244_OML   0x8983
#endif /* GL_OML_subsample */

#ifndef GL_OVR_multiview
#define GL_OVR_multiview 1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR 0x9630
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR 0x9632
#define GL_MAX_VIEWS_OVR                  0x9631
#define GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR 0x9633
extern void  glFramebufferTextureMultiviewOVR (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
#endif
#endif /* GL_OVR_multiview */

#ifndef GL_OVR_multiview2
#define GL_OVR_multiview2 1
#endif /* GL_OVR_multiview2 */

#ifndef GL_PGI_misc_hints
#define GL_PGI_misc_hints 1
#define GL_PREFER_DOUBLEBUFFER_HINT_PGI   0x1A1F8
#define GL_CONSERVE_MEMORY_HINT_PGI       0x1A1FD
#define GL_RECLAIM_MEMORY_HINT_PGI        0x1A1FE
#define GL_NATIVE_GRAPHICS_HANDLE_PGI     0x1A202
#define GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI 0x1A203
#define GL_NATIVE_GRAPHICS_END_HINT_PGI   0x1A204
#define GL_ALWAYS_FAST_HINT_PGI           0x1A20C
#define GL_ALWAYS_SOFT_HINT_PGI           0x1A20D
#define GL_ALLOW_DRAW_OBJ_HINT_PGI        0x1A20E
#define GL_ALLOW_DRAW_WIN_HINT_PGI        0x1A20F
#define GL_ALLOW_DRAW_FRG_HINT_PGI        0x1A210
#define GL_ALLOW_DRAW_MEM_HINT_PGI        0x1A211
#define GL_STRICT_DEPTHFUNC_HINT_PGI      0x1A216
#define GL_STRICT_LIGHTING_HINT_PGI       0x1A217
#define GL_STRICT_SCISSOR_HINT_PGI        0x1A218
#define GL_FULL_STIPPLE_HINT_PGI          0x1A219
#define GL_CLIP_NEAR_HINT_PGI             0x1A220
#define GL_CLIP_FAR_HINT_PGI              0x1A221
#define GL_WIDE_LINE_HINT_PGI             0x1A222
#define GL_BACK_NORMALS_HINT_PGI          0x1A223
extern void  glHintPGI (GLenum target, GLint mode);
#endif
#endif /* GL_PGI_misc_hints */

#ifndef GL_PGI_vertex_hints
#define GL_PGI_vertex_hints 1
#define GL_VERTEX_DATA_HINT_PGI           0x1A22A
#define GL_VERTEX_CONSISTENT_HINT_PGI     0x1A22B
#define GL_MATERIAL_SIDE_HINT_PGI         0x1A22C
#define GL_MAX_VERTEX_HINT_PGI            0x1A22D
#define GL_COLOR3_BIT_PGI                 0x00010000
#define GL_COLOR4_BIT_PGI                 0x00020000
#define GL_EDGEFLAG_BIT_PGI               0x00040000
#define GL_INDEX_BIT_PGI                  0x00080000
#define GL_MAT_AMBIENT_BIT_PGI            0x00100000
#define GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI 0x00200000
#define GL_MAT_DIFFUSE_BIT_PGI            0x00400000
#define GL_MAT_EMISSION_BIT_PGI           0x00800000
#define GL_MAT_COLOR_INDEXES_BIT_PGI      0x01000000
#define GL_MAT_SHININESS_BIT_PGI          0x02000000
#define GL_MAT_SPECULAR_BIT_PGI           0x04000000
#define GL_NORMAL_BIT_PGI                 0x08000000
#define GL_TEXCOORD1_BIT_PGI              0x10000000
#define GL_TEXCOORD2_BIT_PGI              0x20000000
#define GL_TEXCOORD3_BIT_PGI              0x40000000
#define GL_TEXCOORD4_BIT_PGI              0x80000000
#define GL_VERTEX23_BIT_PGI               0x00000004
#define GL_VERTEX4_BIT_PGI                0x00000008
#endif /* GL_PGI_vertex_hints */

#ifndef GL_REND_screen_coordinates
#define GL_REND_screen_coordinates 1
#define GL_SCREEN_COORDINATES_REND        0x8490
#define GL_INVERTED_SCREEN_W_REND         0x8491
#endif /* GL_REND_screen_coordinates */

#ifndef GL_S3_s3tc
#define GL_S3_s3tc 1
#define GL_RGB_S3TC                       0x83A0
#define GL_RGB4_S3TC                      0x83A1
#define GL_RGBA_S3TC                      0x83A2
#define GL_RGBA4_S3TC                     0x83A3
#define GL_RGBA_DXT5_S3TC                 0x83A4
#define GL_RGBA4_DXT5_S3TC                0x83A5
#endif /* GL_S3_s3tc */

#ifndef GL_SGIS_detail_texture
#define GL_SGIS_detail_texture 1
#define GL_DETAIL_TEXTURE_2D_SGIS         0x8095
#define GL_DETAIL_TEXTURE_2D_BINDING_SGIS 0x8096
#define GL_LINEAR_DETAIL_SGIS             0x8097
#define GL_LINEAR_DETAIL_ALPHA_SGIS       0x8098
#define GL_LINEAR_DETAIL_COLOR_SGIS       0x8099
#define GL_DETAIL_TEXTURE_LEVEL_SGIS      0x809A
#define GL_DETAIL_TEXTURE_MODE_SGIS       0x809B
#define GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS 0x809C
extern void  glDetailTexFuncSGIS (GLenum target, GLsizei n, const GLfloat *points);
extern void  glGetDetailTexFuncSGIS (GLenum target, GLfloat *points);
#endif
#endif /* GL_SGIS_detail_texture */

#ifndef GL_SGIS_fog_function
#define GL_SGIS_fog_function 1
#define GL_FOG_FUNC_SGIS                  0x812A
#define GL_FOG_FUNC_POINTS_SGIS           0x812B
#define GL_MAX_FOG_FUNC_POINTS_SGIS       0x812C
extern void  glFogFuncSGIS (GLsizei n, const GLfloat *points);
extern void  glGetFogFuncSGIS (GLfloat *points);
#endif
#endif /* GL_SGIS_fog_function */

#ifndef GL_SGIS_generate_mipmap
#define GL_SGIS_generate_mipmap 1
#define GL_GENERATE_MIPMAP_SGIS           0x8191
#define GL_GENERATE_MIPMAP_HINT_SGIS      0x8192
#endif /* GL_SGIS_generate_mipmap */

#ifndef GL_SGIS_multisample
#define GL_SGIS_multisample 1
#define GL_MULTISAMPLE_SGIS               0x809D
#define GL_SAMPLE_ALPHA_TO_MASK_SGIS      0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_SGIS       0x809F
#define GL_SAMPLE_MASK_SGIS               0x80A0
#define GL_1PASS_SGIS                     0x80A1
#define GL_2PASS_0_SGIS                   0x80A2
#define GL_2PASS_1_SGIS                   0x80A3
#define GL_4PASS_0_SGIS                   0x80A4
#define GL_4PASS_1_SGIS                   0x80A5
#define GL_4PASS_2_SGIS                   0x80A6
#define GL_4PASS_3_SGIS                   0x80A7
#define GL_SAMPLE_BUFFERS_SGIS            0x80A8
#define GL_SAMPLES_SGIS                   0x80A9
#define GL_SAMPLE_MASK_VALUE_SGIS         0x80AA
#define GL_SAMPLE_MASK_INVERT_SGIS        0x80AB
#define GL_SAMPLE_PATTERN_SGIS            0x80AC
extern void  glSampleMaskSGIS (GLclampf value, GLboolean invert);
extern void  glSamplePatternSGIS (GLenum pattern);
#endif
#endif /* GL_SGIS_multisample */

#ifndef GL_SGIS_pixel_texture
#define GL_SGIS_pixel_texture 1
#define GL_PIXEL_TEXTURE_SGIS             0x8353
#define GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS 0x8354
#define GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS 0x8355
#define GL_PIXEL_GROUP_COLOR_SGIS         0x8356
extern void  glPixelTexGenParameteriSGIS (GLenum pname, GLint param);
extern void  glPixelTexGenParameterivSGIS (GLenum pname, const GLint *params);
extern void  glPixelTexGenParameterfSGIS (GLenum pname, GLfloat param);
extern void  glPixelTexGenParameterfvSGIS (GLenum pname, const GLfloat *params);
extern void  glGetPixelTexGenParameterivSGIS (GLenum pname, GLint *params);
extern void  glGetPixelTexGenParameterfvSGIS (GLenum pname, GLfloat *params);
#endif
#endif /* GL_SGIS_pixel_texture */

#ifndef GL_SGIS_point_line_texgen
#define GL_SGIS_point_line_texgen 1
#define GL_EYE_DISTANCE_TO_POINT_SGIS     0x81F0
#define GL_OBJECT_DISTANCE_TO_POINT_SGIS  0x81F1
#define GL_EYE_DISTANCE_TO_LINE_SGIS      0x81F2
#define GL_OBJECT_DISTANCE_TO_LINE_SGIS   0x81F3
#define GL_EYE_POINT_SGIS                 0x81F4
#define GL_OBJECT_POINT_SGIS              0x81F5
#define GL_EYE_LINE_SGIS                  0x81F6
#define GL_OBJECT_LINE_SGIS               0x81F7
#endif /* GL_SGIS_point_line_texgen */

#ifndef GL_SGIS_point_parameters
#define GL_SGIS_point_parameters 1
#define GL_POINT_SIZE_MIN_SGIS            0x8126
#define GL_POINT_SIZE_MAX_SGIS            0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_SGIS 0x8128
#define GL_DISTANCE_ATTENUATION_SGIS      0x8129
extern void  glPointParameterfSGIS (GLenum pname, GLfloat param);
extern void  glPointParameterfvSGIS (GLenum pname, const GLfloat *params);
#endif
#endif /* GL_SGIS_point_parameters */

#ifndef GL_SGIS_sharpen_texture
#define GL_SGIS_sharpen_texture 1
#define GL_LINEAR_SHARPEN_SGIS            0x80AD
#define GL_LINEAR_SHARPEN_ALPHA_SGIS      0x80AE
#define GL_LINEAR_SHARPEN_COLOR_SGIS      0x80AF
#define GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS 0x80B0
extern void  glSharpenTexFuncSGIS (GLenum target, GLsizei n, const GLfloat *points);
extern void  glGetSharpenTexFuncSGIS (GLenum target, GLfloat *points);
#endif
#endif /* GL_SGIS_sharpen_texture */

#ifndef GL_SGIS_texture4D
#define GL_SGIS_texture4D 1
#define GL_PACK_SKIP_VOLUMES_SGIS         0x8130
#define GL_PACK_IMAGE_DEPTH_SGIS          0x8131
#define GL_UNPACK_SKIP_VOLUMES_SGIS       0x8132
#define GL_UNPACK_IMAGE_DEPTH_SGIS        0x8133
#define GL_TEXTURE_4D_SGIS                0x8134
#define GL_PROXY_TEXTURE_4D_SGIS          0x8135
#define GL_TEXTURE_4DSIZE_SGIS            0x8136
#define GL_TEXTURE_WRAP_Q_SGIS            0x8137
#define GL_MAX_4D_TEXTURE_SIZE_SGIS       0x8138
#define GL_TEXTURE_4D_BINDING_SGIS        0x814F
extern void  glTexImage4DSGIS (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void *pixels);
extern void  glTexSubImage4DSGIS (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void *pixels);
#endif
#endif /* GL_SGIS_texture4D */

#ifndef GL_SGIS_texture_border_clamp
#define GL_SGIS_texture_border_clamp 1
#define GL_CLAMP_TO_BORDER_SGIS           0x812D
#endif /* GL_SGIS_texture_border_clamp */

#ifndef GL_SGIS_texture_color_mask
#define GL_SGIS_texture_color_mask 1
#define GL_TEXTURE_COLOR_WRITEMASK_SGIS   0x81EF
extern void  glTextureColorMaskSGIS (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
#endif
#endif /* GL_SGIS_texture_color_mask */

#ifndef GL_SGIS_texture_edge_clamp
#define GL_SGIS_texture_edge_clamp 1
#define GL_CLAMP_TO_EDGE_SGIS             0x812F
#endif /* GL_SGIS_texture_edge_clamp */

#ifndef GL_SGIS_texture_filter4
#define GL_SGIS_texture_filter4 1
#define GL_FILTER4_SGIS                   0x8146
#define GL_TEXTURE_FILTER4_SIZE_SGIS      0x8147
extern void  glGetTexFilterFuncSGIS (GLenum target, GLenum filter, GLfloat *weights);
extern void  glTexFilterFuncSGIS (GLenum target, GLenum filter, GLsizei n, const GLfloat *weights);
#endif
#endif /* GL_SGIS_texture_filter4 */

#ifndef GL_SGIS_texture_lod
#define GL_SGIS_texture_lod 1
#define GL_TEXTURE_MIN_LOD_SGIS           0x813A
#define GL_TEXTURE_MAX_LOD_SGIS           0x813B
#define GL_TEXTURE_BASE_LEVEL_SGIS        0x813C
#define GL_TEXTURE_MAX_LEVEL_SGIS         0x813D
#endif /* GL_SGIS_texture_lod */

#ifndef GL_SGIS_texture_select
#define GL_SGIS_texture_select 1
#define GL_DUAL_ALPHA4_SGIS               0x8110
#define GL_DUAL_ALPHA8_SGIS               0x8111
#define GL_DUAL_ALPHA12_SGIS              0x8112
#define GL_DUAL_ALPHA16_SGIS              0x8113
#define GL_DUAL_LUMINANCE4_SGIS           0x8114
#define GL_DUAL_LUMINANCE8_SGIS           0x8115
#define GL_DUAL_LUMINANCE12_SGIS          0x8116
#define GL_DUAL_LUMINANCE16_SGIS          0x8117
#define GL_DUAL_INTENSITY4_SGIS           0x8118
#define GL_DUAL_INTENSITY8_SGIS           0x8119
#define GL_DUAL_INTENSITY12_SGIS          0x811A
#define GL_DUAL_INTENSITY16_SGIS          0x811B
#define GL_DUAL_LUMINANCE_ALPHA4_SGIS     0x811C
#define GL_DUAL_LUMINANCE_ALPHA8_SGIS     0x811D
#define GL_QUAD_ALPHA4_SGIS               0x811E
#define GL_QUAD_ALPHA8_SGIS               0x811F
#define GL_QUAD_LUMINANCE4_SGIS           0x8120
#define GL_QUAD_LUMINANCE8_SGIS           0x8121
#define GL_QUAD_INTENSITY4_SGIS           0x8122
#define GL_QUAD_INTENSITY8_SGIS           0x8123
#define GL_DUAL_TEXTURE_SELECT_SGIS       0x8124
#define GL_QUAD_TEXTURE_SELECT_SGIS       0x8125
#endif /* GL_SGIS_texture_select */

#ifndef GL_SGIX_async
#define GL_SGIX_async 1
#define GL_ASYNC_MARKER_SGIX              0x8329
extern void  glAsyncMarkerSGIX (GLuint marker);
extern GLint  glFinishAsyncSGIX (GLuint *markerp);
extern GLint  glPollAsyncSGIX (GLuint *markerp);
extern GLuint  glGenAsyncMarkersSGIX (GLsizei range);
extern void  glDeleteAsyncMarkersSGIX (GLuint marker, GLsizei range);
extern GLboolean  glIsAsyncMarkerSGIX (GLuint marker);
#endif
#endif /* GL_SGIX_async */

#ifndef GL_SGIX_async_histogram
#define GL_SGIX_async_histogram 1
#define GL_ASYNC_HISTOGRAM_SGIX           0x832C
#define GL_MAX_ASYNC_HISTOGRAM_SGIX       0x832D
#endif /* GL_SGIX_async_histogram */

#ifndef GL_SGIX_async_pixel
#define GL_SGIX_async_pixel 1
#define GL_ASYNC_TEX_IMAGE_SGIX           0x835C
#define GL_ASYNC_DRAW_PIXELS_SGIX         0x835D
#define GL_ASYNC_READ_PIXELS_SGIX         0x835E
#define GL_MAX_ASYNC_TEX_IMAGE_SGIX       0x835F
#define GL_MAX_ASYNC_DRAW_PIXELS_SGIX     0x8360
#define GL_MAX_ASYNC_READ_PIXELS_SGIX     0x8361
#endif /* GL_SGIX_async_pixel */

#ifndef GL_SGIX_blend_alpha_minmax
#define GL_SGIX_blend_alpha_minmax 1
#define GL_ALPHA_MIN_SGIX                 0x8320
#define GL_ALPHA_MAX_SGIX                 0x8321
#endif /* GL_SGIX_blend_alpha_minmax */

#ifndef GL_SGIX_calligraphic_fragment
#define GL_SGIX_calligraphic_fragment 1
#define GL_CALLIGRAPHIC_FRAGMENT_SGIX     0x8183
#endif /* GL_SGIX_calligraphic_fragment */

#ifndef GL_SGIX_clipmap
#define GL_SGIX_clipmap 1
#define GL_LINEAR_CLIPMAP_LINEAR_SGIX     0x8170
#define GL_TEXTURE_CLIPMAP_CENTER_SGIX    0x8171
#define GL_TEXTURE_CLIPMAP_FRAME_SGIX     0x8172
#define GL_TEXTURE_CLIPMAP_OFFSET_SGIX    0x8173
#define GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX 0x8174
#define GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX 0x8175
#define GL_TEXTURE_CLIPMAP_DEPTH_SGIX     0x8176
#define GL_MAX_CLIPMAP_DEPTH_SGIX         0x8177
#define GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX 0x8178
#define GL_NEAREST_CLIPMAP_NEAREST_SGIX   0x844D
#define GL_NEAREST_CLIPMAP_LINEAR_SGIX    0x844E
#define GL_LINEAR_CLIPMAP_NEAREST_SGIX    0x844F
#endif /* GL_SGIX_clipmap */

#ifndef GL_SGIX_convolution_accuracy
#define GL_SGIX_convolution_accuracy 1
#define GL_CONVOLUTION_HINT_SGIX          0x8316
#endif /* GL_SGIX_convolution_accuracy */

#ifndef GL_SGIX_depth_pass_instrument
#define GL_SGIX_depth_pass_instrument 1
#endif /* GL_SGIX_depth_pass_instrument */

#ifndef GL_SGIX_depth_texture
#define GL_SGIX_depth_texture 1
#define GL_DEPTH_COMPONENT16_SGIX         0x81A5
#define GL_DEPTH_COMPONENT24_SGIX         0x81A6
#define GL_DEPTH_COMPONENT32_SGIX         0x81A7
#endif /* GL_SGIX_depth_texture */

#ifndef GL_SGIX_flush_raster
#define GL_SGIX_flush_raster 1
extern void  glFlushRasterSGIX (void);
#endif
#endif /* GL_SGIX_flush_raster */

#ifndef GL_SGIX_fog_offset
#define GL_SGIX_fog_offset 1
#define GL_FOG_OFFSET_SGIX                0x8198
#define GL_FOG_OFFSET_VALUE_SGIX          0x8199
#endif /* GL_SGIX_fog_offset */

#ifndef GL_SGIX_fragment_lighting
#define GL_SGIX_fragment_lighting 1
#define GL_FRAGMENT_LIGHTING_SGIX         0x8400
#define GL_FRAGMENT_COLOR_MATERIAL_SGIX   0x8401
#define GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX 0x8402
#define GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX 0x8403
#define GL_MAX_FRAGMENT_LIGHTS_SGIX       0x8404
#define GL_MAX_ACTIVE_LIGHTS_SGIX         0x8405
#define GL_CURRENT_RASTER_NORMAL_SGIX     0x8406
#define GL_LIGHT_ENV_MODE_SGIX            0x8407
#define GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX 0x8408
#define GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX 0x8409
#define GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX 0x840A
#define GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX 0x840B
#define GL_FRAGMENT_LIGHT0_SGIX           0x840C
#define GL_FRAGMENT_LIGHT1_SGIX           0x840D
#define GL_FRAGMENT_LIGHT2_SGIX           0x840E
#define GL_FRAGMENT_LIGHT3_SGIX           0x840F
#define GL_FRAGMENT_LIGHT4_SGIX           0x8410
#define GL_FRAGMENT_LIGHT5_SGIX           0x8411
#define GL_FRAGMENT_LIGHT6_SGIX           0x8412
#define GL_FRAGMENT_LIGHT7_SGIX           0x8413
extern void  glFragmentColorMaterialSGIX (GLenum face, GLenum mode);
extern void  glFragmentLightfSGIX (GLenum light, GLenum pname, GLfloat param);
extern void  glFragmentLightfvSGIX (GLenum light, GLenum pname, const GLfloat *params);
extern void  glFragmentLightiSGIX (GLenum light, GLenum pname, GLint param);
extern void  glFragmentLightivSGIX (GLenum light, GLenum pname, const GLint *params);
extern void  glFragmentLightModelfSGIX (GLenum pname, GLfloat param);
extern void  glFragmentLightModelfvSGIX (GLenum pname, const GLfloat *params);
extern void  glFragmentLightModeliSGIX (GLenum pname, GLint param);
extern void  glFragmentLightModelivSGIX (GLenum pname, const GLint *params);
extern void  glFragmentMaterialfSGIX (GLenum face, GLenum pname, GLfloat param);
extern void  glFragmentMaterialfvSGIX (GLenum face, GLenum pname, const GLfloat *params);
extern void  glFragmentMaterialiSGIX (GLenum face, GLenum pname, GLint param);
extern void  glFragmentMaterialivSGIX (GLenum face, GLenum pname, const GLint *params);
extern void  glGetFragmentLightfvSGIX (GLenum light, GLenum pname, GLfloat *params);
extern void  glGetFragmentLightivSGIX (GLenum light, GLenum pname, GLint *params);
extern void  glGetFragmentMaterialfvSGIX (GLenum face, GLenum pname, GLfloat *params);
extern void  glGetFragmentMaterialivSGIX (GLenum face, GLenum pname, GLint *params);
extern void  glLightEnviSGIX (GLenum pname, GLint param);
#endif
#endif /* GL_SGIX_fragment_lighting */

#ifndef GL_SGIX_framezoom
#define GL_SGIX_framezoom 1
#define GL_FRAMEZOOM_SGIX                 0x818B
#define GL_FRAMEZOOM_FACTOR_SGIX          0x818C
#define GL_MAX_FRAMEZOOM_FACTOR_SGIX      0x818D
extern void  glFrameZoomSGIX (GLint factor);
#endif
#endif /* GL_SGIX_framezoom */

#ifndef GL_SGIX_igloo_interface
#define GL_SGIX_igloo_interface 1
extern void  glIglooInterfaceSGIX (GLenum pname, const void *params);
#endif
#endif /* GL_SGIX_igloo_interface */

#ifndef GL_SGIX_instruments
#define GL_SGIX_instruments 1
#define GL_INSTRUMENT_BUFFER_POINTER_SGIX 0x8180
#define GL_INSTRUMENT_MEASUREMENTS_SGIX   0x8181
extern GLint  glGetInstrumentsSGIX (void);
extern void  glInstrumentsBufferSGIX (GLsizei size, GLint *buffer);
extern GLint  glPollInstrumentsSGIX (GLint *marker_p);
extern void  glReadInstrumentsSGIX (GLint marker);
extern void  glStartInstrumentsSGIX (void);
extern void  glStopInstrumentsSGIX (GLint marker);
#endif
#endif /* GL_SGIX_instruments */

#ifndef GL_SGIX_interlace
#define GL_SGIX_interlace 1
#define GL_INTERLACE_SGIX                 0x8094
#endif /* GL_SGIX_interlace */

#ifndef GL_SGIX_ir_instrument1
#define GL_SGIX_ir_instrument1 1
#define GL_IR_INSTRUMENT1_SGIX            0x817F
#endif /* GL_SGIX_ir_instrument1 */

#ifndef GL_SGIX_list_priority
#define GL_SGIX_list_priority 1
#define GL_LIST_PRIORITY_SGIX             0x8182
extern void  glGetListParameterfvSGIX (GLuint list, GLenum pname, GLfloat *params);
extern void  glGetListParameterivSGIX (GLuint list, GLenum pname, GLint *params);
extern void  glListParameterfSGIX (GLuint list, GLenum pname, GLfloat param);
extern void  glListParameterfvSGIX (GLuint list, GLenum pname, const GLfloat *params);
extern void  glListParameteriSGIX (GLuint list, GLenum pname, GLint param);
extern void  glListParameterivSGIX (GLuint list, GLenum pname, const GLint *params);
#endif
#endif /* GL_SGIX_list_priority */

#ifndef GL_SGIX_pixel_texture
#define GL_SGIX_pixel_texture 1
#define GL_PIXEL_TEX_GEN_SGIX             0x8139
#define GL_PIXEL_TEX_GEN_MODE_SGIX        0x832B
extern void  glPixelTexGenSGIX (GLenum mode);
#endif
#endif /* GL_SGIX_pixel_texture */

#ifndef GL_SGIX_pixel_tiles
#define GL_SGIX_pixel_tiles 1
#define GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX 0x813E
#define GL_PIXEL_TILE_CACHE_INCREMENT_SGIX 0x813F
#define GL_PIXEL_TILE_WIDTH_SGIX          0x8140
#define GL_PIXEL_TILE_HEIGHT_SGIX         0x8141
#define GL_PIXEL_TILE_GRID_WIDTH_SGIX     0x8142
#define GL_PIXEL_TILE_GRID_HEIGHT_SGIX    0x8143
#define GL_PIXEL_TILE_GRID_DEPTH_SGIX     0x8144
#define GL_PIXEL_TILE_CACHE_SIZE_SGIX     0x8145
#endif /* GL_SGIX_pixel_tiles */

#ifndef GL_SGIX_polynomial_ffd
#define GL_SGIX_polynomial_ffd 1
#define GL_TEXTURE_DEFORMATION_BIT_SGIX   0x00000001
#define GL_GEOMETRY_DEFORMATION_BIT_SGIX  0x00000002
#define GL_GEOMETRY_DEFORMATION_SGIX      0x8194
#define GL_TEXTURE_DEFORMATION_SGIX       0x8195
#define GL_DEFORMATIONS_MASK_SGIX         0x8196
#define GL_MAX_DEFORMATION_ORDER_SGIX     0x8197
extern void  glDeformationMap3dSGIX (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points);
extern void  glDeformationMap3fSGIX (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points);
extern void  glDeformSGIX (GLbitfield mask);
extern void  glLoadIdentityDeformationMapSGIX (GLbitfield mask);
#endif
#endif /* GL_SGIX_polynomial_ffd */

#ifndef GL_SGIX_reference_plane
#define GL_SGIX_reference_plane 1
#define GL_REFERENCE_PLANE_SGIX           0x817D
#define GL_REFERENCE_PLANE_EQUATION_SGIX  0x817E
extern void  glReferencePlaneSGIX (const GLdouble *equation);
#endif
#endif /* GL_SGIX_reference_plane */

#ifndef GL_SGIX_resample
#define GL_SGIX_resample 1
#define GL_PACK_RESAMPLE_SGIX             0x842E
#define GL_UNPACK_RESAMPLE_SGIX           0x842F
#define GL_RESAMPLE_REPLICATE_SGIX        0x8433
#define GL_RESAMPLE_ZERO_FILL_SGIX        0x8434
#define GL_RESAMPLE_DECIMATE_SGIX         0x8430
#endif /* GL_SGIX_resample */

#ifndef GL_SGIX_scalebias_hint
#define GL_SGIX_scalebias_hint 1
#define GL_SCALEBIAS_HINT_SGIX            0x8322
#endif /* GL_SGIX_scalebias_hint */

#ifndef GL_SGIX_shadow
#define GL_SGIX_shadow 1
#define GL_TEXTURE_COMPARE_SGIX           0x819A
#define GL_TEXTURE_COMPARE_OPERATOR_SGIX  0x819B
#define GL_TEXTURE_LEQUAL_R_SGIX          0x819C
#define GL_TEXTURE_GEQUAL_R_SGIX          0x819D
#endif /* GL_SGIX_shadow */

#ifndef GL_SGIX_shadow_ambient
#define GL_SGIX_shadow_ambient 1
#define GL_SHADOW_AMBIENT_SGIX            0x80BF
#endif /* GL_SGIX_shadow_ambient */

#ifndef GL_SGIX_sprite
#define GL_SGIX_sprite 1
#define GL_SPRITE_SGIX                    0x8148
#define GL_SPRITE_MODE_SGIX               0x8149
#define GL_SPRITE_AXIS_SGIX               0x814A
#define GL_SPRITE_TRANSLATION_SGIX        0x814B
#define GL_SPRITE_AXIAL_SGIX              0x814C
#define GL_SPRITE_OBJECT_ALIGNED_SGIX     0x814D
#define GL_SPRITE_EYE_ALIGNED_SGIX        0x814E
extern void  glSpriteParameterfSGIX (GLenum pname, GLfloat param);
extern void  glSpriteParameterfvSGIX (GLenum pname, const GLfloat *params);
extern void  glSpriteParameteriSGIX (GLenum pname, GLint param);
extern void  glSpriteParameterivSGIX (GLenum pname, const GLint *params);
#endif
#endif /* GL_SGIX_sprite */

#ifndef GL_SGIX_subsample
#define GL_SGIX_subsample 1
#define GL_PACK_SUBSAMPLE_RATE_SGIX       0x85A0
#define GL_UNPACK_SUBSAMPLE_RATE_SGIX     0x85A1
#define GL_PIXEL_SUBSAMPLE_4444_SGIX      0x85A2
#define GL_PIXEL_SUBSAMPLE_2424_SGIX      0x85A3
#define GL_PIXEL_SUBSAMPLE_4242_SGIX      0x85A4
#endif /* GL_SGIX_subsample */

#ifndef GL_SGIX_tag_sample_buffer
#define GL_SGIX_tag_sample_buffer 1
extern void  glTagSampleBufferSGIX (void);
#endif
#endif /* GL_SGIX_tag_sample_buffer */

#ifndef GL_SGIX_texture_add_env
#define GL_SGIX_texture_add_env 1
#define GL_TEXTURE_ENV_BIAS_SGIX          0x80BE
#endif /* GL_SGIX_texture_add_env */

#ifndef GL_SGIX_texture_coordinate_clamp
#define GL_SGIX_texture_coordinate_clamp 1
#define GL_TEXTURE_MAX_CLAMP_S_SGIX       0x8369
#define GL_TEXTURE_MAX_CLAMP_T_SGIX       0x836A
#define GL_TEXTURE_MAX_CLAMP_R_SGIX       0x836B
#endif /* GL_SGIX_texture_coordinate_clamp */

#ifndef GL_SGIX_texture_lod_bias
#define GL_SGIX_texture_lod_bias 1
#define GL_TEXTURE_LOD_BIAS_S_SGIX        0x818E
#define GL_TEXTURE_LOD_BIAS_T_SGIX        0x818F
#define GL_TEXTURE_LOD_BIAS_R_SGIX        0x8190
#endif /* GL_SGIX_texture_lod_bias */

#ifndef GL_SGIX_texture_multi_buffer
#define GL_SGIX_texture_multi_buffer 1
#define GL_TEXTURE_MULTI_BUFFER_HINT_SGIX 0x812E
#endif /* GL_SGIX_texture_multi_buffer */

#ifndef GL_SGIX_texture_scale_bias
#define GL_SGIX_texture_scale_bias 1
#define GL_POST_TEXTURE_FILTER_BIAS_SGIX  0x8179
#define GL_POST_TEXTURE_FILTER_SCALE_SGIX 0x817A
#define GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX 0x817B
#define GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX 0x817C
#endif /* GL_SGIX_texture_scale_bias */

#ifndef GL_SGIX_vertex_preclip
#define GL_SGIX_vertex_preclip 1
#define GL_VERTEX_PRECLIP_SGIX            0x83EE
#define GL_VERTEX_PRECLIP_HINT_SGIX       0x83EF
#endif /* GL_SGIX_vertex_preclip */

#ifndef GL_SGIX_ycrcb
#define GL_SGIX_ycrcb 1
#define GL_YCRCB_422_SGIX                 0x81BB
#define GL_YCRCB_444_SGIX                 0x81BC
#endif /* GL_SGIX_ycrcb */

#ifndef GL_SGIX_ycrcb_subsample
#define GL_SGIX_ycrcb_subsample 1
#endif /* GL_SGIX_ycrcb_subsample */

#ifndef GL_SGIX_ycrcba
#define GL_SGIX_ycrcba 1
#define GL_YCRCB_SGIX                     0x8318
#define GL_YCRCBA_SGIX                    0x8319
#endif /* GL_SGIX_ycrcba */

#ifndef GL_SGI_color_matrix
#define GL_SGI_color_matrix 1
#define GL_COLOR_MATRIX_SGI               0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH_SGI   0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI 0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE_SGI 0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI 0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI 0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI 0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS_SGI 0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI 0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI 0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI 0x80BB
#endif /* GL_SGI_color_matrix */

#ifndef GL_SGI_color_table
#define GL_SGI_color_table 1
#define GL_COLOR_TABLE_SGI                0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE_SGI 0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI 0x80D2
#define GL_PROXY_COLOR_TABLE_SGI          0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI 0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI 0x80D5
#define GL_COLOR_TABLE_SCALE_SGI          0x80D6
#define GL_COLOR_TABLE_BIAS_SGI           0x80D7
#define GL_COLOR_TABLE_FORMAT_SGI         0x80D8
#define GL_COLOR_TABLE_WIDTH_SGI          0x80D9
#define GL_COLOR_TABLE_RED_SIZE_SGI       0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE_SGI     0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE_SGI      0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE_SGI     0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE_SGI 0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE_SGI 0x80DF
extern void  glColorTableSGI (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table);
extern void  glColorTableParameterfvSGI (GLenum target, GLenum pname, const GLfloat *params);
extern void  glColorTableParameterivSGI (GLenum target, GLenum pname, const GLint *params);
extern void  glCopyColorTableSGI (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern void  glGetColorTableSGI (GLenum target, GLenum format, GLenum type, void *table);
extern void  glGetColorTableParameterfvSGI (GLenum target, GLenum pname, GLfloat *params);
extern void  glGetColorTableParameterivSGI (GLenum target, GLenum pname, GLint *params);
#endif
#endif /* GL_SGI_color_table */

#ifndef GL_SGI_texture_color_table
#define GL_SGI_texture_color_table 1
#define GL_TEXTURE_COLOR_TABLE_SGI        0x80BC
#define GL_PROXY_TEXTURE_COLOR_TABLE_SGI  0x80BD
#endif /* GL_SGI_texture_color_table */

#ifndef GL_SUNX_constant_data
#define GL_SUNX_constant_data 1
#define GL_UNPACK_CONSTANT_DATA_SUNX      0x81D5
#define GL_TEXTURE_CONSTANT_DATA_SUNX     0x81D6
extern void  glFinishTextureSUNX (void);
#endif
#endif /* GL_SUNX_constant_data */

#ifndef GL_SUN_convolution_border_modes
#define GL_SUN_convolution_border_modes 1
#define GL_WRAP_BORDER_SUN                0x81D4
#endif /* GL_SUN_convolution_border_modes */

#ifndef GL_SUN_global_alpha
#define GL_SUN_global_alpha 1
#define GL_GLOBAL_ALPHA_SUN               0x81D9
#define GL_GLOBAL_ALPHA_FACTOR_SUN        0x81DA
extern void  glGlobalAlphaFactorbSUN (GLbyte factor);
extern void  glGlobalAlphaFactorsSUN (GLshort factor);
extern void  glGlobalAlphaFactoriSUN (GLint factor);
extern void  glGlobalAlphaFactorfSUN (GLfloat factor);
extern void  glGlobalAlphaFactordSUN (GLdouble factor);
extern void  glGlobalAlphaFactorubSUN (GLubyte factor);
extern void  glGlobalAlphaFactorusSUN (GLushort factor);
extern void  glGlobalAlphaFactoruiSUN (GLuint factor);
#endif
#endif /* GL_SUN_global_alpha */

#ifndef GL_SUN_mesh_array
#define GL_SUN_mesh_array 1
#define GL_QUAD_MESH_SUN                  0x8614
#define GL_TRIANGLE_MESH_SUN              0x8615
extern void  glDrawMeshArraysSUN (GLenum mode, GLint first, GLsizei count, GLsizei width);
#endif
#endif /* GL_SUN_mesh_array */

#ifndef GL_SUN_slice_accum
#define GL_SUN_slice_accum 1
#define GL_SLICE_ACCUM_SUN                0x85CC
#endif /* GL_SUN_slice_accum */

#ifndef GL_SUN_triangle_list
#define GL_SUN_triangle_list 1
#define GL_RESTART_SUN                    0x0001
#define GL_REPLACE_MIDDLE_SUN             0x0002
#define GL_REPLACE_OLDEST_SUN             0x0003
#define GL_TRIANGLE_LIST_SUN              0x81D7
#define GL_REPLACEMENT_CODE_SUN           0x81D8
#define GL_REPLACEMENT_CODE_ARRAY_SUN     0x85C0
#define GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN 0x85C1
#define GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN 0x85C2
#define GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN 0x85C3
#define GL_R1UI_V3F_SUN                   0x85C4
#define GL_R1UI_C4UB_V3F_SUN              0x85C5
#define GL_R1UI_C3F_V3F_SUN               0x85C6
#define GL_R1UI_N3F_V3F_SUN               0x85C7
#define GL_R1UI_C4F_N3F_V3F_SUN           0x85C8
#define GL_R1UI_T2F_V3F_SUN               0x85C9
#define GL_R1UI_T2F_N3F_V3F_SUN           0x85CA
#define GL_R1UI_T2F_C4F_N3F_V3F_SUN       0x85CB
extern void  glReplacementCodeuiSUN (GLuint code);
extern void  glReplacementCodeusSUN (GLushort code);
extern void  glReplacementCodeubSUN (GLubyte code);
extern void  glReplacementCodeuivSUN (const GLuint *code);
extern void  glReplacementCodeusvSUN (const GLushort *code);
extern void  glReplacementCodeubvSUN (const GLubyte *code);
extern void  glReplacementCodePointerSUN (GLenum type, GLsizei stride, const void **pointer);
#endif
#endif /* GL_SUN_triangle_list */

#ifndef GL_SUN_vertex
#define GL_SUN_vertex 1
extern void  glColor4ubVertex2fSUN (GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y);
extern void  glColor4ubVertex2fvSUN (const GLubyte *c, const GLfloat *v);
extern void  glColor4ubVertex3fSUN (GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
extern void  glColor4ubVertex3fvSUN (const GLubyte *c, const GLfloat *v);
extern void  glColor3fVertex3fSUN (GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
extern void  glColor3fVertex3fvSUN (const GLfloat *c, const GLfloat *v);
extern void  glNormal3fVertex3fSUN (GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern void  glNormal3fVertex3fvSUN (const GLfloat *n, const GLfloat *v);
extern void  glColor4fNormal3fVertex3fSUN (GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern void  glColor4fNormal3fVertex3fvSUN (const GLfloat *c, const GLfloat *n, const GLfloat *v);
extern void  glTexCoord2fVertex3fSUN (GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
extern void  glTexCoord2fVertex3fvSUN (const GLfloat *tc, const GLfloat *v);
extern void  glTexCoord4fVertex4fSUN (GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void  glTexCoord4fVertex4fvSUN (const GLfloat *tc, const GLfloat *v);
extern void  glTexCoord2fColor4ubVertex3fSUN (GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
extern void  glTexCoord2fColor4ubVertex3fvSUN (const GLfloat *tc, const GLubyte *c, const GLfloat *v);
extern void  glTexCoord2fColor3fVertex3fSUN (GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
extern void  glTexCoord2fColor3fVertex3fvSUN (const GLfloat *tc, const GLfloat *c, const GLfloat *v);
extern void  glTexCoord2fNormal3fVertex3fSUN (GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern void  glTexCoord2fNormal3fVertex3fvSUN (const GLfloat *tc, const GLfloat *n, const GLfloat *v);
extern void  glTexCoord2fColor4fNormal3fVertex3fSUN (GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern void  glTexCoord2fColor4fNormal3fVertex3fvSUN (const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
extern void  glTexCoord4fColor4fNormal3fVertex4fSUN (GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void  glTexCoord4fColor4fNormal3fVertex4fvSUN (const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
extern void  glReplacementCodeuiVertex3fSUN (GLuint rc, GLfloat x, GLfloat y, GLfloat z);
extern void  glReplacementCodeuiVertex3fvSUN (const GLuint *rc, const GLfloat *v);
extern void  glReplacementCodeuiColor4ubVertex3fSUN (GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
extern void  glReplacementCodeuiColor4ubVertex3fvSUN (const GLuint *rc, const GLubyte *c, const GLfloat *v);
extern void  glReplacementCodeuiColor3fVertex3fSUN (GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
extern void  glReplacementCodeuiColor3fVertex3fvSUN (const GLuint *rc, const GLfloat *c, const GLfloat *v);
extern void  glReplacementCodeuiNormal3fVertex3fSUN (GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern void  glReplacementCodeuiNormal3fVertex3fvSUN (const GLuint *rc, const GLfloat *n, const GLfloat *v);
extern void  glReplacementCodeuiColor4fNormal3fVertex3fSUN (GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern void  glReplacementCodeuiColor4fNormal3fVertex3fvSUN (const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
extern void  glReplacementCodeuiTexCoord2fVertex3fSUN (GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
extern void  glReplacementCodeuiTexCoord2fVertex3fvSUN (const GLuint *rc, const GLfloat *tc, const GLfloat *v);
extern void  glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern void  glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN (const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v);
extern void  glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN (GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
extern void  glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN (const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
#endif
#endif /* GL_SUN_vertex */

#ifndef GL_WIN_phong_shading
#define GL_WIN_phong_shading 1
#define GL_PHONG_WIN                      0x80EA
#define GL_PHONG_HINT_WIN                 0x80EB
#endif /* GL_WIN_phong_shading */

#ifndef GL_WIN_specular_fog
#define GL_WIN_specular_fog 1
#define GL_FOG_SPECULAR_TEXTURE_WIN       0x80EC
#endif /* GL_WIN_specular_fog */

#ifdef __cplusplus
}
#endif

#endif
