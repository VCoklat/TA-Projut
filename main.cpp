#include "shape.h"
#include "circle.h"
#include "square.h"
#include "rectangle.h"

void header();
void tampilbentuk();
void tambah();
void hapus();
void tampilsemua();
void tampillingkaran();
void tampilpersegi();
void tampilpersegipanjang();
void tambahlingkaran();
void tambahpersegi();
void tambahpersegipanjang();
void hapuslingkaran();
void hapuspersegi();
void hapuspersegipanjang();
void luas();
void keliling();
void luaslingkaran();
void kelilinglingkaran();
void luaspersegi();
void kelilingpersegi();
void luaspersegipanjang();
void kelilingpersegipanjang();
void bukafile(char *filename);
void savedata();

int input;
Circle lingkaran;
Square persegi;
Rectangle rectangle;
vector <Shape *> shapes;

void header()
{
	cout <<endl;
	cout <<"=======================Shape Program======================"<<endl;
	cout <<"Dibuat oleh Dedy Van Hauten, Felicia, Steven S. D"<<endl;
	cout << right<<endl;
}

int main()
{
	int panjang,lebar,r; 
	FILE* file;
	file = fopen ((char *)"circle.txt", "r"); //baca file
	while(!feof (file))
	{
		fscanf (file, "%d", &r); 
		shapes.push_back(new Circle(r)); // memasukkan data ke dalam vektor
	}	
	fclose(file);  
	
	file = fopen ((char *)"square.txt", "r"); //baca file
	while(!feof (file))
	{
		fscanf (file, "%d", &r); 
		shapes.push_back(new Square(r)); // memasukkan data ke dalam vektor
	}	
	fclose(file); 
	
	file = fopen ((char *)"rectangle.txt", "r"); //baca file
	while(!feof (file))
	{
		fscanf (file, "%d", &r); 
		panjang = r;
		fscanf (file, "%d", &r); 
		lebar = r;
		shapes.push_back(new Rectangle(panjang,lebar)); // memasukkan data ke dalam vektor
	}	
	fclose(file);  
	
	 
	system("cls");
	loop :
	header();
	cout << "MENU UTAMA"<< endl;
	cout << "1. Tampilkan Bentuk" << endl;
	cout << "2. Tambah Bentuk" << endl;
	cout << "3. Hapus Bentuk" << endl;
	cout << "4. Exit" << endl;
	cout << "Masukkan pilihan Anda (1-4): " << endl;
	cin >> input;
    if (cin.fail()) {
        cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
        cin.clear ();
        cin.ignore();
		goto loop;
    } else {
        switch(input)
        {
            case 1:tampilbentuk(); break;
            case 2:tambah(); break;
            case 3:hapus(); break;
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

void tampilbentuk()
{
	loop :
	header();
	int input;
	cout << "MENU TAMPIL BENTUK" << endl;
	cout << "1. Tampilkan Semua Bentuk" << endl;
	cout << "2. Tampilkan Lingkaran" << endl;
	cout << "3. Tampilkan Persegi" << endl;
	cout << "4. Tampilkan Persegi Panjang" << endl;
	cout << "5. Kembali ke Menu Utama" << endl;
	cout << "Masukkan pilihan Anda (1-5): " << endl;
	cin >> input;    
	if (cin.fail()) {
        cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
        cin.clear ();
        cin.ignore();
		goto loop;
    } else {
        switch(input)
        {
            case 1:tampilsemua(); break;
            case 2:tampillingkaran(); break;
            case 3:tampilpersegi(); break;
            case 4:tampilpersegipanjang();break;
			case 5:main();break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3/4/5"<<endl;
			goto loop;
            }
        }
    }   
}

void tambah()
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
            case 1:tambahlingkaran(); break;
            case 2:tambahpersegi(); break;
            case 3:tambahpersegipanjang(); break;
            case 4:main();break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3/4"<<endl;
			goto loop;
            }
        }
    }   
}

void hapus()
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
            case 1:hapuslingkaran(); break;
            case 2:hapuspersegi(); break;
            case 3:hapuspersegipanjang(); break;
            case 4:main();break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3/4"<<endl;
			goto loop;
            }
        }
    }   
}

void tampilsemua()
{
	system("CLS");
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
            case 3:tampilbentuk(); break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3"<<endl;
			goto loop;
            }
        }
    }   
}

void tampillingkaran()
{
	int input;
	header();
	fflush stdin;
	cout << "MENU TAMPILKAN BENTUK LINGKARAN" << endl;
	cout << "1. Urutkan Berdasarkan Luas" << endl;
	cout << "2. Urutkan Berdasarkan Keliling" << endl;
	cout << "3. Kembali ke Menu Tampilkan Bentuk" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-3): " << endl;
	cin >> input;
	if (cin.fail()) 
	{
       cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
       cin.clear ();
       cin.ignore();
	tampillingkaran();
    } else {
        switch(input)
        {
            case 1:luaslingkaran(); break;
            case 2:kelilinglingkaran(); break;
            case 3:tampilbentuk(); break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3"<<endl;
			tampillingkaran();
            }
        }
    }  
}

void tampilpersegi()
{
	loop :
	int input;
	header();
	cout << "MENU TAMPILKAN BENTUK PERSEGI" << endl;
	cout << "1. Urutkan Berdasarkan Luas" << endl;
	cout << "2. Urutkan Berdasarkan Keliling" << endl;
	cout << "3. Kembali ke Menu Tampilkan Bentuk" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-3): " << endl;
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
            case 1:luaspersegi(); break;
            case 2:kelilingpersegi(); break;
            case 3:tampilbentuk(); break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3"<<endl;
			goto loop;
            }
        }
    }  
}

void tampilpersegipanjang()
{
	loop :
	int input;
	header();
	cout << "MENU TAMPILKAN BENTUK PERSEGI PANJANG" << endl;
	cout << "1. Urutkan Berdasarkan Luas" << endl;
	cout << "2. Urutkan Berdasarkan Keliling" << endl;
	cout << "3. Kembali ke Menu Tampilkan Bentuk" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-3): " << endl;
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
            case 1:luaspersegipanjang(); break;
            case 2:kelilingpersegipanjang(); break;
            case 3:tampilbentuk(); break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3"<<endl;
			goto loop;
            }
        }
    }
}

void tambahlingkaran()
{
	header();
	cout<<"Masukkan jari-jari : ";
	try
	{
		cin>>input;
		if (cin.fail()) 
		{
			cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
			cin.clear ();
			cin.ignore();
			tambahlingkaran();
		} else 
		{
			if (input>0) shapes.push_back(new Circle(input)); else throw"Input tidak boleh negatif";
			luaslingkaran();
		}
	}
	catch (const char* e)
	{
		cerr << e << endl;
		cout << endl;
		tambahlingkaran();
	}
}

void tambahpersegi()
{
	header();
	cout<<"Masukkan sisi : ";
	try
	{
		cin>>input;
		if (cin.fail()) 
		{
			cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
			cin.clear ();
			cin.ignore();
			tambahpersegi();
		} else 
		{
			if (input>0) shapes.push_back(new Square(input)); else throw"Input tidak boleh negatif";
			luaspersegi();
		}
	}
	catch (const char* e)
	{
		cerr << e << endl;
		cout << endl;
		tambahpersegi();
	}
}

void tambahpersegipanjang()
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
			tambahpersegipanjang();
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
				tambahpersegipanjang();
			} else 
			{
				if (panjang>0 && lebar>0) shapes.push_back(new Rectangle(panjang,lebar)); else throw"Input tidak boleh negatif";
				luaspersegipanjang();					
			}
		}
	}
	catch (const char* e)
	{
		cerr << e << endl;
		cout << endl;
		tambahpersegipanjang();
	}
}

void hapuslingkaran()
{
	try
	{
		cout<<"Masukkan radius lingkaran yang akan dihapus: "<<endl;
		if(!(cin>>input))
		{
			cin.clear();
			cin.ignore();
			cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
			hapuslingkaran();
		} 
		else 
		{
			bool cek = false;
			if (input<=0) throw"Input tidak boleh negatif";
			else
			{
				for (int i=0;i<shapes.size();i++)
				{
					if(shapes[i]->getJenisShape()=="Circle")
					{
						if(((Circle*)shapes[i])->getjarijari() == input)
						{
							cek = true;
							shapes.erase(shapes.begin()+i);
							cout<<"Circle dengan radius "<<input<<" telah di hapus"<<endl;
						}
					}
				}	
				if(!cek)
				{
					throw"Tidak ada lingkaran dengan jari-jari tersebut";
				}	
			}
			luaslingkaran();
		}
	}
	catch (const char *e)
	{
		cerr << e << endl;
		hapuslingkaran();
	}
}

void hapuspersegi()
{
	try
	{
		cout<<"Masukkan sisi persegi yang akan dihapus: "<<endl;
		if(!(cin>>input))
		{
			cin.clear();
			cin.ignore();
			cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
			hapuspersegi();
		} 
		else 
		{
			bool cek = false;
			if (input<=0) throw"Input tidak boleh negatif";
			else
			{
				for (int i=0;i<shapes.size();i++)
				{
					if(shapes[i]->getJenisShape()=="Square")
					{
						if(((Square*)shapes[i])->getsisi() == input)
						{
							cek = true;
							shapes.erase(shapes.begin()+i);
							cout<<"Persegi dengan sisi "<<input<<" telah di hapus"<<endl;
						}
					}
				}	
				if(!cek)
				{
					throw"Tidak ada lingkaran dengan jari-jari tersebut";
				}	
			}
			luaspersegi();
		}
	}
	catch (const char *e)
	{
		cerr << e << endl;
		hapuslingkaran();
	}
}

void hapuspersegipanjang()
{
	int panjang, lebar;
	try
	{
		cout<<"Masukkan panjang persegi yang akan dihapus: "<<endl;
		if(!(cin>>panjang))
		{
			cin.clear();
			cin.ignore();
			cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
			hapuspersegipanjang();
		} 
		else 
		{
			cout<<"Masukkan lebar persegi yang akan dihapus: "<<endl;
			if(!(cin>>lebar))
			{
				cin.clear();
				cin.ignore();
				cout <<"Maaf input yang anda masukkan harus berupa angka, silahkan masukan kembali"<<endl;
				hapuspersegipanjang();
			} else
			{
				bool cek = false;
				if (panjang<0) throw"Input tidak boleh negatif";
				if (lebar<0) throw"Input tidak boleh negatif";
				for (int i=0;i<shapes.size();i++)
				{
					if(shapes[i]->getJenisShape()=="Rectangle")
					{
						if(((Rectangle*)shapes[i])->getpanjang() == panjang)
						{
							cek = true;
							if(((Rectangle*)shapes[i])->getlebar() == lebar)
							{
								cek = true;
								shapes.erase(shapes.begin()+i);
								cout<<"Rectangle dengan panjang "<<panjang<<" ,dan lebar "<<lebar<<" telah di hapus"<<endl;
							}
						}
					}
				}	
				if(!cek)
				{
					throw"Tidak ada persegi panjang dengan panjang atau lebar tersebut";
				}	
				luaspersegipanjang();
			}	
		}
	}
	catch (const char *e)
	{
		cerr << e << endl;
		hapuslingkaran();
	}
}

void luas()
{
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Sisi/radius|"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<setw(10)<<"Lebar "<<endl;
	for(int i=0;i<shapes.size();i++)
	{
		shapes[i]->printDetails();
	}
	tampilbentuk();
}

void keliling()
{
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Sisi/radius|"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<setw(10)<<"Lebar "<<endl;
	for(int i=0;i<shapes.size();i++)
	{
		shapes[i]->printDetails();
	}
	tampilbentuk();
}

void luaslingkaran()
{
	system("cls");
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Radius |"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<endl;
	for(int i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Circle") shapes[i]->printDetails();
	}
	tampillingkaran();
}

void kelilinglingkaran()
{
	system("cls");
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Radius |"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<endl;
	for(int i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Circle") shapes[i]->printDetails();
	}
	tampillingkaran();
}

void luaspersegi()
{
	system("cls");
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Sisi |"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<endl;
	for(int i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Square") shapes[i]->printDetails();
	}
	tampilpersegi();
}

void kelilingpersegi()
{
	system("cls");
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Sisi |"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<endl;
	for(int i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Square") shapes[i]->printDetails();
	}
	tampilpersegi();
}

void luaspersegipanjang()
{
	system("cls");
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Panjang |"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<setw(10)<<"Lebar "<<endl;
	for(int i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Rectangle") shapes[i]->printDetails();
	}
	tampilpersegipanjang();
}

void kelilingpersegipanjang()
{
	system("cls");
	sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
	cout<<right;
	cout<<setw(13)<<"Jenis | "<<setw(12)<<"Panjang |"<<setw(14)<<"Luas | "<<setw(13)<<"Keliling | "<<setw(10)<<"Lebar "<<endl;
	for(int i=0;i<shapes.size();i++)
	{
		if(shapes[i]->getJenisShape()=="Rectangle") shapes[i]->printDetails();
	}
	tampilpersegipanjang();
}

void savedata()
{
	ofstream of;
	/*ofstream.open("circle.txt");
	//of.close();
	ofstream.open("square.txt");
	//of.close();
	ofstream.open("rectangle.txt");
	//of.close();*/
	for(int i=0;i<shapes.size();i++)
	{
		
		if(shapes[i]->getJenisShape()=="Circle")
		{
			of.open("circle.txt", ofstream::app);
			of<<((Circle *)shapes[i])->getjarijari()<<endl;
			of.close();
		}
		
		else if(shapes[i]->getJenisShape()=="Square")
		{
			of.open("square.txt", ofstream::app);
			of<<((Square*)shapes[i])->getsisi()<<endl;
			of.close();
		}
		
		else if(shapes[i]->getJenisShape()=="Rectangle")
		{
			of.open("rectangle.txt", ofstream::app);
			of<<((Rectangle*)shapes[i])->getpanjang()<<"\t"<<((Rectangle*)shapes[i])->getlebar()<<endl;
			of.close();
		}
	}
}