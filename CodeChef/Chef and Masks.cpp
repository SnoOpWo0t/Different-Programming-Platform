#include<iostream>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
          //TODO: X= Dispossible mask last for 1 day  (100*cost)
          //TODO: Y = CLOTH mask last for 10 (10* cost)
         int X,Y;
         cin>>X>>Y;
         int  D = 100*X;;
         int C = 10*Y;
         if(C>D)
          {
               cout<<"Disposable"<<endl;
          }
          else if (D>C)
          {
               cout<<"Cloth"<<endl;
          }
          else if(C==D)
          {
               cout<<"cloth"<<endl;
          }       
     }

     return 0;
}