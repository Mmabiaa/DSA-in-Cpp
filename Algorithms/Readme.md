# Algorithms
An **Algorithm** is a well defined step-by-step instructions to be executed in a specific order which takes in inputs and produces outputs to solve a problem.

## Structure of an Algorithm
1. Start
2. Input Step
3. Assignment Step
4. Decision step
5. Repetition Step
6. Output Step
7. Stop

## Properties of an Algorithm
1. Finiteness
2. Definiteness
3. Input
4. Output
5. Effectiveness
6. Generality

## Efficiency of an Algorithm
1. Time Complexity
2. Space Complexity

## Time Complexity
It is the measure of the amount of time taken by an algorithm to run from the start to the stop.

## Space Complexity
It is the measure of the amount of space in memory taken by an algorithm to run from the start to the stop.

## Efficiency Analysis
- ** A Priori Analysis**: It is the analysis of an algorithm before it is executed.
- ** A Posteriori Analysis**: It is the analysis of an algorithm after it is executed.

## Asymptotic Analysis
It is the use of mathematical computations to describe the efficiency of an algorithm.

## Time Complexity Table
| Notation | Description |
| --- | --- |
| O(1) | Constant Time |
| O(log n) | Logarithmic Time |
| O(n) | Linear Time |
| O(n log n) | Linearithmic Time |
| O(n^2) | Quadratic Time |
| O(n^3) | Cubic Time |
| O(2^n) | Exponential Time |
| O(n!) | Factorial Time |

## How to Measure the time Complexity
```
// For Single for loop
//Use for loop as n
for(int i=1; i<=n; i++)
    ;
//Time Complexity: O(n)

```

```
// For Nested for loops
//Use for loops as n
for(int i=1; i<=n; i++)
    for(int j=1; j<=n; j++)
        ;
//Time Complexity: O(n^2)
```

```
// For Nested for loops
//Use for loops as n
for(int i=1; i<=n; i++)
    for(int j=1; j<=n; j++)
        for(int k=1; k<=n; k++)
            ;
//Time Complexity: O(n^3)
```

## Asymptotic Notations
1. Big O Notation: Use to describe the upper bound of an algorithm.
2. Big Omega Notation: Use to describe the lower bound of an algorithm.
3. Big Theta Notation: Use to describe the tight bound of an algorithm.

## Reasons for analyzing algorithms
1. To compare the efficiency of algorithms.
2. To predict the performance of algorithms.
3. To choose the best algorithm for a given problem.