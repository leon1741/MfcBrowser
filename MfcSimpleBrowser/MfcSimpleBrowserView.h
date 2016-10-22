
// MfcSimpleBrowserView.h : CMfcSimpleBrowserView ��Ľӿ�
//

#pragma once


class CMfcSimpleBrowserView : public CHtmlView
{
protected: // �������л�����
	CMfcSimpleBrowserView();
	DECLARE_DYNCREATE(CMfcSimpleBrowserView)

// ����
public:
	CMfcSimpleBrowserDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CMfcSimpleBrowserView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MfcSimpleBrowserView.cpp �еĵ��԰汾
inline CMfcSimpleBrowserDoc* CMfcSimpleBrowserView::GetDocument() const
   { return reinterpret_cast<CMfcSimpleBrowserDoc*>(m_pDocument); }
#endif

