
// BmpTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CBmpTestApp:
// �йش����ʵ�֣������ BmpTest.cpp
//

class CBmpTestApp : public CWinApp
{
public:
	CBmpTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CBmpTestApp theApp;