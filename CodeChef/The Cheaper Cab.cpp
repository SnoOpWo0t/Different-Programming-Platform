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
          if(x<y)
          {
               cout<<"first"<<endl;
          }
          else if(x>y)
          {
               cout<<"second"<<endl;
          }
          else if (x==y)
           { cout<<"any"<<endl; }

     }
     return 0;
}