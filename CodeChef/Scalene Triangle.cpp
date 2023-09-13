#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
          int A,B,C;
          cin>>A>>B>>C;
          if(A!=B &&  A!=C && B!=C && C!=A)
          {
               cout<<"yes"<<endl;
          }
          else{
               cout<<"NO"<<endl;
          }
     }
     return 0;
}