#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, b;
    cin >> t >> b;
    vector<int> a(t); // Use a vector instead of an array

    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum <= b)
    {
        cout << "Jebb" << endl;
    }
    else
    {
        cout << "Neibb" << endl;
    }

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std ;
// int main ()
// {
//     int t ,b;

//     cin>>t>>b;
//     int a[t],sum =0;
//     for(int i = 0 ;i<t;i++)
//     {
//         cin>>a[i];
//         sum +=a[i];
//     }
//     if(sum<=b)
//     {
//         cout<<"Jebb"<<endl;
//     }
//     else{
//         cout<<"Neibb"<<endl;
//     }
// }