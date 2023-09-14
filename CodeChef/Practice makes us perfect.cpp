#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int p[4],week =0;
     for(int i =0;i<4;i++)
     {
     cin>>p[i];
     if(p[i]>=10)week++;

     }
     cout<<week;
     return 0;
}