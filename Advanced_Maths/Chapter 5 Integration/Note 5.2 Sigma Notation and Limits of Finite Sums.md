---
Date: 2025-02-10T19:33:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=324&selection=1,1,2,40|The link of chapter 5.2, Advanced Math]]"
---
## **Finite Sums and Sigma Notation**

- **Sigma notation:** $$\sum_{k=1}^na_{k}=a_{1}+a_{2}+\cdots+a_{n}.  $$ in which $k=1$ represents the index of summation $k$ started at $k=1$, $n$ represents the index $k$ ends at $k=n$, $\sum$ is the summation symbol(Greek letter sigma) and $a_{k}$ is a formula for the $k$th term.
- **Algebra Rules for Finite Sums:** 
	- Sum Rule: $$\sum_{k=1}^n(a_{k}+b_{k})=\sum_{k=1}^na_{k}+\sum_{k=1}^nb_{k}$$
	- Difference Rule: $$\sum_{k=1}^n(a_{k}-b_{k})=\sum_{k=1}^na_{k}-\sum_{k=1}^nb_{k}$$
	- Constant Multiple Rule:$$\sum_{k=1}^nca_{k}=c\cdot \sum_{k=1}^na_{k}\quad$$ for any number $c$.
	- Constant Value Rule:$$\sum_{k=1}^nc=n\cdot c$$ in which $c$ is any constant value.
- **Formula:** 
	- the first $n$ integers:$$\sum_{k=1}^nk=\frac{n(n+1)}{2}$$
	- the first $n$ squares:$$\sum_{k=1}^nk^2=\frac{n(n+1)(2n+1)}{6}$$
	- the first $n$ cubes:$$\sum _{k=1} ^nk^{3}=\left( \frac{n(n+1)}{2} \right)^{2}$$

## **Limits of Finite Sums**

- **Conclusion:** Any finite sum approximation is trapped between the lower and upper sum approximations. And define the area of region $R$ as this limiting value.

## **Riemann Sums**

- **Process:** 
	- Suppose a bounded function $f$ defined on a closed interval $[a,b]$, and then we choose $n-1$ points$\{x_{1},x_{2},x_{3},\cdots,x_{n-1}\}$ on the interval $[a,b]$ and satisfying$$a<x_{1}<x_{2}<\cdots<x_{n-1}<b$$to subdivide the interval $[a,b]$ into subintervals(not necessarily with the same width).
	- To make the notation consistent, we denote a by $x_{0}$ and $b$ by $x_{n}$ such that$$a=x_{0}<x_{1}<x_{2}<\cdots<x_{n-1}<x_{n}<b$$ and the set $$P=\{x_{0},x_{1},x_{2},\cdots,,x_{n-1},x_{n}\}$$ is called the partition of $[a,b]$. And $P$ divides $[a,b]$ into $n$ subintervals$$[x_{0},x_{1}],[x_{1},x_{2}],\cdots,[x_{n-1},x_{n}].$$ and we denote the $[x_{k-1},x_{k}]$ as the $k$th subinterval of $P$.
	- Then we denote the width of the $k$th subinterval as $\Delta x_{k}=x_{k}-x_{k-1}$ and then choose a point in the $k$th subinterval denoted by $c_{k}$.
	- Then the area of the $k$th rectangle is $f(c_{k})\cdot c_{k}$, whose sign depends on the $f(c_{k})$.
	- Finally we sum all the area of the rectangle to get$$S_{p}=\sum_{k=1}^nf(c_{k})\Delta x_{k}.$$ The sum $S_{p}$ is called a **Riemann sum** for $f$ on the interval $[a,b]$. 
- **Norm:** The largest of all the subinterval widths of a partition $P$ is called the norm of the partition $P$, written $\|P\|$ .