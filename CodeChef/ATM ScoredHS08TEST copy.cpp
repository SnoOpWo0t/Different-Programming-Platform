#include <iostream>
using namespace std;
int main()
{
     int i, T;
     cin>>T;
     for(i=1;i<=T;i++)
     {


     int x;
     cin >> x;

     if (x >= 7)
     {
          cout << "HEAVY" << endl;
     }
     else if (x >= 3 && x < 7)
     {
          cout << "MODERATE" << endl;
     }
     else
     {
          cout << "LIGHT" << endl;
     }
     }
     return 0;
}