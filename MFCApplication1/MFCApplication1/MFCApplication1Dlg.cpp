
// MFCApplication1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication1Dlg dialog



CMFCApplication1Dlg::CMFCApplication1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFCApplication1Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_firstNumber);
}

BEGIN_MESSAGE_MAP(CMFCApplication1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication1Dlg::OnBnClickedButton1)
	//ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication1Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON_ONE, &CMFCApplication1Dlg::OnBnClickedButtonOne)
	ON_BN_CLICKED(IDC_BUTTON_TWO, &CMFCApplication1Dlg::OnBnClickedButtonTwo)
	ON_BN_CLICKED(IDC_BUTTON_PLUS, &CMFCApplication1Dlg::OnBnClickedButtonPlus)
	ON_BN_CLICKED(IDC_BUTTON_CE, &CMFCApplication1Dlg::OnBnClickedButtonCe)
	ON_BN_CLICKED(IDC_BUTTON_THREE, &CMFCApplication1Dlg::OnBnClickedButtonThree)
	ON_BN_CLICKED(IDC_BUTTON_FOUR, &CMFCApplication1Dlg::OnBnClickedButtonFour)
	ON_BN_CLICKED(IDC_BUTTON_FIVE, &CMFCApplication1Dlg::OnBnClickedButtonFive)
	ON_BN_CLICKED(IDC_BUTTON_SIX, &CMFCApplication1Dlg::OnBnClickedButtonSix)
	ON_BN_CLICKED(IDC_BUTTON_SEVEN, &CMFCApplication1Dlg::OnBnClickedButtonSeven)
	ON_BN_CLICKED(IDC_BUTTON_EIGHT, &CMFCApplication1Dlg::OnBnClickedButtonEight)
	ON_BN_CLICKED(IDC_BUTTON_NINE, &CMFCApplication1Dlg::OnBnClickedButtonNine)
	ON_BN_CLICKED(IDC_BUTTON_ZERO, &CMFCApplication1Dlg::OnBnClickedButtonZero)
	ON_BN_CLICKED(IDC_BUTTON_MINUS, &CMFCApplication1Dlg::OnBnClickedButtonMinus)
	ON_BN_CLICKED(IDC_BUTTON_EQUAL, &CMFCApplication1Dlg::OnBnClickedButtonEqual)
END_MESSAGE_MAP()


// CMFCApplication1Dlg message handlers

BOOL CMFCApplication1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCApplication1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCApplication1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCApplication1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication1Dlg::OnBnClickedButton1()
{
	CString Text1 = _T(""),Text2 = _T("");

	CWnd *cWnd = GetDlgItem(IDC_EDIT1);

	if (cWnd)	{
		cWnd->GetWindowTextW(Text1);
	}
	else{assert(cWnd, "cWnd is nullptr ");}

	cWnd = GetDlgItem(IDC_EDIT2);
	if (cWnd)	{
		cWnd->GetWindowTextW(Text2);
	}
	else{assert(cWnd, "cWnd is nullptr ");}

	cWnd = GetDlgItem(IDC_EDIT3);
	if (cWnd)	{
		CString result = _T("");
		result.Format(_T("%d"),_ttol(Text1)+_ttol(Text2));
		cWnd->SetWindowTextW(result);
	}
	else{assert(cWnd, "cWnd is nullptr ");}

}


//void CMFCApplication1Dlg::OnBnClickedButton2()
//{
//	// TODO: Add your control notification handler code here
//	CWnd *cWnd = GetDlgItem(IDC_EDIT4);
//	CString Text1 = _T(""),Text2 = _T("");
//	if (cWnd)	{
//		cWnd->GetWindowTextW(Text1);
//		cWnd->SetWindowTextW(Text1+"1");
//	}
//	else{assert(cWnd, "cWnd is nullptr ");}
//}

void CMFCApplication1Dlg :: AppendDigit(int IDC_ITEM,char digit)
{
	CWnd *cWnd = GetDlgItem(IDC_ITEM);
	CString Text1 = _T("");
	if (cWnd)	{
		cWnd->GetWindowTextW(Text1);
		cWnd->SetWindowTextW(Text1+digit);
	}
	else{assert(cWnd, "cWnd is nullptr ");}
}

void CMFCApplication1Dlg::OnBnClickedButtonOne()
{	
	AppendDigit(IDC_EDIT_CURRENT,'1');
}


void CMFCApplication1Dlg::OnBnClickedButtonTwo()
{
	AppendDigit(IDC_EDIT_CURRENT,'2');
}


void CMFCApplication1Dlg::OnBnClickedButtonThree()
{
	AppendDigit(IDC_EDIT_CURRENT,'3');
}


void CMFCApplication1Dlg::OnBnClickedButtonFour()
{
	AppendDigit(IDC_EDIT_CURRENT,'4');
}


void CMFCApplication1Dlg::OnBnClickedButtonFive()
{
	AppendDigit(IDC_EDIT_CURRENT,'5');
}


void CMFCApplication1Dlg::OnBnClickedButtonSix()
{
	AppendDigit(IDC_EDIT_CURRENT,'6');
}


void CMFCApplication1Dlg::OnBnClickedButtonSeven()
{
	AppendDigit(IDC_EDIT_CURRENT,'7');
}


void CMFCApplication1Dlg::OnBnClickedButtonEight()
{
	AppendDigit(IDC_EDIT_CURRENT,'8');
}


void CMFCApplication1Dlg::OnBnClickedButtonNine()
{
	AppendDigit(IDC_EDIT_CURRENT,'9');
}


void CMFCApplication1Dlg::OnBnClickedButtonZero()
{
	AppendDigit(IDC_EDIT_CURRENT,'0');
}


void CMFCApplication1Dlg::OnBnClickedButtonPlus()
{
	CWnd *cCurrentWnd = GetDlgItem(IDC_EDIT_CURRENT);
	CWnd *cBackupWnd = GetDlgItem(IDC_EDIT_BACKUP);
	CString CureentWndowText = _T(""),BackupWindowText = _T("");
	if (cCurrentWnd && cBackupWnd)	{
		cCurrentWnd->GetWindowTextW(CureentWndowText);
		cBackupWnd->GetWindowTextW(BackupWindowText);
		if (CureentWndowText == _T(""))
		{
			BackupWindowText.SetAt(BackupWindowText.GetLength() -1 , '\0');
			cBackupWnd->SetWindowTextW(BackupWindowText+"+");
			return;
		}

		if (BackupWindowText == _T("")){
			cBackupWnd->SetWindowTextW(CureentWndowText+"+");
			cCurrentWnd->SetWindowTextW(_T(""));
		}
		else	{
			if ('+' == BackupWindowText[BackupWindowText.GetLength() - 1])
			{
				CString result = _T("");
				BackupWindowText.SetAt(BackupWindowText.GetLength() -1 , '\0');
				result.Format(_T("%d"),	_ttol(BackupWindowText) + _ttol(CureentWndowText));
				cBackupWnd->SetWindowTextW(result + '+');
				cCurrentWnd->SetWindowTextW(_T(""));
			}
			else if('-' == BackupWindowText[BackupWindowText.GetLength() - 1])
			{
				CString result = _T("");
				BackupWindowText.SetAt(BackupWindowText.GetLength() -1 , '\0');
				result.Format(_T("%d"),	_ttol(BackupWindowText) - _ttol(CureentWndowText));
				cBackupWnd->SetWindowTextW(result + '+');
				cCurrentWnd->SetWindowTextW(_T(""));
			}
		}
	}
	else{assert(cCurrentWnd && cBackupWnd, "cWnd is nullptr ");}
}


void CMFCApplication1Dlg::OnBnClickedButtonMinus()
{
	CWnd *cCurrentWnd = GetDlgItem(IDC_EDIT_CURRENT);
	CWnd *cBackupWnd = GetDlgItem(IDC_EDIT_BACKUP);
	CString CureentWndowText = _T(""),BackupWindowText = _T("");
	if (cCurrentWnd && cBackupWnd)	{
		cCurrentWnd->GetWindowTextW(CureentWndowText);
		cBackupWnd->GetWindowTextW(BackupWindowText);
		if (CureentWndowText == _T(""))
		{
			BackupWindowText.SetAt(BackupWindowText.GetLength() -1 , '\0');
			cBackupWnd->SetWindowTextW(BackupWindowText+"-");
			return;
		}
		if (BackupWindowText == _T("")){
			cBackupWnd->SetWindowTextW(CureentWndowText+"-");
			cCurrentWnd->SetWindowTextW(_T(""));
		}
		else	{
			if ('+' == BackupWindowText[BackupWindowText.GetLength() - 1])
			{
				CString result = _T("");
				BackupWindowText.SetAt(BackupWindowText.GetLength() -1 , '\0');
				result.Format(_T("%d"),	_ttol(BackupWindowText) + _ttol(CureentWndowText));
				cBackupWnd->SetWindowTextW(result + '-');
				cCurrentWnd->SetWindowTextW(_T(""));
			}
			else if('-' == BackupWindowText[BackupWindowText.GetLength() - 1])
			{
				CString result = _T("");
				BackupWindowText.SetAt(BackupWindowText.GetLength() -1 , '\0');
				result.Format(_T("%d"),	_ttol(BackupWindowText) - _ttol(CureentWndowText));
				cBackupWnd->SetWindowTextW(result + '-');
				cCurrentWnd->SetWindowTextW(_T(""));
			}
		}
	}
	else{assert(cCurrentWnd && cBackupWnd, "cWnd is nullptr ");}
}

void CMFCApplication1Dlg::OnBnClickedButtonCe()
{
	// Set calculation window to blank
	CWnd *cCurrentWnd = GetDlgItem(IDC_EDIT_CURRENT);
	CWnd *cBackupWnd = GetDlgItem(IDC_EDIT_BACKUP);
	if (cCurrentWnd && cBackupWnd)	{
		cCurrentWnd->SetWindowTextW(_T(""));
		cBackupWnd	->SetWindowTextW(_T(""));
	}
	else{assert(cCurrentWnd && cBackupWnd, "cWnd is nullptr ");}
}


void CMFCApplication1Dlg::OnBnClickedButtonEqual()
{
	CWnd *cCurrentWnd = GetDlgItem(IDC_EDIT_CURRENT);
	CWnd *cBackupWnd = GetDlgItem(IDC_EDIT_BACKUP);

}
