#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

using namespace std;

const float PI = 3.1415926;

class Circle : public Shape
{
	public:
		Circle();
		void loadFromFile(char *filename);
		void tampilluas();
		void tampilkeliling();
		//void saveToFile(char *filename);
		Circle(int jarijariBaru);
		void hitungLuas();
		void hitungKeliling();
		void printDetails();
		int getjarijari();
	protected:
		int jarijari;
};
#endif
