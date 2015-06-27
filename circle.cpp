#include<iostream>
#include "circle.h"
#include "shape.h"

using namespace std;

//vector <Shape *> shapes;

Circle::Circle()
{
	jarijari=0;
	jenisShape="Circle";
	hitungLuas();
	hitungKeliling();
	loadFromFile((char *)"circle.txt");
}

void Circle::loadFromFile(char *filename)
{
	int r;
	FILE* file = fopen (filename, "r"); //baca file
		while(!feof (file))
		{
			fscanf (file, "%d", &r); 
			shapes.push_back(new Circle(r)); // memasukkan data ke dalam vektor
		}	
	fclose (file);    
}

Circle::Circle(int jarijariBaru)
{
	jarijari=jarijariBaru;
	jenisShape="Circle";
	hitungLuas();
	hitungKeliling();
} 

void Circle::hitungLuas()
{
	luas=PI*jarijari*jarijari;
}

void Circle::hitungKeliling()
{
	keliling=2*PI*jarijari;	
}

void Circle::printDetails()
{
	cout<<jarijari<<" | "<<luas<<" | "<<keliling<<endl;
}

void Circle::tampilluas()
{
	int i=0;
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
	cout<<"Jari-jari | Luas | Keliling "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Circle") shapes[i]->printDetails();
	}
}

void Circle::tampilkeliling()
{
	int i=0;
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
	cout<<"Jari-jari | Luas | Keliling "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Circle") shapes[i]->printDetails();
	}
}

int Circle :: getjarijari()
{
	return jarijari;
}


