#include<bits/stdc++.h>
#include<algorithm>
using namespace std ;
int main ()
{
    string s ;
    cin>>s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);;
    string s2 = "cov";
    if(s.find(s2)!= string::npos)
    {
        cout<<"Veikur!"<<endl;
    }
    else
    {
        cout<<"Ekki veikur!"<<endl;
    }
}