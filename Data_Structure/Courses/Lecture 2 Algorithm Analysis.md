---
Date: 2025-09-08T20:26:00
---
# Algorithm

a ==abstract representation== of ==limit== ==sequence== of instructions used to solve some problems.
Program is the specific performance of algorithm.

# Algorithm Analysis

- ==Running time==
- ==Memory required==
- Length of the program(lines of code)
- Ease of programming(bugs, maintenance)

An algorithm man run differently depending on
- the hardware platform
- the programming language
- ==the scale of the problem==

so we need a ==function of input size== to reflect the performance of the algorithm. That is ==time/space complexity==.

# Assumptions

- instructions are executed ==sequentially==
- each instruction is ==simple== and take exactly ==one time unit==.
- integer size is fixed and we have ==infinite memory==.

The point of counting the steps is to predict the ==growth rate== in run time as the $n$ scales up.

# Asymptotic Notation

- Big-O, "bounded above by": $T(n)=O(f(n))$.
	- for some $c$ and $n_{0}$, $T(n)\leq cf(n)$  whenever $n>n_{0}$.
- Big-Omega, "bounded below by": $T(n)=\Omega(g(n))$
- Big-Theta, "bounded above and below": $T(n)=\Theta(h(n))$
- Little-o, "strictly bounded above"

# Big-O Notation(Common Complexities)

constant time, logarithmic, linear, loglinear, square, cubic, exponential, factorial.
($O(1),O(\log n),O(n),O(n\log n),O(n^{2}),O(n^{3}),O(2^{n}),O(n!)$)

# Useful Rules of Big-O Estimation

- Rule of sums
	$T_{1}(n)+T_{2}(n)=O(\mathrm{max}\{ f(n),g(n) \})$
- Rule of products
	$T_{1}(n)*T_{2}(n)=O(f(n)*g(n))$
- $\log ^{k}n=O(n)$ for any constant $k$. That is, logarithm increases very ==slowly==

# Simplification Methods

For polynomials whose sum is a ==constant number of terms==, the function of big-O is $n^{k}$ where $k$ is the largest exponent in the polynomials.

# Common Formula

- $\sum_{i=1}^{n}i = n(n+1)/2= O(n^{2})$
- $\sum_{i=1}^{n}i^{2}=n(n+1)(2n+1)/6=O(n^{3})$
- $\sum_{i=1}^{n}x^{i}=(x^{n+1}-1)(x-1)=O(x^{n})$

# General rules of time complexity analysis

- simple statements(read, write, assign): constant $O(1)$
- simple operation (+ - and so on): constant $O(1)$
- sequence of simple statement or operations: depends on the ==most expensive operation==.
- For, do and while loops
	- depends on ==the number of iterations==.
	- nested loops: the products of the size of all loops
	- Example:
		```
		for (i = 1; i <= n; i++){
			for (j = 1; j <= i; j++){
				for (k = 1; k <= j; k++){
					operations;
				}
			}
		}
		```
		$\sum_{i=1}^{n}1+\cdots+i=O(n^{3})$
		```
		int y = 5;
		while ((y+1) * (y+1) < 5){
			y++;
		}
		```
		the terminal condition is that $y\geq \sqrt{ n }-5$, thus the time complexity is $O(\sqrt{ n })$
- if/else:
	the judgment is constant $O(1)$, and the next time complexity depends on the bigger one of executive phase of if or else.
- method calls
	A calls B, B calls C depends on the largest phase of them. The total running time is the sum of them.

# Exercise

![[Exercise 1 of lecture 2.png]]
The total amount is $1+2+2^{2}+\cdots+2^{n}=O(2^{n})$

![[Exercise 2 of Lecture 2.png]]

Let $k = \log n$, then $T(n)=2^{k}T(1)+n\left( \log n+\log \frac{n}{2} +\cdots+\log1\right)=n+n(\log n)^{2}=O(n(\log n)^{2})$
![[Exercise 3 of Lecture 2.png]]
$n+\frac{n}{2}+\frac{n}{2^{2}}+\cdots+\frac{n}{2^{k}}=2n+C=O(n)$

# Checking Your Analysis (I)

## Method 1

- when $T(N)=O(N)$, check if $T(2N) / T(N) =2$
- when $T(N)=O(2N)$, check if $T(2N) / T(N) =4$

## Method 2

when $T(N)=O(f(N))$, check if $\frac{T(N)}{f(N)}=C$ for a range of $N$.

# Max Subsequence Problem

[[1.3 应用实例-最大子列和问题]]

- Method of Exhaustion
- Division-Conquer Method
- Dynamic Programming

# Example: Computing $X^{N}$

we can divide the situation into $N$ is even or odd.

```
long int Pow(long int x, unsigned int N){

    if (N == 0)

        return 1;

    if (N % 2 == 0){

        return Pow(x * x, N / 2);

    }else{

        return Pow(x * x, N / 2) * x;

    }

}
```
Note that we cannot use `return Pow(x, N/2) * Pow(x, N - N/2)` since it use two recursions and its time complexity is still $O(n)$.
The time complexity is $O(\log n)$. 