/*
 * Public Domain 2003 Dale Rahn
 *
 * $OpenBSD: prog1.C,v 1.1 2003/02/01 19:56:17 drahn Exp $
 */
#include <iostream>
#include "ab.h"

using namespace std;

BB BBmain("main");

int a;
int
main()
{
	cout << "main\n";
	return 0;
}
