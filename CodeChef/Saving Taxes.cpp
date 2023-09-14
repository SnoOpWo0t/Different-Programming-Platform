#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int i,T ;
    cin>>T;
    for(i = 1 ; i<=T; i++)
    {
        int X,Y;
        cin>>X>>Y;
        if(X>Y)
        {
            int min = X-Y;
            cout<<min<<endl;
        }

    }
    return 0;
}