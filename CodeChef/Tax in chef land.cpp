#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)

     {
     int X,sub;
     cin>>X;
     if(X>100)
     {
          sub = X-10;
         cout<<sub<<endl; 
     }
     else
     {
          cout<<X<<endl;
     }        
     }

     return 0;
}