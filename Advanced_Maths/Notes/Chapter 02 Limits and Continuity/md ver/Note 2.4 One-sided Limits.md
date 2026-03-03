---
Date: 2024-10-30T14:02:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=102&selection=676,0,676,16|The link of chapter 2.4, Advanced Math]]"
---
## **One-sided Limits**

- **Definition:**
	If $f(x)$ is defined on $(c,b)$, as $x$ gets closer and closer to $c(b)$ from the right(left) side but never equals $c$, $f(x)$ gets arbitrary closer to $L$, then $L$ is called the the the right(left)-hand limit of $f(x)$. Denoted by $$\lim_ {x \to c^{+ }}f(x)=L\quad \text{and}\quad \lim_{ x \to c^- }f(x)=L  $$
- **Theorem:**
	$$\lim_{ x \to c }f(x)=L \quad \Leftrightarrow\quad \lim_{ x \to c^- }f(x)=L\quad\text{and}\quad  \lim_{ x \to c^+ }f(x)=L  $$
	Corollary: If $\lim_{ x \to c^- }f(x)\ne\lim_{ x \to c^+ }f(x)$, then $\lim_{ x \to c }f(x)$ doesn't exist.
- **Calculate:** Use the same laws of [[Note 2.2 Limit of a Function and Limit Laws#**Limit Laws**|note 2.2]]

## **Precise Definitions of One-sided Limits**

- **Definition:**
$$\lim_ {x \to c^{- }}f(x)=L\quad \Leftrightarrow\quad\text{for any }\epsilon>0, \text{there exists a }\delta>0 \text{ such that when } c<x<c+\delta, |f(x)-L|<\epsilon$$$$\lim_ {x \to c^{+}}f(x)=L\quad \Leftrightarrow\quad\text{for any }\epsilon>0, \text{there exists a }\delta>0 \text{ such that when } c-\delta<x<c, |f(x)-L|<\epsilon$$

## **Limits Involving $\mathbf{(\sin\theta)/\theta}$**

- **Theorem:**
	$$\lim_{ x \to 0 } \frac{\sin x}{x}=1(x\text{ in radians})$$
- **Corollary:**
	- $$\lim_{ f(x) \to 0 } \frac{sinf(x)}{f(x)}=1$$
	- $$\lim_{ x \to 0 } \frac{1-\cos x}{\frac{1}{2}x^{2}}=\lim_{ x \to 0 } \frac{\tan x}{x}=\lim_{ x \to 0 } \frac{\sqrt[n]{ 1+x }-1}{\frac{1}{n}x}=1$$

## **Infinitesimal**

- **Definition:**
	If $\lim_{ x \to c }f(x)=0$, then we call $f(x)$ is an infinitesimal as $x$ approaches $c$.
- **Equivalent Infinitesimal:**
	If $\lim_{ x \to c }f(x)=\lim_{ x \to c }g(x)=0$ and $\lim_{ x \to c } \frac{f(x)}{g(x)}=1$, then we call $f(x)$ and $g(x)$ are equivalent infinitesimal as $x$ approaches $c$. Denoted by:$$f(x)\sim g(x)(x\to c)$$
	- Corollary:
		- $\sin x \sim x$
		- $1-\cos x \sim \frac{1}{2}x^{2}$
		- $\tan x \sim x$
		- $\sqrt[n]{ 1+x }-1 \sim \frac{1}{n}x$
		all above are as $x$ approaches $c$.
- **Theorem:**
	If $f(x)\sim t(x),g(x)\sim h(x)(x\to c)$, and $\lim_{ x \to c }f(x)g(x),\lim_{ x \to c }\frac{f(x)}{g(x)}$ exist, then $$\lim_{ x \to c } f(x)g(x)=\lim_{ x \to c } t(x)h(x),\lim_{ x \to c } \frac{f(x)}{g(x)}=\lim_{ x \to c } \frac{t(x)}{h(x)}$$ Remarks: Only applied for quotient and product, not for sum and difference.
	- Example:
		find$$\lim_{ x \to 0 } \frac{\sin x-\tan x}{(\sqrt[3]{ 1+x^{2} }-1)(\sqrt{ 1+\sin x }-1)}$$sol: since $\tan x \sim x(x\to 0),\cos x-1\sim-\frac{1}{2}x^{2},\sqrt[3]{ 1+x^{2} }-1\sim \frac{1}{3}x^{2},\sqrt{ 1+\sin x }-1\sim \frac{1}{2}x$,thus$$\begin{align}\lim_{ x \to 0 } \frac{\sin x-\tan x}{(\sqrt[3]{ 1+x^{2} }-1)(\sqrt{ 1+\sin x }-1)}&=\lim_{ x \to 0 }\frac {\tan x(\cos x-1)}{\frac{1}{3}x^{2}\cdot \frac{1}{2}x } \\ & =\lim_{ x \to 0 } \frac{x\left( -\frac{1}{2}x^{2} \right)}{\frac{1}{3}x^{2}\cdot \frac{1}{2}x } \\ & =-3\end{align}$$