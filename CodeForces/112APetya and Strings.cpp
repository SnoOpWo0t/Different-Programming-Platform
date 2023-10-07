#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    int i;

    // getline(cin, a);
    // getline(cin, b);
    cin>>a>>b;
  //  cin.ignore();
    int lena = a.length();
    int lenb = b.length();
      for(i=0;i<lena;i++)
    {
        a[i]= tolower(a[i]);
    }
    for(i=0;i<lenb;i++)
    {
     b[i] =   tolower(b[i]);
    }

        if(a==b)
    {
        cout<<"0"<<endl;
    }
    else
    {
        for(i =0; i<a.size();i++)
        {
            if(a[i]<b[i])
            {
                cout<<"-1"<<endl; 
                break;
            }
            if(a[i]> b[i])
            {
                cout<<"1"<<endl; 
                break;
            }
        }
    }
 }
    



