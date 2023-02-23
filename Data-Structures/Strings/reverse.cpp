#include <bits/stdc++.h>
using namespace std;

int main() {
    // reversing string without using library function
    string s = "Strings in C++";
    cout << "String : " << s << '\n';

    cout << "\nReversed String: " << '\n';
    int i = 0; //iterator
    int n = s.length();     // iterator
    while(i < n / 2) {  // iterating till the mid of the string
        char temp = s[i];
        s[i] = s[n - i - 1];    // swapping the characters at the two corners and moving towards center
        s[n - i - 1] = temp;
        i++;
    }
    cout << s << '\n';
    
    // reversing string using reverse() 
    string str = "Strings in C++";
    reverse(str.begin(), str.end());
    cout << str << '\n';
    return 0;
}
