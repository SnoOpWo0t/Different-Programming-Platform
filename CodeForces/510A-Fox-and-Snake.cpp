#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {  // Fixed loop starting from 0
        for (int j = 0; j < n; j++) {
            if (i % 4 == 0 || i % 4 == 2) {
                // Full row of #
                cout << "#";
            } else if (i % 4 == 1) {
                // Right-aligned #
                if (j == n - 1)
                    cout << "#";
                else
                    cout << ".";
            } else {
                // Left-aligned #
                if (j == 0)
                    cout << "#";
                else
                    cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}
