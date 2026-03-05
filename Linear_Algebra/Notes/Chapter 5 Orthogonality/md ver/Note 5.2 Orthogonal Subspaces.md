---
Date: 2025-06-02T18:16:00
tags:
  - Linear_Algebra_notes
---
# Intro

## Property of $m\times n$ Matrix $A$ 

Each vector in $N(A)$ is ==orthogonal== to every vector in ==column space== of $A^{T}$. That is, 
$$
R(A^{T})\perp N(A)
$$

Proof can be done by the definition of null space and the multiplication of $A$ and $\mathbf{x}$.

## Definition of Orthogonal Subspaces

Orthogonal for ==every vectors== in two subspaces.

Note that sometimes orthogonal subspaces are ==not agree with intuitive idea== of perpendicularity. 

## Definition of Orthogonal Complement

The ==set== of ==all vectors== that are orthogonal to ==every vector== for a subspace of $\mathbb{R}^{n}$. Denoted by $Y^{\perp}$.

### Remarks

1. Two orthogonal subspaces have ==only common elements== $\mathbf{0}$.
2. The orthogonal complement of a subspace of $\mathbb{R}^{n}$ is also a subspace of $\mathbb{R}^{n}$.

The two remarks can be proved by definition of inner product and orthogonality.

# Fundamental Subspaces

## Intro

The ==column space== of a matrix is the same as ==its range==. 

## Theorem 5.2.1 Fundamental Subspaces Theorem

For a $m\times n$ matrix $A$, 
$$
N(A)=R(A^{T})^{\perp},N(A^{T})=R(A)^{\perp}
$$

The proof can be done by the property in Intro.

## Theorem 5.2.2 

The sum of the dimension of a ==subspace== of $\mathbb{R}^{n}$ and its ==orthogonal complement== is $n$. That is 
$$
\mathrm{dim}S+\mathrm{dim}S^{\perp}=n
$$

And the conjunction of their basis is the basis of $\mathbb{R}^{n}$. 

It can be proved by theorem 5.2.1.

It is also prove that for each ==vector== in $\mathbb{R}^{n}$ can be expressed uniquely as a ==sum== of two vectors respectively in a ==subspace== of $\mathbb{R}^{n}$ and its ==orthogonal complement==. 

## Definition of Direct Sum

For each vector $\mathbf{w}\in W$, it can be expressed ==uniquely== as a sum $\mathbf{u}+\mathbf{v}$ where $\mathbf{u}\in U$ and $\mathbf{v}\in V$. And $W$ is a ==direct sum== of $U$ and $V$, denoted by $W=U\oplus V$.

## Theorem 5.2.3 

The ==direct sum== of a ==subspace== in $\mathbb{R}^{n}$ and its ==orthogonal complement== equals to $\mathbb{R}^{n}$.
## Theorem 5.2.4

For a subspace $S$ of $\mathbb{R}^{n}$, $(S^{\perp})^{\perp}=S$.

## Corollary 5.2.5

For a $m\times n$ matrix and $\mathbf{b}\in\mathbb{R}^{m}$, either there is a vector $\mathbf{x}\in\mathbb{R}^{n}$ such that $A\mathbf{x}=\mathbf{b}$ or there is a vector $\mathbf{y}\in\mathbb{R}^{m}$ such that $A^{T}\mathbf{y}=\mathbf{0},\mathbf{y}^{T}\mathbf{b}\ne0$.

(That is, $\mathbf{b}$ in the ==column space== of $A$ or not)

And the matrix $A$ establish a ==one-to-one correspondence between $R(A^{T})$ and $R(A)$==.
$$
R(A)=\{A\mathbf{x}|\mathbf{x}\in\mathbb{R}^{n}\}=\{A\mathbf{y}|\mathbf{y}\in R(A^{T})\}
$$
