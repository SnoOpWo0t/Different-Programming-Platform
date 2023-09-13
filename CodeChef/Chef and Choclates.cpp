#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
         int x,y,z,k;
         cin>>x>>y>>z;
         k = (x*5)+(y*10);
         int c = k/z;
         cout<<c<<endl;
     }
     return 0;
}