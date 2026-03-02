# Searching Techniques
Searching is the process of finding a particular element in a data structure.

## Types of Search Techniques
1. Linear Search
2. Binary Search
3. Fibonacci Search

## Linear Search
Linear search is a simple search technique where the search is performed by comparing each element of the data structure with the target element.

### How it works
1. Start from the first element of the data structure.
2. Compare the target element with the first element.
3. If the target element is found, return the index of the target element.
4. If the target element is not found, return -1.

### Flowchart of Linear Search
![Linear Search Flowchart](./LinearSearchFlowchart.png)

### Example of Linear search

```
Array: [1, 2, 3, 4, 5, 6, 7, 8, 9]
Target: 5

Linear Search:
- Compare 1 with 5 -> No match
- Compare 2 with 5 -> No match
- Compare 3 with 5 -> No match
- Compare 4 with 5 -> No match
- Compare 5 with 5 -> Match
  Found at index 4

Result: 4
```

### Time Complexity of Linear Search
The time complexity of linear search is O(n), where n is the number of elements in the data structure.

### Space Complexity of Linear Search
The space complexity of linear search is O(1), as it only requires a constant amount of space.

## Binary Search
Binary search is a searching tenique where the array is divided into halves and the target element is searched in the appropriate half.

### How it works
1. Check the middle element of the array.
2. If the target element is equal to the middle element, return the index of the middle element.
3. If the target element is less than the middle element, search in the left half.
4. If the target element is greater than the middle element, search in the right half.
5. Repeat step 1 and 2 until the target element is found
6. If the target element is not found, return -1.

### Flowchart of Binary Search
![Binary Search Flowchart](./BinarySearchFlowchart.png)

### Example of Binary Search

```
Array: [2, 5, 8, 12, 16, 23, 38]
Target: 16

Binary Search:
- Check the middle element of the array -> 12.
- 12 < 16 -> Search in the right half. [16, 23, 38]
- Check the middle element of the right half -> 23.
- 23 > 16 -> Search in the left half. [16]
- Check the middle element of the left half -> 16.
- 16 = 16 -> Found at index 4.

Result: 4
```

### Time Complexity of Binary Search
The time complexity of binary search is O(log n), where n is the number of elements in the data structure.

### Space Complexity of Binary Search
The space complexity of binary search is O(1), as it only requires a constant amount of space.


## Fibonacci Search
It is a comparison-based technique that uses Fibonacci numbers to search for an element in a sorted array. 
It follows a divide-and-conquer approach and has a O(log n) time complexity. 

### How it works
1. Let the element to be searched be x; then the idea is to first find the smallest Fibonacci number that is 
greater than or equal to the length of the given array. Let this Fibonacci number be the nth Fibonacci number. 
2. Use the (n-2)th Fibonacci number as an index, called i, then compare a[i] with x. If a[i] is the same as x, 
then return i. If x is greater, then search the subarray after i; otherwise, search the subarray before i. 

### Flowchart of Fibonacci Search
![Fibonacci Search Flowchart](./FibonacciSearchFlowchart.png)

### Example of Fibonacci Search
```

Array: [1, 2, 5, 8, 13, 21, 34, 55, 89]
Target: 21

Fibonacci Search:
- Find the smallest Fibonacci number that is greater than or equal to the length of the array. It is 9.
- The (n-2)th Fibonacci number is 8. So, i = 8.
- Compare a[i] with the target element. a[8] = 34 is greater than the target element.
- So, search the subarray after i. The (n-3)th Fibonacci number is 5. So, i = 5.
- Compare a[i] with the target element. a[5] = 21 is equal to the target element.
- Found at index 5.

Result: 5
```

### Time Complexity of Fibonacci Search
The time complexity of Fibonacci search is O(log n), where n is the number of elements in the data structure.

### Space Complexity of Fibonacci Search
The space complexity of Fibonacci search is O(1), as it only requires a constant amount of space.



## Hashing (Hash-Based Search)
Hashing is a searching technique that uses a hash table to search for an element. It follows a divide-and-conquer approach and has a O(1) time complexity. 

### How it works
1. Hash the element to be searched.
2. Find the index in the hash table for the element.
3. Compare the element at that index with the target element.
4. If they are the same, return the index.
5. If the target element is greater, search the next index.
6. If the target element is smaller, search the previous index.

### Flowchart of Hashing (Hash-Based Search)
![Hashing (Hash-Based Search) Flowchart](./HashingFlowchart.png)

### Example of Hashing (Hash-Based Search)
```

Example: Using the Hashing (Hash-Based Search)

Array: [1, 4, 9, 16, 25] 
Target: 9

1. Hash the target element (9) to get an index.
2. Look up the value at that index in the array.
3. If the value is equal to the target element, we found it. Return the index.
4. If the value is greater than the target element, search the previous index.
5. If the value is smaller than the target element, search the next index.

```

### Time Complexity of Hashing (Hash-Based Search)
The time complexity of hashing is O(1), as it only requires a constant amount of time.

### Space Complexity of Hashing (Hash-Based Search)
The space complexity of hashing is O(n), where n is the number of elements in the data structure.


## Exponential Search
Exponential search is a searching technique that uses binary search to find an element in an array sorted in ascending order.

### How it works
1. Find the index of the smallest value in the array that is greater than or equal to the target element.
2. If the target element is greater than the last element in the array, return -1.
3. If the target element is the last element in the array, return the index of the last element.
4. Otherwise, apply binary search to the subarray between the index found in step 1 and the last element in the array.

### Flowchart of Exponential Search
![Exponential Search Flowchart](./ExponentialSearchFlowchart.png)

### Example of Exponential Search
```
Array: [1, 2, 3, 4, 5, 6, 7, 8, 9]
Target: 5

Exponential Search:
- Find the index of the smallest value in the array that is greater than or equal to the target element. It is 4.
- If the target element is greater than the last element in the array, return -1.
- If the target element is the last element in the array, return the index of the last element.
- Otherwise, apply binary search to the subarray between the index found in step 1 and the last element in the array.

```

## Applications of Searching Techniques
1. Searching for an element in a sorted array
2. Searching for an element in an unsorted array
3. Searching for an element in a linked list
4. Searching for an element in a tree
5. Searching for an element in a graph



