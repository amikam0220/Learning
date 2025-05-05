---
Date: 2024-11-27T14:57:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=187&selection=393,0,393,24|The link of chapter 3.7, Advanced Math]]"
---
## **Implicit Differentiation**

- **Explicit Functions and Implicit Functions:**
	- Explicit Functions: $y=f(x)(y=x^{2}+1,y=ex)$
	- Implicit Functions: $F(x,y)=0(x^{2}y^{3}-6=4y^{2}+x)$
- **Implicit Differentiation:**
	- Differentiate both sides of the equation with respect to $x$.
	- Solve the differentiated equation algebraically for $\frac{dy}{dx}$ in terms of $x$ and $y$.
- **Logarithmic Differentiation:**
	The derivatives of positive functions sometimes can be more quick if we take the natural logarithm of the both sides before differentiating, the process called logarithmic Differentiation.
	For$$y=u^{v}$$
	then $$\begin{align}\ln y & =v\ln u \\ \frac{1}{y}\cdot y^{\prime} & =v^{\prime}\ln u+v\cdot \frac{u^{\prime}}{u} \\ y^{\prime} & =u^{v} \left( v^{\prime}\ln u+v\cdot \frac{u^{\prime}}{u} \right)\end{align}$$

## **Derivatives of Higher Order**

- **Strategies:**
	Use the approach of implicit differentiation to find the $y^{\prime}$ and then substitution the $y^{\prime}$ to the higher order derivatives.

## **Related Rates**

- **Definition:**
	There are two functions $x=x(t)$ and $y=y(t)$ related by $F(x,y)=0$. Differentiate both 
	sides of the equation with respect to $t$, we will get it involving $\frac{dy}{dt}$ and $\frac{dx}{dt}$(the rate of change). This equation is called related rates equations
- **Strategy:** 
	- Draw picture and name variables and constants
	- Write down the numerical information
	- Write down what to find
	- Write down an equation related to variables
	- Differentiate with respect to $t$
	- Evaluate.