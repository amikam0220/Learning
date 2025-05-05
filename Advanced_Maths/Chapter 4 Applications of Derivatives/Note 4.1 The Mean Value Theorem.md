---
Date: 2024-12-04T14:00:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=247&selection=569,1,570,22|The link of chapter 4.2, Advanced Math]]"
---
## **Extreme Values of Functions**

- **Definition of Absolute Maximum and Minimum:**
	$C$ is the number in the domain of $f(x)$. If for all $x\in D$, $f(x)\geq f(c)(f(x)\leq f(c))$, then $f(c)$ is called the absolute minimum(maximum) of $f$ on $D$.
	Sometimes we call them global maximum and minimum. The maxima and minima are called extrema of $f$.
- **Definition of Relative Maximum and Minimum:**
	$C$ is the number in the domain of $f(x)$. If when $x$ is near $c$,$f(x)\geq f(c)(f(x)\leq f(c))$, then $f(c)$ is called a relative minimum(maximum) of $f$ on $D$.
- **Fermat's Theorem:**
	If $f(x)$ has a local maximum or minimum at $c$ and $f^{\prime}(c)$ exist, then $$f^{\prime}(c)=0$$ ^9bb44d
- **Rolle's Theorem:**
	Let $f(x)$ be a function that satisfies the following three hypotheses:
	- $f(x)$ is continuous on $[a,b]$.
	- $f(x)$ is differential on $(a,b)$.
	- $f(a)=f(b)$
	Then there is a number $c$ in $(a,b)$ such that $f^{\prime}(c)=0$.
	Proof:
		Since $f(x)$ is continuous on $[a,b]$, then there exist a maximum $M$ and $m$ in $[a,b]$. 
		If $M=m$, then $f(x)$ is a constant function on $[a,b]$. So for any point in $[a,b]$, $f^{\prime}(x)=0$.
		If $M\ne m$, since $f(a)=f(b)$, there exist at least one extrema in $(a,b)$. Then by [[Note 4.1 The Mean Value Theorem#^9bb44d|Fermat's Theorem]], the point $c$ that take the extrema satisfies $f^{\prime}(c)=0$. 

## **The Mean Value Theorem**

- **Lagrange's Mean Value Theorem:**
	If $f(x)$ is continuous on $[a,b]$ and differentiable on $(a,b)$, then there exists a number $c$ in $(a,b)$ such that $$f^{\prime}(c)=\frac{f(b)-f(a)}{b-a}$$or equivalently,
	$$f(b)-f(a)=f^{\prime}(c)(b-a)$$ ^f5d224
- **Proof:**
	Idea: $$f^{\prime}(c)=\frac{f(b)-f(a)}{b-a}\Leftrightarrow f^{\prime}(c)-\frac{f(b)-f(a)}{b-a}=0\Leftrightarrow \left( f(x)-\frac{f(b)-f(a)}{b-a} x\right)^{\prime}=0\Leftrightarrow g^{\prime}(x)=0$$where $g(x)=f(x)-\frac{f(b)-f(a)}{b-a}$.
	then $$g(a)=f(a)-\frac{af(b)-af(a)}{b-a}=\frac{bf(a)-af(b)}{b-a}$$ $$g(b)=f(b)-\frac{bf(b)-bf(a)}{b-a}=\frac{bf(a)-af(b)}{b-a}$$
	thus $g(a)=g(b)$. By Rolle's Theorem, there exist a $c\in(a,b)$ such that $g^{\prime}(c)=0$
- **Corollary 1:**
	If $f^{\prime}(x)=0$ for all $x$ in $(a,b)$, then $f(x)$ is constant on $(a,b)$. 
	Proof:
		Suppose arbitrary $x_{1},x_{2}$ are in $(a,b)$, then by [[Note 4.1 The Mean Value Theorem#^f5d224|Lagrange's Mean Value Theorem]], there exists a point $c$ such that$$f^{\prime}(c)=\frac{f(x_{2})-f(x_{1})}{x_{2}-x_{1}}=0$$then we get $$f(x_{1})=f(x_{2})$$So $f(x)$ is constant on $(a,b)$.
- **Corollary 2:**
	If $f^{\prime}(x)=g^{\prime}(x)$ at each point in the interval $(a,b)$, then there exists a constant $C$ such that $f(x)=g(x)+C$ for all $x$ in $(a,b)$. That is, $f-g$ is a constant function on $(a,b)$.
	Proof:
		Let $h(x)=f(x)-g(x)$ on the interval $(a,b)$, then by Lagrange's Mean Value Theorem, there exist some $c$ such that $$h^{\prime}(c)=\frac{h(b)-h(a)}{b-a}$$Since $f^{\prime}(x)-g^{\prime}(x)=0$, then $h^{\prime}(c)=0$. Thus $h(b)-h(a)=0$. Then $h(x)=C$ on $(a,b)$. Thus $f(x)=g(x)+C$.