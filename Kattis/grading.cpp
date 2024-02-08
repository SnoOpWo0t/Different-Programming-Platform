#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // int a=80,b=70,c=60,d=50,e=40;
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int g;
    cin>>g;
    if(g>=a)
    {
        cout<<"A";
    }
    else if(g>=b)
    {
        cout<<"B";
    }
    else if(g>=c)
    {
        cout<<"C";
    }
    else if(g>=d)
    {
        cout<<"D";
    }
    else if(g>=e)
    {
        cout<<"E";
    }
    else
    {
        cout<<"F";
    }
}