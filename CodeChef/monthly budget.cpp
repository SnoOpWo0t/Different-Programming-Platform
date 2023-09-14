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
         y*=30;
         if(x>=y)
         {cout<<"yes"<<endl;}
         else {cout<<"NO"<<endl;}
     }
     return 0;
}