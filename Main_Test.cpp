#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <windows.h>
#include "Header.h"

// ��� ���������� ������� � ������� ������ ��������. ������� ���������� �� ������������ �����������. ����������� �����������.
int _tmain()
{
	StudentName();
	system ("PAUSE");
	StudentGroup();
    system ("PAUSE");
	return 0;
}
