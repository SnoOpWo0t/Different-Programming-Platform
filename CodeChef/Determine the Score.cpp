#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,t;
    cin>>t;
    for(i = 0 ; i<t ; i++)
    {
        int x,n;
        cin>>x>>n;
        int testcase = 10;
        int m = x/testcase;
        int r = m*n;
        cout<<r<<endl;
    }
}