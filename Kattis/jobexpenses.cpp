#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,exp =0;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            exp+=a[i];
        }

    }
    cout<<abs(exp);

}