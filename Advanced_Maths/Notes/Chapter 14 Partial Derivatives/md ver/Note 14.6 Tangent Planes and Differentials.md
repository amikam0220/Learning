---
Date: 2025-05-07T18:00:00
tags:
  - Advanced_Math_notes
---
# Tangent Planes and Normal Lines

## Definition

The tangent plane at a point is the plane ==through the point== ==normal to the gradient vector==.

The normal line of the surface at a point is the line ==through the point== ==parallel to the gradient vector==.

## Expressions

Tangent Plane to $f(x,y,z)=c$ at $P_{0}(x_{0},y_{0},z_{0})$:

$$
\nabla f|_{P_{0}}\cdot \overrightarrow{P_{0}P}=0
$$

$$
\frac{\partial f}{\partial x}(x-x_{0})+\frac{\partial f}{\partial y}(y-y_{0})+\frac{\partial f}{\partial z}(z-z_{0})=0
$$

Normal Line to $f(x,y,z)=c$ at $P_{0}(x_{0},y_{0},z_{0})$:

$$
\overrightarrow{P_{0}P}=t\nabla f|_{P_{0}}
$$


$$
x=x_{0}+\frac{\partial f}{\partial x}t,y=y_{0}+\frac{\partial f}{\partial y}t,z=z_{0}+\frac{\partial f}{\partial z}t
$$


When encountering the surface $z=f(x,y)$, we just need to turn it to $F(x,y,z)=f(x,y)-z$.

# Estimating Change in a Specific Direction

The ==function value increment== equals to ==the product of directional derivative and distance increment==.
$$
df=(\nabla f|P_{0}\cdot \mathbf{u})ds
$$

It can be obtained by the formula of directional derivative in dot product.

# How to Linearize a Function of Two Variables

## Definition

The linearization of a function of a function $f(x,y)$ at a point $(x_{0},y_{0})$ where ==$f$ is differentiable== is 
$$
L(x,y)=f(x_{0},y_{0})+\frac{\partial f}{\partial x}(x-x_{0})+\frac{\partial f}{\partial y}(y-y_{0})
$$
and $f(x,y)=L(x,y)$ is the standard linear approximation.

It can be ==analogy to the single-variable linearization==. And it is obtained by the ==definition of differentiation==.

And the plane $z=L(x,y)$ is tangent to the surface $z=f(x,y)$ at $(x_{0},y_{0})$
(

$$
\frac{\partial f}{\partial x}(x-x_{0})+\frac{\partial f}{\partial y}(y-y_{0})-(L(x,y)-f(x_{0},y_{0}))=0
$$
)

# Differentials

## Definition

If we move from $(x_{0},y_{0})$ to $(x_{0}+dx,y_{0}+dy)$ nearby, then 

$$
df=\frac{\partial f}{\partial x}dx+\frac{\partial f}{\partial y}dy
$$

in the ==linearization== of $f$ is called the total differential of $f$. 

It can be obtained by the equations of linearization and replace by $df,dx,dy$.

# Functions of More than Two Variables

Similar to upper content.
# Exercises

P817 5 17 