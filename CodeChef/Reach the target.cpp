#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
     int X,Y,sub;
     cin>>X>>Y;
     sub = X-Y;
     cout<<sub<<endl;
     }

     return 0;
}