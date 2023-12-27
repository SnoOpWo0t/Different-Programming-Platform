#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        char lowercaseChar = tolower(s[i]);
        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' ||
            lowercaseChar == 'o' || lowercaseChar == 'u' )
        {
            count++;
        }
    }
    cout << count << endl;

}
