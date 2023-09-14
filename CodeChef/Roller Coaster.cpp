#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
     int X,H;
     cin>>X>>H;
     if(X>=H)
     {
          cout<<"YES"<<endl;
     }
     else  
     {
          cout<<"NO"<<endl;
     }
}
     return 0;
}