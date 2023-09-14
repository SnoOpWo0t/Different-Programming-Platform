#include<bits/stdc++.h>
using namespace std ;
    int f1(int a,int b)
    {
        return a+b;
    }
int main ()
{
    int i,T;
    cin>>T;
    for(i=1;i<=T;i++)
    {
    int a,b;
    cin>>a>>b;
    int c= f1(a,b);
    cout<<c<<endl;
    }

return 0;
}