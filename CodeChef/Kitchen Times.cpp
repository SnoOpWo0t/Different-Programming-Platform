#include <iostream>
using namespace std;
int main()
{
     int i, T;
     cin >> T;
     for (i = 1; i <= T; i++)
     {
          int x, y;
          cin >> x >> y;
          if (1 <= x && x < y && y <= 12)
          {
               int sub = y - x;
               cout << sub << endl;
          }
          else
          {
               cout << "0" << endl;
          }
     }
     return 0;
}