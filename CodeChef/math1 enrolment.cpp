#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)

     {
          int X,Y,minus;
          cin>>X>>Y;
          minus = Y-X;
          if(Y>X)
          {
               cout<<minus<<endl;
          }
          else 
          {
               cout<<"0"<<endl;
          }
         
         

     }

     return 0;
}