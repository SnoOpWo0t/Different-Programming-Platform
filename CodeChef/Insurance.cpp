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
        if(X>Y)
        {
          cout<<Y<<endl;
        } 
        else if (X<Y)
        {
          cout<<X<<endl;
        }
        else if (X=Y)
        {
          cout<<X<<endl;
        }
         

     }
     return 0;
}