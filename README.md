# DSA-in-CPP

A comprehensive collection of Data Structures and Algorithms implemented in C++. This repository serves as a learning resource for understanding fundamental computer science concepts through practical implementation.

## 📋 Table of Contents
- [Overview](#overview)
- [Repository Structure](#repository-structure)
- [Implemented Algorithms](#implemented-algorithms)
  - [Recursive Algorithms](#recursive-algorithms)
  - [Iterative Algorithms](#iterative-algorithms)
- [Implemented Data Structures](#implemented-data-structures)
  - [Simple Data Structures](#simple-data-structures)
  - [Compound Data Structures](#compound-data-structures)
- [Getting Started](#getting-started)
- [Why This Repository?](#why-this-repository)
- [How to Use](#how-to-use)
- [Contributing](#contributing)
- [License](#license)

## 🔭 Overview

This repository contains well-documented implementations of various data structures and algorithms in C++. Each implementation is designed to be clear, efficient, and educational, making it an ideal resource for:
- Computer Science students
- Self-learners preparing for technical interviews
- Developers looking to strengthen their fundamentals
- Anyone interested in understanding how data structures and algorithms work under the hood

## 📁 Repository Structure
DSA-in-CPP/
├── Algorithms/
│ ├── Recursive/
│ └── Iterative/
├── DataStructures/
│ ├── Simple/
│ └── Compound/
└── README.md

## 💻 Implemented Algorithms

### Recursive Algorithms
| Algorithm | Description | Time Complexity | Space Complexity |
|-----------|-------------|-----------------|------------------|
| [Factorial](./Algorithms/Recursive/Factorial.cpp) | Calculate factorial of a number | O(n) | O(n) |
| [Fibonacci Series](./Algorithms/Recursive/Fibonacci.cpp) | Generate Fibonacci sequence | O(2ⁿ) | O(n) |
| [Tower of Hanoi](./Algorithms/Recursive/TowerOfHanoi.cpp) | Solve Tower of Hanoi puzzle | O(2ⁿ) | O(n) |
| [GCD (Euclidean Algorithm)](./Algorithms/Recursive/GCD.cpp) | Find greatest common divisor | O(log min(a,b)) | O(log min(a,b)) |

### Iterative Algorithms
| Algorithm | Description | Time Complexity | Space Complexity |
|-----------|-------------|-----------------|------------------|
| [Factorial](./Algorithms/Iterative/Factorial.cpp) | Calculate factorial of a number | O(n) | O(1) |
| [Fibonacci Series](./Algorithms/Iterative/Fibonacci.cpp) | Generate Fibonacci sequence | O(n) | O(1) |
| [Tower of Hanoi](./Algorithms/Iterative/TowerOfHanoi.cpp) | Solve Tower of Hanoi puzzle | O(2ⁿ) | O(n) |
| [GCD](./Algorithms/Iterative/GCD.cpp) | Find greatest common divisor | O(log min(a,b)) | O(1) |

## 🏗️ Implemented Data Structures

### Simple Data Structures
#### Linear Data Structures
- Arrays
- Linked Lists (Singly, Doubly, Circular)
- Stacks
- Queues (Simple, Circular, Priority)

#### Non-Linear Data Structures
- Trees (Binary Tree, Binary Search Tree)
- Heaps (Min Heap, Max Heap)
- Graphs (Adjacency Matrix, Adjacency List)

### Compound Data Structures
#### Linear Data Structures
- Hash Tables
- Skip Lists

#### Non-Linear Data Structures
- AVL Trees
- Red-Black Trees
- B-Trees
- Trie

## 🚀 Getting Started

### Prerequisites
- C++ compiler (supporting C++11 or later)
- Basic understanding of C++ syntax
- CMake (optional, for building)

### Compilation
```bash
# Compile a specific algorithm
g++ -o output_file source_file.cpp

# Run the compiled program
./output_file

Using CMake (Optional)
bash
mkdir build
cd build
cmake ..
make

```

## 💡 Why This Repository?
### Educational Value
- **Hands-on Learning**: Each implementation is accompanied by comments explaining the logic

- **Comparative Analysis**: Both recursive and iterative approaches for key algorithms

- **Complexity Analysis**: Time and space complexity provided for each implementation

### Practical Benefits
- **Interview Preparation**: Covers frequently asked DSA questions

- **Code Reusability**: Well-structured code that can be adapted for projects

- **Best Practices**: Follows C++ coding standards and modern practices

- **Learning Features**: Clean, readable code with extensive comments

- **Multiple approaches to solving the same problem**

- **Performance considerations highlighted**

- **Real-world applications discussed**

## 📖 How to Use
**For Beginner**s: Start with simple data structures and basic algorithms

**For Interview Prep**: Focus on frequently asked problems and optimize solutions

**For Reference**: Use the implementations as building blocks for larger projects

**For Practice**: Try implementing variations or optimizing existing solutions

### Example Usage
```cpp
// Example: Using the Fibonacci implementation
#include "Algorithms/Recursive/Fibonacci.cpp"

int main() {
    int n = 10;
    std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;
    return 0;
}
```

## 🤝 Contributing
Contributions are welcome! If you'd like to add new algorithms or improve existing ones:

```
Fork the repository

Create a new branch (git checkout -b feature/improvement)

Commit your changes (git commit -am 'Add new feature')

Push to the branch (git push origin feature/improvement)

Open a Pull Request
```

## Contribution Guidelines
1. Ensure code follows C++ best practices
2. Add comments explaining complex logic
3. Include time and space complexity analysis
4. Test your code with multiple inputs

## 📄 License
This project is licensed under the MIT License - see the LICENSE file for details.

## ⭐ Support
If you find this repository helpful, please consider giving it a star! It helps others discover this resource
