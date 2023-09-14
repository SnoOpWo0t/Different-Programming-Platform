#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
     int a,b,c;
         cin>>a>>b>>c;
      if(a<b && b<c)
         {
      int sub = c-a;
          cout<<sub<<endl;
         }
         else
         {
          cout<<"0"<<endl;
         }
         
     }
     return 0;
}