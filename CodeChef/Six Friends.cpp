#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)

     {
         int X,Y;
         cin>>X>>Y;
         int mul1 = X*3;
         int mul2 = Y*2;
         if(mul1>mul2)
         {
          cout<<mul2<<endl;
         }
         else {cout<<mul1<<endl ; }

     }

     return 0;
}