#include <bits/stdc++.h>
using namespace std;
int minCoins(int coins[], int m, int sum) {
    // Sort coins in descending order
    sort(coins, coins + m, greater<int>());
    int coinCount = 0;

    for (int i = 0; i < m; i++) {
        // Use as many coins of this denomination as possible
        while (sum >= coins[i]) {
            sum -= coins[i];
            coinCount++;
        }
        // If sum becomes 0, we can stop
        if (sum == 0) break;
    }

    // If sum is not 0, it means we can't make the sum with given coins
    return sum == 0 ? coinCount : -1;
}
int main() {
    int coins[] = {1, 5, 10, 20, 100};
    int m = sizeof(coins) / sizeof(coins[0]);
    int sum;
    cin >> sum;
    cout << minCoins(coins, m, sum);
    return 0;
}
