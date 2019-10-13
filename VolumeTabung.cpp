#include <iostream>

using namespace std;

int main()
{
int TinggiTabung, JariAlas;
double LuasAlas, VolumeTabung;
const double phi=3.14;
cout << "Masukkan nilai Tinggi Tabung = ";
cin>>TinggiTabung;
cout << "Masukkan nilai Jari-jari alas = ";
cin>>JariAlas;
LuasAlas=phi*JariAlas*JariAlas;
VolumeTabung=LuasAlas*TinggiTabung;
cout << "Volume Tabung = " <<VolumeTabung<<endl;
return 0;
}
