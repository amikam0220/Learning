---
Date: 2025-04-30T08:15:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=799&selection=1000,0,1000,19&color=yellow|The link of chapter 14.3, Advanced Math]]"
---
# Partial Derivatives of a Function of Two Variables

Suppose $(x_{0},y_{0})$ is a point in the domain of a function $f(x,y)$, then the vertical plane $y=y_{0}$ will cut the surface $z=f(x,y)$ as the curve $z=f(x,y_{0})$. Here the $y$-value is constant at $y_{0}$ so it is not a variable.

Then we can define the partial derivative of $f$ ==with respect to $x$== at the point $(x_{0},y_{0})$ as the ordinary derivative of $f(x,y_{0})$ with respect to $x$ at the point $x=x_{0}$. 

## Definition

The ==partial derivative== of $f(x,y)$ with respect to $x$ at the point $(x_{0},y_{0})$ is $$
\left.\frac{\partial f}{\partial x}\right|_{(x_{0},y_{0})}=\lim_{ h \to 0 } \frac{f(x_{0}+h,y_{0})-f(x_{0},y_{0})}{h}
$$ if the limit exists. And $h$ represents a real number. The symbol $\partial$ is to distinguish the ==partial derivatives== and the ==ordinary derivatives==.
It can can also denoted by$$
\left.\frac{d}{dx}f(x,y_{0})\right|_{x=x_{0}},
\frac{\partial f}{\partial x}(x_{0},y_{0}),f_{x}(x_{0},y_{0}),
\left.\frac{\partial z}{\partial x}\right|_{(x_{0},y_{0})},
f_{x},
z_{x},
\frac{\partial f}{\partial x},
\frac{\partial z}{\partial x}
$$
And the partial derivative of $f(x,y)$ with respect to $y$ is similar to that.

# Calculations

When finding $\partial f /\partial x$, we just need to see $x$ as a variable and see $y$ as a constant and vice versa.

# Functions of More Than Two Variables

The definitions and the methods are similar to the functions with two variables.

# Partial Derivatives and Continuity

Note that a function with two variables ==can have partial derivatives== with respect to both $x$ and $y$ ==without the function being continuous there==.

# Second-Order Partial Derivatives

Note the order when using different notations. Like $$
\frac{\partial^{2}f}{\partial x\partial y}=\frac{\partial}{\partial x}\left( \frac{\partial}{\partial y} f \right) 
$$
but 
$$
f_{yx}=(f_{y})_{x}
$$

# The Mixed Derivative Theorem

![[Thomas Calculus Early Transcendentals (12ed).pdf#page=805&rect=240,216,586,281|Thomas Calculus Early Transcendentals (12ed), p.788]]
Note the theorem is ==sufficient condition==.
# Exercises

P791 43 65 71(opt)