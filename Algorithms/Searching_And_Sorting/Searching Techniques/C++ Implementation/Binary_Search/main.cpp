#include <iostream>
using namespace std;


// Function for Binary Search
int binarySearch(int* arr,int key, int n) {
    
    
    int low = 0; // Initialize the lower bound
    int high = n - 1; // Initialize the upper bound

    while (low <= high) { // Continue until the lower bound is less than or equal to the upper bound
        int mid = low + (high - low) / 2; // Calculate the middle index
        if (arr[mid] == key) { // If the middle element is the key, return the index
            return mid;
        }
        if (arr[mid] < key) { // If the middle element is less than the key, search in the right half
            low = mid + 1;
        } else {
            high = mid - 1; // If the middle element is greater than the key, search in the left half
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int result = binarySearch(arr, key,n);
    if (result != -1) {
        cout << "Element"<<key<<" found at index " << result << endl;
    } else {
        cout << "Element"<<key<<" not found" << endl;
    }
    return 0;
}
