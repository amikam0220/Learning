---
Date: 2024-11-20T14:44:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=139&selection=27,0,27,38|The link of chapter 3.1, 3.2, Advanced Math]]"
---
## **Definition**

- If the function $y=f(x)$ is defined on a neighborhood of $x_{0}$, and the limit$$\lim_{ x \to x_{0} } \frac{f(x)-f(x_{0})}{x-x_{0}}=\lim_{ h \to 0 } \frac{f(x_{0}+h)-f(x_{0})}{h}$$exists, then we call $f(x)$ is differentiable at $x_{0}$, and the limit value is the derivative of $f(x)$ at $x_{0}$, denoted by:$$y^{\prime}|_{x=x_{0}}=f^{\prime}(x_{0})=\left.\frac{dy}{dx}\right|_{x=x_{0}}=\left. \frac{df(x)}{dx}\right|_{x=x_{0}}\ne \frac{df(x_{0})}{dx}=0$$
- **Remarks:**
	- If the above limit doesn't exist, then we call $f(x)$ is nondifferentiable at $x_{0}$.
	- If $f(x)$ is differentiable at each $x$ in the $(a,b)$, then $f(x)$ is differentiable over $(a,b)$
	- The derivative can be interpreted as the slope of the tangent line, instantaneous rate of change and velocity.
- **Theorem 1:**
	If the function $f(x)$ is differentiable at $x=c$, then it is also continuous at $x=c$.(converse is false)
	- Corollary:
		If $f(x)$ is discontinuous at $x=c$, then the derivative of $f$ at $x=c$ doesn't exist.

## **Differentiable on an Interval; One-Sided Derivatives**

- **Definition:**
	A function $y=f(x)$ is differentiable on a closed interval $[a,b]$ if it is differentiable on $(a,b)$ and if $\lim_{ h \to 0^{+} } \frac{f(a+h)-f(a)}{h}, \lim_{ h \to 0^{-} } \frac{f(b+h)-f(b)}{h}$ exist at endpoints.
- **Strategies to judge a function failed to be differentiable:**
	- The graph of $f$ has a "corner" or "kink" in it(a sharp point)
	- discontinuity
	- a vertical tangent line, that is $f$ is continuous at $a$ and $$\lim_{ x \to a }|f^{\prime}(x)| =+\infty$$
