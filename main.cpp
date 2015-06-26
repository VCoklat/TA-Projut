#include "shape.h"

vector <Shape *> shapes;

void header();
int main();
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

void header()
{
	cout <<endl;
	cout <<"=======================Shape Program======================"<<endl;
	cout <<"Dibuat oleh Dedy Van Hauten, Felicia, Steven S. D"<<endl;
	cout << right<<endl;
}

int main()
{
	system("cls");
	loop :
	header();
	int input;
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
        switch(nomor)
        {
            case 1:tampilbentuk(); break;
            case 2:tambah(); break;
            case 3:hapus(); break;
            case 4:
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
	system("cls");
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
        switch(nomor)
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
	int input();
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
        switch(nomor)
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
        switch(nomor)
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
        switch(nomor)
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
	system("CLS");
	loop :
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
	goto loop;
    } else {
        switch(nomor)
        {
            case 1:luaslingkaran(); break;
            case 2:kelilinglingkaran(); break;
            case 3:tampilbentuk(); break;
            default : {
            cout<<"Maaf input anda salah, masukkan angka 1/2/3"<<endl;
			goto loop;
            }
        }
    }  
}

void tampilpersegi()
{
	system("CLS");
	loop :
	int input();
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
        switch(nomor)
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
	system("CLS");
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
        switch(nomor)
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

void tambah_lingkaran(){
	system("CLS");
	fflush stdin;
	try
	{
	float radius;
	cout << "Masukkan Jari-jari:" << endl;
		if(!(cin >> radius && radius>0)) {
            cin.clear();
            cin.ignore();
            throw "Maaf, input yang anda masukkan salah. Silakan coba kembali." ;
		   	}
		else 
		{
		shapes.push_back(new Circle(radius));
		cout << "data berhasil dimasukkan." << endl << endl << "silahkan tekan apa saja untuk kembali."<<endl;
		fflush stdin;
		_getch();
		tambah_bentuk();
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
		cout<<"Masukkan jari-jari yang akan dihapus: "<<endl;
		if(!(cin>>radius))
		{
			cin.clear();
			cin.ignore();
			throw "Maaf, input yang Anda masukkan salah. Silakan coba kembali.";
		}
		bool cek = false;
		for (i=0;i<shapes.size();i++)
		{
			if(shapes[i]->getJenisShape()=="Circle")
			{
				if(((Circle*)shapes[i])->getjarijari() == radius)
				{
					cek = true;
					shapes.erase(shapes.begin()+i);
					cout<<"Circle dengan jari-jari "<<radius<<" telah di hapus"<<endl;
				}
			}
		}
			
		if(!cek)
		{
			cout<<"Tidak ada Circle dengan jari-jari "<< radius <<"."<<endl;
		}
		else
		{
			cout << "data berhasil dihapus." << endl;
		}
		cout << "tekan apa saja untuk kembali" << endl;
		fflush stdin;
		_getch();
		

	}
	catch (const char *e)
	{
		cerr << e << "\n\n";
		cout << endl;
		delete_lingkaran();
	}
}

void tambah_persegi(){
	system("CLS");
	fflush stdin;
	try
	{
	float sisi;
	cout << "Masukkan Sisi:" << endl;
		if(!(cin >> sisi && sisi>0)) {
            cin.clear();
            cin.ignore();
            throw "Maaf, input yang anda masukkan salah. Silakan coba kembali." ;
		   	}
		else 
		{
		shapes.push_back(new Square(sisi));
		cout << "data berhasil dimasukkan." << endl << endl << "silahkan tekan apa saja untuk kembali."<<endl;
		fflush stdin;
		_getch();
		tambah_bentuk();
		}
	}
	catch (const char* e)
	{
		cerr << e << "\n\n";
		cout << endl;
		tambah_persegi();
	}
}

void delete_persegi(){
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
		for (i=0;i<shapes.size();i++)
		{
			if(shapes[i]->getJenisShape()=="Square")
			{
				if(((Square*)shapes[i])->getsisi() == sisi)
				{
					cek = true;
					shapes.erase(shapes.begin()+i);
					cout<<"Square dengan sisi "<<sisi<<" telah di hapus"<<endl;
				}
			}
		}
			
		if(!cek)
		{
			cout<<"Tidak ada Square dengan sisi " <<sisi<<endl;
		}
		else
		{
			cout << "data berhasil dihapus." << endl;
		}
			cout << "tekan apa saja untuk kembali" << endl;
		fflush stdin;
		_getch();
	
	}
	catch (const char *e)
	{
		cerr << e << "\n\n";
		cout << endl;
		delete_persegi();
	}
}

void tambah_persegi_panjang(){
	system("CLS");
	fflush stdin;
	try
	{
		float panjang, lebar;
		cout << "Masukkan panjang:" << endl;
		if(!(cin >> panjang && panjang>0)) {
            cin.clear();
            cin.ignore();
            throw "Maaf, input yang anda masukkan salah. Silakan coba kembali." ;
		   	}
		cout << "Masukkan lebar:" << endl;	   	
		if(!(cin >> lebar && lebar>0)) {
            cin.clear();
            cin.ignore();
            throw "Maaf, input yang anda masukkan salah. Silakan coba kembali." ;
		   	}
	
  		shapes.push_back(new Rectangle(panjang,lebar));
		cout << "data berhasil dimasukkan." << endl << endl << "silahkan tekan apa saja untuk kembali."<<endl;
		fflush stdin;
		_getch();
		tambah_bentuk();
	}
	catch (const char* e)
	{
		cerr << e << "\n\n";
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
					}
				}
			}
		}
		if(!cek)
		{
			cout<<"Tidak ada Rectangle dengan panjang " <<panjang<< " dan lebar " <<lebar<<endl;
		}
			else
		{
			cout << "data berhasil dihapus." << endl;
		}
			cout << "tekan apa saja untuk kembali" << endl;
		fflush stdin;
		_getch();
	}
	catch (const char *e)
	{
		cerr << e << "\n\n";
		cout << endl;
		delete_persegi_panjang();
	}
}