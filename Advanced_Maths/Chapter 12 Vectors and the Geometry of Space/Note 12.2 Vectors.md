---
Date: 2025-04-15T20:52:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=700&selection=8,0,8,7|The link of chapter 12.2, Advanced Math]]"
---
# Component Form
## Definition of Vector

The ==vector== represented by the directed line segment $\overrightarrow{AB}$ has the ==initial point== $A$ and the ==terminal point== $B$ and its length $|\overrightarrow{AB}|$. Two vectors are ==equal== if they have the same length and direction. The vectors are usually written by uppercase boldface letter such as $\mathbf{v}$. And the vector whose initial point is the ==origin== will be the representative in ==standard position==.

## Definition of Component Form

If $\mathbf{v}$ is a ==two-dimensional== vector in the plane equal to the vector with initial point at the origin and terminal point $(v_{1},v_{2})$, then ==the component form== of $v$ is $$\mathbf{v}=\langle v_{1},v_{2}\rangle $$
f $\mathbf{v}$ is a ==three-dimensional== vector in the plane equal to the vector with initial point at the origin and terminal point $(v_{1},v_{2},v_{3})$, then ==the component form== of $v$ is $$\mathbf{v}=\langle v_{1},v_{2},v_{3}\rangle $$
And the numbers $v_{1},v_{2},\cdots$ are the ==components== of $\mathbf{v}$. And given the initial point $P(x_{1},y_{1},z_{1})$ and the terminal point $Q(x_{2},y_{2},z_{2})$, the component form of $\overrightarrow{PQ}$ is $$
\mathbf{v}=\langle x_{2}-x_{1},y_{2}-y_{1},z_{2}-z_{1}\rangle
$$

## Definition of Magnitude

The ==magnitude== or ==length== of the vector $\mathbf{v}=\overrightarrow{PQ}$ is the nonnegative number $$
|\mathbf{v}| = \sqrt{ v_{1}^{2}+v_{2}^{2}+v_{3}^{2} }=\sqrt{ (x_{2}-x_{1})^{2}+(y_{2}-y_{1})^{2}+(z_{2}-z_{1})^{2} }
$$
And the vector with length 0 is the ==zero vector== $\mathbf{0}$ and it has ==no specific direction==.
# Vector Algebra Operations
## Definition of Addition and Scalar Multiplication

Let $\mathbf{u}=\langle u_{1},u_{2},u_{3}\rangle,\mathbf{v}=\langle v_{1},v_{2},v_{3}\rangle$ be vectors and $k$ is any scalar, then 
- ==addition==:
$$
\mathbf{u}+\mathbf{v}=\langle u_{1}+v_{1},u_{2}+v_{2},u_{3}+v_{3}\rangle
$$
- ==scalar multiplication==:
$$
k\mathbf{u}=\langle ku_{1},ku_{2},ku_{3}\rangle
$$
## Geometric Interpretation

For addition
We just need to place the initial point of one vector at the terminal point of another. And the sum is called the ==resultant vector==.
For multiplication
If $k>0$, the resultant vector will have the same direction as $\mathbf{u}$ and if $k<0$ the direction is opposite.
For the difference $\mathbf{u}-\mathbf{v}$, it is defined by $$\mathbf{u}-\mathbf{v}=\mathbf{u}+(-\mathbf{v})$$

## Properties of Vector Operations

Let $\mathbf{x},\mathbf{y},\mathbf{z}$ be vectors and $\alpha,\beta$ be scalars.
- $\mathbf{x+y=y+x}$
- $\mathbf{(x+y)+z=x+(y+z)}$
-  $\mathbf{x+0=x}$. 
- $\mathbf{x+(-x)=0}$. 
- $\mathbf{\alpha (x+y)=\alpha x+\alpha y}$
- $\mathbf{(\alpha+\beta)x=\alpha x+\beta x}$
- $\mathbf{(\alpha\beta)x=\alpha(\beta x)}$
- $1\cdot \mathbf{x=x}$
- $0\mathbf{u}=\mathbf{0}$

And when three or more space vectors lies in the same plane, we say they are ==coplanar== vectors.

# Unit Vectors

A vector $\mathbf{v}$ of ==length 1== is called a ==unit vector==. The ==standard unit vectors== are $$
\mathbf{i}=\langle 1,0,0\rangle,\mathbf{j}=\langle 0,1,0\rangle,\mathbf{k}=\langle0,0,1\rangle
$$
The any vector $\mathbf{v}=\left< v_{1},v_{2},v_{3} \right>$ can be written as the ==linear combination== of the standard unit vectors as $$
\mathbf{v}=v_{1}\mathbf{i}+v_{2}\mathbf{j}+v_{3}\mathbf{k}
$$
And we can call the scalars $v_{1},v_{2},v_{3}$ as the ==i-component,j-component,k-component==.

And if $\mathbf{v}\ne\mathbf{0}$, then $\frac{\mathbf{v}}{|\mathbf{v|}}$ is a unit vector in the direction of $\mathbf{v}$, called the ==direction== of the nonzero vector $\mathbf{v}$. So the equation $$
\mathbf{v }=\left| \mathbf{v} \right| \frac{\mathbf{v}}{\left| \mathbf{v} \right| }
$$ expresses $\mathbf{v}$ as ==its length times its direction==.

# Midpoint of a Line Segment

The ==midpoint== $M$ of the line segment joining points $P_{1}(x_{1},y_{1},z_{1})$ and $P_{2}(x_{2},y_{2},z_{2})$ is the point $$
\left( \frac{x_{1}+x_{2}}{2}, \frac{y_{1}+y_{2}}{2}, \frac{z_{1}+z_{2}}{2} \right) 
$$
