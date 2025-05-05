---
Date: 2025-04-11T13:57:00
tags:
  - Advanced_Math_notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=177&selection=5,1,6,24|The link of chapter 2.4, Discrete Mathematics]]"
---
# Introduction

In this section we will learn about the sequences and its use.

# Sequences
## Definition of Sequences

A ==sequence== is a function from a subset of the set of integers (usually either the set $\{ 0,1,\cdots \}$ or the set $\{ 1,2,\cdots \}$) to a set $S$. We use the notation $a_{n}$ to denote the image of the integer $n$. We call $a_{n}$ a term of the sequence.

## Definition of Geometric Progression

A ==geometric progression== is a sequence of the form $$a,ar,ar^{2},ar^{3},\cdots,ar^{n},\cdots$$ where the ==initial term== $a$ and the ==common ratio== $r$ are real numbers.

### Remarks

A geometric progression is a ==discrete analogue== of the exponential function $f(x)=ar^{x}$.

## Definition of Arithmetic Progression

An ==arithmetic progression== is a sequence of the form $$a,a+d,a+2d,\cdots,a+nd,\cdots$$
where the ==initial term== $a$ and the ==common difference== $d$ are real numbers.

### Remarks

An arithmetic progression is a discrete analogue of the linear function $f(x)=dx+a$.

## Sequences in Computer Science

In the computer science, the finite sequences are also called ==strings==. It is also denoted by $$a_{1}a_{2}\cdots a_{n}$$
The ==length== of a string is the number of the terms in this string. The ==empty string==, denoted by $\lambda$, is the string that has no terms.

# Recurrence Relations

A ==recurrence relation== for the sequence $\{ a_{n} \}$ is an equation that expresses an in terms of one or more of the previous terms of the sequence, namely, $a_{0},a_{1},\cdots,a_{n-1}$ , for all integers $n$ with $n\geq n_{0}$ , where $n_{0}$ is a nonnegative integer. A sequence is called a ==solution== of a recurrence relation if its terms satisfy the recurrence relation.
The ==initial conditions== for a recursively defined sequence specify the terms that precede the first term where the recurrence relation begins. 
It can be shown that a recurrence relation together with its initial conditions determines a ==unique solution==.

## Fibonacci Sequence

The ==Fibonacci Sequence==, $f_{1},f_{2},\cdots,f_{n},\cdots$ is defined by the initial conditions $f_{0}=0,f_{1}=1$ and the recurrence relation $$f_{n}=f_{n-1}+f_{n-2}$$ for $n=2,3,4,\cdots$

## Find the Closed Formula

The explicit formula of the recurrence relation is called a ==closed formula==. And we can use ==iteration== to repeatedly use the recurrence relation. It can be down forward substitution or backward substitution.

# Summations
## Introduction to Summations

The sum of $$a_{m},a_{m+1},\cdots,a_{n}$$ we can use the notation $$\sum_{j=m}^{n} a_{j}$$ here $j$ is called the ==index of summation==, and $m$ is ==lower limit== and $n$ is ==upper limit==.

## Summation of the Geometric Progressions

If $a$ and $r$ are real numbers and $r\ne 0$, then $$
\sum_{j=0}^{n} ar^{j} =
\begin{cases}
\large\frac{ar^{n+1}-a}{r-1} =\frac{a(1-r^{n})}{1-r} & \mathrm{if}\space r\ne 1. \\
(n+1)a & \mathrm{if}\space r =1.
\end{cases}
$$
and it is called ==geometric series==.

## Some Useful Summation Formulae


| Sum                                      | Closed Form                             |
| ---------------------------------------- | --------------------------------------- |
| $$\sum_{k=0}^{n} ar^{k}(r\ne 0)$$        | $$\frac{ar^{(n+1)}-a}{r-1},r\ne 1$$<br> |
| $$\sum_{k=1}^{n} k$$                     | $$\frac{n(n+1)}{2}$$                    |
| $$\sum_{k=1}^{n} k^{2}$$                 | $$\frac{n(n+1)(2n+1)}{6}$$              |
| $$\sum_{k=1}^{n} k^{3}$$                 | $$\frac{n^{2}(n+1)^{2}}{6}$$            |
| $$\sum_{k=0}^{\infty} x^{k},\|x\|<1$$    | $$\frac{1}{1-x}$$                       |
| $$\sum_{k=1}^{\infty} kx^{k-1},\|x\|<1$$ | $$\frac{1}{(1-x)^{2}}$$                 |
