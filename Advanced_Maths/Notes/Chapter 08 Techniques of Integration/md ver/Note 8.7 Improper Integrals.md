---
Date: 2025-03-26T19:01:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=513&selection=6,0,6,18|The link of chapter 8.7, Advanced Math]]"
---
## **Infinite Limits of Integration**

- **Definition:**
	Integrals with infinite limits of integration are improper integrals of type 1.
	- If $f(x)$ is continuous on $[a,+\infty)$, then $$\int_{a}^{\infty} f(x) \, dx =\lim_{ b \to \infty } \int_{a}^{b} f(x) \, dx $$
	- If $f(x)$ is continuous on $(-\infty,b]$, then $$\int_{-\infty}^{b} f(x) \, dx =\lim_{ a \to -\infty } \int_{a}^{b} f(x) \, dx $$
	- If $f(x)$ is continuous on $(-\infty,+\infty)$, then $$\int_{-\infty}^{\infty} f(x) \, dx =\int_{-\infty}^{c} f(x) \, dx +\int_{c}^{\infty} f(x) \, dx $$where $c$ is any real number (generally take 0).
	If the limit is finite we say the improper integral converges and that the limit is the value of the improper integral. If the limit fails to exist(oscillate or infinite), the improper integral diverges. If $f\geq0$, then $\int_{a}^{b} f(x) \, dx$ is increasing where $a \text{ or }b$ is infinite thus the reason why the limit fails must be infinite rather than oscillate. 

## **The Integral $\displaystyle\int_{1}^{\infty} \frac{1}{x^{p}} \, dx$**

- **Conclusion:**
	For the integral $\displaystyle \int_{1}^{\infty} \frac{1}{x^{p}} \, dx$, the improper integral converges if $p>1$ and diverges if $p\leq1$.
- **Proof:**
	If $p=1$, then $\displaystyle\int_{1}^{\infty} \frac{1}{x} \, dx=\lim_{ c \to \infty }\int_{1}^{c} \frac{1}{x} \, dx=\lim_{ c \to \infty }(\ln c)$. Then the limit doesn't exist and it diverges.
	If $p\ne 1$, then $\displaystyle\int_{1}^{\infty} x^{-p} \, dx=\lim_{ c \to \infty }\int_{1}^{c} x^{-p} \, dx=\lim_{ c \to \infty } \frac{1}{1-p}(c^{1-p}-1)$. If $p>1$, then the limit exists and equals $\displaystyle \frac{1}{1-p}$ so it converges; If $p<1$, then the limit is $\infty$ and it diverges.
## **Integrands with Vertical Asymptotes**

- **Definition:**
	Integrals of functions that become infinite at a point within the interval of integration are improper integrals of type 2.
	- If $f(x)$ is continuous on $(a,b]$ and discontinuous at $a$, then $$\int_{a}^{b} f(x) \, dx =\lim_{ c \to a^{+} } \int_{c}^{b} f(x) \, dx $$
	- If $f(x)$ is continuous on $[a,b)$ and discontinuous at $b$, then $$\int_{a}^{b} f(x) \, dx =\lim_{ c \to b^{-} } \int_{a}^{c} f(x) \, dx $$
	- If $f(x)$ is discontinuous at $c\in(a,b)$ and continuous on $[a,b]$ except $c$, then $$\int_{a}^{b} f(x) \, dx =\int_{a}^{c} f(x) \, dx +\int_{c}^{b} f(x) \, dx $$and the converges and diverges are the same as the type 1.
## **Tests for Convergence and Divergence**

- **Theorem 2--Direct Comparison Test**
	Let $f$ and $g$ be continuous on $[a,\infty)$ and $0\leq f(x)\leq g(x)$ for all $x\geq a$. Then 
	- $\displaystyle\int_{a}^{\infty} f(x) \, dx$ converges if $\displaystyle\int_{a}^{\infty} g(x) \, dx$ converges.
	- $\displaystyle\int_{a}^{\infty} g(x) \, dx$ diverges if $\displaystyle\int_{a}^{\infty} f(x) \, dx$ diverges.
- **Theorem 3--Limit Comparison Test**
	If the positive functions $f$ and $g$ are continuous on $[a,\infty)$, and if $$\lim_{ x \to \infty } \frac{f(x)}{g(x)}=L,0<L<\infty$$then $$\int_{a}^{\infty} f(x) \, dx ,\int_{a}^{\infty} g(x) \, dx $$both converge or diverge.

## **Exercises**

- P505 17, 27, 57