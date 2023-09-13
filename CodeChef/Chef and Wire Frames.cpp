#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)

     {
         int N,M,X;
         cin>>N>>M>>X;
         int area = 2*N+M*2;
         int c = X*area;
         cout<<c<<endl;
         

     }

     return 0;
}