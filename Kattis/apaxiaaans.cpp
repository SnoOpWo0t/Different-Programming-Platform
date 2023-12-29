#include<bits/stdc++.h>
using namespace std;
int main ()
{ //also can be done with set
    string s;
    cin>>s;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i] != s[i+1])
        {
            cout<<s[i];
        }
    }
    cout<<endl;
}