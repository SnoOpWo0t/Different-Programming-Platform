#include<bits/stdc++.h>
using  namespace std;
int main ()
{
    int n,i;
    cin>>n ;
    int arr[n];
    for(i = 0 ; i<n;i++)
    {
        cin>>arr[i];
    }
    int s = 0 ,e = n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    } 
    //printing
    for(i = 0 ; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}