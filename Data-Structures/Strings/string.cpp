/* 
 * Strings are defined as an array of characters. 
 * A string is terminated with a special character ‘\0’ (null charatcer).
 * 
 * */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello World!";    // declaring and initalising str
    cout << str << '\n'; // outputs the string str

    cout << "Enter a string: ";
    string s; // Declring a string
    cin >> s; // Input a string
    cout << s << '\n';
    
    // using cin to input a string only inputs the characters till a whitespace in the string
    // Eg: 
    // Input - Strings are fun!
    // String stored: Strings
    // To avoid this we can use the getline() function    
    while(getchar() != '\n');   // This line is just to remove the '\n' character from the buffer otherwise the next input will be skipped

    cout << "Enter a string: ";
    getline(cin, str);
    cout << str << '\n';
    return 0;
}

