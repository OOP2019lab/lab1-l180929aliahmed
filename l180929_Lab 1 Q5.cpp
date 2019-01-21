// Lab 1 Q3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

void swap(int& x, int& y){
	int z=0;
	z=x;
	x=y;
	y=z;
}

int _tmain(int argc, _TCHAR* argv[])
{
	ofstream fout("D:\\l180929\\Lab 1 Q3\\results_l180929.txt");
	int size=0;
	cout<<"Enter size of array: "<<endl;
	cin>>size;
	int* num=new int[size];
	cout<<"Enter "<<size<<" numbers:"<<endl;
	for(int i=0; i<size; i++){
		cin>>*(num+i);
	}
	
	bool order=false;
	while(!order){
		order=true;
		for(int i=1; i<size; i++){
			if( *(num+i) < *(num+(i-1))){
				swap(*(num+i), *(num+(i-1)));
				order=false;
			}
		}
	}
	
	cout<<endl<<"Numbers in ascending order are:";
	fout<<"Numbers in ascending order are:";
	for(int i=0; i<size; i++){
		cout<<endl<<*(num+i);
		fout<<endl<<*(num+i);
	}
	cout<<endl<<endl;
	return 0;
}

