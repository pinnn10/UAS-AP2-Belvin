#include <iostream>
#include <string.h>
#include "LastScreen.h"
using namespace std;
struct dataPembeli{
    string    nama[50];
    string    jenisBunga[50];
    string    tanggalberkunjung[50];
};
int harga [5]={350000, 88000, 60000, 15000, 5000},i=0,  DaftarJenis ;
int bunga,totsem;
int Lily,Hordensia,Babybreath,Mawar,Daisy;
  int *p;
  
void input(int &jumlah)
{
 cout<<"              Pilih Jenis Bunga          \n";
 cout<<"           1) Bunga Lily                 \n";
 cout<<"           2) Bunga Hortensia            \n";
 cout<<"           3) BUnga Babybreath           \n";
 cout<<"           4) Bunga Mawar                \n";
 cout<<"           5) BUnga Daisy                \n";
 cout<<"*****************************************\n";
 
  p=&Lily;
  *p=350000;
  p=&Hordensia;
  *p=88000;
  p=&Babybreath;
  *p=60000;
  p=&Mawar;
  *p=15000;
  p=&Daisy;
  *p=5000;
 cout<<"Harga bunga Lily         = "<<Lily;
 cout<<"\nHarga bunga Hordensia    = "<<Hordensia;
 cout<<"\nHarga bunga Babybreath   = "<<Babybreath;
 cout<<"\nHarga bunga Mawar        = "<<Mawar;
 cout<<"\nHarga bunga Daisy        = "<<Daisy;
 
 cout<<"\nPilih nomor bunga yang anda mau:  ";
    cin>>bunga;
    
    switch (bunga){
        case 1:
        i=0;
        cout<<(DaftarJenis, "Lily");
        break;
        case 2:
        i=1;
        cout<<(DaftarJenis, "Hortensia");
        break;
        i=2;
        case 3:
        cout<<(DaftarJenis, "Babybreath");
        break;
        i=3;
        case 4:
        cout<<(DaftarJenis, "Mawar");
        break;
        i=4;
        case 5:
        cout<<(DaftarJenis, "Daisy");
        break;
    }
  
  cout<<" adalah bunga yang anda pilih" <<endl;
  cout<<endl;
  cout<<"Jumlah bunganya    : ";
  cin>>jumlah;
  totsem = jumlah*harga[i];
}

     
int main(){
 dataPembeli data;
 int jumlah;
 char ulangi;
 do{
 cout<<"**`````````````````````````````````````**\n";
 cout<<"*         TOKO BUNGA BELPIN             *\n";
 cout<<"*  Selamat Datang & Selamat Berbelanja  *\n";
 cout<<"*                                       *\n";
 cout<<"**-------------------------------------**\n";
 cout<<endl;

 input(jumlah);
    cout<<"Total belanja      : "<<totsem<<endl;
   
        cout << "Nama Pembeli       : ";cin >> data.nama[0];
        cout << "Jenis Bunga        : ";cin >> data.jenisBunga[0];
        cout << "Tanggal Berkunjung : ";cin >> data.tanggalberkunjung[0];
        cout<<endl;

   
        cout << data.nama[0]<< endl;
        cout << data.jenisBunga[0]<< endl;
        cout << data.tanggalberkunjung[0]<< endl;
        
        cout<<"\nApakah mau berbelanja?\n";
        cout<<"Jawab y/t: ";
        cin>>ulangi;}
        while (ulangi == 'y');
        cout<<endl;
        
        LastScreen();
        
   }
