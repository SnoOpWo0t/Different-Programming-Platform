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
     if(X>=Y)
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