---
Date: 2025-06-23T16:38:00
tags:
  - Linear_Algebra_notes
---
# Least Squares Solutions of Overdetermined Systems

The least squares problems is to find a vector $\mathbf{x}$ such that $A\mathbf{x}$ is "==closest==" to $\mathbf{b}$ where $A$ is a $m\times n$ matrix with $m>n$, that is, a ==overdetermined system==.
The least square solution is to minimize the ==residual==, that is, 
$$
\lvert r(\mathbf{x}) \rvert =\left| \mathbf{b}-A\mathbf{x} \right| 
$$

is minimum.

## Theorem 5.3.1

There ==exists== a ==unique== element $\mathbf{p}\in S$ where $S$ is a subspace of $\mathbb{R}^{m}$ such that 
$$
||\mathbf{b}-\mathbf{y}||>||\mathbf{b}-\mathbf{p}||
$$

where $\mathbf{b}\in\mathbb{R}^{m}$. That is, there exists a unique element $\mathbf{p}$ that is closest to $\mathbf{b}$.

And $\mathbf{p}$ is closest to $\mathbf{b}$ if and only if there ==difference is the orthogonal complement== of $S$, that is , $\mathbf{b}-\mathbf{p}\in S^{\perp}$.

Here, in least square problems, $\mathbf{p}\in R(A)$, and $\mathbf{p}=A \hat{\mathbf{x}}$, the ==projection== of $\mathbf{b}$ onto $R(A)$. And $r(\mathbf{\hat{x}})$ is perpendicular to $R(A)$.

## Theorem 5.3.2

For $m\times n$ matrix $A$ ==with $\mathrm{rank}\,n$,== the ==normal equations== 
$$
A^{T}A\mathbf{x}=A^{T}\mathbf{b}
$$

have a unique solution 
$$
\hat{\mathbf{x}}=(A^{T}A)^{-1}A^{T}\mathbf{b}
$$


And the projection vector $\mathbf{p}=A \hat{\mathbf{x}}=A(A^{T}A)^{-1}A^{T}\mathbf{b}$.