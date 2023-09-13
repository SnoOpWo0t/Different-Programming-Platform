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
        if(X*2 > Y*5)
        {
          cout<<"Chocolate"<<endl;
        }
        else if (X*2 < Y*5)
        {
          cout<<"Candy"<<endl;
        }
        else
        {
          cout<<"Either"<<endl;
        }
     }
     return 0;
}