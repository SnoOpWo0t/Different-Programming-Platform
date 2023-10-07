#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int u=0,i;
    string s ;
     cin>>s;
    int len = s.length();
   
    for(i =0 ;i <len ;i++)
    {
        if(s[i]=='u')
        {
            u++;
        }
    }
    cout<<u<<endl;

}