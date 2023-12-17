#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t,capacity = 0 ,count = 0;
    cin>>t;
    for(int i = 0 ; i<t;i++)
    {
        int p , q;
        cin>>p>>q;
        capacity = q-2;
        if(p<=capacity)
        {
            count++;
        }
        
    }
    cout<<count<<endl;
}