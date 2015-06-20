#include "square.h"

//Constructor
Square::Square(){
	loadFromFile((char *)"square.txt");
	//Luas();
}

//Destructors
Square::~Square(){
	saveToFile((char *)"outsquare.txt");
}

void Square::loadFromFile(char *filename)
{
	int s;
	FILE* file = fopen (filename, "s"); //baca file
		while(!feof (file))
		{
			fscanf (file, "%d", &s); 
			jariList.push_back(s); // memasukkan data ke dalam vektor
		}	
	sorting();
	fclose (file);    
}

void Square::sorting()
{
	std::sort(sisiList.begin(),sisiList.end());//untuk sorting
}

void Square::Tambah(double a)
{
	sisiList.push_back(a);
}

void Square::Kurang(double a)
{
	int i=0;
	while(i<sisiList.size())
	{
		if (a==sisiList[i])
		{
			sisiList.erase(sisiList.begin()+i);
			i--;
		}
		i++;
	}
}

void Square::Luas()
{	
	for(int i=0;i<sisiList.size();i++)
	{
		Asquare.push_back(sisiList[i]*sisiList[i]);
		cout<<"Sisi : "<<sisiList[i]<<" luas : "<<Asquare[i]<<endl; //output sisi & luas
	}
}

void Square::Keliling()
{	
	for(int i=0;i<sisiList.size();i++)
	{
		Ksquare.push_back(sisiList[i]*4);
		cout<<"Sisi : "<<sisiList[i]<<" Keliling : "<<Ksquare[i]<<endl;
	}
}

void Square::saveToFile(char *filename)
{
	ofstream save (filename);
	for (int i=0;i<sisiList.size();i++)
	{
		save<<sisiList[i]<<endl; //save data
	}
	save.close();
}
