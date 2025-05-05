---
Date: 2025-02-09T11:38:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=314&selection=26,1,27,36|The link of chapter 5.1, Advanced Math]]"
---
## **Area** 

- **Upper Sum, Lower Sum and Midpoint Rule:** 
	- **Strategy to get the area of an irregular graph:** To split the graph into many same-width rectangle and approximate the area with finite sums.
	- **Upper Sum:** Taking the height of each rectangle as the maximum value of $f(x)$ for a point $x$ in the base interval of the rectangle.
	- **Lower Sum:** Taking the height of each rectangle as the minimum value of $f(x)$ for a point $x$ in the base interval of the rectangle.
	- **Midpoint Rule:** Taking the height of each rectangle as the value of the midpoint of $f(x)$ for the base interval of the rectangle.
- **Finite sums:** If we take the interval $[a,b]$ into $n$ subintervals with equal width $\Delta x=\frac{b-a}{n}$ and $f$ is evaluated at the points in each subintervals: $c_{1}$ in the first subinterval, $c_{2}$ in the second subinterval and so on. Then the finite sums is $$f(c_{1})\Delta x+f(c_{2})\Delta x+\cdots+f(c_{n})\Delta x.$$

## **Distance Traveled** 

 - **Strategy:** Suppose that the velocity function $v(t)$ has been given and the direction doesn't change. If we already know the antiderivative $F(t)$ of $v(t)$, we can find the position function $s(t)=F(t)+C$  thus the distance in the interval $[a,b]$ will be $s(b)-s(a)=F(b)-F(a)$. If we don't know the antiderivatives, we can subdivide the interval $[a,b]$ into $n$ subintervals with the same width $\Delta t$, then the sum of distances traveled over $[a,b]$ is$$D\approx v(t_{1})\Delta t+v(t_{2})\Delta t+\cdots+v(t_{n})\Delta t $$

## **Displacement Versus Distance Traveled**

- **Displacement:** The difference between its initial and final positions($s(b)-s(a)$). And as above, subdivide the interval $[a,b]$ into $n$ subintervals with the same width $\Delta t$, then the displacement of the interval $[t_{k-1},t_{k}]$ is $$v(t_{k})\Delta t.$$ in which $v(t_{k})$ is the approximation of the velocity in the interval and it can be positive or negative.
- **Distance Traveled:** As above, the distance traveled of the $[t_{k-1},t_{k}]$ is$$|v(t_{k})|\Delta t$$ and the total distance traveled is approximately the sum$$|v(t_{1})|\Delta t+|v(t_{2})|\Delta t+\cdots+|v(t_{n})|\Delta t.$$

## **Average Value of a Nonnegative Continuous Function** 

- **Definition:** The area under the function graph on the interval $[a,b]$ divides by $b-a$ to get the average value of a nonnegative continuous function on the interval $[a,b]$.