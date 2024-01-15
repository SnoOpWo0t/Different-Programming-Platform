#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // Input a number
    int sum = 0;
    int temp = n;
    // Calculate the sum of digits of the number
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    // Check if the original number is divisible by the sum of its digits
    if (n % sum == 0)
        cout << n; // If yes, print the original number
    else
    {
        // If not, find the next number that is divisible by the sum of its digits
        while (n % sum != 0)
        {
            n++;
            sum = 0;
            temp = n;
            // Recalculate the sum of digits for the new number
            while (temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }
        }
        cout << n; // Print the next number that satisfies the condition
    }

    return 0;
}
