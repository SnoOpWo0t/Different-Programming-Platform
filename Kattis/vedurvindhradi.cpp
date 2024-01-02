#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a ;
    cin >> a;
    if (a>=0 && a <=.2)
    {
        cout<<"Logn"<<endl;
    }
    else if (a>=.3 && a <=1.5)
    {
        cout<<"Andvari"<<endl;
    }
    else if (a>=.6 && a <=3.3)
    {
        cout<<"Kul"<<endl;
    }
    else if (a>=3.4 && a <=5.4)
    {
        cout<<"Gola"<<endl;
    }
    else if (a>=5.5 && a <=7.9)
    {
        cout<<"Stinningsgola"<<endl;
    }
    else if (a>=8 && a <=10.7)
    {
        cout<<"Kaldi"<<endl;
    }
    else if (a>=10.8 && a <=13.8)
    {
        cout<<"Stinningskaldi"<<endl;
    }
    else if (a>=13.9 && a <=17.1)
    {
        cout<<"Allhvass vindur"<<endl;
    }
    else if (a>=17.2 && a <=20.7)
    {
        cout<<"Hvassvidri"<<endl;
    }
    else if (a>=20.8 && a <=24.4)
    {
        cout<<"Stormur"<<endl;
    }
    else if (a>=24.5 && a <=28.4)
    {
        cout<<"Rok"<<endl;
    }
    else if (a>=28.5 && a <=32.6)
    {
        cout<<"Ofsavedur"<<endl;
    }
    else if (a>=32.7)
    {
        cout<<"Farvidri"<<endl;
    }
}