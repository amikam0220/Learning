---
Date: 2025-03-26T09:32:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=488&selection=619,0,619,54|The link of chapter 8.4, Advanced Math]]"
---
## **The Method of Partial Fractions**

- **Definition:**
	Express a rational function as a sum of simpler fractions and the method for rewriting rational functions as a sum of simpler fractions is the method of partial fractions.
- **Example:**
	$\displaystyle \frac{5x-3}{x^{2}-2x-3}=\frac{A}{x+1}+\frac{B}{x-3}$. We call $A$ and $B$ is undetermined coefficients.

## **General Description of the Method**

- **Conditions:**
	For the rational function $f(x)/g(x)$, if we want to use the method,
	- The degree of $f(x)$ must be less than the degree of $g(x)$. For the another case, we can turn it into this case by divide the rational function into the sum of [[Note 1.1 Functions#^a6a488|the proper rational function]] and a polynomial function.
	- We must know the factors of $g(x)$.
- **Method of Partial Fractions ($\frac{f(x)}{g(x)}$ Proper)**
	- Let $x-r$ be a linear factor of $g(x)$, Suppose that $(x-r)^{m}$ is the highest power of $x-r$ that divides $g(x)$, then to this factor, we can assign the sum as $$\frac{A_{1}}{(x-r)}+\frac{A_{2}}{(x-r)^{2}}+\cdots+\frac{A_{m}}{(x-r)^{m}}$$
	And we need to do this for each distinct linear factor of $g(x)$.
	- For the irreducible quadratic factor of $g(x)$, the method is the same but the numerator is a linear function of $x$.
	- Then we need to express the original fraction as the sum of all the partial fractions and arrange the terms in decreasing powers of $x$.
	- Solve the undetermined coefficients.

## **The Heaviside "Cover-up" Method for Linear Factors**

- **Condition:**
	$g(x)$ can be expressed as different the linear factors.
- **Heaviside Method:**
	- Write the quotient with $g(x)$ factored: $$\frac{f(x)}{g(x)}=\frac{f(x)}{(x-r_{1})(x-r_{2})\cdots(x-r_{n})}$$
	- Cover the factors $(x-r_{i})$ of $g(x)$ one at a time, each time replacing all the uncovered $x$'s by the number $r_{i}$. Then we can get $A_{i}$ for each root $r_{i}$.

## **Exercises**

- P479 37, 47, 49
- [[Thomas Calculus Early Transcendentals (12ed).pdf#page=526&selection=1232,0,1232,2|P509 Question 2nd]]
	For this question, we need to divide it into the sum of $m+1$ fractions, that is, $$\frac{dx}{x(x+1)(x+2)\cdots(x+m)}=\frac{A_{0}}{x}+\frac{A_{1}}{x+1}+\cdots+\frac{A_{m}}{x+m}$$ Here, we can use the Heaviside Method to obtain the formula of $A_{k}$, which is $$A_{k}= \frac{(-1)^{k}}{k!(m-k)!}$$ Thus $$\int \frac{dx}{x(x+1)(x+2)\cdots(x+m)}=\sum_{k=0}^{m} \frac{(-1)^{k}}{k!(m-k)!}\ln(x+k)+C $$ 
- [[Thomas Calculus Early Transcendentals (12ed).pdf#page=527&selection=6,0,6,1|P510 Question 6th]]
	First, we need to transform it into the form of the difference of two squares, $$\int  \, \frac{dx}{x^{4}+4}=\int \frac{1}{(x^{2}+2)^{2}-(2x)^{2}} \, dx =\int \frac{1}{(x^{2}-2x+2)(x^{2}+2x+2)} \, dx  $$ Then we can split the product of two fraction, $$\frac{1}{(x^{2}-2x+2)(x^{2}+2x+2)}= \frac{Ax+B}{x^{2}-2x+2}+\frac{Cx+D}{x^{2}+2x+2}$$ Then we have $$\frac{ -\frac{1}{8}x+\frac{1}{4} }{x^{2}-2x+2}+ 
	\frac{\frac{1}{8}x+\frac{1}{4}}{x^{2}+2x+2}=\frac{1}{8}\left[\frac{-(x-1)+1}{(x-1)^{2}+1}- \frac{(x+1)+1}{(x+1)^{2}+1}\right]$$ Thus $$\int \frac{1}{x^{4}+4} \, dx =  \frac{1}{16}​\ln \left| \frac{x^{2}+2x+2}{x^{2}-2x+2} \right|+\frac{1}{8} ​[\arctan(x+1)+\arctan(x−1)]+C$$.