---
Date: 2025-04-25T13:50:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=239&selection=1099,1,1100,24&color=yellow|The link of chapter 3.3, Discrete Mathematics]]"
---
# Introduction

In this section, we will learn the computational complexity of the algorithm, including time complexity and space complexity.

# Time Complexity

## Definition

The ==time complexity== is the analysis of the time required to solve a problem of a particular size. It can be expressed in terms of ==the number of operations== used by the algorithm. The operations used can be the comparison of integers, the addition of integers, the multiplication of integers, the division of integers, or any other basic operations.

To analyze the time complexity we should find the maximum of a finite set of integers.

## Worst-Case Complexity

The type of complexity analysis done when considering the ==worst case== is a ==worst-case== analysis. And we need to use the ==largest number of operations== to solve the given problem.

For example, the worst-case time complexity of the linear search is $\Theta(n)$ and binary search is $\Theta(\log n)$.

## Average-Case Complexity

The type of complexity analysis done when considering the average case is a ==average-case analysis==. And we need to use the ==average number of operations== to solve the given problem. Usually it is ==much more complicated than worst-case analysis==.

## Worst-Case Complexity of Two Sorting Algorithms

By proving, both the bubble sort and the insertion sort have worst-case time complexity $\Theta(n^{2})$.

# Complexity of Matrix Multiplication

Here is the algorithm of ==matrix multiplication==.

![[Discrete Mathematics and Its Applications 7th.pdf#page=243&rect=242,413,594,531|Discrete Mathematics and Its Applications 7th, p.222]]

Suppose $A,B$ are all $n\times n$ matrix, then every element in $C$ need $n$ multiplication and $(n-1)$ addition, thus a total $n^{3}$ operators are needed. Thus the complexity of matrix multiplication is $O(n^{3})$ by the definition. (Other algorithms can have $O(n^{\sqrt{ 7 }})$). If $A$ is $m\times n$ matrix and $B$ is $n\times r$ matrix then the complexity is $O(mnr)$.

And The Boolean Product in chapter 2 [[Note 2.6 Matrices#^242375|Boolean Product]] has the algorithm as following:

![[Discrete Mathematics and Its Applications 7th.pdf#page=244&rect=267,708,619,823|Discrete Mathematics and Its Applications 7th, p.223]]

It is similar to the matrix multiplication thus it is also has the complexity $O(n^{3})$.

## Matrix-Chain Multiplication

The method to calculate the ==matrix-chain== $A_{1}A_{2}\cdots A_{n}$ where $A_{1},A_{2},\cdots,A_{n}$ are $m_{1}\times m_{2}$,$m_{2}\times m_{3}$, $\cdots$, $m_{n}\times m_{n+1}$ we need to first calculate the ==minimum== $m_{k}\times m_{k+1}$.

# Algorithmic Paradigms

## Definition

==Algorithmic paradigm== is a general approach based on a particular concept that can be used to construct algorithms for solving a variety of problems.

## Brute-Force Algorithms

For a brute-force algorithms, a problem is solved in the ==most straightforward== manner based on the statement of the problem and the definitions of terms.

For example, to use the brute-force algorithm to find the closest pair of points,

![[Discrete Mathematics and Its Applications 7th.pdf#page=246&rect=267,659,644,782|Discrete Mathematics and Its Applications 7th, p.225]]

And the complexity is $O(n^{2})$.

# Understanding the Complexity of Algorithms


| Complexity                  | Terminology             |
| --------------------------- | ----------------------- |
| $\Theta(1)$                 | constant complexity     |
| $\Theta(\log n)$            | logarithmic complexity  |
| $\Theta(n)$                 | linear complexity       |
| $\Theta(n\log n)$           | linearithmic complexity |
| $\Theta(n^{b})$             | polynomial complexity   |
| $\Theta(b^{n})$ where $b>1$ | exponential complexity  |
| $\Theta(n!)$                | factorial complexity    |
## Tractability

A problem that is solvable using an algorithm with polynomial worst-case complexity is called ==tractable==. 
Problems that cannot be solved using an algorithm with worst-case polynomial time complexity. Such problems are called ==intractable==.
Some problems even exist for which it can be shown that no algorithm exists for solving them. Such problems are called ==unsolvable==.

## P Versus NP

Problems for which a solution can ==be checked in polynomial time== are said to belong to the ==class NP== (==tractable== problems are said to belong to ==class P==)
The ==NP-complete problems== is the problems with the property that is if ==any== of these problems can be solved by a polynomial worst-case time algorithm, then ==all== problems in the class NP can be solved by polynomial worst-case time algorithms.

The ==P versus NP problem== asks whether NP, the class of problems for which it is possible to check solutions in polynomial time, equals P, the class of tractable problems. 

