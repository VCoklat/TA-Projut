#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <vector>
#include <fstream>
#include <conio.h>

#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"

using namespace std;
string input;
int input1;
string apalah;
vector <Shape *> shapes;
int i; //All purpose iterator

int main();
void tampil_bentuk();
void tambah_bentuk();
void hapus_bentuk();
void tampil_semua();
void tampil_lingkaran();
void tampil_persegi();
void tampil_persegi_panjang();
void savedata();
void tambah_lingkaran();
void tambah_persegi();
void tambah_persegi_panjang();
void luas();
void keliling();
void delete_lingkaran();
void delete_persegi();
void delete_persegi_panjang();
void main_menu();
void luaslingkaran();
void kelilinglingkaran();
void luassquare();
void kelilingsquare();
void luasrectangle();
void kelilingrectangle();

void header()
{
	cout <<endl;
	cout <<"=======================Shape Program======================"<<endl;
	cout <<"Dibuat oleh Dedy Van Hauten, Felicia, Steven S. D"<<endl;
	cout << right<<endl;
}

int main()
{
	ifstream lingkaran("circle.txt"); 
	int radius;
	string line;
	while (lingkaran>>radius)
		{
			shapes.push_back(new Circle(radius));
		}
	lingkaran.close();
	
	ifstream persegi("square.txt");  
	int sisi;
	while (persegi>>sisi)
		{
			shapes.push_back(new Square(sisi));
		}

	persegi.close();
	
	ifstream persegiPanjang("rectangle.txt"); 
	int panjang, lebar;
	bool cek=true;
	while (persegiPanjang>>sisi)
		{
			if (cek==true)
			{
				panjang=sisi;
				cek = false;
			}
			else if (cek==false)
			{
				lebar=sisi;
				cek = true;
				shapes.push_back(new Rectangle(panjang,lebar));
			}
			
		}

	persegiPanjang.close();	
	main_menu();	
}

void main_menu()
{
	loop :
	header();
	cout << "MENU UTAMA"<< endl;
	cout << "1. Tampilkan Bentuk" << endl;
	cout << "2. Tambah Bentuk" << endl;
	cout << "3. Hapus Bentuk" << endl;
	cout << "4. Exit" << endl;
	cout << "Masukkan pilihan Anda (1-4): " << endl;
	cin >> input1;
    if (cin.fail()) {
        cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
        cin.clear ();
        cin.ignore();
		goto loop;
    } else {
        switch(input1)
        {
            case 1:tampil_bentuk(); break;
            case 2:tambah_bentuk(); break;
            case 3:hapus_bentuk(); break;
            case 4:
				savedata();
                exit(EXIT_SUCCESS);
                break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3/4"<<endl;
            goto loop; }
        }
    }   
}

void tampil_bentuk()
{
	loop :
	header();
	cout << "MENU TAMPIL BENTUK" << endl;
	cout << "1. Tampilkan Semua Bentuk" << endl;
	cout << "2. Tampilkan Lingkaran" << endl;
	cout << "3. Tampilkan Persegi" << endl;
	cout << "4. Tampilkan Persegi Panjang" << endl;
	cout << "5. Kembali ke Menu Utama" << endl;
	cout << "Masukkan pilihan Anda (1-5): " << endl;
	cin >> input1;    
	if (cin.fail()) {
        cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
        cin.clear ();
        cin.ignore();
		goto loop;
    } else {
        switch(input1)
        {
			case 1:
				tampil_semua();
				break;
			case 2:
				tampil_lingkaran();
				break;
			case 3:
				tampil_persegi();
				break;
			case 4:
				tampil_persegi_panjang();
				break;
			case 5:
				main_menu();
				break;
				default : 
				{
				cout<<"Maaf input anda salah, masukkan angka 1/2/3/4/5"<<endl;
				goto loop;
				}
		}
	}
}

void tambah_bentuk()
{
	int input;
	system("CLS");
	loop :
	header();
	cout << "MENU TAMBAH BENTUK" << endl;
	cout << "1. Tambah Lingkaran" << endl;
	cout << "2. Tambah Persegi" << endl;
	cout << "3. Tambah Persegi Panjang" << endl;
	cout << "4. Kembali ke Menu Utama" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-4): " << endl;
	cin >> input;  
	if (cin.fail()) {
        cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
        cin.clear ();
        cin.ignore();
		goto loop;
    } else {
        switch(input)
        {
            case 1:tambah_lingkaran(); break;
            case 2:tambah_persegi(); break;
            case 3:tambah_persegi_panjang(); break;
            case 4:main_menu();break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3/4"<<endl;
			goto loop;
            }
        }
    }   
}

void hapus_bentuk()
{
	system("CLS");
	int input;
	loop :
	header();
	cout << "MENU HAPUS BENTUK" << endl;
	cout << "1. Hapus Lingkaran" << endl;
	cout << "2. Hapus Persegi" << endl;
	cout << "3. Hapus Persegi Panjang" << endl;
	cout << "4. Kembali ke Menu Utama" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-4): " << endl;
	cin >> input;
	if (cin.fail()) 
	{
       cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
       cin.clear ();
       cin.ignore();
	goto loop;
    } else {
        switch(input)
        {
            case 1:delete_lingkaran(); break;
            case 2:delete_persegi(); break;
            case 3:delete_persegi_panjang(); break;
            case 4:main_menu();break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3/4"<<endl;
			goto loop;
            }
        }
    }   
}

void tampil_semua()
{
	loop :
	header();
	int input;
	cout << "MENU TAMPILKAN SEMUA BENTUK" << endl;
	cout << "1. Urutkan Berdasarkan Luas" << endl;
	cout << "2. Urutkan Berdasarkan Keliling" << endl;
	cout << "3. Kembali ke Menu Tampilkan Bentuk" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-3): " << endl;
	cin  >> input;
	if (cin.fail()) 
	{
       cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
       cin.clear ();
       cin.ignore();
	goto loop;
    } else {
        switch(input)
        {
            case 1:luas(); break;
            case 2:keliling(); break;
            case 3:tampil_bentuk(); break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3"<<endl;
			goto loop;
            }
        }
    }   
}

void luas()
{				
	system("cls");
	header();
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Sisi/radius|"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<setw(10)<<"Lebar "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		shapes[i]->printDetails();
	}
	tampil_semua();
}

void keliling()
{
	system("cls");
	header();
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Sisi/radius|"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<setw(10)<<"Lebar "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		shapes[i]->printDetails();
	}
	tampil_semua();
}

void tampil_lingkaran()
{
	header();
	fflush stdin;
	cout << "MENU TAMPILKAN BENTUK LINGKARAN" << endl;
	cout << "1. Urutkan Berdasarkan Luas" << endl;
	cout << "2. Urutkan Berdasarkan Keliling" << endl;
	cout << "3. Kembali ke Menu Tampilkan Bentuk" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-3): " << endl;
	cin >> input1;
	if (cin.fail()) 
	{
       cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
       cin.clear ();
       cin.ignore();
	tampil_lingkaran();
    } else {
        switch(input1)
        {
            case 1:luaslingkaran(); break;
            case 2:kelilinglingkaran(); break;
            case 3:tampil_bentuk(); break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3"<<endl;
			tampil_lingkaran();
            }
        }
    } 
}

void luaslingkaran()
{	
	system("cls");
	header();
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Radius |"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Circle")
			shapes[i]->printDetails();
	}
	tampil_lingkaran();
}

void kelilinglingkaran()
{
	system("cls");
	header();
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Radius |"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Circle")
			shapes[i]->printDetails();
	}
	tampil_lingkaran();
}

void tampil_persegi()
{
	loop :
	int input;
	header();
	cout << "MENU TAMPILKAN BENTUK PERSEGI" << endl;
	cout << "1. Urutkan Berdasarkan Luas" << endl;
	cout << "2. Urutkan Berdasarkan Keliling" << endl;
	cout << "3. Kembali ke Menu Tampilkan Bentuk" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-3): " << endl;
	cin >> input1;
	if (cin.fail()) 
	{
       cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
       cin.clear ();
       cin.ignore();
	goto loop;
    } else {
        switch(input1)
        {
            case 1:luassquare(); break;
            case 2:kelilingsquare(); break;
            case 3:tampil_bentuk(); break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3"<<endl;
			goto loop;
            }
        }
    }
}

void luassquare()
{
	system("cls");
	header();
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Sisi |"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Square")
			shapes[i]->printDetails();
	}
	tampil_persegi();
}

void kelilingsquare()
{
	system("cls");
	header();
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Sisi |"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Square")
			shapes[i]->printDetails();
	}
	tampil_persegi();
}

void tampil_persegi_panjang()
{
	loop :
	int input;
	header();
	cout << "MENU TAMPILKAN BENTUK PERSEGI PANJANG" << endl;
	cout << "1. Urutkan Berdasarkan Luas" << endl;
	cout << "2. Urutkan Berdasarkan Keliling" << endl;
	cout << "3. Kembali ke Menu Tampilkan Bentuk" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-3): " << endl;
	cin >> input1;
	if (cin.fail()) 
	{
       cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
       cin.clear ();
       cin.ignore();
	goto loop;
    } else {
        switch(input1)
        {
            case 1:luasrectangle(); break;
            case 2:kelilingrectangle(); break;
            case 3:tampil_bentuk(); break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3"<<endl;
			goto loop;
            }
        }
    }
}

void luasrectangle()
{
	system("cls");
	header();
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Panjang |"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<setw(10)<<"Lebar "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Rectangle")
			shapes[i]->printDetails();
	}
	tampil_persegi_panjang();
}

void kelilingrectangle()
{
	system("cls");
	header();
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Panjang |"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<setw(10)<<"Lebar "<<endl;
	for(i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Rectangle")
			shapes[i]->printDetails();
	}
	tampil_persegi_panjang();
}

void savedata()
{
	ofstream of;
	of.open("circle.txt");
	of.close();
	of.open("square.txt");
	of.close();
	of.open("rectangle.txt");
	of.close();
	for(i=0;i<shapes.size();i++)
	{
		
		if(shapes[i]->getJenisShape()=="Circle")
		{
			of.open("circle.txt", ofstream::out | ofstream::app);
			of<<((Circle *)shapes[i])->getjarijari()<<endl;
			of.close();
		}
		
		else if(shapes[i]->getJenisShape()=="Square")
		{
			of.open("square.txt", ofstream::out | ofstream::app);
			of<<((Square*)shapes[i])->getsisi()<<endl;
			of.close();
		}
		
		else if(shapes[i]->getJenisShape()=="Rectangle")
		{
			of.open("rectangle.txt", ofstream::out | ofstream::app);
			of<<((Rectangle*)shapes[i])->getpanjang()<<"\t"<<((Rectangle*)shapes[i])->getlebar()<<endl;
			of.close();
		}
	}
}

void tambah_lingkaran()
{
	header();
	cout<<"Masukkan jari-jari : ";
	try
	{
		cin>>input1;
		if (cin.fail()) 
		{
			cin.clear();
            cin.ignore();
            throw "Maaf, input yang anda masukkan salah. Silakan coba kembali." ;
		   	}
		else 
		{
		shapes.push_back(new Circle(input1));
		luaslingkaran();
		}
	}
	catch (const char* e)
	{
		cerr << e << "\n\n";
		cout << endl;
		tambah_lingkaran();
	}
}

void delete_lingkaran()
{
	fflush stdin;
	try
	{
		int radius;
		cout<<"Masukkan radius yang akan dihapus: "<<endl;
		if(!(cin>>radius))
		{
			cin.clear();
			cin.ignore();
			throw "Maaf, input yang Anda masukkan salah. Silakan coba kembali.";
		}
		bool cek = false;
		semua :
		for (i=0;i<shapes.size();i++)
		{
			if(shapes[i]->getJenisShape()=="Circle")
			{
				if(((Circle*)shapes[i])->getjarijari() == radius)
				{
					cek = true;
					shapes.erase(shapes.begin()+i);
					cout<<"Circle dengan jari-jari "<<radius<<" telah di hapus"<<endl;
					goto semua;
				}
			}
		}
			
		if(!cek)
		{
			cout<<"Tidak ada Circle dengan jari-jari "<< radius <<"."<<endl;
			delete_lingkaran();
		}
		else
		{
			luaslingkaran();
		}
	}
	catch (const char *e)
	{
		cerr << e << "\n\n";
		cout << endl;
		delete_lingkaran();
	}
}

void tambah_persegi()
{
	header();
	cout<<"Masukkan sisi : ";
	try
	{
		cin>>input1;
		if (cin.fail()) 
		{
			cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
			cin.clear ();
			cin.ignore();
			tambah_persegi();
		} else 
		{
			if (input1>0) shapes.push_back(new Square(input1)); else throw"Input tidak boleh negatif";
			luassquare();
		}
	}
	catch (const char* e)
	{
		cerr << e << endl;
		cout << endl;
		tambah_persegi();
	}
}

void delete_persegi()
{
	fflush stdin;
	try
	{
		int sisi;
		cout<<"Masukkan sisi yang akan dihapus: "<<endl;
		if(!(cin>>sisi))
		{
			cin.clear();
			cin.ignore();
			throw "Maaf, input yang Anda masukkan salah. Silakan coba kembali.";
		}
		bool cek = false;
		semua :
		for (i=0;i<shapes.size();i++)
		{
			if(shapes[i]->getJenisShape()=="Square")
			{
				if(((Square*)shapes[i])->getsisi() == sisi)
				{
					cek = true;
					shapes.erase(shapes.begin()+i);
					cout<<"Square dengan sisi "<<sisi<<" telah di hapus"<<endl;
					goto semua;
				}
			}
		}
			
		if(!cek)
		{
			cout<<"Tidak ada Square dengan sisi " <<sisi<<endl;
			delete_persegi();
		}
		else
		{
			luassquare();
		}
	}
	catch (const char *e)
	{
		cerr << e << "\n\n";
		cout << endl;
		delete_persegi();
	}
}

void tambah_persegi_panjang()
{
	header();
	int panjang, lebar;
	cout<<"Masukkan panjang : ";
	try
	{
		cin>>panjang;
		if (cin.fail()) 
		{
			cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
			cin.clear ();
			cin.ignore();
			tambah_persegi_panjang();
		} 
		else 
		{
			cout<<"Masukkan lebar : ";
			cin>>lebar;
			if (cin.fail()) 
			{
				cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
				cin.clear ();
				cin.ignore();
				tambah_persegi_panjang();
			} else 
			{
				if (panjang>0 && lebar>0) shapes.push_back(new Rectangle(panjang,lebar)); else throw"Input tidak boleh negatif";
				luasrectangle();					
			}
		}
	}
	catch (const char* e)
	{
		cerr << e << endl;
		cout << endl;
		tambah_persegi_panjang();
	}
	
}

void delete_persegi_panjang(){
	fflush stdin;
	try
	{
		int panjang, lebar;
		cout<<"Masukkan panjang yang akan di hapus: "<<endl;
		if(!(cin >> panjang && panjang>0))
		{
			cin.clear();
			cin.ignore();
			throw "Maaf, input yang Anda masukkan salah. Silakan coba kembali.";
		}
		cout << "Masukkan lebar yang akan di hapus:" << endl;	   	
		if(!(cin >> lebar && lebar>0)) 
		{
            cin.clear();
            cin.ignore();
            throw "Maaf, input yang anda masukkan salah. Silakan coba kembali." ;
		}
		bool cek = false;
		semua :
		for (i=0;i<shapes.size();i++)
		{
			if(shapes[i]->getJenisShape()=="Rectangle")
			{
				if(((Rectangle*)shapes[i])->getpanjang() == panjang)
				{
					if(((Rectangle*)shapes[i])->getlebar()== lebar)
					{
						cek = true;
						shapes.erase(shapes.begin()+i);
						cout<<"Rectangle dengan panjang " << panjang << " dan lebar "<< lebar << " telah di hapus"<<endl;
						goto semua;
					}
				}
			}
		}
		if(!cek)
		{
			cout<<"Tidak ada Rectangle dengan panjang " <<panjang<< " dan lebar " <<lebar<<endl;
			delete_persegi_panjang();
		}
			else
		{
			luasrectangle();
		}
	}
	catch (const char *e)
	{
		cerr << e << "\n\n";
		cout << endl;
		delete_persegi_panjang();
	}
}