---
Date: 2025-12-21T20:18:00
---
# Chapter Summary

- Applications of Recurrence Relations
- Solving Linear Recurrence Relations
	- Homogeneous Recurrence relations
	- Nonhomogeneous Recurrence relations
- Divide-and-Conquer Algorithms and Recurrence relations
- Generating Functions
- Inclusion-Exclusion
- Applications of Inclusion-Exclusion

# Section 8.1 Applications of Recurrence Relations

## Section Summary

- Applications of Recurrence Relations
- Algorithms and Recurrence Relations

## Recurrence Relations

Definition: An equation that $a_{n}$ can be expressed by previous terms of the sequence.

The sequence that satisfies the recurrence relation is called ==a solution==.
The ==initial condition== expresses the terms before the recurrence relation takes effect.

Example: 
- Rabbit and Fibonacci Numbers: $f_{n}=f_{n-1}+f_{n-2};f_{1}=1,f_{2}=1$
- The tower of Hanoi: $H_{n}=2H_{n-1}+1, H_{1}=1$ for one disk. Then $H_{n}=2^{n}-1$
- Counting bit strings:
	Finding the number of bits that have length $n$ and no two consecutive 0.
	$a_{n}=a_{n-1}+a_{n-2};a_{1}=2, a_{2}=3$. Similar to Fibonacci. ($a_{n}=f_{n+2}$) 
- Counting the Ways to Parenthesize a Product
	$C_{n}$ is the number of ways to parenthesize the product of $n+1$ numbers.
	Always one $\cdot$ outside all parentheses. Then it can be between $x_{k}$ and $x_{k+1}$. Then 
	$C_{n}=C_{0}C_{n-1}+\cdots+C_{n-1}C_{0}=\sum_{k=0}^{n-1} C_{k}C_{n-k-1};C_{0}=1, C_{1}=1$.

# Section 8.2 Solving Linear Recurrence Relations

## Section Summary

- Linear Homogeneous Recurrence Relations
- Solving Linear Homogeneous Recurrence relations with constant coefficients
- Solving Linear Nonhomogeneous Recurrence relations with constant coefficients.

## Linear Homogeneous Recurrence Relations

Definition:
	A ==linear homogeneous recurrence relation of degree $k$== with constant coefficients is a recurrence relation of the form $a_{n}=c_{1}a_{n-1}+c_{2}a_{n-2}+\cdots+c_{k}a_{n-k}$ where $c_{1},c_{2},\cdots,c_{k}$ are real numbers and $c_{k} \ne 0$.
	Linear: right hand is linear combination
	homogeneous: all coefficient is constant and all terms is the multiple of $a_{j}$.
	Degree $k$: $a_{n}$ is expressed by previous $k$ terms.
The sequence are unique that $a_{0}=C_{1},\cdots,a_{k-1}=C_{k}$.

## Solving Linear Homogeneous Recurrence Relations

The forms : 
$$
a_{n}=r^{n}
$$
where $r$ is a constant.

Thus the ==characteristic equation==:
$$
r^{k}-c_{1}r^{k-1}-c_{2}r^{k-2}-\cdots-c_{k}=0
$$
And find solutions of $r$. And the solutions are called the ==characteristic roots of recurrence relation==.

### Solving Linear Homogeneous Recurrence Relations of Degree Two

Theorem 1:
For $a_{n}=c_{1}a_{n-1}+c_{2}a_{n-2}$, suppose the $r^{2}-c_{1}r-c_{2}=0$ has two distinct roots $r_{1}$ and $r_{2}$, then the solution of the sequence is
$$
a_{n}=\alpha_{1}r_{1}^{n}+\alpha_{2}r_{2}^{n}
$$
where $\alpha_{1},\alpha_{2}$ are constants.

### The Solution when there is a Repeated Root

Theorem 2:
Same condition as theorem 1 but only one repeated root $r_{0}$, then the solution is 
$$
a_{n}=(\alpha_{1}+\alpha_{2}n)r_{0}^{n}
$$
where $\alpha_{1},\alpha_{2}$ are constant.

### Solving Linear Homogeneous Recurrence Relations of Arbitrary Degree

Theorem 3:
For $a_{n}=c_{1}a_{n-1}+c_{2}a_{n-2}+\cdots+c_{k}a_{n-k}$, if $r^{k}-c_{1}r^{k-1}-\cdots-c_{k}=0$ has $k$ distinct roots $r_{1},r_{2},\cdots,r_{k}$ then the solution is 
$$
a_{n}=\alpha_{1}r_{1}^{n}+\alpha_{2}r_{2}^{n}+\cdots+\alpha _{k}r_{k}^{n}
$$

### The General Case with Repeated Roots Allowed

Theorem 4:
Same condition as theorem 3 but $t$ distinct roots $r_{1},\cdots,r_{t}$ with multiplicities $m_{1},\cdots,m_{t}$ and $m_{1}+m_{2}+\cdots+m_{t}=k$. Then the solution is 
$$
\begin{align}
a_{n}  = & (\alpha_{1,0}+\alpha_{1,1}n+\cdots+\alpha_{1,m_{1}-1}n^{m_{1}-1})r_{1}^{n} \\
  & +(\alpha_{2,0}+\alpha_{2,1}n+\cdots+\alpha_{2,m_{2}-1}n^{m_{2}-1})r_{2}^{n} \\
 & +\cdots+(\alpha_{t,0}+\cdots+\alpha_{t, m_{t}-1}n^{m_{t}-1})r^{n}_{t}
\end{align}
$$

## Linear Nonhomogeneous Recurrence Relations with Constant Coefficients

Definition:
$$
a_{n}=c_{1}a_{n-1}+c_{2}a_{n-2}+\cdots+c_{k}a_{n-k}+F(n)
$$
where $c_{1},\cdots,c_{k}$ are constant and $F(n)$ only depends on $n$ and not always zero.
And the recurrence relation
$$
a_{n}=c_{1}a_{n-1}+c_{2}a_{n-2}+\cdots+c_{k}a_{n-k}
$$
is called the ==associated homogeneous recurrence relation==.

### Solving Linear Nonhomogeneous Recurrence Relations with Constant Coefficients

Theorem 5:
For a particular solution $\{ a_{n}^{(p)} \}$ for $a_{n}=c_{1}a_{n-1}+\cdots+c_{k}a_{n-k}+F(n)$, then ==every solution is of the form $\{ a_{n} ^{(p)}+a_{n}^{(h)}\}$== where $\{ a_{n}^{(h)} \}$ is the solution of associated homogeneous recurrence relation $a_{n}=c_{1}a_{n-1}+c_{2}a_{n-2}+\cdots+c_{k}a_{n-k}$.

Steps:
- Solve a particular solution depending on the form of $F(n)$
- Solve the solution of associated homogeneous recurrence relation
- Use initial conditions to solve constant

# Section 8.3 Divide-and-Conquer Algorithms and Recurrence Relations

## Section Summary

- Divide-and-Conquer Algorithms and Recurrence Relations
- Examples
- Master Theorem
- Closest Pair of Points

## Divide-and-Conquer Algorithmic Paradigm

Definition:
==Divide a problem== into one or more instances of the same problem of ==smaller size== and then ==conquer the problem== using the solutions of the smaller problems to ==get the solutions of original problem==.

## Divide-and-Conquer Recurrence Relations

- Suppose divide a problem of size $n$ into $a$ subproblems
- Assume each subproblem is of size $n/b$.
- Suppose $g(n)$ extra operations are needed in the conquer step
- Then the ==divide-and-conquer recurrence relation== is $f(n)=af(n / b)+g(n)$.

Example:
- Binary search
	$f(n)=f(n/2)+2$
- Merge sort
	$M(n)=2M(n/2)+n$
- Fast Multiplication of Integers
	$ab=(2^{2n}+2^{n})A_{1}B_{1}+2^{n}(A_{1}-A_{0})(B_{0}-B_{1})+(2^{n}+1)A_{0}B_{0}$. Thus the multiplication of $2n$-bit integer can be done by three multiplications of $n$-bit integers with additions, subtractions, shifts
	Thus $f(2n)=3f(n)+Cn$.

## Estimating the Size of Divide-and-Conquer Functions

Theorem 1:
$f(n)$ is increasing function and 
$$
f(n)=af(n / b)+cn^{d}
$$
where $n$ is divisible by $b$.
then
$$
f(n) \text{ is}
\begin{cases}
O(n^{\log_{b}a}) \text{ if } a > 1 \\
O(\log n) \text{ if } a = 1 \\
\end{cases}
$$

Example: Complexity of Binary Search is $O(\log n)$

Theorem 2:
$f(n)$ is increasing function and 
$$
f(n)=af(n / b)+cn^{d}
$$
Then
$$
f(n)=C_{1}n^{\log_{b}a}+C_{2}n^{d}
$$
where $C_{1}= \frac{cb^{d}}{a-b^{d}}+f(1),C_{2}=\frac{cb^{d}}{b^{d}-a}$.
where $n=b^{k}$ and $k$ is a positive integer greater than 1, and $c$ and $d$ are real numbers and $c$ is positive, $d$ is nonnegative.
then
$$
f(n) \text{ is }
\begin{cases}
O(n^{d}) \text{ if }a<b^{d} \\
O(n^{d}\log n) \text{ if } a = b ^{d} \\
O(n^{\log_{b}a}) \text{ if } a > b^{d} \\
\end{cases}
$$

Example: Complexity of Merge sort is $O(n\log n)$; complexity of fast integer multiplication is $O(n^{\log 3})$.

# Section 8.4 Generating Functions

## Section Summary 

- Generating Functions
- Counting Problems and Generating Functions
- Useful Generating Functions
- Solving Recurrence Relations using Generating functions
- Probing identities using Generating functions

## Generating Functions

Definition:
The ==generating function for sequence $a_{0},\cdots,a_{k},\cdots$== of real number is the infinite series
$$
G(x)=a_{0}+a_{1}x+\cdots+a_{k}x^{k}+\cdots=\sum_{k=0}^{\infty} a_{k}x^{k}
$$

### Generating Functions for Finite Sequences

The generating function for sequence $a_{0},\cdots,a_{n}$ is 
$$
G(x)=a_{0}+a_{1}x+\cdots+a_{n}x^{n}
$$

### Useful Generating Functions

![[Useful generating functions.png]]

## Counting Problems and Generating Functions

For a equation with more unknowns constrained by integers, write the expression that is the product of ==generating functions of each unknowns==. Then calculate and obtain the result by corresponding coefficient.

For example, the number of solution of $e_{1}+e_{2}+e_{3}=17$ where $2\leq e_{1}\leq5, 3\leq e_{2} \leq 6, 4\leq e_{3} \leq 7$. Then the expression $(x^{2}+x^{3}+x^{4}+x^{5})(x^{3}+x^{4}+x^{5}+x^{6})(x^{4}+x^{5}+x^{6}+x^{7})$ and the coefficient of $x^{17}$ is $3$ thus it is the answer.

# Section 8.5 Inclusion-Exclusion

## Section Summary

- The principle of Inclusion-Exclusion
- Examples

## Principle of Inclusion-Exclusion

### Two Finite Sets

The number of elements in the union of two finite sets:
$$
\left| A \cup B \right|=\left| A \right| +\left| B \right| -\left| A\cap B \right|  
$$

### Three Finite Sets

$$
\left| A\cup B \cup C \right|=\left| A \right| +\left| B \right| +\left| C \right| -\left| A\cap B \right| -\left| A\cap C \right|-\left| B\cap C \right| +\left| A\cap B\cap C \right|   
$$

### The Principle of Inclusion-Exclusion

Theorem 1:
Let $A_{1},\cdots,A_{n}$ be finite sets, then 
$$
\left| A_{1}\cup A_{2} \cup \cdots\cup A_{n} \right| 
=\sum_{1\leq i\leq n} \left| A_{i} \right| -\sum_{1\leq i\leq j\leq n}\left| A_{i}\cap A_{j} \right| +\cdots+(-1)^{n+1}\left| A_{1}\cap A_{2}\cap \cdots\cap A_{n} \right|   
$$

# Section 8.6 Applications of Inclusion-Exclusion

## Section Summary

- Counting Onto-Functions
- Derangement

## The Number of Onto Functions

Theorem 1:
Let $m$ and $n$ be positive integers with $m\geq n$, then 
$$
n^{m}-C(n,1)(n-1)^{m}+C(n,2)(n-2)^{m}-\cdots+(-1)^{n-1}C(n,n-1)\cdot 1^{m}
$$
onto functions from a set with $m$ elements to a set with $n$ elements.

## Derangements

Definition:
A derangement is a ==permutation== of objects that leaves ==no object in the original position==.

Theorem 2:
The number of derangements of a set with $n$ elements is 
$$
D_{n}=n!\left[ 1-\frac{1}{1!}+\frac{1}{2!}-\frac{1}{3!}+\cdots+(-1)^{n} \frac{1}{n!} \right]
$$
