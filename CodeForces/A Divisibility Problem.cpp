#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,count = 1;
    cin>>t;
    for(int i = 0 ; i<t; i++)
    {
       long long int a,b;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0<<endl;
            count = 0;
        }
        else{
            cout<<b-(a%b)<<endl;
        }
        
    }
}