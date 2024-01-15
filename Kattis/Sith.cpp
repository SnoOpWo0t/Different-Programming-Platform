#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s ;
    int a,b,c,sub = 0;
    cin >> s >> a >> b>> c;
    sub =-(a-b);
    if(c<0)
    {
        cout<<"JEDI"<<endl;
    }
    else if(c==sub)
    {
        cout<<"SITH"<<endl;
    }
    else if (c>0){
        cout<<"VEIT EKKI"<<endl;
    }
}