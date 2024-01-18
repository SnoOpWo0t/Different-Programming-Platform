#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n ;
    int sum = 0 ;
    for(int i = 1 ; i<=n ;i++)
    {
        int x ;
        cin>>x;
        int p = x%10 ;
        int q = x/10 ;
        sum += pow(q,p) ;
    }
    cout<<sum<<endl;
}