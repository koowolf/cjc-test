// mygtest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "gtest.h"

int _tmain(int argc, _TCHAR* argv[])
{
    testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	getchar();
    return 0;
}