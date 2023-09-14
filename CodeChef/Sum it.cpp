#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
         int a,b,c;
         cin>>a>>b>>c;
         int z = a+b;
         if(z==c)
         {
          cout<<"YES"<<endl;
         }
         else {cout<<"NO"<<endl;}
     }
     return 0;
}