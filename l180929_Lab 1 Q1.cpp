// Lab 1 PF Rev Q1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n=0; 
	cout<<"Enter a number: ";
	cin>> n;
	for(int i=1; i<=(2*n-1); i++){
		for(int z=1; z<=2*n; z++){
			if(z<=i && i<=n)
 				cout<<i;
			else if(i<=n && 2*n-i+1<=z)
				cout<<i;
			else if(i>n && z<(2*n-i+1))  
				cout<<i;
			else if(i>n && i-n>=2*n-z)
				cout<<i;
			else
				cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

