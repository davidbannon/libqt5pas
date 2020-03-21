//******************************************************************************
//  Copyright (c) 2005-2013 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#ifndef QDESKTOPWIDGET_HOOK_C_H
#define QDESKTOPWIDGET_HOOK_C_H

#include "qdesktopwidget_hook.h"

C_EXPORT QDesktopWidget_hookH QDesktopWidget_hook_Create(QObjectH handle);
C_EXPORT void QDesktopWidget_hook_Destroy(QDesktopWidget_hookH handle);
C_EXPORT void QDesktopWidget_hook_hook_resized(QDesktopWidget_hookH handle, QHookH hook);
C_EXPORT void QDesktopWidget_hook_hook_workAreaResized(QDesktopWidget_hookH handle, QHookH hook);
C_EXPORT void QDesktopWidget_hook_hook_screenCountChanged(QDesktopWidget_hookH handle, QHookH hook);

#endif
