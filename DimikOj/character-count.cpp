#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;

        int frequency[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            frequency[s[i] - 'a']++;
        }
        
        for (int i = 0; i < 26; i++) {
            if (frequency[i] > 0) {
                cout << (char) (i + 'a') << " = " << frequency[i] << endl;
            }
        }
        
        if (t > 0) {
            cout << endl;
        }
    }
    
    return 0;
}