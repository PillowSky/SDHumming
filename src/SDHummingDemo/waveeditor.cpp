// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "waveeditor.h"

/////////////////////////////////////////////////////////////////////////////
// CWaveEditor

IMPLEMENT_DYNCREATE(CWaveEditor, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CWaveEditor properties

/////////////////////////////////////////////////////////////////////////////
// CWaveEditor operations

void CWaveEditor::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

long CWaveEditor::StartRecord()
{
	long result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CWaveEditor::StopRecord()
{
	long result;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CWaveEditor::StartPlay()
{
	long result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CWaveEditor::StopPlay()
{
	long result;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CWaveEditor::LoadWavFile(LPCTSTR filename)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		filename);
	return result;
}

long CWaveEditor::SaveWavFile(LPCTSTR filename)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		filename);
	return result;
}

long CWaveEditor::SelectWave(long startpoint, long endpoint)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		startpoint, endpoint);
	return result;
}

long CWaveEditor::LoadWavDlg()
{
	long result;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CWaveEditor::SaveWavDlg()
{
	long result;
	InvokeHelper(0xa, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

long CWaveEditor::LoadWithMask(LPCTSTR filename, LPCTSTR mask)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR VTS_BSTR;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		filename, mask);
	return result;
}

long CWaveEditor::DelSelectWave()
{
	long result;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

CString CWaveEditor::GetSelectedInfo()
{
	CString result;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString CWaveEditor::GetSelectedPath()
{
	CString result;
	InvokeHelper(0xe, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
	return result;
}

long CWaveEditor::DrawPitch(LPCTSTR str)
{
	long result;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xf, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		str);
	return result;
}
