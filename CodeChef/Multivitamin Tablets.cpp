#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
         int x,y;
         cin>>x>>y;
         x*=3;
         if(x<=y)
         {cout<<"YES"<<endl;}
         else{cout<<"NO"<<endl;}
     }
     return 0;
}