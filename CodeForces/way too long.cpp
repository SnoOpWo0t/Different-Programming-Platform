#include<bits\stdc++.h>
using namespace std;
int n,i,count = 0;
int main ()
{
    cin>>n;
    for(i = 0 ;i<=n ;i++)
    {
        string a;
        getline(cin,a);
        int length = a.length();
        if(length >10)
        {
            cout<<a[0]<<length-2<<a[length-1]<<endl;
        }
        else{
            cout<<a<<endl;
        }

    }
}
