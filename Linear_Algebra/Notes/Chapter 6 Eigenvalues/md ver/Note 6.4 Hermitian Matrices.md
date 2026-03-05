---
Date: 2025-06-25T10:39:00
tags:
  - Linear_Algebra_notes
---
# Complex Inner Products

For the definition of ==norm of complex vector==, we define 
$$
\bar{\mathbf{z}}^{T}=\mathbf{z}^{H},||\mathbf{z}||=(\mathbf{z}^{H}\mathbf{z})^{1/2}
$$
## Definition of Inner Vector over Complex Numbers

Inner product is an ==operation== on a vector space $V$ that corresponds every pair of vectors $\mathbf{w}$ and $\mathbf{z}$ in $V$, denoted by $\langle\mathbf{z},\mathbf{w}\rangle$, satisfying that
- The inner product of two identical vector are nonnegative.
- $\langle \mathbf{z},\mathbf{w}\rangle=\overline{\langle\mathbf{w},\mathbf{z}\rangle}$ (not that it is not ==commutative law==)
- linear combination.

And we define an inner product on $\mathbb{C}^{n}$ by 
$$
\langle \mathbf{z},\mathbf{w}\rangle=\mathbf{w}^{H}\mathbf{z}=\overline{\mathbf{z}^{H}\mathbf{w}}
$$


# Hermitian Matrices

For the matrix with complex elements, the ==conjugate of the matrix== $M$ is $\bar{M}$ that ==conjugating each of the entries==.

And we define $M^{H}=\overline{M}^{T}$ and it has the following properties:
- $(A^{H})^{H}=A$
- $(\alpha A+\beta B)^{H}=\bar{\alpha}A^{H}+\bar{\beta}B^{H}$
- $(AC)^{H}=C^{H}A^{H}$

## Definition of Hermitian Matrix

A matrix $M$ is ==Hermitian== if $M=M^{H}$.

And we can know that the elements ==on its diagonal are real==. 

It is similar to ==symmetric matrix== in real space.

## Theorem 6.4.1

The ==eigenvalues== of a ==Hermitian Matrix== are all ==real== and ==eigenvectors== belonging to distinct eigenvalues are ==orthogonal==.

It can be proved by constructing $\alpha=\mathbf{x}^{H}A\mathbf{x}$.

## Definition of Unitary Matrix

An $n\times n$ matrix $U$ is unitary if its ==column vectors== form an ==orthonormal set== in $\mathbb{C}^{n}$.

It has the properties:
- $U^{H}U=UU^{H}=I$
- $U^{-1}=U^{H}$
It is similar to orthogonal matrix in real space.

## Corollary 6.4.2

If the ==eigenvalues== of a ==Hermitian matrix== is ==distinct==, then there ==exists a unitary matrix== ==diagonalize== the Hermitian matrix.

The column vectors of the ==unitary matrix== can be obtained by constructing the set $\{ \mathbf{u}_{1},\cdots,\mathbf{u}_{n} \}$ where $\mathbf{u}_{i}=\frac{\mathbf{x}_{i}}{\lvert \mathbf{x}_{i} \rvert}$, $\mathbf{x}_{i}$ is an ==eigenvector== belonging to $\lambda_{i}$ for each eigenvalue of $A$.

## Theorem 6.4.3 Schur's Theorem

For an $n\times n$ matrix $A$, there exists an ==unitary matrix== $U$ such that $U^{H}AU$ is ==upper triangular==, denoted by $T$. That is, $U^{H}AU=T$.

And the factorization $A=UTU^{H}$ is the ==Schur decomposition== of $A$. 
If $A$ is ==Hermitian==, the matrix $T$ will be ==diagonal==.

## Theorem 6.4.4 Spectral Theorem

If $A$ is ==Hermitian==, there exists a ==unitary matrix== $U$ that diagonalizes $A$.

# The Real Schur Decomposition

## Definition of Invariant

A subspace $S$ of $\mathbb{R}^{n}$ is said to be ==invariant== under a matrix $A$ if for each $\mathbf{x}\in S$, $A\mathbf{x}\in S$.

## Theorem 6.4.6 The Real Schur Decomposition

If A is an $n\times n$ matrix with ==real entries==, then $A$ can be factored into a product $QTQ^{T}$ where $Q$ is an ==orthogonal matrix== and $T$ is in ==Schur form==.
Schur form is that 
$$
T=\begin{pmatrix}
B_{1} & \times & \cdots & \times \\
 & B_{2} &  & \times  \\
 & O & \ddots &  \\
 &  &  & B_{j}
\end{pmatrix}
$$

where the $B_{i}$ is either $1\times1$ or $2\times 2$ matrices and each $2\times 2$ block will correspond to a pair of ==complex conjugate eigenvalues== of $A$.

## Corollary 6.4.7 Spectral Theorem--Real Symmetric Matrices

If $A$ is a real symmetric matrix, then there is ==an orthogonal matrix $Q$== that diagonalizes $A$; that is, $Q^{T}AQ=D$, where $D$ is ==diagonal==.

# Normal Matrices

## Definition

A matrix $A$ is ==normal== if $AA^{H}=A^{H}A$.

## Theorem 6.4.8

A matrix $A$ is ==normal== if and only if $A$ possesses a ==complete orthonormal set== of ==eigenvectors==.

Complete orthonormal set is the orthonormal set which can construct a set of basis of the column space of $A$.

