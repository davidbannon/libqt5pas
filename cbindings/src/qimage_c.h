//******************************************************************************
//  Copyright (c) 2005-2013 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#ifndef QIMAGE_C_H
#define QIMAGE_C_H

#include <QtGui>
#include "pascalbind.h"

C_EXPORT QImageH QImage_Create();
C_EXPORT void QImage_Destroy(QImageH handle);
C_EXPORT QImageH QImage_Create2(const QSizeH size, QImage::Format format);
C_EXPORT QImageH QImage_Create3(int width, int height, QImage::Format format);
C_EXPORT QImageH QImage_Create4(uchar* data, int width, int height, QImage::Format format, QImageCleanupFunction cleanupFunction, void* cleanupInfo);
C_EXPORT QImageH QImage_Create6(uchar* data, int width, int height, int bytesPerLine, QImage::Format format, QImageCleanupFunction cleanupFunction, void* cleanupInfo);
C_EXPORT QImageH QImage_Create8(const char* const xpm);
C_EXPORT QImageH QImage_Create9(PWideString fileName, const char* format);
C_EXPORT QImageH QImage_Create10(const QImageH AnonParam1);
C_EXPORT void QImage_swap(QImageH handle, QImageH other);
C_EXPORT bool QImage_isNull(QImageH handle);
C_EXPORT int QImage_devType(QImageH handle);
C_EXPORT void QImage_detach(QImageH handle);
C_EXPORT bool QImage_isDetached(QImageH handle);
C_EXPORT void QImage_copy(QImageH handle, QImageH retval, PRect rect);
C_EXPORT void QImage_copy2(QImageH handle, QImageH retval, int x, int y, int w, int h);
C_EXPORT QImage::Format QImage_format(QImageH handle);
C_EXPORT void QImage_convertToFormat(QImageH handle, QImageH retval, QImage::Format f, unsigned int flags);
C_EXPORT int QImage_width(QImageH handle);
C_EXPORT int QImage_height(QImageH handle);
C_EXPORT void QImage_size(QImageH handle, PSize retval);
C_EXPORT void QImage_rect(QImageH handle, PRect retval);
C_EXPORT int QImage_depth(QImageH handle);
C_EXPORT int QImage_colorCount(QImageH handle);
C_EXPORT int QImage_bitPlaneCount(QImageH handle);
C_EXPORT QRgb QImage_color(QImageH handle, int i);
C_EXPORT void QImage_setColor(QImageH handle, int i, QRgb c);
C_EXPORT void QImage_setColorCount(QImageH handle, int AnonParam1);
C_EXPORT bool QImage_allGray(QImageH handle);
C_EXPORT bool QImage_isGrayscale(QImageH handle);
C_EXPORT uchar* QImage_bits(QImageH handle);
C_EXPORT const uchar* QImage_constBits(QImageH handle);
C_EXPORT int QImage_byteCount(QImageH handle);
C_EXPORT uchar* QImage_scanLine(QImageH handle, int AnonParam1);
C_EXPORT const uchar* QImage_constScanLine(QImageH handle, int AnonParam1);
C_EXPORT int QImage_bytesPerLine(QImageH handle);
C_EXPORT bool QImage_valid(QImageH handle, int x, int y);
C_EXPORT bool QImage_valid2(QImageH handle, const QPointH pt);
C_EXPORT int QImage_pixelIndex(QImageH handle, int x, int y);
C_EXPORT int QImage_pixelIndex2(QImageH handle, const QPointH pt);
C_EXPORT QRgb QImage_pixel(QImageH handle, int x, int y);
C_EXPORT QRgb QImage_pixel2(QImageH handle, const QPointH pt);
C_EXPORT void QImage_setPixel(QImageH handle, int x, int y, uint index_or_rgb);
C_EXPORT void QImage_setPixel2(QImageH handle, const QPointH pt, uint index_or_rgb);
C_EXPORT qreal QImage_devicePixelRatio(QImageH handle);
C_EXPORT void QImage_setDevicePixelRatio(QImageH handle, qreal scaleFactor);
C_EXPORT void QImage_fill(QImageH handle, uint pixel);
C_EXPORT void QImage_fill2(QImageH handle, const QColorH color);
C_EXPORT void QImage_fill3(QImageH handle, Qt::GlobalColor color);
C_EXPORT bool QImage_hasAlphaChannel(QImageH handle);
C_EXPORT void QImage_setAlphaChannel(QImageH handle, const QImageH alphaChannel);
C_EXPORT void QImage_alphaChannel(QImageH handle, QImageH retval);
C_EXPORT void QImage_createAlphaMask(QImageH handle, QImageH retval, unsigned int flags);
C_EXPORT void QImage_createHeuristicMask(QImageH handle, QImageH retval, bool clipTight);
C_EXPORT void QImage_createMaskFromColor(QImageH handle, QImageH retval, QRgb color, Qt::MaskMode mode);
C_EXPORT void QImage_scaled(QImageH handle, QImageH retval, int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
C_EXPORT void QImage_scaled2(QImageH handle, QImageH retval, const QSizeH s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode);
C_EXPORT void QImage_scaledToWidth(QImageH handle, QImageH retval, int w, Qt::TransformationMode mode);
C_EXPORT void QImage_scaledToHeight(QImageH handle, QImageH retval, int h, Qt::TransformationMode mode);
C_EXPORT void QImage_transformed(QImageH handle, QImageH retval, const QMatrixH matrix, Qt::TransformationMode mode);
C_EXPORT void QImage_trueMatrix(QMatrixH retval, const QMatrixH AnonParam1, int w, int h);
C_EXPORT void QImage_transformed2(QImageH handle, QImageH retval, const QTransformH matrix, Qt::TransformationMode mode);
C_EXPORT void QImage_trueMatrix2(QTransformH retval, const QTransformH AnonParam1, int w, int h);
C_EXPORT void QImage_mirrored(QImageH handle, QImageH retval, bool horizontally, bool vertically);
C_EXPORT void QImage_rgbSwapped(QImageH handle, QImageH retval);
C_EXPORT void QImage_invertPixels(QImageH handle, QImage::InvertMode AnonParam1);
C_EXPORT bool QImage_load(QImageH handle, QIODeviceH device, const char* format);
C_EXPORT bool QImage_load2(QImageH handle, PWideString fileName, const char* format);
C_EXPORT bool QImage_loadFromData(QImageH handle, const uchar* buf, int len, const char* format);
C_EXPORT bool QImage_loadFromData2(QImageH handle, const QByteArrayH data, const char* aformat);
C_EXPORT bool QImage_save(QImageH handle, PWideString fileName, const char* format, int quality);
C_EXPORT bool QImage_save2(QImageH handle, QIODeviceH device, const char* format, int quality);
C_EXPORT void QImage_fromData(QImageH retval, const uchar* data, int size, const char* format);
C_EXPORT void QImage_fromData2(QImageH retval, const QByteArrayH data, const char* format);
C_EXPORT qint64 QImage_cacheKey(QImageH handle);
C_EXPORT QPaintEngineH QImage_paintEngine(QImageH handle);
C_EXPORT int QImage_dotsPerMeterX(QImageH handle);
C_EXPORT int QImage_dotsPerMeterY(QImageH handle);
C_EXPORT void QImage_setDotsPerMeterX(QImageH handle, int AnonParam1);
C_EXPORT void QImage_setDotsPerMeterY(QImageH handle, int AnonParam1);
C_EXPORT void QImage_offset(QImageH handle, PQtPoint retval);
C_EXPORT void QImage_setOffset(QImageH handle, const QPointH AnonParam1);
C_EXPORT void QImage_textKeys(QImageH handle, QStringListH retval);
C_EXPORT void QImage_text(QImageH handle, PWideString retval, PWideString key);
C_EXPORT void QImage_setText(QImageH handle, PWideString key, PWideString value);

#endif
