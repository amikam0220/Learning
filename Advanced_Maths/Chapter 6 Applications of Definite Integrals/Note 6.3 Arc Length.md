---
Date: 2025-04-02T11:01:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=399&selection=6,0,6,10|The link of chapter 6.3, Advanced Math]]"
---
## **Length of a Curve $y=f(x)$**

- **Definition**
	If $f^{\prime}$ is continuous on $[a,b]$, then the ==length(arc length)== of the curve $y=f(x)$ from the point $A=(a,f(a))$ to $B=(b,f(b))$ is the value of the integral $$L=\int_{a}^{b} \sqrt{ 1+[f^{\prime}(x)]^{2} } \, dx =\int_{a}^{b} \sqrt{ 1+\left( \frac{dy}{dx} \right)^{2} } \, dx $$ ^8fc454
- **Proof**
	First, the function must be smooth and its graph must be a smooth curve, that is, $f^{\prime}$ is continuous on $[a,b]$. Then we partition the interval $[a,b]$ into $n$ subintervals with $a=x_{0}<x_{1}<\cdots<x_{n-1}<x_{n}=b$. Then the corresponding point on the function is $P_{k}(x_{k},y_{k})$. So we approximate the curve from $P_{k-1}$ to $P_{k}$ as the straight line segment and its length is $$L_{k}=\sqrt{ (\Delta x_{k})^{2}+(\Delta y_{k})^{2} }$$ where $\Delta x_{k}=x_{k}-x_{k-1},\Delta y_{k}=y_{k}-y_{k-1}$.
	Then the length of the curve will be $$\sum_{k=1}^{n} L_{k}=\sum_{k=1}^{n}\sqrt{ (\Delta x_{k})^{2}+(\Delta y_{k})^{2} } $$
	By the [[Note 4.1 The Mean Value Theorem#^f5d224|Mean Value Theorem]], there is a point $c_{k}\in[x_{k-1},x_{k}]$ such that $$\Delta y_{k}=f^{\prime}(c_{k})\Delta x_{k}$$Thus the length of the curve will be $$\sum_{k=1}^{n} L_{k}=\sum_{k=1}^{n} \sqrt{ (\Delta x_{k})^{2}+(f^{\prime}(c_{k})\Delta x_{k})^{2} }=\sum_{k=1}^{n} \sqrt{ 1+[f^{\prime}(c_{k})]^{2} }\Delta x_{k}$$Since $\sqrt{ 1+[f^{\prime}(c_{k})]^{2} }$ is continuous on $[a,b]$, then when $n\to0$, the norm of the Riemann sum goes to zero. Thus $$\lim_{ n \to \infty } \sum_{k=1}^{n} L_{k}=\lim_{ n \to \infty } \sum_{k=1}^{n} \sqrt{ 1+[f^{\prime}(c_{k})]^{2} }\Delta x_{k}=\int_{a}^{b} \sqrt{ 1+[f^{\prime}(x)]^{2} } \, dx $$

## **Dealing with Discontinuities in $dy/dx$**

- **Formula for the length of $x=g(y),c\leq y\leq d$**
	If $g^{\prime}$ is continuous on $[c,d]$, then the ==length(arc length)== of the curve $x=g(y)$ from the point $A=(g(c),c)$ to $B=(g(b),b)$ is the value of the integral $$L=\int_{c}^{d} \sqrt{ 1+[g^{\prime}(y)]^{2} } \, dy =\int_{c}^{d} \sqrt{ 1+\left( \frac{dx}{dy} \right)^{2} } \, dy $$

## **The Differential Formula For Arc Length**

- **Definition of Arc Length Function**
	By the [[Note 5.4 The Fundamental Theorem of Calculus#^4ac48a|Fundamental Theorem Pt.1]], we can define a new function $$s(x)=\int_{a}^{x} \sqrt{ 1+[f^{\prime}(t)]^{2} } \, dx $$ And we can know the function is differentiable and continuous. It measures the length along the curve $y=f(x)$ from the initial point $P_{0}(a,f(a))$ to the point $Q(x,f(x))$.
	Then the differential of arc length is $$ds=\sqrt{ 1+\left( \frac{dy}{dx} \right)^{2} }dx=\sqrt{ dx^{2}+dy^{2} }$$ which can be integrated to gibe the total length of a curve, that is, $$L=\int ds$$