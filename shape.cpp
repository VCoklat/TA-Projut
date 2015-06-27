#include <iostream>
#include "shape.h"
#include "circle.h"

using namespace std;

string Shape::getJenisShape(){
	return jenisShape;
}

float Shape::getLuas(){
	return luas;
}

float Shape::getKeliling(){
	return keliling;
}

bool Shape::sortByLuas(Shape *a, Shape *b)
{
	a->hitungLuas();
	b->hitungLuas();
	return a->getLuas()<b->getLuas();
}
bool Shape::sortByKeliling(Shape *a, Shape *b)
{
	a->hitungKeliling();
	b->hitungKeliling();
	return a->getKeliling()<b->getKeliling();	
}/*
void Shape::printDetails()
{
	cout<<jarijari<<" | "<<luas<<" | "<<keliling<<endl;
}

void Shape::tampilluas()
{
	int i=0;
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
	cout<<"Jari-jari | Luas | Keliling "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		shapes[i]->printDetails();
	}
}*/

