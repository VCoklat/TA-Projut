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
	//Luas();
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
			jari[index]=r;
			luas[index]=r*r*PI;
			index++;
		}	
	sort(jari,jari+index);
	sort(luas,luas+index);
	fclose (file);    
}
/*void Circle::sort(a,a)
{
	std::sort(a,a+index);
}*/
void Circle::Luas()
{	
	for (int i=0;i<index;i++)
	{
		cout<<"radius : "<<jari[i]<<" luas : "<<luas[i]<<endl;
	}
}
/*void Circle::printAll()
{
	for (int i=0;i<index;i++)
	{
		cout<<jari[i]<<endl;
	}
}*/
void Circle::saveToFile(char *filename)
{
	ofstream save (filename);
	for (int i=0;i<index;i++)
	{
		save<<jari[i]<<endl;
	}
	save.close();
}