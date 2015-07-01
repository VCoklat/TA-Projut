#include "rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
	panjang=0;
	lebar=0;
	jenisShape="Rectangle";
	hitungLuas();
	hitungKeliling();
}

Rectangle::Rectangle(int panjangBaru, int lebarBaru)
{
	panjang=panjangBaru;
	lebar = lebarBaru;
	jenisShape="Rectangle";
	hitungLuas();
	hitungKeliling();
} 

void Rectangle::hitungLuas()
{
	luas=panjang*lebar;
}

void Rectangle::hitungKeliling()
{
	keliling=2*(panjang+lebar);	
}

void Rectangle::printDetails()
{
	cout<<setw(8)<<panjang<<" | "<<setw(6)<<luas<<" | "<<setw(8)<<keliling<<" | "<<setw(8)<<lebar<<endl;
}

int Rectangle :: getpanjang()
{
	return panjang;
}

int Rectangle :: getlebar()
{
	return lebar;
}