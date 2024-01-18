#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    int max = 0 ;
    int winner = 0 ;
    for (int i = 1 ; i <= 5 ; i++)
    {
        int sum = 0 ;
        for (int j = 1 ; j <= 4 ; j++)
        {
            int x ;
            cin >> x ;
            sum += x ;
        }
        if (sum > max)
        {
            max = sum ;
            winner = i ;
        }
    }
    cout << winner << " " << max << endl ;

}