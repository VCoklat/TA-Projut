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

int input;
Circle lingkaran;
Square persegi;
Rectangle rectangle;

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
	system("CLS");
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
			lingkaran.tambah(input);
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
			persegi.tambah(input);
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

void tambahpersegipanjang(){}

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
			lingkaran.hapus(input);
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
			persegi.hapus(input);
			luaspersegi();
		}
	}
	catch (const char *e)
	{
		cerr << e << endl;
		hapuslingkaran();
	}
}

void hapuspersegipanjang(){}
void luas(){}
void keliling(){}

void luaslingkaran()
{
	system("cls");
	lingkaran.tampilluas();
	tampillingkaran();
}

void kelilinglingkaran()
{
	system("cls");
	lingkaran.tampilkeliling();
	tampillingkaran();
}

void luaspersegi()
{
	system("cls");
	persegi.tampilluas();
	tampilpersegi();
}

void kelilingpersegi()
{
	system("cls");
	persegi.tampilkeliling();
	tampilpersegi();
}

void luaspersegipanjang(){}
void kelilingpersegipanjang(){}