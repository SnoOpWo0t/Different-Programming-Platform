#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
       int X,Y,Z;
       cin>>X>>Y>>Z;
       int div = (Z-Y)/X;
       cout<<div<<endl;
     }
     return 0;
}