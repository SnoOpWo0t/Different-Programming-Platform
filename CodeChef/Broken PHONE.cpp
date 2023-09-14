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
          if(x>y)
          {cout<<"NEW PHONE"<<endl;}
          else if(x==y)
          {cout<<"ANY"<<endl;}
          else{cout<<"REPAIR"<<endl;}
     }
     return 0;
}