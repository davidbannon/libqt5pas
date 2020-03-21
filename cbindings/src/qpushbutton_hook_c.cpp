//******************************************************************************
//  Copyright (c) 2005-2013 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


#include "qpushbutton_hook_c.h"

QPushButton_hookH QPushButton_hook_Create(QObjectH handle)
{
	return (QPushButton_hookH) new QPushButton_hook((QObject*)handle);
}

void QPushButton_hook_Destroy(QPushButton_hookH handle)
{
	delete (QPushButton_hook *)handle;
}

