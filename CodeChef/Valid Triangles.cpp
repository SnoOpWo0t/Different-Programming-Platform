#include <iostream>
using namespace std;
int main()
{
     int T, i;
     cin >> T;
     for (i = 1; i <= T; i++)
     {
          int a, b, c, sum = 0;
          cin >> a >> b >> c;
          sum = a + b + c;
          if (sum == 180)
          {
               cout << "YES" << endl;
          }
          else
          {
               cout << "NO" << endl;
          }
     }
     return 0;
}