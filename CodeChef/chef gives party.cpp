#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
     int N,X,K,mul;
     cin>>N>>X>>K;
     mul =  N*X;
     if(mul<=K)
     {
          cout<<"yes"<<endl;
     }
     else{
          cout<<"No"<<endl;
     }


     }
     return 0;
}