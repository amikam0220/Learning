---
Date: 2025-04-28T16:13:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=782&selection=28,1,29,29|The link of chapter 14.1, Advanced Maths]]"
---
# Definition

Suppose $D$ is a set of $n$-tuples of real numbers $(x_{1},x_{2},\cdots,x_{n})$. A ==real-valued function== $f$ on $D$ is the rule that assigns a unique (single number) $$
w=f(x_{1},x_{2},\cdots,x_{n})
$$ to each element in $D$. The set $D$ is the function's ==domain==. The set of $w$-values take on by $f$ is the function's ==range==. The symbol $w$ is the ==dependent variable(output variables)== of $f$ and $f$ is said to be a function of the $n$ ==independent variables(input variables)== $x_{1}$ to $x_{n}$. 

For the function of ==two independent variables==, we usually use $x,y$ as independent variables and $z$ as the dependent variable. And we draw ==the domain as a region in the $xy$-plane==.
For the function of ==three independent variables==, we usually use $x,y,z$ as independent variables and $w$ as the dependent variable. And we draw ==the domain as a region in space==.

# Domains and Ranges

In general, the domain is the largest set that generates real numbers, that is, excluding the inputs that lead to complex numbers or division by zero.(Otherwise specified explicitly). The range consists of the set of output values for the dependent variable.

# Functions of Two Variables

## Definitions

The point $(x_{0},y_{0})$ that is in the region $R$ in the $xy$-plane and is ==a center of a disk with positive radius that lies entirely in $R$== is an ==interior point==.

The point $(x_{0},y_{0})$ for which ==every disk centered at it contains points lying outside of $R$ and points in $R$== is an ==boundary point==. (The boundary point itself ==need not belong to $R$==.)

The ==set of interior of a region== is the ==interior== of the region. And boundary points' set is ==boundary==. And a region is ==open== if it only consists of interior points and ==closed== if it contains all its boundary points.

Closed intervals $[a,b]$ include their boundary points, open intervals $(a,b)$ don't include their boundary points and $[a,b)$ are neither open or closed.
![[Thomas Calculus Early Transcendentals (12ed).pdf#page=784&rect=78,435,244,754|Thomas Calculus Early Transcendentals (12ed), p.767]]
## Definition

A region in the plane is ==bounded== if it lies inside a disk of fixed radius(like line segments, triangles, rectangles, circles and disks) and ==unbounded== if it is not bounded(like lines, coordinate axes).

# Graphs, Level Curves, and Contours of Functions of Two Variables

There are two standard ways to picture the values of a function $f(x,y)$. One is to ==draw and label curves== in the domain picture on which $f$ has a constant value. The other is to ==sketch the surface== $z=f(x,y)$ in space.
## Definitions

The set of points in the plane where a function $f(x,y)$ has a constant value $f(x,y)=c$ is called a ==level curve== of $f$. The set of all points $(x,y,f(x,y))$ in space, for $(x,y)$ in the domain of $f$, is called the ==graph== of $f$. The graph of $f$ is also called the ==surface== $z=f(x,y)$.
The ==contour curve== is the curve in space in which the plane $z=c$ cuts a surface $z=f(x,y)$.

![[Thomas Calculus Early Transcendentals (12ed).pdf#page=785&rect=53,125,230,417|Thomas Calculus Early Transcendentals (12ed), p.768]]

# Functions of Three Variables

## Definition

The set of points $(x,y,z)$ in space where a function of three independent variables has a constant value $f(x,y,z)=c$ is called the ==level surface== of $f$. 

## Definitions of Interior and Boundary

A point $(x_{0},y_{0},z_{0})$ in a region $R$ in space is an ==interior point== of $R$ if it is the center of a solid ball that lies entirely in $R$ and is a ==boundary point== of $R$ if every solid ball centered at $(x_{0},y_{0},z_{0})$ contains points that lie outside of $R$ and points that lie inside $R$.
The ==set of interior of a region== is the ==interior== of the region. And boundary points' set is ==boundary==. And a region is ==open== if it only consists of interior points and ==closed== if it contains all its boundary points.

