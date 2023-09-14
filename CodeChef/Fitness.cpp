#include <iostream>
using namespace std;
int main()
{
     int i, T;
     cin >> T;
     for (i = 1; i <= T; i++)
     {
          int X, Y;
          cin >> X;
          Y = X * 2 * 5;
          cout << Y << endl;
     }
     return 0;
}