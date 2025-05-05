---
Date: 2024-11-06T14:06:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=120&selection=570,0,570,47|The link of chapter 2.6, Advanced Math]]"
---
## **Infinity Notation**

- $x\to+\infty$: $x$ increases without bound.
- $x\to-\infty$: $x$ decreases without bound.
- $x\to \infty$: $|x|$ increases without bound.

## **Finite limits as $x\to\pm \infty$**

- **Definition:**
	- We say $f(x)$ has the limit $L$ as $x\to +\infty$ and write$$\lim_{ x \to +\infty } f(x)=L$$ if for any number $\epsilon>0$, there exists a corresponding positive number $M$ such that$$x>M\implies|f(x)-L|<\epsilon$$
	- and $$\lim_{ x \to -\infty } f(x)=L$$if for any number $\epsilon>0$, there exists a corresponding positive number $N$ such that$$x<N\implies|f(x)-L|<\epsilon$$
	- and$$\lim_{ x \to \infty }  f(x)=L$$if for any number $\epsilon>0$, there exists a corresponding positive number $A$ such that$$|x|>A\implies|f(x)-L|<\epsilon$$
- **Theorem:**
	 $\lim_{ x \to \infty } f(x)=L$ if and only if $\lim_{ x \to +\infty }f(x)=\lim_{ x \to -\infty }f(x)=L$
	- Corollary:
		- If $\lim_{ x \to +\infty }f(x)\ne\lim_{ x \to -\infty } f(x)$, then $\lim_{ x \to \infty } f(x)$ doesn't exist.
		- $\lim_{ x \to \infty }\frac{1}{x^{n}} =\lim_{ x \to +\infty } \frac{1}{x^{\alpha}}(\alpha>0) =\lim_{ x \to -\infty } \frac{1}{x^{\alpha}}(\alpha>0,x^\alpha \text{ is defined at negative values})$

## **Limits at Infinity of Rational Functions and Radical Functions**

- **Rational Functions:**
	First divide the numerator and denominator by the highest power of $x$ in the denominator.
- **Radical Functions:**
	Multiply the numerator and denominator by conjugate radical expression.
- **Remarks:**
	- $$\lim_{ x \to \infty } \frac{a_{0}x^{m}+a_{1}x^{m-1}+\cdots+a_{m}}{b_{0}x^{n}+b_{1}x^{n-1}+\cdots+b_{n}}=\begin{cases} \frac{a_{0}}{b_{0}}, n=m \\0,n>m \\\infty,n<m\end{cases}$$
	- and$$\lim_{ x \to \infty } \frac{P(x)}{Q(x)}=+\infty(or\;-\infty,\infty)$$when $\lim_{ x \to x_{0} } P(x)\ne0,\lim_{ x \to x_{0} } Q(x)=0$.
- **Horizontal Asymptotes:**
	If $\lim_{ x \to \infty } f(x)=b$ or $\lim_{ x \to +\infty }f(x)=b$ or $\lim_{ x \to -\infty } f(x)=b$, then $y=b$ is a horizontal asymptote of the graph of $f(x)$.
- **Theorem:**
	If $\lim f(x)=0,g(x)$ is a bounded function, then $\lim f(x)g(x)=0$
	e.g:$\lim_{ x \to +\infty } \frac{1}{x}\sin x=0$
- **Oblique Asymptotes:**
	- Definition:
		If $\lim_{ x \to +\infty } (f(x)-ax-b)=0$ or $\lim_{ x \to +\infty }(f(x)-ax-b)=0$ or $\lim_{ x \to \infty }(f(x)-ax-b)=0(a\ne 0)$, then the line $y=ax+b$ is the oblique asymptotes of the graph of $f(x)$.(When the degree of numerator greater than denominator in a rational function, it will have an oblique asymptote)
	- **Theorem:**
		The graph of $f(x)$ has an oblique asymptote if and only if $$\lim_{ x \to \infty } \frac{f(x)}{x}=a\ne 0\quad \text{and}\quad \lim_{ x \to \infty } (f(x)-ax)=b(\text{or }x\to+\infty,x\to-\infty)$$

## **Infinite Limits**

- **Definition:**
	$$\lim_{ x \to c^{+} } f(x)=\infty\Leftrightarrow \text{For any }M>0,\text{there exists a }\delta>0,\text{when } x\in(c,c+\delta),|f(x)|>M$$
	$$\lim_{ x \to c^{-} } f(x)=\infty\Leftrightarrow \text{For any }M>0,\text{there exists a }\delta>0,\text{when } x\in(c-\delta,c),|f(x)|>M$$
	$$\lim_{ x \to c^{} } f(x)=\infty\Leftrightarrow \text{For any }M>0,\text{there exists a }\delta>0,\text{when } x\in(c-\delta,c+\delta),|f(x)|>M$$

## **Vertical Asymptotes**

- **Definition:**
	- If $\lim_{ x \to a^{+} } f(x)=\infty$ or $\lim_{ x \to a^{- }} f(x)=\infty$, then $x=a$ is called the vertical asymptotes of $f(x)$.(Sometimes, $a$ is the endpoint of its domain)

## **The Limit of a Sequence $\{a_{n}\}$**

- **Find limits:**
	The sequence $\{a_{n}\}$ is a special function, which is $f(n)=a_{n},n\in N^{+}$, thus the method of finding limit $\lim_{ n \to \infty } a_{n}$ is similar to $\lim_{ x \to \infty } f(x)$.
- **Monotone Convergence Theorem:**
	- $f(x)$ is increasing when $x<c,f(x)\leq M$ for some $M$, then $\lim_{ x \to c^{-} }f(x)$ exists.
	- $f(x)$ is decreasing when $x>c,f(x)\geq L$ for some $L$, then $\lim_{ x \to c^{+} }f(x)$ exists. 
	For $\{a_{n}\}$, if $a_{n}\leq a_{n+1}(a_{n}\geq a_{n+1})$ when $n\geq n_{0}$ and $a_{n}\leq M(a_{n}\geq L)$ for all $n$, then $\lim_{ n \to \infty }a_{n}$ exists.
- **Important Limits:**
	- $\lim_{ n \to \infty }\left( 1+ \frac{1}{n}  \right)^{n}=e$
	- $\lim_{ x \to \infty }\left( 1+\frac{1}{x} \right)^{x}=e$
	- $\lim_{ x \to 0 }\left( 1+\frac{1}{x} \right)^{x}=e$
	Generally, 
	- $\lim_{ f(x) \to \infty } \left( 1+ \frac{1}{f(x)} \right)^{f(x)}=e$
	- $\lim_{ f(x) \to 0 }(1+f(x))^{f(x)}=e$
- **Corollary:**
	If $\lim_{ x \to c }u(x)=a(a>0),\lim_{ x \to c }v(x)=b$, then $\lim_{ x \to c }u(x)^{v(x)}=a^{b}$
