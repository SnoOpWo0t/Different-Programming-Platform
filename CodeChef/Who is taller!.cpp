#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
     int X,Y;
     cin>>X>>Y;
     if(X!=Y && X>Y)
     {
          cout<<"A"<<endl;
     }
     else if (X!=Y && X<Y)
     {
          cout<<"B"<<endl;
     }
}
     return 0;
}