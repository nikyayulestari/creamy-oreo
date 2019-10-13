#include <iostream>
using namespace std;
float rerata_kini(float rerata,
float data_baru, float
banyak_data)
{
float Sementara;
Sementara=((rerata*banyak_data)+
data_baru)/(banyak_data+1);
return Sementara;
}

int main()
{
float A, B, C, D;
float rerata_kini(float
rerata, float data_baru, float
banyak_data);
cin>>A;
cin>>B;
cin>>C;
D = rerata_kini(A,B,C);
cout<<D;
return 0;
}
