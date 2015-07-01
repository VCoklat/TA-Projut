#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

using namespace std;

class Rectangle : public Shape
{
	public:
		Rectangle();
		void loadFromFile(char *filename);
		void tampilluas();
		void tampilkeliling();
		void tambah(int a, int b);
		void hapus(int a, int b);
		void saveToFile(char *filename);
		Rectangle(int panjangBaru, int lebarBaru);
		void hitungLuas();
		void hitungKeliling();
		void printDetails();
		int getpanjang();
		int getlebar();
	protected:
		int panjang;
		int lebar;
};
#endif
