#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
     int A,B,C;
     cin>>A>>B>>C;
     if(A>B && A>C)
     {
          cout<<"Alice"<<endl;
     }
     else if (B>A && B>C)
     {
          cout<<"Bob"<<endl;
     }
     else if(C>A && C>B)
     {
          cout<<"charlie"<<endl;
     }
     }
     return 0;
}