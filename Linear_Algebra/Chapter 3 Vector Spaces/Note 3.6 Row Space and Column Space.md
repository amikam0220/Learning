---
Date: 2025-04-15T14:07:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=169&selection=8,0,8,26|The link of chapter 3.6, Linear Algebra]]"
---
# Definition and Theorem
## Definition of Row Space and Column Space

If $A$ is an $m\times n$ matrix, the subspace of $\mathbb{R}^{1\times n}$ spanned by the row vectors of $A$ is called the ==row space== of $A$. The subspace of $\mathbb{R}^{m}$ spanned by the column vectors of $A$ is called the ==column space== of $A$.

## Theorem 3.6.1

Two row-equivalent matrices have the same row space.

### Proof

If $B$ is row equivalent to $A$, then the row vectors of $B$ must be linear combination of the row vectors of $A$. Thus the row space of $B$ is a subspace of the row space of $A$. Similar, we have the row space of $A$ is a subspace of the column space of $B$. So the two row space are the same.

## Definition of Rank

The ==rank== of a matrix $A$, denoted $\text{rank}(A)$, is the ==dimension of the row space== of $A$. 
Or we can say it is the amount of linearly independent row vectors. To determine the rank of a matrix, we can turn $A$ into row reduced form and the amount of nonzero rows is the rank of the matrix.
In fact, the ranks according to the row vectors or the column vectors are the same because it is actually the dimension of the space after linear transformation.

# Linear Systems
## Theorem 3.6.2 Consistency Theorem for Linear Systems

A linear system $A\mathbf{x}=\mathbf{b}$ is ==consistent== if and only if $\mathbf{b}$ is ==in the column space== of $A$.(The same as [[Note 1.3 Matrix Arithmetic#^c8fd4c|Theorem 1.3.1]])
When $\mathbf{b}=\mathbf{0}$, we can know $A\mathbf{x}=\mathbf{0}$ will have ==only the trivial solution== if and only if the column vectors of $A$ are ==linearly independent== since $$x_{1}\mathbf{a}_{1}+x_{2}\mathbf{a}_{2}+\cdots+x_{n}\mathbf{a}_{n}=\mathbf{0}$$ are zero for all scalars.
## Theorem 3.6.3

Let $A$ be an $m\times n$ matrix. The linear system $A\mathbf{x}=\mathbf{b}$ is consistent for ==every== $\mathbf{b}\in \mathbb{R}^{m}$ if and only if the ==column vectors== of $A$ ==span== $\mathbb{R}^{m}$. 
The system $A\mathbf{x}=\mathbf{b}$ has ==at most one solution== for ==every== $\mathbf{b}\in \mathbb{R}^{m}$ if and only if the ==column vectors== of $A$ are ==linearly independent==.

### Proof

Since the linear system $A\mathbf{x}=\mathbf{b}$ is consistent if and only if $\mathbf{b}$ is in the column space of $A$, and it is consistent for every $\mathbf{b}\in\mathbb{R}^{m}$, the first state can be proved.
For the second state,
From left to right:
If we let $\mathbf{b}=\mathbf{0}$, we have that $A\mathbf{x}=\mathbf{0}$ has at most one solution. And it must have the trivial solution so the column vectors of $A$ are linearly independent.
From right to left:
If the column vectors of $A$ are linear independent, we have the $$
A\mathbf{x}=\mathbf{0}
$$
will have only trivial solution. If we let there exist more than one solution for $A\mathbf{x}=\mathbf{b}$, we suppose they are $A\mathbf{x}_{1}=\mathbf{b}$ and $A\mathbf{x}_{2}=\mathbf{b}$. Then $$
A(\mathbf{x}_{1}-\mathbf{x}_{2})=A\mathbf{x}_{1}-A\mathbf{x}_{2}=\mathbf{b}-\mathbf{b}=\mathbf{0}
$$

since it has only trivial solution, the two vectors are the same so it is conflicted to the suppose.

## Corollary 3.6.4

An $n\times n$ matrix $A$ is ==nonsingular== if and only if the ==column vectors== of $A$ ==form a basis== for $\mathbb{R}^{n}$.

## Definition of Nullity of Matrix

The ==dimension of the null space== of a matrix is called the ==nullity== of the matrix.

## Theorem 3.6.5 The Rank-Nullity Theorem

If $A$ is an $m\times n$ matrix, then the rank of $A$ plus the nullity of $A$ equals $n$, that is, $$
\text{rank}(A)+\text{nullity}(A)=n
$$
### Proof

Let $U$ be the ==reduced row echelon form== of $A$, then the system $A\mathbf{x}=\mathbf{0}$ is equivalent to $U\mathbf{x}=\mathbf{0}$. If $A$ has the rank $r$, then it has $r$ nonzero rows and there are $r$ lead variables and $n-r$ free variables. And the dimension of $N(A)$ will equal to ==the number of free variables== since the vector of solution can be expressed as the linear combination of the basis of $N(A)$ with the number of free variables.
For example, $A=\begin{pmatrix}1 & 2 & -1 & 1 \\ 2 & 4 & -3 & 0 \\ 1 & 2 & 1 & 5\end{pmatrix}$ and the reduced row echelon form is $U=\begin{pmatrix}1 & 2 & 0 & 3 \\ 0 & 0 & 1 & 2 \\ 0 & 0 & 0 & 0\end{pmatrix}$. Here, the set $\{ (1,2,0,3) ,(0,0,1,2)\}$ is the basis of the row space of $A$ and $A$ have rank 2. Then we can know $x_{2},x_{4}$ are free variables. So we can let $x_{2}=\alpha,x_{4}=\beta$, then the solution vector is $$
\mathbf{x}=\begin{pmatrix}
x_{1} \\
x_{2} \\
x_{3} \\
x_{4} \\
\end{pmatrix}
= \begin{pmatrix}
-2\alpha-3\beta \\
\alpha \\
-2\beta \\
\beta
\end{pmatrix}
=\alpha \begin{pmatrix}
-2 \\
1 \\
0 \\
0
\end{pmatrix}+\beta \begin{pmatrix}
-3 \\
0 \\
-2 \\
1 \\
\end{pmatrix}
$$ So the vector $(-2,1,0,0)^{T},(-3,0,-2,1)^{T}$ form a basis of $N(A)$ and the number of free variables are the number of nullity.

# The Column Space
## Lemma for Theorem 3.6.6

If $A$ is an $m\times n$ matrix and $U$ is the reduced row echelon form of $A$, then their ==column vectors== will have the same dependency relations.

### Proof

Since $A\mathbf{x}=\mathbf{0}$ and $U\mathbf{x}=\mathbf{0}$ have the same solution. So 
$$
\begin{matrix}
x_{1}\mathbf{a}_{1}+x_{2}\mathbf{a}_{2}+\cdots+x_{n}\mathbf{a}_{n}=\mathbf{0} \\
x_{1}\mathbf{u}_{1}+x_{2}\mathbf{u}_{2}+\cdots+x_{n}\mathbf{u}_{n}=\mathbf{0} \\
\end{matrix}
$$
If there exist a scalar being nonzero in $A$ or $U$, then the linear combination has the same coefficients matrix, that is, the dependency relations are the same. If the column vectors of $A$ is linearly independent, then the column vectors of $U$ will be also linearly independent.

## Theorem 3.6.6

If $A$ is an $m\times n$ matrix, the dimension of the row space of $A$ equals to the dimension of the column space of $A$.

### Proof

If $A$ is rank $r$, then the reduced echelon form of $A$, denoted by $U$, will have $r$ leading variables. And the columns of $U$ corresponding to the lead 1's will be linearly independent. Then by the upper Lemma, we can know $A$ has the same relationship that linearly independent on corresponding columns. So we can know the column space of $A$ will be more or equals to $r$. That is $$
\text{dim}(\text{row space of }A) \leq \text{dim}(\text{column space of }A)
$$
Then we can get the same for the transpose of $A$, denoted by $A^{T}$, such that $$\begin{align}
\text{dim}(\text{row space of }A^{T})  
& =\text{dim}(\text{column space of }A) \\
 & \leq \text{dim}(\text{column space of }A^{T}) \\
 & =\text{dim}(\text{row space of }A)
\end{align}
$$
Then we can get they are equivalent.

## Note

The row echelon form $U$ tells us only which columns of $A$ to use to form a basis. We cannot use the column vectors from $U$ , since, in general, $U$ and $A$ have different column spaces due to the row operations rather than column operations.