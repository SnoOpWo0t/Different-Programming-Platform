#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)

     {
         int X,Y,Z,M;
         cin>>X>>Y>>Z;
         M = (X-Y)+Z;
         cout<<M<<endl;
     }

     return 0;
}