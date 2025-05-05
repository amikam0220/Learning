---
Date: 2025-04-18T15:11:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=212&selection=60,1,61,10|The link of chapter 3.1, Advanced Math]]"
---
# Introduction

In this section, we will learn about the corresponding algorithm in discrete mathematics.

## Definition of Algorithm

An ==algorithm== is a ==finite== sequence of precise instructions for performing a computation or for solving a problem.

## Definition of Pseudocode

The code in English language description rather than a particular computer language.

## Algorithm 1--Finding the Maximum Element in a Finite Sequence

1. Set the temporary maximum equals to the first integer.
2. Compare the next integer to the temporary maximum. If it is larger than the temporary maximum, renew the maximum.
3. Repeated the previous step until no integers are left in the sequence.

In pseudocode:

![[Discrete Mathematics and Its Applications 7th.pdf#page=214&rect=261,721,648,815|Discrete Mathematics and Its Applications 7th, p.193]]

## Properties of Algorithms

- ==input==. It must has input values.
- ==output==. The output are the solution to the problem.
- Definiteness. The steps should be defined precisely.
- Correctness. 
- ==Finiteness==. It must contains finite steps.
- Effectiveness.
- Generality.

# Searching Algorithm
## Searching Problems

The problem of ==locating== an element in an ==ordered== list.

## The Linear Search (Sequential Search)

Compare the key value $x$ and the first element in the sequence. If they are equivalent then the solution is the location of the element. If not continue to the next element until found. If without locating $x$, the solution is the message that not found.

In Pseudocode:

![[Discrete Mathematics and Its Applications 7th.pdf#page=215&rect=241,501,613,610|Discrete Mathematics and Its Applications 7th, p.194]]

## The Binary Search

It proceeds by comparing the element to be located to the ==middle term== of the list and then ==split into two smaller sublists of the same size== until find the key value.
Note that the sequence need to be ==descending== or ==ascending==.

In Pseudocode:

![[Discrete Mathematics and Its Applications 7th.pdf#page=216&rect=268,373,636,525|Discrete Mathematics and Its Applications 7th, p.195]]

# Sorting
## Definition of Sorting

==Sorting== is putting the elements in the list into the list whose elements are ordered(generally ascending).

## Bubble Sort

It is one of the ==simplest== sorting algorithms but ==not== one of most ==efficient==.

It ==interchanges== a larger element with a smaller one ==following== it, starting at the beginning for a pull pass. And ==iterate== the procedure until the sort is complete.

In Pseudocode

![[Discrete Mathematics and Its Applications 7th.pdf#page=218&rect=265,536,639,622|Discrete Mathematics and Its Applications 7th, p.197]]

## Insertion Sort

Simple but not efficient.

It begins with the second element and then compare with the first element. If it is ==less== than the first element we ==insert== it ==before== the first element. If not we ==insert== it ==after== the first element. Thus the first two elements are ordered. Then we move the lower bound to the next and then compare with the former elements and insert it into the correct position.

In Pseudocode

![[Discrete Mathematics and Its Applications 7th.pdf#page=219&rect=240,616,619,765|Discrete Mathematics and Its Applications 7th, p.198]]

# Greedy Algorithms

## Optimization Problems

The goal of such problem is to find a solution to given problem that ==either minimizes or maximizes== the value of some parameters.

## Greedy Algorithms

==Select the best choice at each step== instead of considering all sequences of steps that may lead to an optimal solution. And if we use greedy algorithm to find a feasible solution, we need to ==check== whether it is an optimal solution.

## Example of Greedy Change-Making Algorithm

![[Discrete Mathematics and Its Applications 7th.pdf#page=220&rect=177,922,656,1022|Discrete Mathematics and Its Applications 7th, p.199]]
The greedy algorithm here is that we can add the amount of the largest number until it will exceed $n$, then we add the amount of the second largest number until it will exceed the rest and continue the procedure until their sum equals $n$.

In Pseudocode:
![[Discrete Mathematics and Its Applications 7th.pdf#page=220&rect=267,744,645,867|Discrete Mathematics and Its Applications 7th, p.199]]

The greedy algorithm can be proved as the optimal algorithm on page 199, 200. Here we omit the proof.

## Example of Scheduling Talks

![[Discrete Mathematics and Its Applications 7th.pdf#page=221&rect=151,701,651,776|Discrete Mathematics and Its Applications 7th, p.200]]

Here we have three choices to determine the greedy algorithm: the earliest start time, the shortest time, the ==earliest end time==. Here the first two choice can take counterexamples and the third is right and the proof is in chapter 5.

In Pseudocode

![[Discrete Mathematics and Its Applications 7th.pdf#page=222&rect=262,879,620,1002|Discrete Mathematics and Its Applications 7th, p.201]]

# The Halting Problem

It input a computer program and  the input of the computer program to the procedure and determines whether the program will eventually stop when run with this input. 

It has been proved there are ==no algorithms== to solve this problem. So we will know that there exist problems that cannot be expressed by any algorithm.

