#pragma once


// TransferFailDlg 对话框

class TransferFailDlg : public CDialogEx
{
	DECLARE_DYNAMIC(TransferFailDlg)

public:
	TransferFailDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~TransferFailDlg();

// 对话框数据
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};

#include "HomePage.h"