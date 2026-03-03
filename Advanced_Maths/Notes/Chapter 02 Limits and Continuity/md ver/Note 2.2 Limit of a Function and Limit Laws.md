---
Date: 2024-10-16T23:22:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=82&selection=84,0,84,34|The link of chapter 2.2, Advanced Math]]"
---
## **Limits of Function Values**

- **Definition:**
	Suppose $f(x)$ is defined on neighborhood of $x_{0}$ except possibly $x_{0}$, as $x$ approaches $x_{0}$ from either side, $f(x)$ gets sufficiently close to $L$. Then $L$ is the limit of $f(x)$ as $x$ approaches $x_{0}$. Denoted by $$\lim_{ x \to x_{0} }f(x)=L\quad \text{or}\quad f(x)\to L(x\to x_{0}) $$
- **The cases of no limitation:**
	- Jump: $U(x)=\begin{cases}0,x<0 \\ 1,x\geq 0\end{cases}$ when $x\to0$
	- Infinity: $g(x)=\frac{1}{x}$ when $x\to 0$
	- oscillate: $f(x)=\sin \frac{1}{x}$ when $x\to 0$

## **Limit Laws**

- **Limit Laws:**
	If $L,M,C,k$ are real numbers, and $$\lim_{ x \to c } f(x)=L\quad \text{and}\quad \lim_{ x \to c }g(x)=M  $$ then$$\lim_{ x \to c }(f(x)\pm g(x))=L\pm M $$$$\lim_{ x \to c }kf(x)=kL $$$$\lim_{ x \to c }(f(x)\cdot g(x))=L\cdot M $$$$\lim_{ x \to c } \frac{f(x)}{g(x)}=\frac{L}{M},M\neq 0 $$$$\lim_{ x \to c }[f(x)]^n=L^n,n>0 $$$$\lim_{ x \to c } \sqrt[n]{f(x)  } =\sqrt[n]{L  },n>0 \text{   (If n is even, we assume that}\;\lim_{ x \to c }f(x)=L )$$ ^8c5891
- **Limits of Polynomials:**
	If $P(x)=a_{n}x^n+a_{n-1}x^{n-1}+\cdots+a_{0}$, then$$\lim_{ x \to c }P(x)=P(c)=a_nc^n+a_{n-1} c^{n-1}+\cdots+a_{0}$$
- **Limits of [[Note 1.1 Functions#^a6a488|Rational Functions]]:**
	If $P(x)$ and $Q(x)$ are polynomials and $Q(c)\neq 0$, then $$\lim_{ x \to c } \frac{P(x)}{Q(x)}=\frac{P(c)}{Q(c)}$$

## **Eliminating Zero Denominators Algebraically**

- **For rational function:**
	$$\lim_{ x \to c } \frac{P_{n}(x)}{Q_{n}(x)}=\lim_{ x \to c } \frac{(x-c)P_{n-1}(x)}{( x-c)Q_{n-1}(x)}=\lim_{ x \to c } \frac{P_{n-1}(x)}{Q_{n-1}(x)},P_{n}(c)=Q_{n}(c)=0$$
- **For irrational function:**
	Retionalize the numerators or denominators first by formulas:$$(\sqrt{ a }-\sqrt{ b })(\sqrt{ a }+\sqrt{ b })=a+b$$$$(\sqrt[3]{a  }-\sqrt[3]{b  })(\sqrt[3]{a^{2}  }+\sqrt[3]{ab  }+\sqrt[3]{b^{2}  })=a-b$$$$(\sqrt[n]{ a }-\sqrt[n]{b  })=(\sqrt[n]{a^{n-1}  }+\sqrt[n]{ a^{n-2}b }+\cdots+\sqrt[n]{ b^{n-1} })=a-b$$

## **The Sandwich Theorem**

- **Definition:**
	If $g(x)\leq f(x)\leq h(x)$ when $x\to c$, and $\lim_{ x \to c }g(x)=\lim_{ x \to c }h(x)=L$, then $$\lim_{ x \to c } f(x)=L $$
- **Theorem 5:**
	If $f(x)\leq g(x)$ for all $x$ in some opening interval containing $c$, except possibly at $x=c$ itself, and the limits of $f$ and $g$ both exist as $x$ approaches $c$, then $$\lim_{ x \to c } f(x)\leq \lim_{ x \to c }g(x) $$
	- Corollary: If $f(x)\geq0$, and $\lim_{ x \to c }f(x)$ exists, then $\lim_{ x \to c }f(x)\geq 0$
