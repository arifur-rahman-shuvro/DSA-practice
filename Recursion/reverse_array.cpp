/*
Author: Arifur Rahman Shuvro
Date: 02 July 2025
Credit: Concept learned from "A2Z Striver" Playlist
GitHub: https://github.com/arifur-rahman-shuvro
*/

/*
Description: 
Recursion is used instead of a loop to reverse an array.
*/
//Note: This isn't optimized for CP. It has been written purely for learn recursion

#include <iostream>
using namespace std;

//Recursive function to reverse an array
void reverse(int i, int size, int arr[]){
    if(i >= size/2) return;
    swap(arr[i], arr[size-i-1]);
    reverse(i+1, size, arr);// Recursive function
}

int main(){
    int size;//size of array
    cin >> size;
    int arr[size];
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    reverse(0, size, arr);
    
    for(int i=0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Input:
5 (Size of array)
1 2 3 4 5 (Elements of array)

Output:
5 4 3 2 1
*/