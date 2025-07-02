/*
Author: Arifur Rahman Shuvro
Date: 02 July 2025
Credit: Concept learned from "A2Z Striver" Playlist
GitHub: https://github.com/arifur-rahman-shuvro
*/

/*
Description: 
Recursion is used instead of a loop to reverse a array.
*/
#include <iostream>
using namespace std;

void reverse(int i, int size, int arr[]){
    if(i >= size/2) return;
    swap(arr[i],arr[size-i-1]);
    reverse(i+1, size, arr);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    reverse(0, n, arr);
    
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}