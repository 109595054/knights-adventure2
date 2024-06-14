

#if !defined(AFX_MAINFRM_H__243A7A49_6962_11D3_9B4D_BAD1A91E5344__INCLUDED_)
#define AFX_MAINFRM_H__243A7A49_6962_11D3_9B4D_BAD1A91E5344__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CMainFrame : public CFrameWnd
{
protected: // create from serialization only
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Attributes
public:
private:
	bool isFullScreen;
	int  isToolBarVisible;
	int  isStatusBarVisible;
	CMenu *pMenu;
	//CRect WindowRect;
// Operations
public:
	void SetFullScreen(bool);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;

// Generated message map functions
protected:
	//{{AFX_MSG(CMainFrame)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnToggleFullscreen();
	afx_msg void OnPaint();
	afx_msg void OnButtonFullscreen();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__243A7A49_6962_11D3_9B4D_BAD1A91E5344__INCLUDED_)
