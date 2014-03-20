
/* autogenerated from gstcogorc.orc */

#ifndef _GSTCOGORC_H_
#define _GSTCOGORC_H_

#include <glib.h>

#ifdef __cplusplus
extern "C" {
#endif



#ifndef _ORC_INTEGER_TYPEDEFS_
#define _ORC_INTEGER_TYPEDEFS_
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <stdint.h>
typedef int8_t orc_int8;
typedef int16_t orc_int16;
typedef int32_t orc_int32;
typedef int64_t orc_int64;
typedef uint8_t orc_uint8;
typedef uint16_t orc_uint16;
typedef uint32_t orc_uint32;
typedef uint64_t orc_uint64;
#define ORC_UINT64_C(x) UINT64_C(x)
#elif defined(_MSC_VER)
typedef signed __int8 orc_int8;
typedef signed __int16 orc_int16;
typedef signed __int32 orc_int32;
typedef signed __int64 orc_int64;
typedef unsigned __int8 orc_uint8;
typedef unsigned __int16 orc_uint16;
typedef unsigned __int32 orc_uint32;
typedef unsigned __int64 orc_uint64;
#define ORC_UINT64_C(x) (x##Ui64)
#define inline __inline
#else
#include <limits.h>
typedef signed char orc_int8;
typedef short orc_int16;
typedef int orc_int32;
typedef unsigned char orc_uint8;
typedef unsigned short orc_uint16;
typedef unsigned int orc_uint32;
#if INT_MAX == LONG_MAX
typedef long long orc_int64;
typedef unsigned long long orc_uint64;
#define ORC_UINT64_C(x) (x##ULL)
#else
typedef long orc_int64;
typedef unsigned long orc_uint64;
#define ORC_UINT64_C(x) (x##UL)
#endif
#endif
typedef union { orc_int16 i; orc_int8 x2[2]; } orc_union16;
typedef union { orc_int32 i; float f; orc_int16 x2[2]; orc_int8 x4[4]; } orc_union32;
typedef union { orc_int64 i; double f; orc_int32 x2[2]; float x2f[2]; orc_int16 x4[4]; } orc_union64;
#endif
#ifndef ORC_RESTRICT
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define ORC_RESTRICT restrict
#elif defined(__GNUC__) && __GNUC__ >= 4
#define ORC_RESTRICT __restrict__
#else
#define ORC_RESTRICT
#endif
#endif
void cogorc_memcpy_2d (orc_uint8 * ORC_RESTRICT d1, int d1_stride, const orc_uint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_downsample_horiz_cosite_1tap (orc_uint8 * ORC_RESTRICT d1, const orc_uint16 * ORC_RESTRICT s1, int n);
void cogorc_downsample_horiz_cosite_3tap (orc_uint8 * ORC_RESTRICT d1, const orc_uint16 * ORC_RESTRICT s1, const orc_uint16 * ORC_RESTRICT s2, int n);
void cogorc_downsample_420_jpeg (orc_uint8 * ORC_RESTRICT d1, const orc_uint16 * ORC_RESTRICT s1, const orc_uint16 * ORC_RESTRICT s2, int n);
void cogorc_downsample_vert_halfsite_2tap (orc_uint8 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, int n);
void cogorc_downsample_vert_cosite_3tap (orc_uint8 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, const orc_uint8 * ORC_RESTRICT s3, int n);
void cogorc_downsample_vert_halfsite_4tap (orc_uint8 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, const orc_uint8 * ORC_RESTRICT s3, const orc_uint8 * ORC_RESTRICT s4, int n);
void cogorc_upsample_horiz_cosite_1tap (guint8 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, int n);
void cogorc_upsample_horiz_cosite (guint8 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, int n);
void cogorc_upsample_vert_avgub (orc_uint8 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, int n);
void orc_unpack_yuyv_y (orc_uint8 * ORC_RESTRICT d1, const orc_uint16 * ORC_RESTRICT s1, int n);
void orc_unpack_yuyv_u (orc_uint8 * ORC_RESTRICT d1, const orc_uint32 * ORC_RESTRICT s1, int n);
void orc_unpack_yuyv_v (orc_uint8 * ORC_RESTRICT d1, const orc_uint32 * ORC_RESTRICT s1, int n);
void orc_pack_yuyv (orc_uint32 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, const orc_uint8 * ORC_RESTRICT s3, int n);
void orc_unpack_uyvy_y (orc_uint8 * ORC_RESTRICT d1, const orc_uint16 * ORC_RESTRICT s1, int n);
void orc_unpack_uyvy_u (orc_uint8 * ORC_RESTRICT d1, const orc_uint32 * ORC_RESTRICT s1, int n);
void orc_unpack_uyvy_v (orc_uint8 * ORC_RESTRICT d1, const orc_uint32 * ORC_RESTRICT s1, int n);
void orc_pack_uyvy (orc_uint32 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, const orc_uint8 * ORC_RESTRICT s3, int n);
void orc_addc_convert_u8_s16 (orc_uint8 * ORC_RESTRICT d1, const gint16 * ORC_RESTRICT s1, int n);
void orc_subc_convert_s16_u8 (gint16 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, int n);
void orc_splat_u8_ns (orc_uint8 * ORC_RESTRICT d1, int p1, int n);
void orc_splat_s16_ns (gint16 * ORC_RESTRICT d1, int p1, int n);
void orc_matrix2_u8 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, int p1, int p2, int p3, int n);
void orc_matrix2_11_u8 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, int p1, int p2, int n);
void orc_matrix2_12_u8 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, int p1, int p2, int n);
void orc_matrix3_u8 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, int p1, int p2, int p3, int p4, int n);
void orc_matrix3_100_u8 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, int p1, int p2, int p3, int n);
void orc_matrix3_100_offset_u8 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, int p1, int p2, int p3, int p4, int p5, int n);
void orc_matrix3_000_u8 (guint8 * ORC_RESTRICT d1, const guint8 * ORC_RESTRICT s1, const guint8 * ORC_RESTRICT s2, const guint8 * ORC_RESTRICT s3, int p1, int p2, int p3, int p4, int p5, int n);
void orc_pack_123x (guint32 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, const orc_uint8 * ORC_RESTRICT s3, int p1, int n);
void orc_pack_x123 (guint32 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, const orc_uint8 * ORC_RESTRICT s3, int p1, int n);
void cogorc_combine2_u8 (orc_uint8 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, int p1, int p2, int n);
void cogorc_combine4_u8 (orc_uint8 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, const orc_uint8 * ORC_RESTRICT s3, const orc_uint8 * ORC_RESTRICT s4, int p1, int p2, int p3, int p4, int n);
void cogorc_unpack_axyz_0 (orc_uint8 * ORC_RESTRICT d1, const orc_uint32 * ORC_RESTRICT s1, int n);
void cogorc_unpack_axyz_1 (orc_uint8 * ORC_RESTRICT d1, const orc_uint32 * ORC_RESTRICT s1, int n);
void cogorc_unpack_axyz_2 (orc_uint8 * ORC_RESTRICT d1, const orc_uint32 * ORC_RESTRICT s1, int n);
void cogorc_unpack_axyz_3 (orc_uint8 * ORC_RESTRICT d1, const orc_uint32 * ORC_RESTRICT s1, int n);
void cogorc_resample_horiz_1tap (orc_uint8 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, int p1, int p2, int n);
void cogorc_resample_horiz_2tap (orc_uint8 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, int p1, int p2, int n);
void cogorc_convert_I420_UYVY (orc_uint32 * ORC_RESTRICT d1, orc_uint32 * ORC_RESTRICT d2, const orc_uint16 * ORC_RESTRICT s1, const orc_uint16 * ORC_RESTRICT s2, const orc_uint8 * ORC_RESTRICT s3, const orc_uint8 * ORC_RESTRICT s4, int n);
void cogorc_convert_I420_YUY2 (orc_uint32 * ORC_RESTRICT d1, orc_uint32 * ORC_RESTRICT d2, const orc_uint16 * ORC_RESTRICT s1, const orc_uint16 * ORC_RESTRICT s2, const orc_uint8 * ORC_RESTRICT s3, const orc_uint8 * ORC_RESTRICT s4, int n);
void cogorc_convert_I420_AYUV (orc_uint32 * ORC_RESTRICT d1, orc_uint32 * ORC_RESTRICT d2, const orc_uint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, const orc_uint8 * ORC_RESTRICT s3, const orc_uint8 * ORC_RESTRICT s4, int n);
void cogorc_convert_YUY2_I420 (orc_uint16 * ORC_RESTRICT d1, orc_uint16 * ORC_RESTRICT d2, orc_uint8 * ORC_RESTRICT d3, orc_uint8 * ORC_RESTRICT d4, const orc_uint32 * ORC_RESTRICT s1, const orc_uint32 * ORC_RESTRICT s2, int n);
void cogorc_convert_UYVY_YUY2 (orc_uint32 * ORC_RESTRICT d1, int d1_stride, const orc_uint32 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_planar_chroma_420_422 (orc_uint8 * ORC_RESTRICT d1, int d1_stride, orc_uint8 * ORC_RESTRICT d2, int d2_stride, const orc_uint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_planar_chroma_420_444 (orc_uint16 * ORC_RESTRICT d1, int d1_stride, orc_uint16 * ORC_RESTRICT d2, int d2_stride, const orc_uint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_planar_chroma_422_444 (orc_uint16 * ORC_RESTRICT d1, int d1_stride, const orc_uint8 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_planar_chroma_444_422 (orc_uint8 * ORC_RESTRICT d1, int d1_stride, const orc_uint16 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_planar_chroma_444_420 (orc_uint8 * ORC_RESTRICT d1, int d1_stride, const orc_uint16 * ORC_RESTRICT s1, int s1_stride, const orc_uint16 * ORC_RESTRICT s2, int s2_stride, int n, int m);
void cogorc_planar_chroma_422_420 (orc_uint8 * ORC_RESTRICT d1, int d1_stride, const orc_uint8 * ORC_RESTRICT s1, int s1_stride, const orc_uint8 * ORC_RESTRICT s2, int s2_stride, int n, int m);
void cogorc_convert_YUY2_AYUV (orc_uint64 * ORC_RESTRICT d1, int d1_stride, const orc_uint32 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_UYVY_AYUV (orc_uint64 * ORC_RESTRICT d1, int d1_stride, const orc_uint32 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_YUY2_Y42B (orc_uint16 * ORC_RESTRICT d1, int d1_stride, orc_uint8 * ORC_RESTRICT d2, int d2_stride, orc_uint8 * ORC_RESTRICT d3, int d3_stride, const orc_uint32 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_UYVY_Y42B (orc_uint16 * ORC_RESTRICT d1, int d1_stride, orc_uint8 * ORC_RESTRICT d2, int d2_stride, orc_uint8 * ORC_RESTRICT d3, int d3_stride, const orc_uint32 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_YUY2_Y444 (orc_uint16 * ORC_RESTRICT d1, int d1_stride, orc_uint16 * ORC_RESTRICT d2, int d2_stride, orc_uint16 * ORC_RESTRICT d3, int d3_stride, const orc_uint32 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_UYVY_Y444 (orc_uint16 * ORC_RESTRICT d1, int d1_stride, orc_uint16 * ORC_RESTRICT d2, int d2_stride, orc_uint16 * ORC_RESTRICT d3, int d3_stride, const orc_uint32 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_UYVY_I420 (orc_uint16 * ORC_RESTRICT d1, orc_uint16 * ORC_RESTRICT d2, orc_uint8 * ORC_RESTRICT d3, orc_uint8 * ORC_RESTRICT d4, const orc_uint32 * ORC_RESTRICT s1, const orc_uint32 * ORC_RESTRICT s2, int n);
void cogorc_convert_AYUV_I420 (orc_uint16 * ORC_RESTRICT d1, int d1_stride, orc_uint16 * ORC_RESTRICT d2, int d2_stride, orc_uint8 * ORC_RESTRICT d3, int d3_stride, orc_uint8 * ORC_RESTRICT d4, int d4_stride, const orc_uint64 * ORC_RESTRICT s1, int s1_stride, const orc_uint64 * ORC_RESTRICT s2, int s2_stride, int n, int m);
void cogorc_convert_AYUV_YUY2 (orc_uint32 * ORC_RESTRICT d1, int d1_stride, const orc_uint64 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_AYUV_UYVY (orc_uint32 * ORC_RESTRICT d1, int d1_stride, const orc_uint64 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_AYUV_Y42B (orc_uint16 * ORC_RESTRICT d1, int d1_stride, orc_uint8 * ORC_RESTRICT d2, int d2_stride, orc_uint8 * ORC_RESTRICT d3, int d3_stride, const orc_uint64 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_AYUV_Y444 (orc_uint8 * ORC_RESTRICT d1, int d1_stride, orc_uint8 * ORC_RESTRICT d2, int d2_stride, orc_uint8 * ORC_RESTRICT d3, int d3_stride, const orc_uint32 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_Y42B_YUY2 (orc_uint32 * ORC_RESTRICT d1, int d1_stride, const orc_uint16 * ORC_RESTRICT s1, int s1_stride, const orc_uint8 * ORC_RESTRICT s2, int s2_stride, const orc_uint8 * ORC_RESTRICT s3, int s3_stride, int n, int m);
void cogorc_convert_Y42B_UYVY (orc_uint32 * ORC_RESTRICT d1, int d1_stride, const orc_uint16 * ORC_RESTRICT s1, int s1_stride, const orc_uint8 * ORC_RESTRICT s2, int s2_stride, const orc_uint8 * ORC_RESTRICT s3, int s3_stride, int n, int m);
void cogorc_convert_Y42B_AYUV (orc_uint64 * ORC_RESTRICT d1, int d1_stride, const orc_uint16 * ORC_RESTRICT s1, int s1_stride, const orc_uint8 * ORC_RESTRICT s2, int s2_stride, const orc_uint8 * ORC_RESTRICT s3, int s3_stride, int n, int m);
void cogorc_convert_Y444_YUY2 (orc_uint32 * ORC_RESTRICT d1, int d1_stride, const orc_uint16 * ORC_RESTRICT s1, int s1_stride, const orc_uint16 * ORC_RESTRICT s2, int s2_stride, const orc_uint16 * ORC_RESTRICT s3, int s3_stride, int n, int m);
void cogorc_convert_Y444_UYVY (orc_uint32 * ORC_RESTRICT d1, int d1_stride, const orc_uint16 * ORC_RESTRICT s1, int s1_stride, const orc_uint16 * ORC_RESTRICT s2, int s2_stride, const orc_uint16 * ORC_RESTRICT s3, int s3_stride, int n, int m);
void cogorc_convert_Y444_AYUV (orc_uint32 * ORC_RESTRICT d1, int d1_stride, const orc_uint8 * ORC_RESTRICT s1, int s1_stride, const orc_uint8 * ORC_RESTRICT s2, int s2_stride, const orc_uint8 * ORC_RESTRICT s3, int s3_stride, int n, int m);
void cogorc_convert_AYUV_ARGB (orc_uint32 * ORC_RESTRICT d1, int d1_stride, const orc_uint32 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_AYUV_BGRA (orc_uint32 * ORC_RESTRICT d1, int d1_stride, const orc_uint32 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_AYUV_ABGR (orc_uint32 * ORC_RESTRICT d1, int d1_stride, const orc_uint32 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_AYUV_RGBA (orc_uint32 * ORC_RESTRICT d1, int d1_stride, const orc_uint32 * ORC_RESTRICT s1, int s1_stride, int n, int m);
void cogorc_convert_I420_BGRA (orc_uint32 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, const orc_uint8 * ORC_RESTRICT s3, int n);
void cogorc_convert_I420_BGRA_avg (orc_uint32 * ORC_RESTRICT d1, const orc_uint8 * ORC_RESTRICT s1, const orc_uint8 * ORC_RESTRICT s2, const orc_uint8 * ORC_RESTRICT s3, const orc_uint8 * ORC_RESTRICT s4, const orc_uint8 * ORC_RESTRICT s5, int n);

#ifdef __cplusplus
}
#endif

#endif

