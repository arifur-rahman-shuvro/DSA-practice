/*
Author: Arifur Rahman Shuvro
Date: 02 July, 2025
Credit: Concept learnt from A2Z Striver Playlist (Recursion)
GitHub: https://github.com/arifur-rahman-shuvro

Description:
This code returns the nth Fibonacci number using recursion.
Fibonacci Sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21...

Note:
1.This code isn't optimized for Competitive Programming. 
2.It's written to build a strong recursion foundation.
*/

#include <iostream>
using namespace std;

// Recursive Fibonacci Function
int fibonacci(int n){
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    cin >> n; // Enter the position (0-indexed) of the Fibonacci number
    cout << fibonacci(n);
    return 0;
}

/*
Sample Input: 6
Sample Output: 8

Explanation:
The 6th Fibonacci number in 0-based index is 8.
Sequence: 0, 1, 1, 2, 3, 5, 8
*/
