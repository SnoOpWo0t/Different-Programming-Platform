#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
         int X,P,Q;
         cin>>X>>P>>Q;
         if(P>Q )
         {
          int sub = 0 + (P-Q);
          int  mul = X*sub;
          cout<<mul<<endl;
         }
         else
         {
          cout<<"0"<<endl;
         }
         

     }
     return 0;
}