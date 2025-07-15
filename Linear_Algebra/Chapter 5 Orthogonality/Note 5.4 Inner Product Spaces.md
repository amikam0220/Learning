---
Date: 2025-06-23T17:04:00
tags:
  - Linear_Algebra_notes
---
# Definition and Examples

## Definition

Inner product is an ==operation== on a vector space $V$ that corresponds every pair of vectors $\mathbf{x}$ and $\mathbf{y}$ in $V$, denoted by $\langle\mathbf{x},\mathbf{y}\rangle$, satisfying that
- The inner product of two identical vector are nonnegative.
- commutative law
- linear combination.
and the vector space with an inner product is ==inner product space==.

# Inner Product in Different Vector Spaces

For $\mathbb{R}^{n}$, $\mathbb{R}^{m\times n}$, $C[a,b]$, $P_{n}$.

# Basic Properties of Inner Product Spaces

## Length (Norm)

$$
||\mathbf{v}||=\sqrt{ \langle\mathbf{v},\mathbf{v}\rangle }
$$

## Orthogonal 

$$
\langle\mathbf{u},\mathbf{v}\rangle=0
$$

## Theorem 5.4.1 The Pythagorean Law

For two ==orthogonal vectors== $\mathbf{u},\mathbf{v}$ in an inner product space $V$, $$
||\mathbf{u}+\mathbf{v}||^{2}=||\mathbf{u}||^{2}+||\mathbf{v}||^{2}
$$

## Frobenius Norm

$$
||A||_{F}=(\langle A,A\rangle )^{\frac{1}{2}}=\left( \sum_{i=1}^{m} \sum_{j=1}^{n} a_{ij}^{2} \right)
$$

## Definition of Scalar Projection and Vector Projection

The scalar projection of $\mathbf{u}$ onto $\mathbf{v}$ :
$$
\alpha=\frac{\langle\mathbf{u},\mathbf{v}\rangle}{||\mathbf{v}||}
$$
The vector projection of $\mathbf{u}$ onto $\mathbf{v}$:
$$
\mathbf{p}=\alpha\left( \frac{\mathbf{v}}{||\mathbf{v||}} \right)=\frac{\langle\mathbf{u},\mathbf{v}\rangle}{\langle\mathbf{v},\mathbf{v}\rangle}\mathbf{v}
$$

### Remarks

- $\mathbf{u}-\mathbf{p}$ and $\mathbf{p}$ are orthogonal
- $\mathbf{u}=\mathbf{p}$ $\Leftrightarrow$ $\mathbf{u}$ is a scalar multiple of $\mathbf{v}$.

## Theorem 5.4.2 The Cauchy-Schwarz Inequality

$$
||\langle\mathbf{u},\mathbf{v}\rangle||\leq||\mathbf{u}||\,||\mathbf{v}||
$$
and equality holds if and only if $\mathbf{u}$ and $\mathbf{v}$ are ==linearly dependent==.

It can be proved by the projection and Pythagorean law.

And we can make a unique angle $\theta$ such that $$
\cos\theta=\frac{\langle\mathbf{u},\mathbf{v}\rangle}{||\mathbf{u}||\,||\mathbf{v}||}
$$

# Norms

## Definition of Normed Linear Space

A normed linear space $V$ for each vector $\mathbf{v}\in V$, there is an associated real number $||\mathbf{v}||$, the norm, satisfying
- nonnegative
- scalar multiple($||\alpha \mathbf{v}||=\left| \alpha \right|\,||\mathbf{v}||$)
- triangle inequality

## Definition of Distance

The distance between $\mathbf{x}$ and $\mathbf{y}$ is defined to be the number $\left| |\mathbf{y}-\mathbf{x}| \right|$.