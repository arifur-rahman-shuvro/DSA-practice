/*
Author: Arifur Rahman Shuvro
Date: 02 July, 2025
Credit: Concept learnt from A2Z Striver Playlist (Recursion)
GitHub: https://github.com/arifur-rahman-shuvro

Description:
This code checks if a given string is a palindrome using recursion.
Instead of using loops, it recursively compares characters from both ends.

Note:
This code isn't optimized for competitive programming. It's written to build a strong recursion foundation.
*/

#include <iostream>
#include <algorithm> // For transform()
using namespace std;

// Main bool function to check if the word is Palindrome or not
bool isPalindrome(int i, string& s){
    if (i >= s.length() / 2) return true;
    if (s[i] != s[s.length() - i - 1]) return false; // Compare characters from both ends
    return isPalindrome(i + 1, s); // Recursive call
}

int main(){
    string s;
    cin >> s;

    // Convert string to lowercase to handle case-insensitive check (optional)
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    // Get output from bool function
    if(isPalindrome(0, s)){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }

    return 0;
}

/*
Input: Madam
Output: Palindrome

Input: School
Output: Not Palindrome
*/