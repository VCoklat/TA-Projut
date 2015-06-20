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
	FILE* file = fopen (filename, "r"); //baca file
		while(!feof (file))
		{
			fscanf (file, "%d", &r); 
			jariList.push_back(r); // memasukkan data ke dalam vektor
		}	
	sorting();
	fclose (file);    
}

void Circle::sorting()
{
	std::sort(jariList.begin(),jariList.end());//untuk sorting
}

void Circle::Tambah(double a)
{
	jariList.push_back(a);
}

void Circle::Kurang(double a)
{
	for (int i=0;i<jariList.size();i++)
	{
		if (a==jariList[i])
		{
			jariList.erase(jariList.begin()+i);
		}
	}
}

void Circle::Luas()
{	
	for(int i=0;i<jariList.size();i++)
	{
		Lling.push_back(jariList[i]*jariList[i]*PI);
		cout<<"radius : "<<jariList[i]<<" luas : "<<Lling[i]<<endl; //output radius beserta Luas
	}
}

void Circle::Keliling()
{	
	for(int i=0;i<jariList.size();i++)
	{
		Kling.push_back(jariList[i]*2*PI);
		cout<<"radius : "<<jariList[i]<<" Keliling : "<<Kling[i]<<endl;
	}
}

void Circle::saveToFile(char *filename)
{
	ofstream save (filename);
	for (int i=0;i<jariList.size();i++)
	{
		save<<jariList[i]<<endl; //save data
	}
	save.close();
}