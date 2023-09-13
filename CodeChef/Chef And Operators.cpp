#include <iostream>
using namespace std;
int main()
{
     int T,i;
     cin>>T;
     for(i=1;i<=T;i++)
     {
     int A, B;
     cin >> A >> B;
     if (A < B)
     {
          cout << "<" << endl;
     }
     else if (A > B)
     {
          cout << ">" << endl;
     }
     else
     {
          cout << "=" << endl;
     }
     }
     return 0;
}