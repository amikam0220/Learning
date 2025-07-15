---
Date: 2025-06-25T10:13:00
tags:
  - Linear_Algebra_notes
---
# Intro 

## Theorem 6.3.1

For $k$ ==distinct eigenvalues== of an $n\times n$ matrix $A$ with corresponding $k$ ==eigenvectors==, then this ==eigenvectors== are ==linearly independent==.

It can be proved by the definition of linearly independent and contradicts.

## Definition

An $n\times n$ matrix $A$ is ==diagonalizable== if there exists a ==nonsingular matrix== $X$ and a ==diagonal matrix== $D$ such that $$
X^{-1}AX=D
$$
and we say $X$ ==diagonalizes== $A$.

## Theorem 6.3.2

An $n\times n$ matrix $A$ is ==diagonalizable== if and only if $A$ has ==$n$ linearly independent eigenvectors==.

And the ==column vectors== of $X$ is $n$ ==eigenvectors== of $A$ and the ==elements== of $D$ is the $n$ ==corresponding eigenvalues==.

## Remarks

- Diagonalizing matrix is ==not unique== since it can be modified by ==reordering the columns or multiplying them by nonzero scalars==.
- If $A$ has $n$ distinct ==eigenvalues==, it ==must== be diagonalizable. If not, it are not sure, depending on whether $A$ has $n$ ==distinct eigenvectors==.
- $A^{k}=XD^{k}=X^{-1}$, where the elements in $D^{k}$ is $\lambda_{i}^{k}$.
- If A has ==fewer== than $n$ linearly independent eigenvectors, it is ==defective==.

Sometimes ==one eigenvalues== corresponds to ==more eigenvectors==, which depends on the ==nullity== of $A-\lambda I$.

# The Exponential of a Matrix

For a ==matrix exponential $e^{A}$==, it can be expressed by the ==convergent power series== $$
e^{A}=I+A+\frac{1}{2!}A^{2}+\frac{1}{3!}A^{3}+\cdots
$$
For a diagonal matrix $D$ with $\lambda_{i}$ as elements, then $e^{D}$ has the elements $e^{\lambda_{k}}$.

Thus if $A$ is==diagonalizable==, then $e^{A}=Xe^{D}X^{-1}$.

And it can be used to solve ==initial value problem== $$
Y^{\prime}=AY,Y(0)=Y_{0}
$$
and its solution is $$
Y=e^{tA}Y_{0}
$$
