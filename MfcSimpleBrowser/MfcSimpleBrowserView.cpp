
// MfcSimpleBrowserView.cpp : CMfcSimpleBrowserView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MfcSimpleBrowser.h"
#endif

#include "MfcSimpleBrowserDoc.h"
#include "MfcSimpleBrowserView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMfcSimpleBrowserView

IMPLEMENT_DYNCREATE(CMfcSimpleBrowserView, CHtmlView)

BEGIN_MESSAGE_MAP(CMfcSimpleBrowserView, CHtmlView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CHtmlView::OnFilePrint)
END_MESSAGE_MAP()

// CMfcSimpleBrowserView ����/����

CMfcSimpleBrowserView::CMfcSimpleBrowserView()
{
	// TODO:  �ڴ˴���ӹ������

}

CMfcSimpleBrowserView::~CMfcSimpleBrowserView()
{
}

BOOL CMfcSimpleBrowserView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CHtmlView::PreCreateWindow(cs);
}

void CMfcSimpleBrowserView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();

	Navigate2(_T("http://www.msdn.microsoft.com/visualc/"),NULL,NULL);
}


// CMfcSimpleBrowserView ��ӡ



// CMfcSimpleBrowserView ���

#ifdef _DEBUG
void CMfcSimpleBrowserView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CMfcSimpleBrowserView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

CMfcSimpleBrowserDoc* CMfcSimpleBrowserView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMfcSimpleBrowserDoc)));
	return (CMfcSimpleBrowserDoc*)m_pDocument;
}
#endif //_DEBUG


// CMfcSimpleBrowserView ��Ϣ�������
