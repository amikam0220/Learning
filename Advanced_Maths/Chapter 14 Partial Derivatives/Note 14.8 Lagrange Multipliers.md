---
Date: 2025-05-21T20:00:00
tags:
  - Advanced_Math_notes
---
# Introduction

Lagrange multipliers is the method for ==finding extreme values of constrained functions==.

# Constrained Maxima and Minima

## Substitution

Most simple method but not always useful to choose appropriate variables to substitute.

# The Method of Lagrange Multipliers

For the function $f(x,y,z)$ whose variables are ==subject to a constraint $g(x,y,z)=0$==, to find the ==local maximum and local minimum values==,find the values of $x,y,z,\lambda$ on the surface $g=0$ among the points where $$
\nabla f=\lambda \nabla g
$$
and $\lambda$ is Lagrange multiplier.

The two equations $g=0$ and $\nabla f=\lambda \nabla g$ are enough to solve all unknowns.(==consider possibly different cases==)

We can understand $f(x,y,z)=0$ and $g(x,y,z)=0$ as the ==level curve==. That is, $f$ changes until it is tangent to $g$. 

# Lagrange Multipliers with Two Constraints

To find the local extrema of the function $f$ constrained by two functions $g_{1}(x,y,z)=0,g_{2}(x,y,z)=0$, we need to find the $x,y,z,\lambda,\mu$ such that $$
\nabla f=\lambda \nabla g_{1}+\mu \nabla g_{2},g_{1}(x,y,z)=0,g_{2}(x,y,z)=0
$$
We also understand the three function as level curves. And ==the constraint functions intersect on a curve== and we need to ==find the extrema on the intersection curve==. Then we need to change $f$ until the curve is the tangent to $f$. That is, $\nabla f$ is normal to the curve. Since $\nabla g_{1},\nabla g_{2}$ are also normal to the curve, ==$\nabla f,\nabla g_{1},\nabla g_{2}$ are on the same plane==.
# Exercises

P836 1 29 37
