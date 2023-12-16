#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, i;
    cin >> n >> t;
    string st;
    cin >> st;

    for (i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (st[j] == 'B' && st[j + 1] == 'G')
            {
                swap(st[j], st[j + 1]);
                j++;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << st[i];
    }

    return 0;
}
