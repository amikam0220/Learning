---
Date: 2025-04-21T08:30:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=181&selection=131,1,132,22|The link of chapter 4.1, Linear Algebra]]"
---
# Definition

A ==mapping== $L$ from a vector space $V$ into a vector space $W$ is said to be a ==linear transformation== if $$
L(\alpha \mathbf{v}_{1}+\beta \mathbf{v}_{2})=\alpha L(\mathbf{v}_{1})+\beta L(\mathbf{v}_{2})
$$
for all $\mathbf{v}_{1},\mathbf{v}_{2}\in V$ and for all scalars $\alpha,\beta$.
It is the same as $$
L(\mathbf{v}_{1}+\mathbf{v}_{2})=L(\mathbf{v}_{1})+L(\mathbf{v}_{2})\quad (\alpha=\beta=1)
$$
$$
L(\alpha \mathbf{v})=\alpha L(\mathbf{v})\quad(\mathbf{v}=\mathbf{v}_{1},\beta=0)
$$

# Notation

A mapping $L$ from a vector space $V$ into a vector space $W$ will be denoted by $$
L:V\to W
$$
If the two vector spaces are the same, we say $L:V\to V$ is a ==linear operator== on $V$.

# Linear Operators on $\mathbb{R}^{2}$

The ==stretch, projection, rotation and reflecting== are all the linear transformation.

# Linear Transformation from $\mathbb{R}^{n}$ to $\mathbb{R}^{m}$

In general, if we want to linearly transform the vector from $\mathbb{R}^{n}$ to $\mathbb{R}^{m}$, then we need to ensure a $m\times n$ matrix $A$ such that $$
L_{A}(\mathbf{x})=A\mathbf{x}
$$
In fact, any linear transformation can be expressed by matrix multiplication. It will be showed next section.

# Linear Transformation from $V$ to $W$

If $L$ is a linear transformation mapping a vector space $V$ into a vector space $W$, then 
- $L(\mathbf{0}_{V})=\mathbf{0}_{W}$
- $L(\alpha_{1} \mathbf{v}_{1}+\cdots+\alpha_{n}\mathbf{v}_{n})=\alpha_{1}L(\mathbf{v}_{1})+\cdots+\alpha_{n}L(\mathbf{v}_{n})$
- $L(-\mathbf{v})=-L(\mathbf{v})$ for all $\mathbf{v}\in V$

# The Image and Kernel

## Definition of Kernel

Let $L:V\to W$ be a linear transformation, then the ==kernel== of $L$, denoted by $\text{ker}(L)$, is ==the set of all vectors in $V$ whose mapping in $W$ is zero vectors.== That is, $$
\mathrm{ker}(L)=\{ \mathbf{v}\in V|L(\mathbf{v})=\mathbf{0}_{W} \}
$$

## Definition of Image

Let $L:V\to W$ be a linear transformation and let $S$ be a subspace of $V$. The ==image== of $S$, denoted by $L(S)$, is ==the set of vectors mapping into $W$==. That is, $$
L(S)=\{ \mathbf{w}\in W|\mathbf{w}=L(\mathbf{v}) \text{ for some }\mathbf{v}\in S \}
$$

The image of the entire vector space, $L(V)$, is called the ==range== of $L$.

## Theorem 4.1.1

Let $L:V\to W$ be a linear transformation and let $S$ be a subspace of $V$, then 
- $\mathrm{ker}(L)$ is a subspace of $V$.
- $L(S)$ is a subspace of $W$.


