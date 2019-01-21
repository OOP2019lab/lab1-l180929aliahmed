// Lab 1 PF Rev Q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream fin("D:\\l180929\\Lab 1 PF Rev Q2\\Sample input.txt");
	int n=0, x=0, p=0;
	fin>>n;
	for(int i=0; i<n; i++){
		fin>>x>>p;
		cout<<pow(x,p)<<endl;
	}
	return 0;
}

