#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, c = 0;
    cin >> n >> k;
    int a[n];
    
    {
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] >= a[k - 1] && a[i]>0)
            {
                c++;
            }
        }
        cout << c << endl;
    }
}