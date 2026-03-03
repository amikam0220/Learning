---
Date: 2025-05-07T18:00:00
tags:
  - Advanced_Math_notes
---
# Directional Derivatives in the Plane


$$
\left( \frac{df}{ds} \right)_{\mathbf{u},P_{0}}=\lim_{ s \to 0 } \frac{f(x_{0}+su_{1},y_{0}+su_{2})-f(x_{0},y_{0})}{s}
$$

where $s$ is ==the distance== increasing ==through the direction== $\mathbf{u}$, $\mathbf{u}=u_{1}\mathbf{i}+u_{2}\mathbf{j}$ and the point $P(x_{0},y_{0})$.

Here, $\mathbf{u}$ includes the ==direction information== and $P_{0}$ includes the ==now position== information. the derivative is the rate of change of $f$ in the direction $\mathbf{u}$ and it is the ==slope of the tangent== to the point $P_{0}$ in the plane formed by $\mathbf{u}$ and $\mathbf{k}$.

And it can be also denoted by $(D_{\mathbf{u}}f)_{P_{0}}$.

# Calculation and Gradients

## Theorem 9--The Directional Derivative Is a Dot Product 


$$
\left( \frac{df}{ds} \right)_{\mathbf{u},P_{0}}=(\nabla f)_{P_{0}}\cdot \mathbf{u}
$$

(==only when $f$ is differentiable==)where the 
$$
\nabla f = \frac{\partial f}{\partial x}\mathbf{i}+\frac{\partial f}{\partial y}\mathbf{j}= \langle \frac{\partial f}{\partial x}, \frac{\partial f}{\partial y} \rangle.
$$

, called the ==gradient vector==, at the point $P_{0}$.

The dot product can be obtained by rewrite the directional derivatives through the ==chain rule== or through the ==definition and the differentiation==.

The gradient vector includes the information of $P_{0}$ and it is static at $P_{0}$ and the $\mathbf{u}$ includes the information of direction.

## Properties of the Directional Derivative $D_{\mathbf{u}}f=\nabla f\cdot \mathbf{u}=\left| \nabla f \right|\cos\theta$

1. The ==direction of $\nabla f$ is the direction that the function $f$ increases most rapidly==.($\theta=0$)
2. Decreases most rapidly in the direction $-\nabla f$.($\theta=\pi$)
3. Zero change when $\mathbf{u}$ orthogonal to the gradient vector and it is the direction of the ==tangent line== to the level curve.($\theta=\frac{\pi}{2}$)

# Gradients and Tangents to Level Curves

At every point in the domain of a differentiable function, the ==gradient== is ==normal== to the ==level curve== through $(x_{0},y_{0})$.

It can be obtained by take derivatives of the both sides of 
$$
f(g(t),h(t))=c
$$


## Algebra Rules for Gradients

Sum rule, difference rule, constant multiple rule, product rule, quotient rule(similar to ==derivatives==).

# Functions of Three Variables

Similar to two-variable functions and just add a term.
# Exercises

P808 13 29 33