#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    if (s == "a" || s == "e" || s == "i" || s == "o" || s == "u" ) {
        cout << "Jebb" << endl;
    // } else if (s == "y" || s == "b" || s == "c" || s == "d" || s == "f" || s == "g" || s == "h" || s == "j" || s == "k" || s == "l" || s == "m" || s == "n" || s == "p" || s == "q" || s == "r" || s == "s" || s == "t" || s == "v" || s == "w" || s == "x" || s == "z") {
    //     cout << "Neibb" << endl;
    } 
       else if (s == "y" ) 
       {cout << "Kannski" << endl;}
       else
         {cout << "Neibb" << endl;}
    

    return 0;
}
