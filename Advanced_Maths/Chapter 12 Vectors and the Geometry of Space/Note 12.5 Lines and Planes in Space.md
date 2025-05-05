---
Date: 2025-04-16T19:47:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=723&selection=116,1,117,25|The link of chapter 12.5, Advanced Math]]"
---
# Lines and Line Segments in Space
## Vector Equation for a Line

A vector equation for the line $L$ through $P_{0}(x_{0},y_{0},z_{0})$ parallel to $\mathbf{v}$ is $$
\mathbf{r}(t)=\mathbf{r}_{0}+t\mathbf{v},-\infty<t<\infty
$$
where $\mathbf{r}$ is the position vector of a point $P(x,y,z)$ on $L$ and $\mathbf{r}_{0}$ is the position vector of $P_{0}(x_{0},y_{0},z_{0})$

## Parametric Equations for a Line

The standard parametrization of the line through $P_{0}(x_{0},y_{0},z_{0})$ parallel to $\mathbf{v}=v_{1}\mathbf{i}+v_{2}\mathbf{j}+v_{3}\mathbf{k}$ is $$
x=x_{0}+tv_{1},y=y_{0}+tv_{2},z=z_{0}+tz_{3},-\infty<t<\infty
$$
# The Distance from a Point to a Line in Space
## Distance from a Point $S$ to a Line Through $P$ Parallel to $\mathbf{v}$


$$
d=\frac{\left| \overrightarrow{PS}\times \mathbf{v}\right|}{\left| \mathbf{v} \right| } 
$$
![[distance from point to line.png]]

# An Equation for a Plane in Space
## Equation for a Plane

The plane through $P_{0}(x_{0},y_{0},z_{0})$ normal to $\mathbf{n}=A\mathbf{i}+B\mathbf{j}+C\mathbf{k}$ has 
==Vector equation==:
$$
\mathbf{n}\cdot \overrightarrow{P_{0}P} = 0
$$
==Component equation==:
$$
A(x-x_{0})+B(y-y_{0})+C(z-z_{0})=0
$$
==Simplified==:
$$
Ax+By+Cz=D,D=Ax_{0}+By_{0}+Cz_{0}
$$

# Lines of Intersection

Two planes are ==parallel== if and only if ==their normals are parallel==, or $\mathbf{n}_{1}=k\mathbf{n}_{2}$ for some scalar $k$.
If two planes are intersected, then the formula can be obtained by associating the formula of two planes and its direction is perpendicular to ==the normals of both two planes==.

# The Distance from a Point to a Plane

If $P$ is a point on the plane with normal $\mathbf{n}$, then the distance from any point $S$ to the plane is ==the length of the vector projection== of $\overrightarrow{PS}$ onto $\mathbf{n}$. That is, $$
d=\left| \overrightarrow{PS}\cdot \frac{\mathbf{n}}{\left| \mathbf{n} \right| } \right| 
$$
where $\mathbf{n}=A\mathbf{i}+B\mathbf{j}+C\mathbf{k}$ is the normal to the plane.

# Angles Between Planes

The angle between two intersecting planes is defined to be the ==acute angle== between their ==normal vectors==. That is, $$
\theta=\cos ^{-1}\left( \frac{\mathbf{n}_{1}\cdot \mathbf{n}_{2}}{\left| \mathbf{n}_{1} \right|\left| \mathbf{n}_{2} \right|  } \right) 
$$
# Exercises 12.4

P712 9, 23, 35, 39, 59, 67