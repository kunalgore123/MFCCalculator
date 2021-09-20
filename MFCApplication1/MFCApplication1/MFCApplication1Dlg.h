
// MFCApplication1Dlg.h : header file
//

#pragma once
#include "afxwin.h"


// CMFCApplication1Dlg dialog
class CMFCApplication1Dlg : public CDialogEx
{
// Construction
public:
	CMFCApplication1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CEdit m_firstNumber;
	void AppendDigit(int IDC_ITEM,char digit);

	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButtonOne();
	afx_msg void OnBnClickedButtonTwo();
	afx_msg void OnBnClickedButtonPlus();
	afx_msg void OnBnClickedButtonCe();
	afx_msg void OnBnClickedButtonThree();
	afx_msg void OnBnClickedButtonFour();
	afx_msg void OnBnClickedButtonFive();
	afx_msg void OnBnClickedButtonSix();
	afx_msg void OnBnClickedButtonSeven();
	afx_msg void OnBnClickedButtonEight();
	afx_msg void OnBnClickedButtonNine();
	afx_msg void OnBnClickedButtonZero();
	afx_msg void OnBnClickedButtonMinus();
	afx_msg void OnBnClickedButtonEqual();
};
