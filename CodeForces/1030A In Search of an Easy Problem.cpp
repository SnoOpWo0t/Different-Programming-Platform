#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin>>t;
    int a[t];int count1 = 0 ;
    for(int i = 0 ; i<t ;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            count1++;
        }
        // else if (a[i]==0)
        // {
        //     continue ;
        // }
    }
    if(count1>0)
    {
        cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }
}