#include<bits/stdc++.h>
using namespace std ;
int Sum1(int N)
{
     int sum = 0;
    for(int i =1; i<=N;i++)
    {     
        sum += N%10;
        N /=10;
    }

    return sum ;
}
int main ()
{
    int i,T;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        int N;
        cin>>N;
        int cal = Sum1(N);
        cout<<cal<<endl;
    }
    return 0;
}