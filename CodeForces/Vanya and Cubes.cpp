#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n ;
    cin>>n ;
    int height=0, sum = 0 ;
    for(int i=1 ; n>0 ; i++)
    {
        sum += i ;
        if(n-sum >= 0)
        height++ ;
        else
        n = n-sum+i-1 ;
    }
    cout<<height<<endl ;

}