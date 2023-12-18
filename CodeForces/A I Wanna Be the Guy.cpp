#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    int a[p];
    for(int i = 0 ; i<p; i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    int b[q];
    for(int i = 0 ; i<q; i++)
    {
        cin>>b[i];
    }
    int c[p+q];
    for(int i = 0 ; i<p; i++)
    {
        c[i] = a[i];
    }
    for(int i = p ; i<p+q; i++)
    {
        c[i] = b[i-p];
    }
    sort(c,c+(p+q));
    int count = 0;
    for(int i = 0 ; i<p+q; i++)
    {
        if(c[i]!=c[i+1])
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    
}