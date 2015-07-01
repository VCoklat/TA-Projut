#include "circle.h"

using namespace std;


Circle::Circle()
{
	jarijari=0;
	jenisShape="Circle";
	hitungLuas();
	hitungKeliling();
}

Circle::Circle(int jarijariBaru)
{
	jarijari=jarijariBaru;
	jenisShape="Circle";
	hitungLuas();
	hitungKeliling();
} 

void Circle::hitungLuas()
{
	luas=PI*jarijari*jarijari;
}

void Circle::hitungKeliling()
{
	keliling=2*PI*jarijari;	
}

void Circle::printDetails()
{
	cout<<setw(8)<<jarijari<<" | "<<setw(6)<<luas<<" | "<<setw(8)<<keliling<<" | "<<endl;
}

int Circle :: getjarijari()
{
	return jarijari;
}
