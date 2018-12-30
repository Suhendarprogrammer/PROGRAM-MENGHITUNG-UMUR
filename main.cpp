#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int tgllhr,blnlhr,thnlhr;
    char nama [20];

    cout <<"**********PROGRAM MENGHITUNG UMUR**********\n";
    cout<<"============================================\n";
    cout<<"\nMasukkan Nama Anda             : ";
    cin>>nama;
    cout<<"\nMasukkan Tanggal Lahir Anda    : ";
    cin>>tgllhr;
    cout<<"\nMasukkan Bulan Lahir Anda      : ";
    cin>>blnlhr;
    cout<<"\nMasukkan Tahun Lahir Anda      : ";
    cin>>thnlhr;
    thnlhr=2018-thnlhr;
    cout<<"Hai....\n";
    cout<<"Nama Saya : "<<nama<<"\n";
    cout<<"Umur Saya : "<<thnlhr<<"\n";
    return 0;
}
