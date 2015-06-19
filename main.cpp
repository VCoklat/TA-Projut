#include <string>
#include <iostream>
#include <fstream>
#include <malloc.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <cstring>
#include "circle.h"
using namespace std;

Circle lingkaran;
int main()
{
	lingkaran.sort();
	lingkaran.printAll();
	/*int i=0;
	while(!EOF)
	{
		cout<<ukuran1[i]<<endl;
		i++;
	}/*
	string ukuran;
	string ukuran1[100];
	int index=0;
	ifstream file("circle.txt");
	if(file.is_open())
	{
		while(!file.eof())
		{
			getline(file,ukuran);
			ukuran1[index]=ukuran;
			index++;
			//cout<<ukuran1[index]<<endl;
		}	
		file.close();
		for (int i=0;i<index-1;i++){
		cout<<ukuran1[i]<<endl;
		}
	}*/
	return 0;
}