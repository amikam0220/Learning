---
Date: 2025-06-25T17:03:00
tags:
  - Linear_Algebra_notes
---
# Intro

The singular value decomposition is a method for determining ==how close $A$ is to a matrix of smaller rank==. 
The method factoring $A$ into $U\Sigma V^{T}$ where $U$ is an $m\times m$ ==orthogonal matrix==, $V$ is an $n\times n$ ==orthogonal matrix== and $\Sigma$ is an $m\times n$ whose ==off-diagonal entries== are all $0$'s and whose ==diagonal elements== satisfy $$
\Sigma=\begin{pmatrix}
\Sigma_{1} & O \\
O & O
\end{pmatrix}
$$
where $$
\Sigma_{1}=\begin{pmatrix}
\sigma_{1} &  &  &  \\
 & \sigma_{2} &  &  \\
 &  & \ddots &  \\
 &  &  & \sigma_{r}
\end{pmatrix}
$$
where $\sigma_{1}\geq\sigma_{2}\geq \cdots\geq\sigma _{r}\geq 0$, called ==singular value== and the singular values are ==unique==.

Suppose the matrix $A$ has $\mathrm{rank}\,r$ and $\{ \mathbf{v}_{1},\cdots,\mathbf{v}_{r} \}$ are ==orthonormal== basis in ==row space==. We want to find a ==orthonormal basis== $\{ \mathbf{w}_{1},\cdots,\mathbf{w}_{r} \}$ for ==column space==. Since $$
\begin{align}
A\cdot(\mathbf{v}_{1},\cdots,\mathbf{v}_{r}) & =(\mathbf{w}_{1},\cdots,\mathbf{w}_{r}) \\
 & =(\sigma_{1}\mathbf{u}_{1},\cdots,\sigma_{r}\mathbf{u}_{r}) \\
 & =U\Sigma
\end{align}
$$
thus $AV=U\Sigma$, that is $A=U\Sigma V^{-1}=U\Sigma V^{T}$.

Thus, $U$ is the orthogonal matrix of ==column space== and $V$ is the orthogonal matrix of ==row space==.

## Theorem 6.5.1 The SVD Theorem 

If $A$ is an $m\times n$ matrix, then $A$ ==has a singular value decomposition==.

## Remarks

- The singular values $\sigma_{1},\cdots,\sigma_{n}$ of $A$ are ==unique==, $\sigma_{i}=\sqrt{ \lambda_{i} }$, where $\lambda_{i}$ is the eigenvalue of $A^{T}A$. But the matrices $U$ and $V$ are ==not unique== since the eigenvectors are not unique.
- $V$ diagonalizes $A^{T}A$ and $U$ diagonalizes $AA^{T}$ and $\mathbf{v}_{j}$'s are eigenvectors of $A^{T}A$ and $\mathbf{u}_{j}$'s are eigenvectors of $AA^{T}$.
- The $\mathbf{v}_{j}$'s are called the ==right singular vectors== of $A$ and the $\mathbf{u}_{j}$'s are called the ==left singular vectors== of $A$.
- If $A$ has the rank $r$, then 
	- $\mathbf{v}_{1},\cdots,\mathbf{v}_{r}$ form an orthonormal basis for $R(A^{T})$(row space of $A$)
	- $\mathbf{v}_{r+1},\cdots,\mathbf{v}_{n}$ form an orthonormal basis for $N(A)$.
	- $\mathbf{u}_{1},\cdots,\mathbf{u}_{n}$ form an orthonormal basis for $R(A)$.(column space of $A$)
	- $\mathbf{u}_{r+1},\cdots,\mathbf{u}_{m}$ form an orthonormal basis for $N(A^{T})$.
- The ==rank of the matrix== $A$ equals to the ==number of nonzero singular values==.
- The ==compact form of the singular value composition== is $$A=U_{1}\Sigma_{1}V_{1}^{T}$$ where $U_{1}=(\mathbf{u}_{1},\cdots,\mathbf{u}_{r})$ and $V_{1}=(\mathbf{v}_{1},\cdots,\mathbf{v}_{r})$. That is, no nullity space.

# Find Smaller Rank Closest to $A$

## Lemma 6.5.2

If $A$ is an $m\times n$ matrix, $Q$ is an $m\times m$ ==orthogonal matrix==, then $$
||QA||_{F}=||A||_{F}
$$
And we can obtain $||A||_{F}=||\Sigma V^{T}||_{F}$
Thus $$
||A||_{F}=(\sigma_{1}^{2}+\sigma_{2}^{2}+\cdots+\sigma_{n}^{2})^{1/2}
$$
## Theorem 6.5.3

Let $A=U\Sigma V^{T}$ be an $m\times n$ matrix and $\mathrm{M}$ denoted the set of all $m\times n$ matrices of ==rank $k$ or less==, where $0<k<\mathrm{rank}(A)$. If $X$ is a matrix in $\mathrm{M}$ and $||A-X||_{F}=\mathrm{min}_{s \in \mathrm{M}}||A-S||_{F}$, that is, $X$ is the closest matrix to $A$ with rank $k$, then $$
||A-X||_{F}=(\sigma_{k+1}^{2}+\cdots+\sigma_{n}^{2})^{1/2}
$$
And the $X$ is $A^{\prime}=U\Sigma^{\prime}V^{T}$ where $$
\Sigma^{\prime}=\begin{pmatrix}
\Sigma _{k} & O \\
O & O
\end{pmatrix}
$$
$$
\Sigma_{k}=\begin{pmatrix}
\sigma_{1} &  &  \\
 & \ddots &  \\
 &  & \sigma_{k}
\end{pmatrix}
$$

And if $A$ is a ==nonsingular== $n\times n$ matrix, then $A^{\prime}$ is ==singular== and $||A-A^{\prime}||_{F}=\sigma_{n}$. Thus $\sigma_{n}$ can be taken as a measure of ==how close a square matrix is to being singular==.