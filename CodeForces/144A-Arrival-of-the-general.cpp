#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
     int arr[n],maxx=0,minn=101,maxin,minin;
     for(int i = 0 ; i<n;i++)
     {
        cin>>arr[i]; //max
        if(arr[i]>maxx)
        {
            maxx = arr[i];
            maxin = i;
        }

        if(arr[i]<=minn)
        {
            minn = arr[i];
            minin = i;
        }

     }
     if (maxin > minin)
     {minin++;}
     cout<<maxin +(n-1)-minin;
}