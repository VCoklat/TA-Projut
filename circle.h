#ifndef Circle_H
#define Circle_H

#include "shape.h"


class Circle : public Shape {
    private:
        int radius;
        static const double PI = 3.14159265358979323846;

    public:
		string r;
		void loadFromFile(char *filename);
		void saveToFile(char *filename);
		void Luas();
		void Keliling();
		void Tambah(double a);
		void Kurang(double a);
		Circle(string r);
		Circle();
		~Circle();
		void printAll();
		int getSize();
		int index;
		void sorting();
        Circle (int radius) : radius(radius) {}

        virtual int getArea() const {
            return PI * radius*radius;
        };

        virtual int setRadius(int radius){
            radius = radius;
        }
};
#endif