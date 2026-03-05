---
Date: 2025-06-23T19:19:00
tags:
  - Linear_Algebra_notes
---
# Intro

The process is for ==constructing an orthonormal basis== for an $n$-dimensional inner product space $V$. It uses ==projections== to transform a ordinary basis into an orthonormal basis.

## Theorem 5.6.1 The Gram-Schmidt Process

Let $\{ \mathbf{x}_{1},\cdots,\mathbf{x}_{n} \}$ be a basis for $V$, then let 
$$
\mathbf{u}_{1}=\left( \frac{1}{||\mathbf{x}_{1}||} \right)\mathbf{x}_{1}
$$

and define the rest vectors ==recursively== by 
$$
\mathbf{u}_{k+1}= \frac{1}{||\mathbf{x}_{k+1}-\mathbf{p}_{k}||}(\mathbf{x}_{k+1}-\mathbf{p}_{k})
$$

where 
$$
\mathbf{p}_{k}=\langle \mathbf{x}_{k+1},\mathbf{u}_{1}\rangle\mathbf{u}_{1}+\cdots+\langle\mathbf{x}_{k+1},\mathbf{u}_{k}\rangle\mathbf{u}_{k}
$$

is the ==projection== of $\mathbf{x}_{k+1}$ onto $\mathrm{Span}(\mathbf{u}_{1},\cdots,\mathbf{u}_{n})$ and the set 
$$
\{ \mathbf{u}_{1},\cdots,\mathbf{u}_{n} \}
$$

is an orthonormal basis for $V$.

## Theorem 5.6.2 Gram-Schmidt QR Factorization

For an $m\times n$ matrix $A$ with $\mathrm{rank}\,n$, it can be factorized into a product $QR$, where $Q$ is an $m\times n$ matrix with ==orthonormal column vectors== and $R$ is an ==upper triangular== $n\times n$ matrix whose diagonal entries are all positive.

For $Q$, its column vectors is $\mathbf{u}_{1},\cdots,\mathbf{u}_{n}$. For $R$, its elements are 
$$
r_{11}=||\mathbf{a}_{11}||,r_{kk}=||\mathbf{a}_{k}-\mathbf{p}_{k-1}||(k=2,\cdots,n)
$$


$$
r_{ij}=\langle\mathbf{q}_{i},\mathbf{a}_{j}\rangle(i=1,\cdots,j-1;j=2,\cdots,n)
$$

That is, elements on the $ii$ diagonal are the norms of vectors ==perpendicular to $\mathrm{Span}(\mathbf{u}_{1},\cdots,\mathbf{u_{i}})$==. Elements on $j$th column is the coordinates of $\mathbf{p}_{j}$ with respect to $\mathrm{Span}(\mathbf{u}_{1},\cdots,\mathbf{u}_{j})$.

## Theorem 5.6.3

For an $m\times n$ matrix $A$ with $\mathrm{rank}\,n$, the least square solution of $A\mathbf{x}=\mathbf{b}$ is 
$$
\hat{\mathbf{x}}=R^{-1}Q^{T}\mathbf{b}
$$


# The Modified Gram-Schmidt Process

For the first element, 
$$
\mathbf{q}_{1}=\frac{1}{||\mathbf{a}_{1}||}\mathbf{a}_{1}
$$

Then after computing $k$th vector, we need to modify the latter vectors by ==minus the original vector's projection onto $\mathbf{q}_{k}$== such that the latter vectors are ==orthogonal to previous orthonormal set==. And the $k$th element can be obtained by 
$$
\mathbf{q}_{k}=\frac{1}{||\mathbf{a}_{k}^{(k-1)}||}\mathbf{a}_{k}^{(k-1)}
$$

where the $\mathbf{a}_{k}^{(k-1)}$ is the vector after modifying $k-1$ times.