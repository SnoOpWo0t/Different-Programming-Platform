#include<bits/stdc++.h>
using namespace std ;
int main () 
{
     int i,T;
     cin>>T;
     for(i=1;i<=T; i++)
     {
     int A,B;
     cin>>A>>B;
     int eq = (A+B)%2 ;
     if(eq == 0)
     {
          cout<<"yes"<<endl;
     }
     else {cout<<"no"<<endl ;}
     }
     return 0;
}