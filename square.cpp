#include "square.h"

using namespace std;

Square::Square()
{
	sisi=0;
	jenisShape="Square";
	hitungLuas();
	hitungKeliling();
}

Square::Square(int sisiBaru)
{
	sisi=sisiBaru;
	jenisShape="Square";
	hitungLuas();
	hitungKeliling();
} 

void Square::hitungLuas()
{
	luas=sisi*sisi;
}

void Square::hitungKeliling()
{
	keliling=4*sisi;	
}

void Square::printDetails()
{
	cout<<setw(8)<<sisi<<" | "<<setw(6)<<luas<<" | "<<setw(8)<<keliling<<" | "<<endl;
}

int Square :: getsisi()
{
	return sisi;
}