// cdi2iso.h : main header file for the CDI2ISO application
//

#if !defined(AFX_CDI2ISO_H__655E2461_0EBB_4236_8D8B_B6507A536B26__INCLUDED_)
#define AFX_CDI2ISO_H__655E2461_0EBB_4236_8D8B_B6507A536B26__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCdi2isoApp:
// See cdi2iso.cpp for the implementation of this class
//

class CCdi2isoApp : public CWinApp
{
public:
	CCdi2isoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCdi2isoApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCdi2isoApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CDI2ISO_H__655E2461_0EBB_4236_8D8B_B6507A536B26__INCLUDED_)
