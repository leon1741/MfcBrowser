
// MfcSimpleBrowser.h : MfcSimpleBrowser Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMfcSimpleBrowserApp:
// �йش����ʵ�֣������ MfcSimpleBrowser.cpp
//

class CMfcSimpleBrowserApp : public CWinApp
{
public:
	CMfcSimpleBrowserApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMfcSimpleBrowserApp theApp;
