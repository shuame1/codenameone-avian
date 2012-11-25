/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_awt_image_ImagingLib */

#ifndef _Included_sun_awt_image_ImagingLib
#define _Included_sun_awt_image_ImagingLib
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_awt_image_ImagingLib_NUM_NATIVE_OPS
#define sun_awt_image_ImagingLib_NUM_NATIVE_OPS 3L
#undef sun_awt_image_ImagingLib_LOOKUP_OP
#define sun_awt_image_ImagingLib_LOOKUP_OP 0L
#undef sun_awt_image_ImagingLib_AFFINE_OP
#define sun_awt_image_ImagingLib_AFFINE_OP 1L
#undef sun_awt_image_ImagingLib_CONVOLVE_OP
#define sun_awt_image_ImagingLib_CONVOLVE_OP 2L
/*
 * Class:     sun_awt_image_ImagingLib
 * Method:    init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_sun_awt_image_ImagingLib_init
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_image_ImagingLib
 * Method:    transformBI
 * Signature: (Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;[DI)I
 */
JNIEXPORT jint JNICALL Java_sun_awt_image_ImagingLib_transformBI
  (JNIEnv *, jclass, jobject, jobject, jdoubleArray, jint);

/*
 * Class:     sun_awt_image_ImagingLib
 * Method:    transformRaster
 * Signature: (Ljava/awt/image/Raster;Ljava/awt/image/Raster;[DI)I
 */
JNIEXPORT jint JNICALL Java_sun_awt_image_ImagingLib_transformRaster
  (JNIEnv *, jclass, jobject, jobject, jdoubleArray, jint);

/*
 * Class:     sun_awt_image_ImagingLib
 * Method:    convolveBI
 * Signature: (Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;Ljava/awt/image/Kernel;I)I
 */
JNIEXPORT jint JNICALL Java_sun_awt_image_ImagingLib_convolveBI
  (JNIEnv *, jclass, jobject, jobject, jobject, jint);

/*
 * Class:     sun_awt_image_ImagingLib
 * Method:    convolveRaster
 * Signature: (Ljava/awt/image/Raster;Ljava/awt/image/Raster;Ljava/awt/image/Kernel;I)I
 */
JNIEXPORT jint JNICALL Java_sun_awt_image_ImagingLib_convolveRaster
  (JNIEnv *, jclass, jobject, jobject, jobject, jint);

/*
 * Class:     sun_awt_image_ImagingLib
 * Method:    lookupByteBI
 * Signature: (Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;[[B)I
 */
JNIEXPORT jint JNICALL Java_sun_awt_image_ImagingLib_lookupByteBI
  (JNIEnv *, jclass, jobject, jobject, jobjectArray);

/*
 * Class:     sun_awt_image_ImagingLib
 * Method:    lookupByteRaster
 * Signature: (Ljava/awt/image/Raster;Ljava/awt/image/Raster;[[B)I
 */
JNIEXPORT jint JNICALL Java_sun_awt_image_ImagingLib_lookupByteRaster
  (JNIEnv *, jclass, jobject, jobject, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif