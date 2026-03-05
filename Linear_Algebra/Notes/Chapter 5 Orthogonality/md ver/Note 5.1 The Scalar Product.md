---
Date: 2025-05-12T18:58:00
tags:
  - Linear_Algebra_notes
---
# Intro
## Definition of Scalar Product

For $\mathbf{x}=(x_{1},\cdots,x_{n})^{T},\mathbf{y}=(y_{1},\cdots,y_{n})^{T}$, the product $\mathbf{x}^{T}\mathbf{y}$ is the ==scalar product== and 
$$
\mathbf{x}^{T}\mathbf{y}=x_{1}y_{1}+\cdots+x_{n}y_{n}
$$


# Interpretation of Scalar Product(3B1B)

## Geometric Interpretation of Scalar Product

The result of scalar product is actually ==the product of the length of projection vector== of $\mathbf{y}$ to $\mathbf{x}$ and ==the length== of $\mathbf{x}$. And the result does not matter with the sequence of $\mathbf{x}$ and $\mathbf{y}$ since we can understand the vector $\mathbf{y}$ is the multiple of $\mathbf{y}_{0}$ whose length equals to $\mathbf{x}$ and the difference of sequence also has the same result 
$$
\begin{align}
\mathbf{x}^{T}\mathbf{y}=\mathbf{x}^{T}(n\mathbf{y}_{0}) \\
\mathbf{y}^{T}\mathbf{x}=(n\mathbf{y_{0}})^{T}\mathbf{x}
\end{align}
$$

since the projection between $\mathbf{y_{0}}$ and $\mathbf{x}$ is ==symmetric==, we can know the first is just make the ==projection vector== turns to ==$n$ times== and ==another vector does not change== thus the result is $n\mathbf{x}^{T}\mathbf{y}$. Similarly, the second just make the vector turns to $n$ times and the projection vector does not change thus the result is also $n\mathbf{x}^{T}\mathbf{y}$.

## Why is Projection

In fact, the vector $\mathbf{x}^{T}$ can be seen as a ==linear transformation matrix== which maps the $n$-dimensional vector $\mathbf{y}$ into one dimension. 
Now we note the situations in $\mathbb{R}^{2}$. 
Clearly, the projection transformation is linear transformation by the definition. And the transformation matrix is a $1\times2$ matrix. Then we want to find the elements in the matrix.
![[why projection.png]]
Suppose $\mathbf{u}$ is the unit vector with the same direction projected. The element in the matrix is actually the result of unit basis $\mathbf{i},\mathbf{j}$ after transformation.  Then by symmetry, we can know ==the coordinate of transformed $\mathbf{i}$ on the projected direction equals to the $x$ coordinate of $\mathbf{u}$==. Similarly, another element is $y$ coordinate of $\mathbf{u}$. Thus the transformation matrix is $U=(u_{x},u_{y})$. When projecting the vector $\mathbf{y}=\begin{pmatrix}y_{1} \\ y_{2}\end{pmatrix}$ to the direction, we can get the result by 
$$
U\mathbf{y}=u_{x}y_{1}+u_{y}y_{2}=\mathbf{u}^{T}\mathbf{y}
$$


If we take $\mathbf{x}^{T}=(nu_{x},n u_{y})$, we can see the projection as first project $\mathbf{i},\mathbf{j}$ into the direction and then stretch $n$ times(this is why the scalar product can be seen as the product of the length of projection vector and the length of another vector) and it is 

$$
\mathbf{x}^{T}\mathbf{y}
$$

That is actually ==the scalar product==.

# The Scalar Product in $\mathbb{R}^{2}$ and $\mathbb{R}^{3}$

## Euclidean Length

The description of the ==length== of a vector or the ==distance== between two vectors in $\mathbb{R}^{2}$ and $\mathbb{R}^{3}$. 

## Theorem 5.1.1

The expression of the scalar product with the ==angle== between two vectors.

Proof can be done by ==the law of cosine==.

It can also be used to find $\cos\theta$.

## Corollary 5.1.2 Cauchy-Schwarz Inequality

The relationship between the ==length== of scalar ==product== of two vector and the ==product== of the ==length== of two vector.

Note the condition for the ==equality==.

Proof can be done by theorem 5.1.1 with the scale of $\theta$.(Can also be done use definition but complex)

## Definition of Orthogonal

The scalar product of two vectors be zero.

# Scalar and Vector Projections

## Scalar Projection

==Scalar==. The ==length of the projection vector== and find by ==multiplying== the ==length== of the vector ==to be projected== and the ==cosine== of their angle.

## Vector Projection

==Vector==. Express by the ==product== of the ==scalar projection==(Information of length) and the ==unit vector== of ==projection direction==(Information of direction). It can also be expressed by the form with only the scalar of two vectors and their length.

Note that the projection vector not equals to the projected vector multiply the cosine.(Wrong direction)

## The Plane Normal to a Vector

Expressed by the ==scalar product== with the ==normal vector== and ==any vector in the plane==.

The normal vector can be find by the cross product of two vectors. And the length of normal vectors found through this way can be the ==product== of the ==length== of two vectors and the ==sine== of angle.

# Orthogonality in $\mathbb{R}^{n}$

Expansion of Euclidean Length, Cauchy-Schwarz Inequality and orthogonal to $\mathbb{R}^{n}$