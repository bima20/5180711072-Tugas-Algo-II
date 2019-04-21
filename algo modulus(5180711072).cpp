#include<iostream>
using namespace::std;

int sisa(int angka, int pembagi){
   return angka%pembagi;
}
main()
{
    int angka, pembagi;
    cout<<" Masukan angka = ";cin>>angka;
    cout<<" Masukan angka pembagi = ";cin>>pembagi;
    cout<<"\n Sisa pembagian adalah = "<<sisa(angka,pembagi);
}
