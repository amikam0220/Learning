---
Date: 2025-04-02T19:34:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=539&selection=469,0,469,28|The link of chapter 9.2, Advanced Math]]"
---
- **First-Order Linear Equations**
	It can be written in the form $$\frac{dy}{dx}+P(x)y=Q(x)$$where $P$ and $Q$ are continuous functions of $x$. And the form is the linear equation's ==standard form==.

## **Solving Linear Equations**

- **Conclusion**
	To solve the linear equation in the standard form, multiply both sides by the integrating factor $v(x)=e^{\int P(x)dx}$ and integrate both sides.
- **Proof**
	Here is why multiplying by $v(x)$ works: $$\begin{align} \frac{dy}{dx}+P(x)y & =Q(x) \\v(x) \frac{dy}{dx}+P(x)v(x)y & =v(x)Q(x) \\ \frac{d}{dx}(v(x)\cdot y) & =v(x)Q(x) \\ v(x)\cdot y  & = \int v(x)Q(x)\, dx \\ y & = \frac{1}{v(x)}\int v(x)Q(x) \, dx \end{align}$$Thus we call $v(x)$ an integrating factor.

## **Exercise Section 9.2**

P526 5, 29

- [[Thomas Calculus Early Transcendentals (12ed).pdf#page=545&selection=2,0,2,31&color=yellow|Question 29th]]
	For the ==Bernoulli differential equation== in the form of $$\frac{dy}{dx}+P(x)y=Q( x)y^{n}$$, if $n>1$, w can substitute $u=y^{1-n}$ to transform it into the linear equation $$\frac{du}{dx}+(1-n)P(x)u=(1-n)Q(x)$$