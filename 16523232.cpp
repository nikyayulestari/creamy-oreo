#include <iostream>
#include <windows.h>

using namespace std;
int L1[50][50], L2[50][50], H[50][50], a, b, j, k, x;

void Penjumlahan(){

    cout<<endl<<"Input Nilai Matriks Kedua = "<<endl;
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                cout<<"M2["<<a<<"]["<<b<<"] = ";
                cin>>L2[a][b];
            }
    }
    cout<<endl;
    cout<<"Matriks = "<<endl;
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                cout<<L2[a][b]<<" ";
            }
            cout<<endl;
    }
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                L1[a][b]=H[a][b];
            }
    }
    cout<<endl<<"Hasil Penjumlahan Matriks = "<<endl;
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                H[a][b]=L1[a][b]+L2[a][b];
                cout<<H[a][b]<<" ";
            }
            cout<<endl;
    }
}

void Pengurangan(){
    cout<<endl<<"Input Nilai Matriks Kedua= "<<endl;
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                cout<<"M2["<<a<<"]["<<b<<"] = ";
                cin>>L2[a][b];
            }
    }
    cout<<endl;
    cout<<"Matriks = "<<endl;
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                cout<<L2[a][b]<<" ";
            }
            cout<<endl;
    }
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                L1[a][b]=H[a][b];
            }
    }
    cout<<endl<<"Hasil Pengurangan Matrik = "<<endl;
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                H[a][b]=L1[a][b]-L2[a][b];
                cout<<H[a][b]<<" ";
            }
            cout<<endl;
    }
}

void PerkalianSkalar(){
    cout<<endl<<"Input Nilai Perkalian = ";
    cin>>x;
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                L1[a][b]=H[a][b];
            }
    }
    cout<<endl<<"Hasil Perkalian Skalar : "<<endl;
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                H[a][b]=L1[a][b]*x;
                cout<<H[a][b]<<" ";
            }
            cout<<endl;
    }
}

void Transpose(){
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                L1[a][b]=H[a][b];
            }
    }
    cout<<endl<<"Hasil Transpose ="<<endl;
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                cout<<L1[b][a]<<" ";
            }
            cout<<endl;
    }
}

int main()
{
    bool ulang;
    int pilmenu;
    char pilulang;
    ulang=true;
    cout<<"Inputkan jumlah baris Matriks = ";
    cin>>j;
    cout<<"Inputkan jumlah kolom Matriks = ";
    cin>>k;
    cout<<endl;
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                cout<<"M1["<<a<<"]["<<b<<"] = ";
                cin>>H[a][b];
            }
    }
    cout<<endl;
    cout<<"Matriks = "<<endl;
    for(a=0;a<j;a++){
            for(b=0;b<k;b++){
                cout<<H[a][b]<<" ";
            }
            cout<<endl;
    }
    cout<<endl;

    while(ulang){
        cout<<"Pilihan Menu Hitung :"<<endl;
        cout<<"1. Penjumlahan 2 Matriks"<<endl;
        cout<<"2. Pengurangan 2 Matriks"<<endl;
        cout<<"3. Perkalian Skalar Matriks"<<endl;
        cout<<"4. Transpose Matriks"<<endl;
        cout<<"Pilih Menu : ";
        cin>>pilmenu;
        if (pilmenu==1){
            Penjumlahan();
        }else if (pilmenu==2){
            Pengurangan();
        }else if (pilmenu==3){
            PerkalianSkalar();
        }else if (pilmenu==4){
            Transpose();}

        cout<<endl<<"Pilih Menu Lagi ? (Y/T) : ";
        cin>>pilulang;
        cout<<endl;
        if (pilulang=='Y'||pilulang=='y'){
            ulang=true;
        }else{
            ulang=false;
        }
    }
    return 0;
}
