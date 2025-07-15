---
Date: 2025-06-23T17:52:00
tags:
  - Linear_Algebra_notes
---
# Intro
## Definition of Orthogonal Set

For a set $\{ \mathbf{v_{1},v_{2}},\cdots,\mathbf{v}_{n} \}$, the ==inner product is zero== of ==each pair== of different vectors. And the set is orthogonal set.

## Theorem 5.5.1

The vectors in an ==orthogonal set without zero vectors== are ==linearly independent==.

## Definition of Orthonormal Set

An ==orthogonal set== of ==unit vectors==.

It can be obtained from orthogonal set by dividing the norms of the vectors.

And If the set is a basis of a subspace, it is called ==orthonormal basis==.

## Theorem 5.5.2

For an orthonormal basis for $V$ $\{ \mathbf{u}_{1},\cdots,\mathbf{u}_{n} \}$, if $\mathbf{v}=\sum_{i=1}^{n}c_{i}\mathbf{u}_{i}$, then $c_{i}=\langle\mathbf{v},\mathbf{u}_{i}\rangle$.

$c_{i}$ is the ==coordinates== of $\mathbf{v}$ with respect to the basis set $\{ \mathbf{u}_{1},\cdots,\mathbf{u}_{n} \}$.

It can be proved by multiply $\mathbf{u}_{i}$ of both sides.

## Corollary 5.5.3

For an orthonormal basis for $V$ $\{ \mathbf{u}_{1},\cdots,\mathbf{u}_{n} \}$, if $\mathbf{u}=\sum_{i=1}^{n}a_{i}\mathbf{u}_{i}$ and $\mathbf{v}=\sum_{i=1}^{n}b_{i}\mathbf{u}_{i}$, then $$
\langle\mathbf{u},\mathbf{v}\rangle=\sum_{i=1}^{n} a_{i}b_{i}
$$

## Corollary 5.5.4 Parseval's Formula

For an orthonormal basis for $V$ $\{ \mathbf{u}_{1},\cdots,\mathbf{u}_{n} \}$ and $\mathbf{v}=\sum_{i=1}^{n}c_{i}\mathbf{u}_{i}$, then $$
||\mathbf{v}||^{2}=\sum_{i=1}^{n} c_{i}^{2}
$$

# Orthogonal Matrices

## Definition of Orthogonal Matrix

An $n\times n$ matrix $Q$ is a orthogonal matrix if the ==column vectors== of $Q$ form an ==orthonormal== basis in $\mathbb{R}^{n}$.

That is, the column vectors
- linearly independent
- unit vector

## Theorem 5.5.5 

An $n\times n$ matrix $Q$ is orthogonal if and only if $Q^{T}Q=I$. And $Q^{-1}=Q^{T}$.

Multiplication by an ==orthogonal matrix== ==preserves the lengths of vectors==.

## Properties of Orthogonal Matrices

- The column vectors of $Q$ form an orthonormal basis for $\mathbb{R}^{n}$.
- $Q^{T}Q=I$
- $Q^{T}=Q^{-1}$
- $\langle Q\mathbf{x},Q\mathbf{y}\rangle=\langle \mathbf{x},\mathbf{y}\rangle$
- $||Q\mathbf{x}||=||\mathbf{x}||$

# Permutation Matrices

## Definition of Permutation Matrices

A permutation matrix is formed from the ==identity matrix== by ==reordering its columns==. And it is ==orthogonal matrices==.

# Orthonormal Sets and Least Squares

## Theorem 5.5.6

If the ==column vectors== of $A$ form an ==orthonormal set== of vectors in $\mathbb{R}^{m}$(not orthogonal matrix since not necessary square matrix), the solution of the least squares problem is $$
\hat{\mathbf{x}}=A^{T}\mathbf{b}
$$
since $A^{T}A=I$.

## Theorem 5.5.7 

For an orthonormal basis for $S$ which is the subspace of $V$ $\{ \mathbf{u}_{1},\cdots,\mathbf{u}_{n} \}$, if $$
\mathbf{p}=\sum_{i=1}^{n} c_{i}\mathbf{u}_{i}
$$ where $c_{i}=\langle\mathbf{x},\mathbf{u}_{i}\rangle$,$\mathbf{x}\in V$,
then $$
\mathbf{p}-\mathbf{x}\in S^{\perp}
$$
In fact, $\mathbf{p}$ is the projection of $\mathbf{x}$ onto $S$.

## Theorem 5.5.8

Under theorem 5.5.7, $\mathbf{p}$ is the element of $S$ that is closest to $\mathbf{x}$.

## Corollary 5.5.9

Let $S$ be a ==nonzero subspace== of $\mathbb{R}^{m}$ and let $\mathbf{x}\in \mathbb{R}^{m}$, $U=(\mathbf{u}_{1},\cdots,\mathbf{u}_{n})$ where the set of column vectors is the orthogonal basis for $S$, then the projection $\mathbf{p}$ of $\mathbf{x}$ onto $S$ is $$
\mathbf{p}=UU^{T}\mathbf{x}
$$

