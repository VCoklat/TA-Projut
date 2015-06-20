/*#include <string>
#include <iostream>
#include <fstream>
#include <malloc.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <cstring>
#include "circle.h"

//Constructor
Circle::Circle(){
	loadFromFile((char *)"circle.txt");
}

//Destructors
Circle::~Circle(){
	saveToFile((char *)"out.txt");
}

void Circle::loadFromFile(char *filename)
{
	index=0;
	ifstream file (filename);
	//string r;
	if(file.is_open())
	{
		while(!file.eof())
		{
			getline(file,r);
			ukuran1[index]=r;
			index++;
		}	
		sort();
	}	else (cout<<"ERROR: File not found",exit(EXIT_FAILURE),1);
}
void Circle::sort()
{
	for (int i=0;i<index;i++)
		for (int j=0;j<i;j++)
			std::sort(ukuran1,ukuran1+index);
}
void Circle::printAll()
{
	for (int i=0;i<index;i++)
	{
		cout<<ukuran1[i]<<endl;
	}
}
void Circle::saveToFile(char *filename)
{
	ofstream save (filename);
	for (int i=0;i<index;i++)
	{
		save<<ukuran1[i]<<endl;
	}
	save.close();
}*/