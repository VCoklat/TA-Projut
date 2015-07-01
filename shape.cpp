#include "shape.h"

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
}