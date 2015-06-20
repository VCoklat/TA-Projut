#ifndef Circle_H
#define Circle_H
using namespace std;
#include "shape.h"
#include <string>
#include <vector>


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
		Circle(string r);
		Circle();
		~Circle();
		double luas[100],jari[100], keliling[100];
		void printAll();
		int getSize();
		int index;
		//void sort(a,a);
        Circle (int radius) : radius(radius) {}

        virtual int getArea() const {
            return PI * radius*radius;
        };

        virtual int setRadius(int radius){
            radius = radius;
        }
};
#endif