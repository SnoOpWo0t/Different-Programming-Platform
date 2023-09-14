#include<iostream>
using namespace std ;
int main ()
{
     int X,A,B;
     cin>>X>>A>>B;
     int sum = A+B;
     if(sum<X)
     {
          cout<<"yes"<<endl;
     }
     else if(sum==X)
     {
          cout<<"YEs"<<endl;
     }
     else if(X<sum)
     {
          cout<<"no"<<endl;
     }

     return 0;
}