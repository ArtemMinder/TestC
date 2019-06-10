#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "RAND_MAX = " << RAND_MAX << endl; 
	cout << "random number = " << rand() << endl;
	system("pause");
	return 0;
}