#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int T,i;
    cin>>T;
    for(i = 1 ; i <= T ; i++)
    {
        int x,y;
       
        cin>>x>>y;
         int s= x+y;
        if(s>6)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}