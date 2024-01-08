#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    int sum =0 ;
    for(int i = 0 ; i<t;i++)
    {
        int n ;
        cin>>n;
        sum+=n ;
    }
    cout<<sum-(t-1)<<endl;
}