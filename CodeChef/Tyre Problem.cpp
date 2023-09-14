#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
       int n,m,sum;
       cin>>n>>m;
       n *= 2;
       m *=4;
       sum = n+m;
       cout<<sum<<endl;  
     }
     return 0;
}