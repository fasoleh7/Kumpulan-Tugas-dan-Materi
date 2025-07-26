/*
	Nim	: 21040012
	Nama	: Fathurrohman Solehudin
	Kelas	: 2A
	*/

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),
coord);
}
struct uas
{
    int price, stock, kode;
    string nm;
};
void intro(){
    login:
    int nim;
    string nama,kelas;
    
	cout<<"\t\t"<<"=================================================================================="<<endl;
	cout<<"\t\t"<<"|                   PROGRAM SORTING DAN SEARCHING BARANG GUDANG                  |"<<endl;
	cout<<"\t\t"<<"=================================================================================="<<endl;
	cout<<"\t\t"<<"|                            FATHURROHMAN SOLEHUDIN                              |"<<endl;
	cout<<"\t\t"<<"|                                   2140012                                      |"<<endl;
	cout<<"\t\t"<<"=================================================================================="<<endl<<endl;
	
    cout<<"Login Terlebih dahulu"<<endl;
    cout<<"NIM   : "; cin>>nim;
    cout<<"Nama  : "; cin.ignore();getline(cin,nama);
    cout<<"Kelas : "; cin>>kelas;
    cout<<"================================================================"<<endl;
    cout<<"Login Sukses...";
    getch();
}
int main(){


	
    intro();
    data:
    system("cls");
    cout<<"By: FathurrohmanS"<<endl<<endl;
    int n;
    cout<<"Masukan jumlah barang : "; cin>>n;
    if (n >= 10 && n <=20)
        {
           
        } else if (n < 10)
        {
            cout<<"Data yang anda masukan kurang dari 10"<<endl;
            getch();
            system ("cls");
            goto data;
        } else if (n > 10)
        {
            cout<<"Data yang anda masukan lebih dari 20"<<endl;
            getch();
            system ("cls");
            goto data;
        }
    cout<<"================================================================"<<endl;
    cout<<"================================================================"<<endl;
    uas toko[n];
    int kode[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Masukan data barang ke-"<<i+1<<endl;
        cout<<"Kode Barang  : "; cin>>toko[i].kode;
            kode[i]=toko[i].kode;
            cin.ignore(1,'\n');
        cout<<"Nama Barang  : "; getline(cin,toko[i].nm);
        cout<<"Stok Barang  : "; cin>>toko[i].stock;
        cout<<"Harga Barang : "; cin>>toko[i].price;
        cout<<"================================================================"<<endl;
    }
    system ("CLS");
    cout<<"By: FathurrohmanS"<<endl<<endl;
    cout<<"+=============+============================+======+==============+\n";
    cout<<"| Kode Barang |         Nama Barang        | Stok | Harga Satuan |\n";
    cout<<"+=============+============================+======+==============+\n";
    for (int i=0; i<n; i++) {
		gotoxy (0, 5+i);cout<<"| "<<toko[i].kode;
		gotoxy(14, 5+i);cout<<"| "<<toko[i].nm;
		gotoxy(43, 5+i);cout<<"| "<<toko[i].stock;
		gotoxy(50, 5+i);cout<<"| "<<toko[i].price;
        gotoxy(65, 5+i);cout<<"|"<<endl;
	}
	
	//menampilan kode barang yang sudah urut
    cout<<"+=============+============================+======+==============+\n";
    cout<<"Urutkan sesuai kode barang : . . ."<<endl;
    getch();
    int a,b,c,kosong;
    for (int i= n-1;i>=0;i--)
    {
        a=0; b=kode[0];
        for (int j=1;j<=i;j++)
        {
            if (kode[j]>b)
            {
                a=j; b=kode[j];
            }
        }
        kosong=kode[i];
        kode[i]=b;
        kode[a]=kosong;
        for (int c=0; c < n; c++)
        {
            kode[c]; 
        }
    }
    system("cls");
    cout<<"By: fathur"<<endl<<endl;
    cout<<"+=============+============================+==============+======+\n";
    cout<<"| Kode Barang |         Nama Barang        | Harga Satuan | Stok |\n";
    cout<<"+=============+============================+==============+======+\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (kode[i] == toko[j].kode)
                {
                    gotoxy (0, 5+i);cout<<"| "<<kode[i];
                    gotoxy(14, 5+i);cout<<"| "<<toko[j].nm;
                    gotoxy(43, 5+i);cout<<"| "<<toko[j].price;
                    gotoxy(58, 5+i);cout<<"| "<<toko[j].stock;
                    gotoxy(65, 5+i);cout<<"|"<<endl;
                }
            }
        }
    cout<<"+=============+============================+==============+======+\n";
    
    
    //memulai untuk melakukan pembelian
    cout<<"Masukan 3 transaksi  "<<endl;
    int search[3],qty[3],tbar[3]={};
    string P;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Masukan Kode Barang : "; cin>>search[i];
        for (int j = 0; j < n; j++)
        {
            if (search[i]==toko[j].kode)
            {
                cout<<"Nama Barang   : "<<toko[j].nm<<endl;
                cout<<"Harga Barang  : "<<toko[j].price<<endl;
                cout<<"Jumlah barang : "; cin>>qty[n];
                    tbar[i] = toko[j].price * qty[n];
                cout<<"Total Barang  : "<<tbar[i]<<endl;
                P="";
                break;
            } else
            {
                P="Kode Barang tidak ditemukan\n";
            }
        }
        cout<<P;
        cout<<"================================================================"<<endl;
    }
    //diskon
    int tbel = tbar[0] + tbar[1] + tbar[2];
    cout<<"TOTAL BELI : "<<tbel<<endl;
    int total;
    if (tbel > 160000 && tbel <= 250000)
    {
        total = tbel - (0.02 * tbel);
        cout<<"Mendapat diskon 2%"<<endl;
    } else {
        if (tbel > 250000 && tbel <= 500000)
        {
            total = tbel - (0.05 * tbel);
            cout<<"Mendapat diskon 5%"<<endl;
        } else {
             if (tbel > 500000)
            {
                total = tbel - (0.1 * tbel);
                cout<<"Mendapat diskon 10%"<<endl;
            } else
            {
                total=tbel;
            }
            
        }
    }
    //transaksi
    transaksi:
    cout<<"================================================================"<<endl;
    cout<<"Total bayar: "<<total<<endl;
    int saldo,kembalian;
    cout<<"saldo \t: "; cin>>saldo;
    if (saldo < total)
    {
        kembalian = saldo - total;
        cout<<"Saldo anda kurang "<<kembalian; cout<<endl;
        cout<<"================================================================"<<endl;
        goto transaksi;
    } 
    if (saldo >= total) {
        kembalian = saldo - total;
        cout<<"Saldo kembalian anda : "<<kembalian; cout<<endl;
        cout<<"================================================================"<<endl;
    } 
    return 0;
}

