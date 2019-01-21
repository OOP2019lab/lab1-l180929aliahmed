// Lab 1 Q1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x=0, y=0;
	int* p=nullptr;
	int* q=nullptr;
	srand(time(0));
	x=rand()%100;
	y=rand()%100;
	p=&x;
	q=&y;
	cout<<"The Values of the variables are:"<<endl;
	cout<<"x:	"<<x<<endl;
	cout<<"y:	"<<y<<endl;
	cout<<"p:	"<<p<<endl;
	cout<<"q:	"<<q<<endl;
	cout<<"*p:	"<<*p<<endl;
	cout<<"*q:	"<<*q<<endl<<endl;

	int swap=0;
	swap=x;
	x=y;
	y=swap;
	

	cout<<"The Values of the variables after swapping are:"<<endl;
	cout<<"x:	"<<x<<endl;
	cout<<"y:	"<<y<<endl;
	cout<<"p:	"<<p<<endl;
	cout<<"q:	"<<q<<endl;
	cout<<"*p:	"<<*p<<endl;
	cout<<"*q:	"<<*q<<endl<<endl;

	int* swapptr=nullptr;
	swapptr=p;
	p=q;
	q=swapptr;

	cout<<"The Values of the variables after address swapping are:"<<endl;
	cout<<"x:	"<<x<<endl;
	cout<<"y:	"<<y<<endl;
	cout<<"p:	"<<p<<endl;
	cout<<"q:	"<<q<<endl;
	cout<<"*p:	"<<*p<<endl;
	cout<<"*q:	"<<*q<<endl<<endl;

	return 0;
}

