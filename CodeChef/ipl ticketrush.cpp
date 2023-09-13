#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int i,t;
    cin>>t;
    for(i = 1;i<=t ;i++)
    {
        int n,m;
        cin>>n>>m;
        if(n>m)
        {
            int b = n-m;
            cout<<b<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
}