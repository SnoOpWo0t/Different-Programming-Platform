#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
     int M,N,sum;
     cin>>N>>M;
     sum = N*5 + M*7;
     cout<<sum<<endl;
     }
     return 0;
}