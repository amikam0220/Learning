---
Date: 2025-03-19T19:29:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=471&selection=6,0,6,20|The link of chapter 8.1, Advanced Math]]"
---
## **Product Rule in Integral Form**

- **Definition of the integration by parts**
	Integration by Part Formula$$\int f(x)g^{\prime}(x)dx=f(x)g(x)-\int f^{\prime}(x)g(x) \, dx $$or,$$\int u \, dv =uv-\int u\,dv$$
	Proof:
		By the [[Note 3.3 Differentiation Rules#^300c96|product rule]], $$\frac{d}{dx}(f(x)g(x))=\frac{d}{dx}f(x)\cdot g(x)+\frac{d}{dx}g(x)\cdot f(x)$$integrate both side of the equation, $$f(x)g(x)=\int f^{\prime}(x)g(x)\,dx+\int f(x)g^{\prime}(x) \, dx $$which is equivalent to the equation.
- **Reduction Formula:**
	The replacement of a formula that is in a more simple representation.
	- Example:
		Obtain a formula that expresses the integral $$\int \cos ^{n}x \, dx $$in terms of an integral of a lower power of $\cos x$.
		$$\begin{align}\int \cos ^{n}x \, dx &=\cos ^{n-1}x\sin x+(n-1)\int \sin ^{2}x \cos ^{n-2}x \, dx \\ & =\cos ^{n-1}x\sin x  +(n-1)\int (1-\cos ^{2}x)\cos ^{n-2}x \, dx  \\ & =\cos ^{n-1}x \sin x+(n-1)\int \cos ^{n-2}x \, dx -(n-1)\int \cos ^{n}x \, dx \end{align}$$
		and if we move a term, $$n\int \cos ^{n}x\,dx=\cos ^{n-1}x \sin x+(n-1)\int \cos ^{n-2}x \, dx $$
		then, $$\int \cos ^{n}x \, dx =\frac{\cos ^{n-1}x\sin x}{n}+\frac{n-1}{n}\int \cos ^{n-2}x \, dx $$ ^aa1758
## **Evaluating Definite Integrals by Parts**

- **Definition:**
	Integration by parts formula for definite integrals$$\int_{a}^{b} f(x)g^{\prime}(x) \, dx =f(x)g(x)]^{b}_{a}-\int_{a}^{b} f^{\prime}(x)g(x) \, dx $$
	Proof: By the [[Note 5.4 The Fundamental Theorem of Calculus#^be4871|fundamental theorem]], $$\begin{align}\int_{a}^{b} f(x)g^{\prime}(x) \, dx  & =\int f(x)g^{\prime}(x) \, dx ]^{b}_{a} \\ & =\left[ f(x)g(x)-\int f^{\prime}(x)g(x) \, dx  \right]^{b}_{a} \\ & =f(x)g(x)]^{b}_{a}-\int_{a}^{b} f^{\prime}(x)g(x) \, dx \end{align}$$

## **Exercises**

- P460 35,47