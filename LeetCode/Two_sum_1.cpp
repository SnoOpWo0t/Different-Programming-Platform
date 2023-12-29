#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int a[100],target;
    for(int j = 0 ; j<100; j++)
    {
        cin>>a[j];
      
    }
    cin>>target;
    for(int i = 0 ; i<100;i++)
    {
          if(a[i]+a[i+1] == target)
        {
            cout<<"["<<i <<","<<i+1<<"]"<<endl;
        }
    }

}