// cdi2isoDlg.h : header file
//

#if !defined(AFX_CDI2ISODLG_H__9D51EEBB_FA3F_4D4D_9EFA_219A6EA218B3__INCLUDED_)
#define AFX_CDI2ISODLG_H__9D51EEBB_FA3F_4D4D_9EFA_219A6EA218B3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCdi2isoDlg dialog

class CCdi2isoDlg : public CDialog
{
// Construction
public:
	CCdi2isoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCdi2isoDlg)
	enum { IDD = IDD_CDI2ISO_DIALOG };
	CString	m_pathName;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCdi2isoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCdi2isoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CDI2ISODLG_H__9D51EEBB_FA3F_4D4D_9EFA_219A6EA218B3__INCLUDED_)
