---
Date: 2024-10-23T14:14:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=93&selection=712,1,713,33|The link of Chapter 2.3, Advanced Math]]"
---
## **Definition of Limit**

- **Definition:**
	Let $f(x)$ be defined on an open interval about $x_{0}$ except possibly $x_{0}$ itself, then we say the limit of $f(x)$ as $x$ approaches $x_{0}$ is the number $L$ and write$$\lim_{ x \to x_{0} } f(x)=L$$if for any $\epsilon>0$, we can find a $\delta>0$ for all $x$, when $$0<|x-x_{0}|<\delta$$there will be$$|f(x)-L|<\epsilon$$
- **Remarks:**
	- The smaller of $\epsilon$, the closer of $f(x)$ to $L$, thus we can restrict $\epsilon$ to $0<\epsilon<1,0<\epsilon<0.5,\cdots$ but not $\epsilon>0.1,\epsilon>0.01,\cdots$
	- Since $\epsilon$ is arbitrary, so is $\frac{1}{2}\epsilon,\epsilon^{2},\cdots$, thus $|f(x)-L|<\epsilon$ can be replaced by $|f(x)-L|< \frac{1}{2}\epsilon,\epsilon^{2},\cdots$
	- The value of $\delta$ depends on the value of $\epsilon$, but $\delta$ is not a function of $\epsilon$. Whenever $0<|x-x_{0}|<\delta$, we have $|f(x)-L|<\epsilon$. Whenever $0<|x-x_{0}|<0.5\delta,0.003\delta ,\cdots$, we still have $|f(x)-L|<\epsilon$.

## **Finding Deltas Algebraically for Give Epsilons**

- **Strategy:**
	- Solve $|f(x)-L|<\epsilon$ to find $(a,b)$ containing $x_{0}$.
	- Finding a value of $\delta>0$ that places $(x_{0}-\delta,x_{0}+\delta)$ inside $(a,b)$.
- **Example:**
	[[Thomas Calculus Early Transcendentals (12ed).pdf#page=97&selection=153,0,154,1|The example of strategy]]
## **Properties of Limit**

- If $\lim_{ x \to c }f(x)$ exists, the limit is unique.
- If the limit $\lim_{ x \to c }f(x)$ exists, then $f(x)$ is locally bounded. That is when $\lim_{ x \to c }f(x)=A$, then there exists $M>0$ and $\delta>0$ such that when $0<|x-c|<\delta$, $|f(x)|\leq M$.( where $M=\text{max}\{|L+\epsilon|,|L-\epsilon|\}$)
- Locally sign-preserving property: 
	- Definition: If the limit $\lim_{ x \to c }f(x)=A>0$, then there exists $\delta>0$ such that when $0<|x-c|<\delta$, $f(x)>0\left( \text{or }f(x)> \frac{A}{2}\text{ when }\epsilon= \frac{A}{2}\right)$. If the limit $\lim_{ x \to c }f(x)=A<0$, then there exists $\delta>0$ such that when $0<|x-c|<\delta$, $f(x)<0\left( \text{or }f(x)<\frac{A}{2}\text{ when }\epsilon= \frac{A}{2}\right)$. That is, on the neighborhood of $c$ except possibly at $c$, $f(x)$ and $A$ have the same sign.
	- Corollary: If on a neighborhood of $c$ except possibly at $c$, $f(x)\geq 0$ and $\lim_{ x \to c }f(x)$ exists, then $\lim_{ x \to c }f(x)\geq 0$.( It can be proved by contradiction )
- The composite function $f(x)$ is defined on a neighborhood of $x_{0}$ except possibly at $x_{0}$, if $\lim_{ x \to x_{0} }g(x)=u_{0},\lim_{ u \to u_{0} }f(u)=L$ and $g(x)\ne u_{0}$, then $\lim_{ x \to x_{0} }f(g(x))=L$.
	- Remarks: The condition $g(x)\ne u_{0}$ on the neighborhood is necessary. Otherwise, the above result is false.