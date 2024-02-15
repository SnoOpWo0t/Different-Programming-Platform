#include<bits/stdc++.h>
using namespace std;
int main ()
{
     int t;
     cin>>t;
     int a[t],sum = 0,sum2 =0,count = 0;
     for(int i = 0 ; i<t ;i++)
     {
         cin>>a[i];
            sum+=a[i];
        
     }
     sum = sum/2;
     sort(a,a+t); // sorting the array in ascending order
     for(int j = t-1 ; j>=0 ; j--)
     {
         sum2+=a[j];
         count++;
         if(sum2>sum)
         {
             break;
         }
     }
     cout<<count<<endl;
}