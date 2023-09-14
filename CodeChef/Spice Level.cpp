#include<iostream>
using namespace std ;
int main ()
{ 
int T;
cin>>T;
for(int i = 1; i<=T ;i ++)
{
     int X ;
     cin>>X;
     if(X>=7)
     {
          cout<<"HOT"<<endl;
     }
     else if (X>=4 && X<7)
     {
          cout<<"MEDIUM"<<endl;
     }
     else if (X<4)
     {
          cout<<"MILD"<<endl;
     }
}
     return 0;
}