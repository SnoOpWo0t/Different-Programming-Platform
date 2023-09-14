#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int i,T;
     cin>>T;
     for(i=1;i<=T;i++)
     {
         int x1,y1,x2,y2,s1,s2;
         cin>>x1>>y1>>x2>>y2;
         s1 = x1+y1;
         s2 = x2+y2;
         if(s1<s2)
         {
          cout<<s1<<endl;
         }
         else{
          cout<<s2<<endl;
         }
     }
     return 0;
}