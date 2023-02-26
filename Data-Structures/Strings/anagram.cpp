/*
 * Two strings are said to be an anagram of each other if the both contain same charcters (order does not matter)
 * Eg: bat, tab;   lead, deal
 */

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2) {
    // sort both the strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // return true if both contain same characters
    if(s1 == s2) {
        return true;
    }

    return false; // else return false
}

int main() {
    string s1, s2;

    cout << "Enter string 1: ";
    cin >> s1;

    cout << "Enter string 2: ";
    cin >> s2;

    if(isAnagram(s1, s2)) {
        cout << s1 << " and " << s2 << " are anagrams" << '\n';
    } else {
        cout << s1 << " and " << s2 << " are not anagrams" << '\n';
    }

    return 0;
}
