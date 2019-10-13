#include <iostream>
#include <windows.h>

using namespace std;
int larik[2][2];
float hasil[2][1];
void Hitung(float &k, float &l){
    float det, tukarlarik, i, j;
    det=(larik[0][0]*larik[1][1])-(larik[0][1]*larik[1][0]);
    tukarlarik=larik[0][0];
    larik[0][0]=larik[1][1];
    larik[1][1]=tukarlarik;
    larik[0][1]=larik[0][1]*(-1);
    larik[1][0]=larik[1][0]*(-1);
    i=(larik[0][0]*hasil[0][0])+(larik[0][1]*hasil[1][0]);
    j=(larik[1][0]*hasil[0][0])+(larik[1][1]*hasil[1][0]);
    k=1/det*i;
    l=1/det*j;
    hasil[0][0]=k;
    hasil[1][0]=l;
    cout<<endl<<"Nilai x = "<<hasil[0][0]<<endl;
    cout<<"Nilai y = "<<hasil[1][0]<<endl;
}

long tabungan(long dep1, float bunga, int waktu){
    long hasil;
    if(waktu==1){
        hasil=dep1;
    }else if(waktu>1){
        hasil=dep1+(bunga/100*dep1*waktu);
    }
    return hasil;
}

void tabungan(long dep1, float bunga, int waktu, long& hasil){
    if(waktu==1){
        hasil=dep1;
    }else if(waktu>1){
        hasil=dep1+(bunga/100*dep1*waktu);
    }
}

void PanggilSPLDV(){
    int a, b;
    float x, y;
    cout<<"Input Nilai = "<<endl;
    for(a=0;a<2;a++){
            for(b=0;b<2;b++){
                cin>>larik[a][b];
            }
    }
    cout<<endl<<"Matriks Nilai = "<<endl;
    for(a=0;a<2;a++){
            for(b=0;b<2;b++){
                cout<<larik[a][b]<<" ";
            }
            cout<<endl;
    }
    cout<<endl<<"Input Hasil = "<<endl;
    for(a=0;a<2;a++){
            for(b=0;b<1;b++){
                cin>>hasil[a][b];
            }
    }
    cout<<endl<<"Matriks Hasil = "<<endl;
    for(a=0;a<2;a++){
            for(b=0;b<1;b++){
                cout<<hasil[a][b]<<" ";
            }
            cout<<endl;
    }

    Hitung(x, y);
    cout<<endl<<"Matriks x y = "<<endl;
    for(a=0;a<2;a++){
            for(b=0;b<1;b++){
                cout<<hasil[a][b]<<" ";
            }
            cout<<endl;
    }
    cout<<endl;
}

void DepTabFungsi(){
    long depawal, Hsl;
    float sukubunga;
    int lamamenabung;
    cout<<"Jumlah Deposito Awal = ";
    cin>>depawal;
    cout<<"Suku Bunga = ";
    cin>>sukubunga;
    cout<<"Lama Menabung (Tahun) = ";
    cin>>lamamenabung;
    Hsl=(1+(sukubunga/100))*(tabungan(depawal, sukubunga, lamamenabung-1));
    cout<<"Jumlah Saldo = "<<Hsl<<endl;
    cout<<endl;
}

void DepTabProsedur(){
    long depawal, Hsl;
    float sukubunga;
    int lamamenabung;
    cout<<"Jumlah Deposito Awal = ";
    cin>>depawal;
    cout<<"Suku Bunga = ";
    cin>>sukubunga;
    cout<<"Lama Menabung (Tahun) = ";
    cin>>lamamenabung;
    tabungan(depawal, sukubunga, lamamenabung-1, Hsl);
    cout<<"Jumlah Saldo = "<<(1+(sukubunga/100))*Hsl<<endl;
    cout<<endl;
}
int main()
{
    bool ulang;
    int pilmenu;
    char pilulang;
    ulang=true;
    while(ulang){
        cout<<"Pilihan Menu Hitung :"<<endl;
        cout<<"1. SPLDV"<<endl;
        cout<<"2. Deposito Tabungan (Fungsi)"<<endl;
        cout<<"3. Deposito Tabungan (Prosedur)"<<endl;
        cout<<"Pilih Menu : ";
        cin>>pilmenu;
        cout<<endl;
        if (pilmenu==1){
            PanggilSPLDV();
        }else if (pilmenu==2){
            DepTabFungsi();
        }else if (pilmenu==3){
            DepTabProsedur();}
        cout<<endl<<"Pilih Menu Lagi ? (Y/T) : ";
        cin>>pilulang;
        cout<<endl;
        if (pilulang=='T'||pilulang=='t'){
            ulang=false;
        }else{
            ulang=true;
            system("CLS");
        }
    }
    return 0;
}
