#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "Header.h"
using namespace std;

int _tmain()
{   cout << "This application created by..." << endl;
	StudentName();
	system ("PAUSE");
	StudentGroup();
    system ("PAUSE");
	return 0;
}
