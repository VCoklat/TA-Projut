#ifndef Square_H
#define Square_H

#include "shape.h"


class Square : public Shape {
    private:
        int sisi;

    public:
		void loadFromFile(char *filename);
		void saveToFile(char *filename);
		void Luaskotak();
		void Kelilingkotak();
		void Tambah(double a);
		void Kurang(double a);
		Square();
		~Square();
		void sorting();
       Square (int sisi) : sisi(sisi) {}

        virtual int getArea() const {
            return sisi*sisi;
        };
		
        virtual int setSisi(int sisi){
            sisi = sisi;
        }
};
#endif
