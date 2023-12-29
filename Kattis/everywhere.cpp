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
    
    
   
}