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
	int r;
	//ifstream file (filename);
	FILE* file = fopen (filename, "r");
		while(!feof (file))
		{
			fscanf (file, "%d", &r); 
			ukuran1[index]=r*r*PI;
			index++;
		}	
		sort();
	fclose (file);    
}
void Circle::sort()
{
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
}