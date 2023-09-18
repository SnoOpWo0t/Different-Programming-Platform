#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    long long int n,m,a;
    double len,wi;
    cin>>n>>m>>a;
    len = ceil((double)n/(double)a);
    wi = ceil((double)m/(double)a);
    long long int t;
    t = len*wi;
    cout<<t<<endl;
}