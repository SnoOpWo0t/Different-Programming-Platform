#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
          int n,x,div;
          cin>>n>>x ;
          div = (n/6)*x;
          cout<<div<<endl;
     }
     return 0;
}