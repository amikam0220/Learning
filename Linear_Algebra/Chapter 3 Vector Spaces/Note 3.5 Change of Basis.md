---
Date: 2025-04-13T20:11:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=159&selection=357,0,357,15|The link of chapter 3.5, Linear Algebra]]"
---
# Changing Coordinates in $\mathbb{R}^{2}$

For any vector $\mathbf{x}$ in $\mathbb{R}^{2}$, it can be represented as the linear combination that $$\mathbf{x}=c_{1}\mathbf{e}_{1}+c_{2}\mathbf{e}_{2}$$ where $\{ \mathbf{e}_{1},\mathbf{e_{2}} \}$ is the standard basis in $\mathbb{R}^{2}$. The scalars $c_{1},c_{2}$ are the ==coordinates== of $\mathbf{x}$ with respect to the standard basis. By [[Note 3.3 Linear Independence#^d46a5f|Theorem 3.3.2]], for any basis $\{ \mathbf{y},\mathbf{z} \}$ in $\mathbb{R}^{2}$, there is a unique linear combination $$\mathbf{x}=\alpha \mathbf{y}+\beta \mathbf{z}$$ So we can call the scalars $\alpha,\beta$ as the coordinates of $\mathbf{x}$ with respect to the basis $\{ \mathbf{y},\mathbf{z} \}$. Also, we can call the vector $(\alpha,\beta)^{T}$ as the ==coordinate vector== of $\mathbf{x}$ with respect to $[\mathbf{y},\mathbf{z}]$, which is the notation of ordered basis.

# Application I Population Migration

For the population with fixed immigration and emigration rate between the city and the suburbs, we can use the matrix multiplication. Suppose $\mathbf{x}_{n}$ is the vectors containing the population in both city and suburbs after $n$ years, then $\mathbf{x}_{n}=A^{n}\mathbf{x}_{0}$.  Then as $n$ increases, the sequence converges to a limit $\mathbf{x}$, or called ==steady-state vector==. We can understand the process by using a different coordinate system. We can pick vectors $\mathbf{u}_{1},\mathbf{u}_{2}$ such that $$\mathbf{x}_{0}=c_{1}\mathbf{u}_{1}+c_{2}\mathbf{u}_{2}$$ and $$A\mathbf{u}_{1}=\mathbf{u}_{1},A\mathbf{u}_{2}=k\mathbf{u}_{2}$$ where $\mathbf{u}_{1}$ is any multiple of the limit vector $\mathbf{x}$.
 Then $$\mathbf{x}_{n}=A^{n}\mathbf{x}_{0}=c_{1}\mathbf{u}_{1}+c_{2}k^{n}\mathbf{u}_{2}$$ In general, the $c_{2}k^{n}$ is negative and $k$ is less than 1. So as $n$ increases, $\mathbf{x}_{n}\to c_{1}\mathbf{u}_{1}$. 
 And this model is called ==Markov process== and the sequence $\mathbf{x}_{1},\mathbf{x}_{2},\cdots$ is called a ==Markov chain==.
# Changing Coordinates

When changing coordinates, we need to consider the following two problems:
- How to find the coordinates of a vector $\mathbf{x}=(x_{1},x_{2})^{T}$ (or, $x_{1}\mathbf{e}_{1}+x_{2}\mathbf{e}_{2}$) with respect to $\mathbf{u}_{1},\mathbf{u}_{2}$.
- How to find the coordinates of a vector $c_{1}\mathbf{u}_{1}+c_{2}\mathbf{u}_{2}$ with respect to $\mathbf{e}_{1},\mathbf{e}_{2}$.

## Second Problem

Suppose that $$
\mathbf{x}=c_{1}\mathbf{u}_{1}+c_{2}\mathbf{u}_{2}
$$
That is $$
\mathbf{x}=U\mathbf{c}
$$
where $U=(\mathbf{u}_{1},\mathbf{u}_{2})$ and the coordinate vector $\mathbf{c}=(c_{1},c_{2})^{T}$. Here the matrix is called ==transition matrix== from the ordered basis $\{ \mathbf{u}_{1},\mathbf{u}_{2} \}$ to the basis $\{ \mathbf{e}_{1},\mathbf{e}_{2} \}$. 

## First Problem

For the first problem, we need to find the transition matrix from the basis $\{ \mathbf{e}_{1},\mathbf{e}_{2} \}$ to the basis $\{ \mathbf{u}_{1},\mathbf{u}_{2} \}$. Since $U$ is nonsingular, so we have $$
\mathbf{c} = U^{-1}\mathbf{x}
$$ Thus given a vector $\mathbf{x}$, we just need to multiply by $U^{-1}$ to find the coordinate vector with respect to $\{ \mathbf{x}_{1},\mathbf{x}_{2} \}$. Here $U^{-1}$ is the transition matrix from $\{ \mathbf{e}_{1},\mathbf{e}_{2} \}$ to $\{ \mathbf{u}_{1},\mathbf{u}_{2} \}$.

## General Changing between Two basis in $\mathbb{R}^{2}$

Suppose we want to change a vector $\mathbf{x}$ from one basis $[\mathbf{v}_{1},\mathbf{v}_{2}]$ to another basis $[\mathbf{u}_{1},\mathbf{u}_{2}]$. 
Suppose $\mathbf{x}=c_{1}\mathbf{v}_{1}+c_{2}\mathbf{v}_{2}$ and $\mathbf{x}=d_{1}\mathbf{u}_{1}+d_{2}\mathbf{u}_{2}$
Then since$$
\mathbf{x}=V\mathbf{c}\quad\mathbf{d}=U^{-1}\mathbf{x}
$$
Then we have $$
\mathbf{d}=U^{-1}V\mathbf{c}
$$
Here the matrix $S=U^{-1}V$ is the transition matrix.

# Change of Basis for a General Vector Space
## Definition 

Let $V$ be a vector space and $E=\{ \mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n} \}$ be an ordered basis for $V$. If $\mathbf{v}$ is any element of $V$, then $$
\mathbf{v}=c_{1}\mathbf{v}_{1}+c_{2}\mathbf{v}_{2}+\cdots+c_{n}\mathbf{v}_{n}
$$
where $c_{1},c_{2},\cdots,c_{n}$ are scalars. The vector $\mathbf{c}=(c_{1},c_{2},\cdots,c_{n})^{T}$ defined in this way is called ==coordinate vector== of $\mathbf{v}$ with respect to the ordered basis $E$, denoted by $[\mathbf{v}]_{E}$. And the $c_{i}$'s are called the ==coordinates== of $\mathbf{v}$ relative to $E$.
And the transition matrices will become $n\times n$.

## Transition Matrix

Similar to the case in two dimension, if we let $\mathbf{x}=[\mathbf{v}]_{E}$ and $\mathbf{y}=[\mathbf{v}]_{F}$ where $E=\{ \mathbf{w}_{1},\mathbf{w}_{2},\cdots,\mathbf{w}_{n} \}$ and $F=\{ \mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n} \}$, Then we have 
$$
\mathbf{y}=S\mathbf{x}
$$
The matrix $S$ is the transition matrix from $E$ to $F$.
And we can get the matrix $S$ by expressing each basis vector $\mathbf{w}_{j}$ as a linear combination of the $\mathbf{v}_{i}$'s.