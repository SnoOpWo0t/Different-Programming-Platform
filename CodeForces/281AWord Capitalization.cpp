#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    int len = s.length();
    for(int i = 0 ; i<len ; i++)
    {
        if(i ==0)
        {
             s[i] = toupper(s[i]);
        }
        cout<<s[i];
     
    }
}