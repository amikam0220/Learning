---
Date: 2025-02-26T09:30:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=353&selection=6,0,6,48|The link of chapter 5.5, Advanced Math]]"
---
## **Relationship among Indefinite Integral, Antiderivatives and Definite Integral

- **Indefinite Integral and Antiderivatives:**
	The indefinite integral of the function $f$ with respect to $x$ is the set of all antiderivatives of $f$. That is, $$\int f(x) \, dx =F(x)+C$$where $F(x)$ is any antiderivative of $f$ and $C$ is any arbitrary constant.
- **Antiderivatives and Definite Integral:**
	It is stated in the [[Note 5.4 The Fundamental Theorem of Calculus#**Fundamental Theorem, Pt 2 (The Evaluation Theorem)**|fundamental theorem]].
- **Indefinite Integral and Definite Integral:**
	A definite integral $\int_{a}^{b}f(x)  \, dx$ is a number while an indefinite integral $\int f(x) \, dx$ is a function plus an arbitrary constant $C$.

## **Substitution: Running the Chain Rule Backwards**

- **The Substitution:**
	As with differentials, when computing integrals we have $$du=\frac{du}{dx}dx$$
- **Theorem 6--The Substitution Rule:**
	If $u=g(x)$ is a differentiable function whose range is an interval $I$, and $f$ is continuous on $I$, then $$\int f(g(x))g^{\prime}(x) \, dx =\int f(u) \, du $$
	Proof:
		We can suppose that $F$ is an antiderivative of $f$. By [[Note 3.6 The Chain Rule and Derivatives of Inverse Functions#**The Chain Rule**|the Chain Rule]], $$\frac{d}{dx}F(g(x))=F^{\prime}(g(x))\cdot g^{\prime}(x)=f(g(x))\cdot g^{\prime}(x)$$thus when we make the substitution $u=g(x)$, then $$\begin{align}\int f(g(x))g^{\prime}(x) \, dx  & =\int \frac{d}{dx}F(g(x)) \, dx  \\ & =F(g(x))+C \\ &=F(u)+C \\ & =\int F^{\prime}(u) \, du \\  & =\int f(u) \, du \end{align}$$ ^91e997
- **Substitution Method:**
	- Substitute $u=g(x)$ and $du=\frac{du}{dx}\cdot dx=g^{\prime}(x)$ to obtain the integral $$\int f(u) \, du $$
	- Integrate with respect to $u$.
	- Replace $u$ by $g(x)$ in the result.

## **The Integrals of $\sin ^{2}x$ and $\cos ^{2}x$**

- **Strategy:**
	Use the formulas about trigonometric functions and the substitution rule.