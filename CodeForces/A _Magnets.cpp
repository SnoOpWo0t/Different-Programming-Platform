#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t ,count = 1;
    cin>>t;
   int  a[t];
    for(int i = 0 ; i <t ; i++)
    {
        cin>>a[i];
        
    }
    for(int j = 0 ; j<t-1;j++)
    {
        if(a[j] != a[j+1])
        {
            count++;
        }

    }
    cout<<count<<endl;
}