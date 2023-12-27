#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    getline(cin, s); // Input a string

    cin >> n;
    if (n <= 9)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%s", s.c_str());
            // cout << s << endl; // Alternatively, you can use cout as well
        }
    }

    return 0;
}
