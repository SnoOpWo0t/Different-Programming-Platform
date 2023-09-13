#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
         int A,B,C,Sum;
         cin>>A>>B>>C;
         if((A+B) ==C)
         {
          cout<<"yes"<<endl;
         }
         else if ( (B+C)==A)
         cout<<"yes"<<endl;
         else if ((C+A)==B) 
         {cout<<"yes"<<endl;}
         else {cout<<"no"<<endl;}
     }
     return 0;
}