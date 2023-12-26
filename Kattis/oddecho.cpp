#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    string s[100] ;
    for(int i = 1 ; i<=n ; i++)
    {
        cin >> s[i] ;
      if(i%2 ==1)
      {
        cout<<s[i]<<endl;
      }
    }
}