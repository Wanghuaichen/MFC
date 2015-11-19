#if !defined(AFX_MAPPOLYGON_H__F6A94D77_B4F5_4C25_8267_B784B0ED50B0__INCLUDED_)
#define AFX_MAPPOLYGON_H__F6A94D77_B4F5_4C25_8267_B784B0ED50B0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CBrush1;
class CGradient;
class CPen1;

/////////////////////////////////////////////////////////////////////////////
// CMapPolygon wrapper class

class CMapPolygon : public COleDispatchDriver
{
public:
	CMapPolygon() {}		// Calls COleDispatchDriver default constructor
	CMapPolygon(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMapPolygon(const CMapPolygon& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CBrush1 GetBrush();
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	CGradient GetGradient();
	BOOL GetParentBrush();
	void SetParentBrush(BOOL bNewValue);
	BOOL GetParentPen();
	void SetParentPen(BOOL bNewValue);
	CPen1 GetPen();
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	double GetZ();
	void SetZ(double newValue);
	long AddXY(double X, double Y);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAPPOLYGON_H__F6A94D77_B4F5_4C25_8267_B784B0ED50B0__INCLUDED_)