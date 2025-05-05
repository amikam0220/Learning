---
Date: 2025-04-11T16:22:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=198&selection=722,0,722,8|The link of chapter 2.6, Discrete Mathematics]]"
---
# Introduction

In this section, we will learn about the matrices and its use in communications networks and transportation systems.

## Definition of Matrix

A ==matrix== is a rectangular array of numbers. A matrix with $m$ rows and $n$ columns is called an $m\times n$ matrix. The plural of matrix is matrices. A matrix with the same number of rows as columns is called ==square==. Two matrices are ==equal== if they have the same number of rows and the same number of columns and the corresponding entries in every position are equal.

## Definition of Components of Matrix

Let $m$ and $n$ be positive integers and let $$
A=
\begin{bmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{21} & a_{22} & \cdots & a_{2n} \\
\vdots & \vdots &  & \vdots \\
a_{m1} & a_{m 2} & \cdots & a_{mn}
\end{bmatrix}
$$
The $i$th ==row== of $A$ is the $1\times n$ matrix $\begin{bmatrix}a_{i 1},a_{i 2},\cdots,a_{in}\end{bmatrix}$, the $j$th ==column== of $A$ is the $m\times1$ matrix $$
\begin{bmatrix}
a_{1j} \\
a_{2j}  \\
\vdots \\
a_{mj}
\end{bmatrix}
$$
The $(i,j)$th ==element== or ==entry== of $A$ is the element $a_{ij}$, that is, the number in $i$th row and $j$th column of $A$. A convenient shorthand notation for the matrix $A$ is $A=[a_{ij}]$.

# Matrix Arithmetic
## Definition of Addition

Let $A=[a_{ij}]$ and $B=[b_{ij}]$ be $m\times n$ matrices. the ==sum== of $A$ and $B$, denoted by $A+B$, is the $m\times n$ matrix that has $a_{ij}+b_{ij}$ as its $(i,j)$th element. That is, $$A+B=[a_{ij}+b_{ij}]$$

## Definition of Multiplication

Let $A$ be an $m\times k$ matrix and $B$ be a $k\times n$ matrix. The ==product== of $A$ and $B$, denoted by $AB$, is the $m\times n$ matrix with its $(i,j)$th entry equals to the sum of the products of the corresponding elements from the $i$th row of $A$ and the $j$th column of $B$. That is, if $AB=[c_{ij}]$, $$c_{ij}=a_{i1}b_{1j}+a_{i 2}b_{2j}+\cdots+a_{ik}b_{kj}$$
Note that $AB\ne BA$.

# Transposes and Powers of Matrices
## Definition of Identity Matrix

The identity matrix of order $n$ is the $n\times n$ matrix $I_{n}=[\delta_{ij}]$, where $\delta_{ij}=1$ if $i=j$ and $\delta_{ij}=0$ if $i\ne j$. That is $$
I_{n} = 
\begin{bmatrix}
1 & 0 & \cdots & 0 \\
0 & 1 & \cdots & 0 \\
\vdots & \vdots & \vdots & \vdots \\
0 & 0 & \cdots & 1
\end{bmatrix}
$$
And there exist $$AI_{n}=I_{m}A=A$$
where $A$ is an $m\times n$ matrix.

## Power of Square Matrices

When $A$ is an $n\times n$ matrix, we have $$A^{0}=I_{n},A^{r}=\underbrace{AA\cdots A}_{r \text{ times}}$$
## Definition of Transpose 

Let $A=[a_{ij}]$ be an $m\times n$ matrix, the ==transpose== of $A$, denoted by $A^{t}$, is the $n\times m$ matrix obtained by interchanging the rows and columns of $A$. In other words, if $A^{t}=[b_{ij}]$, then $b_{ij}=a_{ji}$ for $i=1,2,\cdots,n$ and $j=1,2,\cdots ,m$.

## Definition of Symmetric 

A square matrix $A$ is called symmetric if $A=A^{t}$. Thus $A=[a_{ij}]$ is symmetric if $a_{ij}=a_{ji}$ for all $i$ and $j$ in the domain.

# Zero-One Matrices

A matrix all of whose entries are either 0 or 1 is called a ==zero-one matrix==, which is often used to represent discrete structures.

## Definition of Join and Meet of Zero-One Matrices

Let $A=[a_{ij}]$ and $B=[b_{ij}]$ be $m\times n$ zero-one matrices. Then the ==join== of $A$ and $B$ is the zero-one matrix with $(i,j)$th entry $a_{ij}\vee b_{ij}$, denoted by $A\vee B$. The ==meet== of $A$ and $B$ is the zero-one matrix with $(i,j)$th entry $a_{ij}\wedge b_{ij}$. The meet of $A$ and $B$ is denoted by $A\wedge B$.

## Definition of Boolean Product

Let $A=[a_{ij}]$ be an $m\times k$ zero-one matrix and $B=[b_{ij}]$ be a $k\times n$ zero-one matrix. Then the Boolean product of $A$ and $B$, denoted by $A\odot B$, is the $m\times n$ matrix with $(i,j)$th entry $c_{ij}$ where $$
c_{ij}=(a_{i 1}\wedge b_{1 j})\vee (a_{i 2}\wedge b_{2j})\vee \cdots\vee(a_{ik}\wedge b_{kj})
$$

^242375

## Definition of Boolean Power

Let $A$ be a square zero-one matrix and let $r$ be a positive integer. The $r$th ==Boolean Power== of $A$ is the Boolean product of $r$ factors of $A$. The $r$th Boolean product of $A$ is denoted by $A^{[r]}$. Hence $$A^{[r]}=\underbrace{A\odot A\odot A \odot\cdots\odot A}_{r\text{ times}}$$
We also define $A^{[0]}$ to be $I_{n}$.