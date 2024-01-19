#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i =0; i<n;i++)
    {
        int r,e,c;
        cin>>r>>e>>c;
        int dm = e-c;
        if(r>dm)
        {
            cout<<"do not advertise"<<endl;
        }
        else if(r<dm)
        {
            cout<<"advertise"<<endl;
        }
        else
        {
            cout<<"does not matter"<<endl;
        }

    }
}