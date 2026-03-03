---
Date: 2024-12-18T14:48:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=296&selection=81,0,81,15|The link of chapter 4.8, Advanced Math]]"
---
## **Antidifferentiation**

- **Definition:**
	A function $F$ is an antiderivative of $f$ on interval $I$ if $F^{\prime}(x)=f(x)$ for all $x$ on $I$.
	The process of finding antiderivatives is called antidifferentiation or indefinite integral.
- **Theorem:**
	If $F$ is an antiderivative of $f$ on $I$, then the most general form of antiderivative of $f$ on $I$ is $$F(x)+C$$where $C$ is an arbitrary constant.
	And we use the symbol $$\int f(x)  \, dx $$to represent the set of all antiderivatives of $f(x)$, and if $F^{\prime}(x)=f(x)$, we write $$\int f(x) \, dx =F(x)+C$$$\int$ is the integral sign, $f$ is the integrand, $\int f(x) \, dx$ is called the indefinite integral.($dx$ is the differentiation of $x$)
	Corollary:$$\frac{d}{dx}\left[ \int f(x) \, dx  \right]=f(x)$$
	$$\int F^{\prime}(x) \, dx=F(x)+C $$

## **Basic Integration Formulas**

![[AntiderivativeFormulas.png]]
- $$\int \sec x \, dx =\ln|\sec x+\tan x|+C$$
## **Algebraic Rules for Indefinite Integration**

- **The Constant multiple rule:**
	$$\int kf(x) \, dx =k\int f(x) \, dx  $$
- **The Sum Rule:**
	$$\int (f(x)\pm g(x)) \, dx =\int f(x) \, dx \pm \int g(x) \, dx $$