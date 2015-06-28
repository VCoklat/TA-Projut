#include<iostream>
#include "square.h"
#include "shape.h"

using namespace std;

vector <Shape *> shapes;

Square::Square()
{
	sisi=0;
	jenisShape="Square";
	hitungLuas();
	hitungKeliling();
	loadFromFile((char *)"square.txt");
}

Square::~Square(){
	saveToFile((char *)"outsquare.txt");
}

void Square::loadFromFile(char *filename)
{
	int si; //si = sisi
	FILE* file = fopen (filename, "si"); //baca file
		while(!feof (file))
		{
			fscanf (file, "%d", &si); 
			shapes.push_back(new Square(si)); // memasukkan data ke dalam vektor
		}	
	fclose (file);    
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
	cout<<sisi<<" | "<<luas<<" | "<<keliling<<endl;
}

void Square::tambah(int a)
{
	if (a>0) shapes.push_back(new Square(a)); else throw"Input tidak boleh negatif";
}

void Square::hapus(int a)
{
	bool cek = false;
	if (a<=0) throw"Input tidak boleh negatif";
	else 
	{
		for (int i=0;i<shapes.size();i++)
		{
			if(shapes[i]->getJenisShape()=="Square")
			{
				if(((Square*)shapes[i])->getsisi() == a)
				{
					cek = true;
					shapes.erase(shapes.begin()+i);
					cout<<"Square dengan sisi "<<a<<" telah di hapus"<<endl;
				}
			}
		}	
		if(!cek)
		{
			throw"Tidak ada persegi dengan sisi tersebut.";
		}	
	}
}

void Square::tampilluas()
{
	int i=0;
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
	cout<<"Sisi | Luas | Keliling "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Square") shapes[i]->printDetails();
	}
}

void Square::tampilkeliling()
{
	int i=0;
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
	cout<<"Sisi | Luas | Keliling "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Square") shapes[i]->printDetails();
	}
}

int Square :: getsisi()
{
	return sisi;
}

void Square::saveToFile(char *filename)
{
	ofstream save (filename);
	for(int i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Square")
		{
			save<<((Square *)shapes[i])->getsisi()<<endl;
		}
	}
	save.close();
}
