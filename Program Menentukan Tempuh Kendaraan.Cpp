#include<iostream>
using namespace std;

int waktu (int s,int v)
{
 int hasil;
 system ("color e");
 hasil = s * v;
 return hasil;
}
int main()
{
 int s,v,hasil;
 cout <<"MENENTUKAN WAKTU TEMPUH KENDARAAN"<<endl;
 cout <<"Masukkan nilai jarak : ";
 cin >> s;
 cout <<"Masukkan nilai kecepatan : ";
 cin >> v;
 hasil=waktu(s,v);
 cout <<"Hasil waktu tempuh = "<<hasil<<endl;
 return 0;
}
