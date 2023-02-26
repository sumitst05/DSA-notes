/*
 * A given string is said to be a palindrome if on reversing it we obtain the same string
 * Eg: aabbaa <-> aabbaa; racecar <-> racecar
 */

#include<bits/stdc++.h>
using namespace std;

// Function to check if a given string is a palindrome
bool isPalindrome(string s) {
    for(int i = 0; i < s.length() / 2; i++) {   // iterate the string from both ends towards the center and check if characters are same
        if(s[i] != s[s.length() - i - 1]) {     // if characters are different
            return false;   // return false value
        }
    }

    return true;    // else return true 
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    if(isPalindrome(s)) {   // if function call returns true
        cout << s << " is a palindrome" << '\n';
    } else {    // if returns false
        cout << s << " is not a palindrome" << '\n';
    }
    
    // checking if a given string is a palindrome by using reverse() function
    string x = s;   // store the original string
    reverse(s.begin(), s.end());    // reverse the string
    // check if reversed string is same as stored(original) string
    if(x == s) {
        cout << x << " is a palindrome" << '\n';
    } else {
        cout << x << " is not a palindrome" << '\n';
    }

    return 0;
}
