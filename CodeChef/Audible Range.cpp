#include <iostream>
using namespace std;
int main()
{
     int i, T;
     cin >> T;
     for (i = 1; i <= T; i++)
     {
          int X;
          cin >> X;
          if (X >= 67 && X <= 45000)
          {
               cout << "YES"<<endl;
          }
          else
          {
               cout << "NO"<<endl;
          }
     }
     return 0;
}