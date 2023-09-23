#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,t;
    cin>>t;
    for(i = 0 ; i<t;i++)
    {
        int n,x;
        cin>>n>>x;
        if(x>=n)
        {
            cout<<0<<endl;
        }
        else
        {
            int sub = n-x;
            cout<<sub<<endl;
        }
    }
}