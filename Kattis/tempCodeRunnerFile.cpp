#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
        set<string> city;
        int n;
        cin>>n;
        for(int j = 0 ; j<n ; j++)
        {
            string s;
            cin>>s;
            city.insert(s);
        }
        cout<<city.size()<<endl;
    }
    // int t, i;
    // cin >> t;
    // int count = 1;

    // for (i = 0; i < t; i++)
    // {
    //     int n;
    //     cin >> n;
    //      string s[100];
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> s[i];
    //        // cout<<s[i];
    //     }
    //     sort(s, s + n);
    //     if(s[i]!=s[i+1])
    //     {
    //         count++;
    //     }
    //     cout<<count<<endl;
    // }
    
   
}