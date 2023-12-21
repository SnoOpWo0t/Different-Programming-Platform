#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m;
    cin>>n>>m;
    int k = n/m;
    int t = k*m;
    cout<<n-t<<endl;
}