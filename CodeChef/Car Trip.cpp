#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
       int X,mul;
       cin>>X;
       int have_to_pay =  3000;
       mul = 10*X;
     if(X<300)
     {
          cout<<have_to_pay<<endl;
     }
     else  
     {
          cout<<mul<<endl;
     }     

     }
     return 0;
}