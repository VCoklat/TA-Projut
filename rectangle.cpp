#include<iostream>
#include "rectangle.h"
#include "shape.h"

using namespace std;

vector <Shape *> shapes;

Rectangle::Rectangle()
{
	panjang=0;
	lebar=0;
	jenisShape="Rectangle";
	hitungLuas();
	hitungKeliling();
	loadFromFile((char *)"rectangle.txt");
}

Rectangle::~Rectangle(){
	saveToFile((char *)"outrect.txt");
}

void Rectangle::loadFromFile(char *filename)
{
	int pa;
	int le;
	FILE* file = fopen (filename, "r"); //baca file
		while(!feof (file))
		{
			fscanf (file, "%d", &pa, &le); 
			shapes.push_back(new Rectangle(pa, le)); // memasukkan data ke dalam vektor
		}	
	fclose (file);    
}

Rectangle::Rectangle(int panjangBaru)
{
	panjang=panjangBaru;
	jenisShape="Rectangle";
	hitungLuas();
	hitungKeliling();
} 

Rectangle::Rectangle(int lebarBaru)
{
	lebar=lebarBaru;
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
	cout<<panjang<<" | "<<lebar<<" | "<<luas<<" | "<<keliling<<endl;
}

void Rectangle::tambah(int a)
{
	if (a>0) shapes.push_back(new Rectangle(a)); else throw"Input tidak boleh negatif";
}

void Rectangle::tambah(int b)
{
	if (b>0) shapes.push_back(new Rectangle(b)); else throw"Input tidak boleh negatif";
}

void Rectangle::hapus(int a, int b)
{
	bool cek = false;
	if (a<0) throw"Input tidak boleh negatif";
	if (b<0) throw"Input tidak boleh negatif";
	for (int i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Rectangle")
		{
			if(((Rectangle*)shapes[i])->getpanjang() == a)
			{
				cek = true;
				if(((Rectangle*)shapes[i])->getlebar() == b)
				{
					cek = true;
					shapes.erase(shapes.begin()+i);
					cout<<"Rectangle dengan panjang dan lebar "<<a<<", "<<b<<" telah di hapus"<<endl;
				}
			}
		}
	}	
	if(!cek)
	{
		throw"Tidak ada persegi panjang dengan panjang atau lebar tersebut";
	}	
}

void Rectangle::tampilluas()
{
	int i=0;
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
	cout<<"Panjang | Lebar | Luas | Keliling "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Rectangle") shapes[i]->printDetails();
	}
}

void Rectangle::tampilkeliling()
{
	int i=0;
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
	cout<<"Panjang | Lebar | Luas | Keliling "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Rectangle") shapes[i]->printDetails();
	}
}

int Rectangle :: getpanjang()
{
	return panjang;
}

int Rectangle :: getlebar()
{
	return lebar;
}

void Rectangle::saveToFile(char *filename)
{
	ofstream save (filename);
	for(int i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Rectangle")
		{
			save<<((Rectangle *)shapes[i])->getpanjang()<<endl;
		}
	}
	save.close();
}
