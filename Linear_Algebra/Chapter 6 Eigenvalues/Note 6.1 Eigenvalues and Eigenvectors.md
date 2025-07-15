---
Date: 2025-06-24T10:53:00
tags:
  - Linear_Algebra_notes
---
# Intro 

## Definition of Eigenvalue(Characteristic Value) and Eigenvector(Characteristic Vector)

For an $n\times n$ matrix $A$, if there ==exist a nonzero vector== $\mathbf{x}$ and ==a scalar== $\lambda$ such that $A\mathbf{x}=\lambda \mathbf{x}$, then the scalar is ==eigenvalue or characteristic value== of $A$ and the vector is an ==eigenvector or characteristic vector== belonging to $\lambda$.

And ==any nonzero multiple== of $\mathbf{x}$ will be an eigenvector.

To find $\lambda$ and $\mathbf{x}$, We rewrite the equation as $$
(A-\lambda I)\mathbf{x}=\mathbf{0}
$$
since $\mathbf{x}\neq \mathbf{0}$, the matrix $A-\lambda I$ is ==singular==. Then we can ==obtain the eigenvalue== $\lambda$ by the ==determinant==.
Then substitute $\lambda$ to the equation and solve the linear system we can ==get the eigenvector== $\mathbf{x}$.
And the subspace $N(A-\lambda I)$ is called the ==eigenspace== corresponding to eigenvalue $\lambda$, the polynomial $p(\lambda)=\det(A-\lambda I)$ is ==characteristic polynomial== and the determinant is ==characteristic equation==.

## Equivalence of Eigenvalue

For an $n\times n$ matrix and a scalar $\lambda$, the following statement are equivalent.
- $\lambda$ is an ==eigenvalue== of $A$.
- $(A-\lambda I)\mathbf{x}=\mathbf{0}$ has a ==nontrivial solution==.
- $N(A-\lambda I)\ne \{ \mathbf{0} \}$.
- $A-\lambda I$ is ==singular==.
- $\det(A-\lambda I)=0$.

# Complex Eigenvalues

Let a eigenvalue $\lambda$ be a eigenvalue of $A$ and $\mathbf{z}$ is the eigenvector belonging to $\lambda$, then their ==conjugate== are also have the property. That is, $\bar{\lambda}$ is also a eigenvalue of $A$ and $\bar{\mathbf{z}}$ is an eigenvector belonging to $\bar{\lambda}$.
For the conjugate of matrix, we have $\bar{A}=(\bar{a_{ij}})$ and $\overline{AB}=\bar{A}\bar{B}$.

# The Product and Sum of the Eigenvalues

For the characteristic equation of $A$, we have the following properties.
- The ==product of eigenvalues== equals to the ==determinant== of $A$. That is, $$\prod_{i=1}^{n} \lambda_{n}=\det(A)$$
- The sum of eigenvalues equals to the sum of the diagonal elements of $A$(call ==trace and denoted by $\mathrm{tr}(A)$==). That is, $$\sum_{i=1}^{n} \lambda_{i}=\sum_{i=1}^{n} a_{ii}$$

# Similar Matrices

## Theorem 6.1.1

For two ==similar matrices==, they have ==the same characteristic polynomials== and the ==same eigenvalues==.