#include <string>
#include <iostream>
#include <fstream>
#include <malloc.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <cstring>
#include "square.h"

//Constructor
Square::Square(){
	loadFromFile((char *)"square.txt");
}

//Destructors
Square::~Square(){
	saveToFile((char *)"outsquare.txt");
}

void Square::loadFromFile(char *filename)
{
	index=0;
	ifstream file (filename);
	string s;
	if(file.is_open())
	{
		while(!file.eof())
		{
			getline(file,s);
		//ukuran1.push_back(s));
			ukuransisi[index]=s;
			index++;
		}	
	}	else (cout<<"ERROR: File not found",exit(EXIT_FAILURE),1);
}
void Square::sort()
{
	std::sort(ukuransisi,ukuransisi+index);
}
void Square::printAll()
{
	for (int i=0;i<index;i++)
	{
		cout<<ukuransisi[i]<<endl;
	}
}
void Square::saveToFile(char *filename)
{
	ofstream save (filename);
	for (int i=0;i<index;i++)
	{
		save<<ukuransisi[i]<<endl;
	}
	save.close();
}
