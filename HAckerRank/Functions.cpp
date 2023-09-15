#include<bits/stdc++.h>
using namespace std ;
int max(int a,int b,int c,int d)
{
    int ax = max(max(a,b),max(c,d));
    return ax;
}
int main ()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int m = max(a,b,c,d);
    cout<<m<<endl;
}