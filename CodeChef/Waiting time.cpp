#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)

     {
        int X,K,sub;
        cin>>K>>X;
        int days = (K*7);
        sub  = days - X ;
        cout<<sub<<endl;
         

     }

     return 0;
}