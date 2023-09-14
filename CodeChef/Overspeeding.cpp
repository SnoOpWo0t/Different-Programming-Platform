#include<bits/stdc++.h>
using namespace std;
int main ()
{
     int i, T,n;
     cin>>T;
     for(i=1;i<=T;i++)
     {
          cin>>n;
          if(n<=70){
            cout<<0<<endl;
        }else if(n>70 && n<=100){
            cout<<500<<endl;
            
        }else{
            cout<<2000<<endl;
        }
     }
     return 0;
}