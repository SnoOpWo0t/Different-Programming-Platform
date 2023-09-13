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
          int sum = a+b+c;

          if(sum>=100 && a>=10 && b>=10 && c>=10)
          {
               cout<<"pass"<<endl;
          }
          else {cout<<"Fail"<<endl;}
     }
     return 0;
}