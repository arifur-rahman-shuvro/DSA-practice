/*
Author: Arifur Rahman Shuvro
Date: 02 July 2025
Credit: Concept learned from "A2Z Striver" Playlist
GitHub: https://github.com/arifur-rahman-shuvro
*/

/*
Description: 
Recursion is used instead of a loop to print numbers from n to m (inclusive).
*/

#include <iostream>
using namespace std;

// Recursive function to print numbers from n to m
void print_n_to_m(int n, int m) {
    if (n > m) return;       // Base case: if n exceeds m, stop recursion
    cout << n << endl;       // Print current number
    print_n_to_m(n + 1, m);  // Recursive call with n incremented
}

int main() {
    int n; // Start point
    int m; // End point
    cin >> n >> m;
    print_n_to_m(n, m);
    return 0;
}

/*
Input:
1 10

Output:
1
2
3
4
5
6
7
8
9
10
*/
