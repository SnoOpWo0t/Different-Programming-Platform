#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string s[n];
    for(int i = 0 ; i<n; i++)
    {
        cin>>s[i];
    }
    int q;
    cin>>q;
    string t[q];
    for(int i = 0 ; i<q; i++)
    {
        cin>>t[i];
    }
    for(int i = 0 ; i<q; i++)
    {
        int count = 0;
        for(int j = 0 ; j<n; j++)
        {
            if(t[i]==s[j])
            {
                count++;
            }
        }
        if(count>0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
