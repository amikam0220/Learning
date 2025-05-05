---
Date: 2024-11-27T14:20:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=179&selection=288,0,288,14|The link of chapter 3.6, Advanced Math]]"
---
## **The Chain Rule**

- **Definition:**
	$y=f(g(x))$ is composite function of $y=f(u),u=g(x)$, then $$(f(g(x)))^{\prime}=f^\prime(g(x))\cdot g^\prime(x)$$or $$\frac{dy}{dx}=\frac{dy}{du}\cdot \frac{du}{dx}$$Remarks:$y=f(u),u=g(v),v=h(x)$, then $$\frac{dy}{dx}=\frac{dy}{du}\cdot \frac{du}{dv}\cdot \frac{dv}{dx}=f^{\prime}(u)\cdot g^{\prime}(v)\cdot h^{\prime}(x)$$

## **Derivative of Inverse Functions**

- **Definition:**
	If $f^{\prime}(x)$ exists and never zero on domain and $f^{-1}$ is differentiable at every point in its domain, then at the point $a=f^{-1}(b)$,$$(f^{-1})^{\prime}(b)= \frac{1}{f^{\prime}(f^{-1}(b))}$$or$$\left.\frac{df^{-1}}{dx}\right|_{x=b}=\frac{1}{\left.\frac{df}{dx}\right|_{x=f^{-1}(b)}}$$
- **Derivatives of some Trigonometric Functions**
	- $$(\arcsin x)^{\prime}=\frac{1}{\sqrt{ 1-x^{2} }}$$
	- $$(\arccos x)^{\prime}=-\frac{1}{\sqrt{ 1-x^{2} }}$$
	- $$(\arctan x)^{\prime}=\frac{1}{1+x^{2}}$$
	- $$(\mathrm{arc}\cot x)^{\prime}=-\frac{1}{1+x^{2}}$$

