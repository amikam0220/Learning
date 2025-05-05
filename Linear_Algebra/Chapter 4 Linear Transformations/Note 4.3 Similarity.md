---
Date: 2025-04-24T10:19:00
tags:
  - "#Linear_Algebra_notes"
link: "[[Linear_Algebra_Textbook.pdf#page=204&selection=993,0,993,10|The link of chapter 4.3, Linear Algebra]]"
---
# Intro

In this section, we will consider different matrix representations of linear operators and characterize the relationship between matrices representing the same linear operator.

## Theorem 4.3.1

Let $E=\{ \mathbf{v}_{1},\cdots,\mathbf{v}_{n} \}$ and $F=\{ \mathbf{w}_{1},\cdots,\mathbf{w}_{n} \}$ be two ==ordered bases== for a vector space $V$ and let $L$ be a linear operator on $V$. Let $S$ be the transition matrix representing the changing from $F$ to $E$. If $A$ is the matrix representing $L$ with respect to $E$, and $B$ is the matrix representing $L$ with respect to $F$, then $B=S^{-1}AS$.

### Understanding (feat. 3b1b)

This process is first use $S$ to transform the basis from $F$ to $E$, that is, transform the representation of a vector from $F$ to $E$. Then we use $A$ to do this linear transformation and $AS$ is the result but with the representation of $E$. And finally we just need to transform the representation of the result vector from $E$ to $F$. And the process is the representing $L$ with respect to $F$.

### Proof

Let $$
\mathbf{y}=S\mathbf{x},\mathbf{t}=A\mathbf{y},\mathbf{z}=B\mathbf{x}
$$
And we can suppose the vector $\mathbf{v}$ can be represented as $$
\begin{align}
 & \mathbf{v}=x_{1}\mathbf{w}_{1}+x_{2}\mathbf{w}_{2}+{\cdots}+x_{n}\mathbf{w}_{n} \\
 & \mathbf{v}=y_{1}\mathbf{v}_{1}+y_{2}\mathbf{v}_{2}+\cdots+y_{n}\mathbf{v}_{n}
\end{align}
$$
Since $A$ represents $L$ with respect to $E$, and $B$ represents $L$ with respect to $F$, we have $$
\mathbf{t}=[L(\mathbf{v})]_{E},\mathbf{z}=[L(\mathbf{v})]_{F}
$$
The transition matrix from $E$ to $F$ is $S^{-1}$ thus $$
S^{-1}\mathbf{t}=\mathbf{z}
$$
Then we have $$
S^{-1}AS\mathbf{x}=B\mathbf{x}
$$
hence $S^{-1}AS=B$.

## Definition of Similar

Let $A$ and $B$ be $n\times n$ matrices. $B$ is said to be ==similar== to $A$ if there exists a nonsingular matrix $S$ such that $B=S^{-1}AS$. 