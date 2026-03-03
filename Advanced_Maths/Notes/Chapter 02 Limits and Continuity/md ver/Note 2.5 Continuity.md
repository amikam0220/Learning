---
Date: 2024-10-30T14:41:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=109&selection=1131,0,1131,10|The link of chapter 2.5, Advanced Math]]"
---
## **Continuity at a Point**

- **Definition:**
	- If $\lim_{ x \to c }f(x)=f(c)$, then we say $f(x)$ is continuous at $x=c$ and $x=c$ is a continuous point.
	- $$\begin{align} & \lim_{ \Delta x  \to 0  } (f(x_{0}+\Delta x)-f(x_{0}))=0 \\  & \Leftrightarrow \lim_{ \Delta x \to 0 } f(x_{0}+\Delta x)=f(x_{0}) \\ & \Leftrightarrow \lim_{ h \to 0 }f(h)=f(x_{0})(h=x_{0}+\Delta x) \end{align}$$
	- If $\lim_{ x \to c^+ }f(x)=f(c)(\text{or}\lim_{ x \to c^- }f(x)=f(c))$, we say $f(x)$ is right(or left) continuous at $c$.
- **Continuity Test:**
	- $f(x)$ is defined at $c$.
	- $\lim_{ x \to c }f(x)$ exists.
	- $\lim_{ x \to c }f(x)=f(c)$.
- **Categories of discontinuity:($c$ is a discontinuous point in the following)**
	- removable discontinuity: $\lim_{ x \to c^+ }f(x)=\lim_{ x \to c^{- }}f(x)\ne f(c)$
	- jump discontinuity: $\lim_{ x \to c^{+ }}f(x)\ne \lim_{ x \to c^{- }}f(x)$
	- infinite discontinuity: $\lim_{ x \to c^{+ }}f(x)=\infty \text{ or }\lim_{ x \to c^{- }}f(x)=\infty$
	- oscillating discontinuity: It oscillates too much to have a limit as $x\to c$. ($f(x)=\sin \frac{1}{x}$)

## **Continuous Functions**

- **Continuous on an interval:**
	$f(x)$ is continuous on $[a,b]\Leftrightarrow f(x)$ is continuous at every point $c\in[a,b]$, and left continuous at $x=b$, right continuous at $x=a$.
- **Continuous function:**
	A continuous function is continuous at every point of its domain.
- **Theorem--Properties of Continuous Functions**
	If the functions $f$ and $g$ are continuous at $x=c$, then the same combinations as [[Note 2.2 Limit of a Function and Limit Laws#^8c5891|limit laws]] are continuous at $x=c$.
- **Thomae's Function:**
	$$f(x)=\begin{cases} \frac{1}{q},x=\frac{p}{q}(p,q\in \mathbb{Z},q>0,(p,q)=1) \\0,x\text{ is irrational.}\end{cases}$$
	the function is discontinuous at $x$ which is rational and continuous at $x$ which is irrational.
	- For irrational number, suppose that $c$ is irrational, then for any possible $\epsilon$, there will be finite positive integers $q$ such that $\frac{1}{q}\geq\epsilon$.(that is $q\leq \frac{1}{\epsilon}$ ) Thus in the neighborhood of $c$, there exists finite rational number whose denominator $\leq\frac{1}{\epsilon}$. Then take a small enough $\delta$ such that $(c-\delta,c+\delta)$ doesn't contain those finite rational number. So that is for any $\epsilon>0$, there exists a corresponding $\delta$ such that $0<\left|x-c  \right|<\delta\implies \left| f(x)-L \right|<\epsilon$. So $\lim_{ x \to c }f(x)=f(c)=0$ and the function is continuous as $x$ is irrational.
	- For rational number, we can take $c$ as rational number. We can take $\epsilon= \frac{1}{2q}$, then for any neighborhood $(c-\delta,c+\delta)$, there exists a irrational number $a$ such that $\left| f(a)-f(c) \right|=\frac{1}{q}>\epsilon$. So $f(x)$ is discontinuous as $x$ is rational.
## **Inverse Functions and Continuity**

- The inverse function of any function continuous on an interval is continuous over its domain.

## **Composites**

- **Theorem--Composite of Continuous Functions:**
	If $f$ is continuous at $c$ and $g$ is continuous at $f(c)$, then the composite of $g\circ f$ is continuous at $c$.
	Note: Elementary functions **on the interval contained** in its domain are continuous.(e.g:$f(x)=\sqrt{  \cos x-1},D(f)=\{x|x=2k\pi,k\in Z\}$ is discontinuous)
- **Theorem--Limit of Continuous Functions:**
	If $g$ is continuous at the point $b$ and $\lim_{ x \to c }f(x)=b$, then$$\lim_{ x \to c } g(f(x))= g(b)=g(\lim_{ x \to c }  f(x))$$
- **Theorem**
	If $f(x)\in C([a,b])$,($C([a,b])$ is the set of all continuous functions on $[a,b]$)then
	- $f(x)$ is bounded on $[a,b]$, that is, there exists a $C>0$ such that $|f(x)|\leq C$ for all $x\in[a,b]$.
	- $f(x)$ can get its maximum value and minimum value on $[a,b]$, that is, there exists $x_{1},x_{2}\in[a,b]$ such that$$f(x_{1})=\mathrm{max}\{f(x)|x\in[a,b]\}\triangleq M,f(x_{2})=\mathrm{min}\{f(x)|x\in[a,b]\}\triangleq m$$(the symbol $\triangleq$ represents "defined as") 

## **Intermediate Value Theorem for Continuous Functions**

^204bf9

- **Definition:**
	If $f$ is continuous on a interval $[a,b]$, then for each $N$ between $f(a)$ and $f(b)$, there exists one or more $x_{0}\in [a,b]$ such that $f(x_{0})=N$.
- **Corollary:**
	If $f(x)\in C([a,b]),f(a)f(b)<0$, then there exists $x_{0}\in[a,b]$ such that $f(x_{0})=0$. This corollary to ensure the existence of zero point in $[a,b]$.