#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

using namespace std;

class Square : public Shape
{
	public:
		Square();
		void loadFromFile(char *filename);
		void tampilluas();
		void tampilkeliling();
		void tambah(int a);
		void hapus(int a);
		void saveToFile(char *filename);
		Square(int sisiBaru);
		void hitungLuas();
		void hitungKeliling();
		void printDetails();
		int getsisi();
	protected:
		int sisi;
};
#endif
