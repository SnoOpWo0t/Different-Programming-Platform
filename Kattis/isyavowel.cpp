#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int v = 0,wv =0 ;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {            
            v++;
            i+=2;
        }
        else if( s[i]=='y')
            wv++;
            i++;
    }
    cout<<v<<" "<<wv+v+1<<endl;
    return 0;
}