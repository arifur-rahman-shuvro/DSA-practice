/*
Author: Arifur Rahman Shuvro
Date: 02 July 2025
Credit: Concept learned from "A2Z Striver" Playlist
GitHub: https://github.com/arifur-rahman-shuvro
*/

/*
Description: 
Recursion is used instead of a loop to print numbers from n to 1 (inclusive).
*/

#include <iostream>
using namespace std;

// Recursive function to print numbers from n to 1
void print_n_to_1(int n) {
    if (n < 1) return;     // Base case: if n is less than 1, stop recursion
    cout << n << endl;    // Print current number
    print_n_to_1(n -1);  // Recursive call with n decremented
}

int main() {
    int n; // Start point
    cin >> n;
    print_n_to_1(n);
    return 0;
}

/*
Input:
10

Output:
10
9
8
7
6
5
4
3
2
1
*/
