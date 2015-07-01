#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <vector>
#include <iostream>
#include <malloc.h>
#include <stdlib.h>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <stdlib.h>

using namespace std;

class Shape
{
	public:
		tampilluas();
		string jenisShape;
		string getJenisShape();	
		float getLuas();
		float getKeliling();
		virtual void hitungLuas()=0; //pure virtual function
		virtual void hitungKeliling()=0;
		virtual void printDetails()=0;
		//Untuk sorting:
		static bool sortByLuas(Shape *a, Shape *b);
		static bool sortByKeliling(Shape *a, Shape *b);
	protected:
		float luas;
		float keliling;
};
#endif
