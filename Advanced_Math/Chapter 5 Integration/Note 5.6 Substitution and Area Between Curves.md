---
Date: 2025-03-05T18:32:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=361&selection=251,0,251,36|The link of chapter 3.6, Advanced Math]]"
---
## **The Substitution Formula**

- **Theorem 7--Substitution in Definite Integrals:**
	If $g^{\prime}$ is continuous on the interval $[a,b]$ and $f$ is continuous on the range of $g(x)=u$, then $$\int_{a}^{b} f(g(x))g^{\prime}(x) \, dx =\int_{g(a)}^{g(b)} f(u) \, du $$
	Proof:
		Let $F$ be an antiderivative of $f$, then $$\begin{align}\int_{a}^{b} f(g(x))g^{\prime}(x) \, dx  & =F(g(x))]_{x=a}^{x=b} \\ & =F(g(b))-F(g(a)) \\ & =F(u)]^{u=g(b)}_{u=g(a)} \\ & =\int_{g(a)}^{g(b)} f(u) \, du  \end{align}$$

## **Definite Integrals of Symmetric Functions**

- **Theorem 8:**
	Let $f$ be continuous at a symmetric interval $[-a,a]$.
	- If $f$ is even, then $\displaystyle \int_{-a}^{a} f(x) \, dx=2\int_{0}^{a} f(x) \, dx$.
	- If $f$ is odd, then $\displaystyle \int_{-a}^{a} f(x) \, dx=0$.
	Proof:
	- For the first part, $$\begin{align}\int_{-a}^{a} f(x) \, dx &=\int_{0}^{a} f(x) \, dx +\int_{-a}^{0} f(x) \, dx \\  & =\int_{0}^{a} f(x) \, dx -\int_{0}^{-a} f(-x) \, dx \\  & =\int_{0}^{a} f(x) \, dx -\int_{0}^{a} f(u) \, (-du) \\ & =\int_{0}^{a} f(x) \, dx +\int_{0}^{a} f(u) \, du \\  & =2\int_{0}^{a} f(x) \, dx   \end{align}$$(At the last step, if we substitute back $-x$, then the upper limit need to change as well.) 
	- $$\begin{align}\int_{-a}^{a} f(x) \, dx  & =-\int_{0}^{-a} f(x) \, dx +\int_{0}^{a} f(x) \, dx  \\ & =\int_{0}^{-a} f(-x) \, dx +\int_{0}^{a} f(x) \, dx  \\ & =\int_{0}^{a} f(u) \, (-du)+\int_{0}^{a} f(x) \, dx  \\  & =-\int_{0}^{a} f(u) \, du+\int_{0}^{a} f(x) \, dx  \\ & =0 \end{align}$$

## **Areas Between Curves**

- **Definition:**
	If $f$ and $g$ are continuous with $f(x)\geq g(x)$ on $[a,b]$, then the area of the region between the curves $y=f(x)$ and $y=g(x)$ from $a$ to $b$ is the integral of $(f-g)$ from $a$ to $b$: $$A=\int_{a}^{b} [f(x)-g(x)] \, dx $$Proof:
		We can approximate the region with $n$ vertical rectangles by dividing it into $n$ subintervals. A partition is $P=\{x_{0},x_{1},\cdots,x_{n}\}$ of $[a,b]$. Then the area of the $k$th rectangle is $$A_{k}=[f(c_{k})-g(c_{k})]\cdot\Delta x_{k}$$then the area of the whole region is $$A=\lim_{ ||P|| \to 0 }\sum_{k=1}^{n} [f(c_{k})-g(c_{k})]\Delta x_{k}=\int_{a}^{b} [f(x)-g(x)] \, dx  $$

## **Integration with Respect to $y$**

- **Definition:**
	If a region's bounding curves are described by functions of $y$, the approximating rectangles are horizontal and the formula has $y$ instead of $x$. $$A=\int_{c}^{d} [f(y)-g(y)] \, dy $$and in the formula $f$ is always on the right side of $g$ to ensure the value is nonnegative.

## **Exercises**

- P350 3,27,==45==