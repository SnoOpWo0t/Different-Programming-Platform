#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i;
     int x = 0;
       string s ;
    cin>>t;
    for(i = 1; i<=t;i++)
    {
       
      
     //   getline(cin,s);
     cin>>s;
        if(s[1]=='+') // I used single quotes ('+' and '-') instead of  "+" because comparing characters, not strings.
        {
            x++;
        }
        else{
            x--;
        }
        
    }
    cout<<x<<endl;
}