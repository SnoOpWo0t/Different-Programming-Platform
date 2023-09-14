#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)

     {         
         int N,X,Y;
         cin>>N>>X>>Y;
         int sum = (X*1+Y*2);
         if(sum>N)
         {
          cout<<"NO"<<endl;
         }
         else
         {
          cout<<"Yes"<<endl;
         }

     }

     return 0;
}