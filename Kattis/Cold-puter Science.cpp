#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int i ,t ;
    cin>>t;
    int b=0;
     int a[t];
    for(i = 0; i<t ; i++)
    {     
        cin>>a[i];
        if(a[i]<0)
        {
            b++;
        }

    }
    cout<<b<<endl;
}