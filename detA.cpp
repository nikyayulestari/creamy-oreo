#include <iostream>
using namespace std;
float Determinan(float a, float b,
float c)
{
float Sementara;
Sementara=b*b-(4*a*c);
return Sementara;
}

int main()
{
float A, B, C, D;
float Determinan(float a, float b,
float c);
cin>>A;
cin>>B;
cin>>C;
D = Determinan(A, B, C);
cout<<D;
return 0;
}
