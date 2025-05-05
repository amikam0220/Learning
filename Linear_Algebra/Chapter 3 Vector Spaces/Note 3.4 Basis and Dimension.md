---
Date: 2025-04-08T15:10:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=153&selection=450,0,450,19|The link of chapter 3.4, Linear Algebra]]"
---
# Basis
### Definition of Basis

The vectors $\mathbf{v_{1}},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$ form a ==basis== for a vector space $V$ if and only if 
- $\mathbf{v_{1}},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$ are linearly independent.
- $\mathbf{v_{1}},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$ span $V$.
That is, the basis is the [[Note 3.2 Subspaces#**Spanning Set for a Vector Space**|spanning set]] without redundant vectors.
### Theorem 3.4.1

If $\{ \mathbf{v_{1}},\mathbf{v}_{2},\cdots,\mathbf{v}_{n} \}$ is a spanning set for a vector space $V$, then any collection of $m$ vectors in $V$, where $m>n$, is linear dependent. 
#### Proof:
Let $\mathbf{u}_{1},\mathbf{u}_{2},\cdots,\mathbf{u}_{m}$ be the vectors in $V$, where $m>n$. Then they can be represented as $$\mathbf{u}_{i}=
a_{i1}\mathbf{v}_{1}+a_{i2}\mathbf{v_{2}}+\cdots+a_{in}\mathbf{v}_{n},
1\leq i\leq m
$$
Then the linear combination of $\mathbf{u}_{1},\mathbf{u}_{2},\cdots,\mathbf{u}_{m}$ equals to zero is $$c_{1}\mathbf{u}_{1}+c_{2}\mathbf{u}_{2}+\cdots+c_{m}\mathbf{u}_{m}=\mathbf{0}$$
Substitution, we get $$\sum_{k=1}^{m} \left(c_{k}\cdot \sum_{j=1}^{n} a_{kj}\mathbf{v}_{j}\right)
=\sum_{j=1}^{n} \left( \sum_{k=1}^{m} a_{kj}c_{k} \right)\mathbf{v}_{j}=\mathbf{0}$$ Now we can let the coefficients all equal to zero to get the system of equations. (Here, it is not important for whether the spanning set is basis)
$$
\sum_{k=1}^{m}a_{kj}c_{k}=0,j=1,2,\cdots,n 
$$
This is a homogeneous system with more unknowns than equations. By [[Note 1.2 Row Echelon Form#^370df8|theorem 1.2.1]], there must exist a nontrivial solution $(\hat{c_{1}},\hat{c_{2}},\cdots,\hat{c_{n}})$. Then the linear combination of $\mathbf{u}_{1},\mathbf{u}_{2},\cdots,\mathbf{u}_{m}$ equals to zero exists nontrivial solution. So they are linearly dependent.
### Corollary 3.4.2

If both $\{  \mathbf{v_{1}},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}\}$ and $\{ \mathbf{u}_{1},\mathbf{u}_{2},\cdots,\mathbf{u}_{n} \}$ are bases for a vector space $V$, then $n=m$.

# Dimension

### Definition of Dimension

Let $V$ be a vector space. If $V$ has a basis consisting of $n$ vectors, we say that $V$ has ==dimension== $n$. And the subspace $\{ \mathbf{0} \}$ of $V$ is said to have ==dimension 0==. $V$ is said to be ==finite dimensional== if there is a finite set of vectors that spans $V$; otherwise we say it is ==infinite dimensional==.

### Theorem 3.4.3

If $V$ is a vector space of dimension $n>0$, then any $n$ vectors can span $V$ if and only if they are linearly independent.
#### Proof :
From left to right:
Suppose $\{  \mathbf{v_{1}},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}\}$ is the set of any $n$ vectors that span $V$. If they are linearly dependent, there exists at least one vector in the set can be represented as the linear combination of the other vectors. Then it will be less than $n$ vectors span the $V$, which is conflict with $\text{dim}V=n$. 
From right to left:
Suppose $\{  \mathbf{v_{1}},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}\}$ is the set of any $n$ vectors and $\mathbf{v}$ is any other vector in $V$. Since $\mathrm{dim}V=n$, then the basis consists of $n$ vectors which span $V$. Then by the [[Note 3.4 Basis and Dimension#Theorem 3.4.1|Theorem 3.4.1]], the vectors $\{  \mathbf{v_{1}},\mathbf{v}_{2},\cdots,\mathbf{v}_{n},\mathbf{v}\}$ must be linear dependent. Then there exist $$
c_{1}\mathbf{v}_{1}+c_{2}\mathbf{v}_{2}+\cdots+c_{n}\mathbf{v}_{n}+c_{n+1}\mathbf{v}=\mathbf{0}
$$
Since $\{  \mathbf{v_{1}},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}\}$ is linear independent, $c_{n+1}\ne 0$. Then $$
\mathbf{v}=a_{1}\mathbf{v}_{1}+a_{2}\mathbf{v}_{2}+\cdots+a_{n}\mathbf{v}_{n}
$$ where $\displaystyle a_{i}=\frac{c_{i}}{c_{n+1}}$. So every vectors $\mathbf{v}$ can be expressed as the linear combination of the $n$ vectors. So they span $V$.

### Theorem 3.4.4

If $V$ is a vector space of dimension $n>0$, then 
- no set of fewer than $n$ vectors can span $V$.
- any subset of fewer than $n$ linearly independent vectors can be extended to form a basis for $V$.
- any spanning set containing more than $n$ vectors can be pared down to form a basis for $V$.

# Standard Bases

We refer to the set $\{ \mathbf{e}_{1},\mathbf{e}_{2},\cdots,\mathbf{e}_{n} \}$ as the standard basis for $\mathbb{R}^{3}$.