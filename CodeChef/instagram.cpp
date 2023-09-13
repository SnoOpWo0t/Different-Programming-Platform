#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
      int x,y;
      cin>>x>>y;
      if((y*10)<x) 
      {
          cout<<"yes"<<endl;
      }
      else {cout<<"no"<<endl;}
         

     }
     return 0;
}
