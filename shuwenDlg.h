﻿
// shuwenDlg.h: 头文件
//

#pragma once


// CshuwenDlg 对话框
class CshuwenDlg : public CDialogEx
{
// 构造
public:
	CshuwenDlg(CWnd* pParent = nullptr);	// 标准构造函数
	CBrush m_brBackground; // 背景画刷
	CListBox m_NavigationList; // 导航列表

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SHUWEN_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor); // 
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
