---
Date: 2025-04-02T19:09:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=444&selection=773,0,773,55|The link of chapter 7.2, Advanced Math]]"
---
## **Separable Differential Equations**

- **Differential Equations**
	It has the form $$\frac{dy}{dx}=f(x,y)$$
	where $f$ is a function of both independent and dependent variables. 
	A ==solution== of this equation is a differentiable function $y=y(x)$ defined on the domain of $x$ such that $$\frac{d}{dx}y(x)=f(x,y(x))$$ on the interval. And the ==general solution== is a solution $y(x)$ contains all solutions which always contains an arbitrary constant.
- **Separable Differential Equations**
	The differential equation that can be expressed as a product of a function of $x$ and a function of $y$ is ==separable==. It has the form $$\frac{dy}{dx}=g(x)H(y)$$where $g$ is a function of $x$ and $H$ is a function of $y$. Then we can rewrite this equation in the form $$\frac{dy}{dx}=\frac{g(x)}{h(y)}$$where $h(y)=\frac{1}{H(y)}$. That equals to $$h(y)dy=g(x)dx$$ Now we can simply integrate both sides of this equation, $$\int h(y) \, dy=\int g(x) \, dx  $$

## **Exercise Section 7.2**

P434 15, 19