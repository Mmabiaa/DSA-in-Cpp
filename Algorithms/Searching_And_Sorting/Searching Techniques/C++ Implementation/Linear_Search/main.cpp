#include <iostream>
using namespace std;

// Function for Linear Search
int linear_Search(int arr[], int key, int n) {
    for (int i = 0; i < n; i++) { // Iterate through the array
        if (arr[i] == key) { // If the current element is the key, return the index
            return i;
        }
    }
    return -1; // If the key is not found, return -1
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linear_Search(arr, key,n);
    if (result != -1) {
        cout << "Element"<<key<<" found at index " << result << endl;
    } else {
        cout << "Element"<<key<<" not found" << endl;
    }
    return 0;
}