﻿#pragma once
#include "afxdialogex.h"


// COptionsDlg 对话框

class COptionsDlg : public CDialogEx
{
	DECLARE_DYNAMIC(COptionsDlg)

public:
	COptionsDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~COptionsDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_OPTIONS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

	void EnableControlsAboutLoops(BOOL enable = TRUE);
	void EnableControlsAboutSound(BOOL enable = TRUE);
public:
	virtual BOOL OnInitDialog();
    virtual void OnOK();
	afx_msg void OnBnClickedCheckAutoLoop();
	afx_msg void OnBnClickedCheckPlaySound();
	afx_msg void OnBnClickedBtnSoundTest();

	CSpinButtonCtrl m_ctrlSpinTimeSpanWork;
	CSpinButtonCtrl m_ctrlSpinTimeSpanShortBreak;
	CSpinButtonCtrl m_ctrlSpinNumLoops;
	CComboBox m_ctrlSoundList;
	BOOL m_boolAutoLoop;
	BOOL m_boolPlaySound;
};
