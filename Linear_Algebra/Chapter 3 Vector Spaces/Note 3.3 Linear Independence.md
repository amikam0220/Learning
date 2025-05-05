---
Date: 2025-04-07T20:31:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=142&selection=49,0,49,19|The link of chapter 3.3, Linear Algebra]]"
---
## **Definitions**

- **Definition of Linear Independence**
	The vectors $\mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$ in a vector space $V$ are said to be ==linearly independent== if $$c_{1}\mathbf{v}_{1}+c_{2}\mathbf{v}_{2}+\cdots+c_{n}\mathbf{v}_{n}=\mathbf{0}$$ implies that all the scalars $c_{1},c_{2},\cdots,c_{n}$ must all equal zero.
	That is, the linear combination equals to zero vector only have the trivial choice of scalars.
- **Definition of Linear Dependence**
	The vectors $\mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$ in a vector space $V$ are said to be ==linearly dependent== if there exists scalars $c_{1},c_{2},\cdots,c_{n}$ not all zero such that $$c_{1}\mathbf{v}_{1}+c_{2}\mathbf{v}_{2}+\cdots+c_{n}\mathbf{v}_{n}=\mathbf{0}$$ That is, the linear combination equals to zero vector exist nontrivial choices of scalars.
- **Understanding for the Span**
	- If $\mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$ span a vector space $V$ and one of these vectors can be written as a linear combination of the other $n-1$ vectors, then those $n-1$ vectors span $V$.
	- Given $\mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$, it is possible to write one of the vectors as a linear combination of the other $n-1$ vectors if and only if there exist scalars $c_{1},c_{2},\cdots,c_{n}$, not all zero, such that $$c_{1}\mathbf{v}_{1}+c_{2}\mathbf{v}_{2}+\cdots+c_{n}\mathbf{v}_{n}=\mathbf{0}$$==that is, they are linearly dependent==.

## **Geometric Interpretation**

Suppose $\mathbf{x},\mathbf{y}$ are two vectors in $\mathbb{R}^{2}$. If they are linearly dependent, the one can be expressed as the linear combination of the other. That is, they are collinear. 
![[geometric linear dependence.png]]
If not, then they are not collinear. 
For $\mathbf{x},\mathbf{y},\mathbf{z}$ in $\mathbb{R}^{3}$, if $\mathbf{x},\mathbf{y}$ are not collinear and they are not zero vector, they span a plane. If the three vectors are linearly dependent, $\mathbf{z}$ lies in the $\mathbf{x,y}$-plane. If not, they will span a three-dimensional space.

## **Theorems and Examples**

- **Theorem 3.3.1**
	Let $\mathbf{x}_{1},\mathbf{x}_{2},\cdots,\mathbf{x}_{n}$ be $n$ vectors in $\mathbb{R}^{n}$ and let $X=(\mathbf{x}_{1},\mathbf{x}_{2},\cdots,\mathbf{x}_{n})$. The vectors $\mathbf{x}_{1},\mathbf{x}_{2},\cdots,\mathbf{x}_{n}$ will be linearly dependent if and only if $X$ is singular. ^2422a0
	- **Proof**
		The linear combination of $\mathbf{x}_{1},\mathbf{x}_{2},\cdots,\mathbf{x}_{n}$ equals to zero is $$c_{1}\mathbf{x}_{1}+c_{2}\mathbf{x}_{2}+\cdots+c_{n}\mathbf{x}_{n}=\mathbf{0}$$ which can be written as the the form $$X\mathbf{c}=\mathbf{0}$$ where $\mathbf{c}=\begin{pmatrix}c_{1} \\ c_{2} \\ \vdots \\c_{n}\end{pmatrix}$. Then the equation has a nontrivial solution if and only if $X$ is singular.
	- **Application**
		To determine whether $k$ vectors $\mathbf{x}_{1},\mathbf{x}_{2},\cdots,\mathbf{x}_{k}$ in $\mathbb{R}^{n}$ are linearly independent, we can write $$c_{1}\mathbf{x}_{1}+c_{2}\mathbf{x}_{2}+\cdots+c_{k}\mathbf{x}_{k}=\mathbf{0}$$ as $$X\mathbf{c}=\mathbf{0}$$ If $k=n$, that is, $X$ is square, then we can use the determinant to judge whether $X$ is singular.
		If $k\ne n$, we need to use the elimination to transform $X$ into the row echelon forms and judge whether there exist free variables.
- **Theorem 3.3.2**
	Let $\mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$ be vectors in a vector space $V$. A vector $\mathbf{v}\in\text{Span}(\mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n})$ can be written uniquely as a linear combination of $\mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$ if and only if $\mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$ are linearly independent. ^d46a5f
	- **Proof**
		From left to right:
		If $\mathbf{v}\in\text{Span}(\mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n})$ can be written as the unique linear combination of $\mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$, that is $$\mathbf{v}=\alpha_{1}\mathbf{v}_{1}+\alpha_{2}\mathbf{v}_{2}+\cdots+\alpha_{n}\mathbf{v}_{n}$$ 
		suppose that $\mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$ are linearly dependent, we can write $$c_{1}\mathbf{v}_{1}+c_{2}\mathbf{v}_{2}+\cdots+c_{n}\mathbf{v}_{n}=\mathbf{0}$$ where $c_{1},c_{2},\cdots,c_{n}$ are not all zero. If we add the two equations together, we will have $$\mathbf{v}=(\alpha_{1}+c_{1})\mathbf{v}_{1}+\cdots+(\alpha_{n}+c_{n})\mathbf{v}_{n}$$ which is different from the first linear combination and it is conflict with the hypothesis. So we can prove from left to right.
		From right to left:
		Suppose there exist more than one linear combination of $\mathbf{v}_{1},\mathbf{v}_{2},\cdots,\mathbf{v}_{n}$, then$$\begin{matrix}\mathbf{v}=a_{1}\mathbf{v}_{1}+a_{2}\mathbf{v}_{2}+\cdots+a_{n}\mathbf{v }_{n} \\\mathbf{v}=b_{1}\mathbf{v}_{1}+b_{2}\mathbf{v}_{2}+\cdots+b_{n}\mathbf{v}_{n}\end{matrix}$$
		Subtract the second equation from the first equation, $$(a_{1}-b_{1})\mathbf{v}_{1}+(a_{2}-b_{2})\mathbf{v}_{2}+\cdots+(a_{n}-b_{n})\mathbf{v}_{n}=\mathbf{0}$$ here the coefficients are not all zero, which is conflict with the hypothesis. So we can prove from the right to the left. 
## **Vector Spaces of Functions**

### The Vector Space $P_{n}$

We can through the common method to judge whether the polynomials $p_{1},p_{2},\cdots,p_{n}$ are linearly independent.

### The Vector Space $C^{(n-1)}[a,b]$

Determinants can also be used to help to decide whether a set of $n$ vectors is linearly independent in $C^{(n-1)}[a,b]$(Means the continuous function that has $n-1$th derivatives on $[a,b]$). Let $f_{1},f_{2},\cdots,f_{n}$ be elements of $C^{(n-1)}[a,b]$, then we have $$c_{1}f_{1}(x)+c_{2}f_{2}(x)+\cdots+c_{n}f_{n}(x)=0$$
for each $x$ in $[a,b]$. Then we successively take derivatives of both sides, we have the system $$
\begin{align}
& c_{1}f_{1}(x)+c_{2}f_{2}(x)+\cdots+c_{n}f_{n}(x)=0 \\
& c_{1}f^{\prime}_{1}(x)+c_{2}f^{\prime}_{2}(x)+\cdots+c_{n}f^{\prime}_{n}(x)=0 \\
& \vdots \\
& c_{1}f_{1}^{(n-1)}(x)+c_{2}f_{2}^{(n-1)}(x)+\cdots+c_{n}f_{n}^{(n-1)}(x)=0
\end{align}
$$
Then we can use the matrix equation 
$$\begin{pmatrix}
f_{1}(x) & f_{2}(x) & \cdots & f_{n}(x) \\
f_{1}^{\prime}(x) & f_{2}^{\prime}(x) & \cdots & f_{n}^{\prime}(x) \\
\vdots \\
f_{1}^{(n-1)}(x) & f_{2}^{(n-1)}(x) & \cdots & f_{n}^{(n-1)}(x)
\end{pmatrix}
\begin{pmatrix}
x_{1} \\
x_{2} \\
\vdots \\
x_{n}
\end{pmatrix}
= \begin{pmatrix}
0 \\
0 \\
\vdots \\
0
\end{pmatrix}$$
will have the solution $(c_{1},c_{2},\cdots,c_{n})^{T}$. Then we can use this to judge. Here, we can not simply use the [[Note 3.3 Linear Independence#^2422a0|theorem 3,3,1]] since the function is not identical to the vectors in the matrix.
- **Definition of Wronskian**
	Let $f_{1},f_{2},\cdots,f_{n}$ be functions in $C^{(n-1)}[a,b]$, and define the function $W[f_{1},f_{2},\cdots,f_{n}](x)$ on $[a,b]$ by $$W[f_{1},f_{2},\cdots,f_{n}](x)=\left |\begin{matrix}f_{1}(x) & f_{2}(x) & \cdots & f_{n}(x) \\
	f_{1}^{\prime}(x) & f_{2}^{\prime}(x) & \cdots & f_{n}^{\prime}(x) \\
	\vdots \\
	f_{1}^{(n-1)}(x) & f_{2}^{(n-1)}(x) & \cdots & f_{n}^{(n-1)}(x)\end{matrix}\right|$$ The function is called the Wronskian of $f_{1},f_{2},\cdots,f_{n}$.
- **Theorem 3.3.3**
	Let $f_{1},f_{2},\cdots,f_{n}$ be elements of $C^{(n-1)}[a,b]$. If there exists a point $x_{0}$ in $[a,b]$ such that $W[f_{1},f_{2},\cdots,f_{n}](x_{0})\ne 0$, then $f_{1},f_{2},\cdots,f_{n}$ are linearly independent.
	Note that the converse of this theorem is ==not valid==.
	Example is the function $x^{2}$ and $x|x|$ in $C[-1,1]$ are linearly independent.
	And if $f_{1},f_{2},\cdots,f_{n}$ are linearly independent in $C^{(n-1)}[a,,b]$, they will also be linearly independent in $C[a,b]$ since $C^{(n-1)}[a,b]\subset C[a,b]$.
# Exercises Section 3.3

## [[Linear_Algebra_Textbook.pdf#page=152&selection=936,0,936,1|Question 5]]

For **a**,
When $\mathbf{x}_{k+1}\in  \text{span}(\mathbf{x}_{1},\cdots,\mathbf{x}_{k})$, that is, $\mathbf{x}_{k+1}=c_{1}\mathbf{x}_{1}+c_{2}\mathbf{x_{2}}+\cdots+c_{k}\mathbf{x}_{k}$, thus $$
c_{1}\mathbf{x_{1}}+\cdots+c_{k}\mathbf{x}_{k}-\mathbf{x}_{k+1}=\mathbf{0}
$$
That is, $c_{k+1}=-1\ne 0$. Thus they are linear dependent.
When $\mathbf{x}_{k+1}\notin\text{span}(\mathbf{x}_{1},\cdots,\mathbf{x}_{k})$, then they are linear independent. 

For **b**
Suppose the rest vectors are linear dependent, then some vectors can be expressed as the linear combination of the other vectors, which is conflict with the condition that $\mathbf{x}_{1},\cdots,\mathbf{x}_{k}$ are linear independent.

## [[Linear_Algebra_Textbook.pdf#page=153&selection=41,0,41,3|Question 12]]

For **a**,
Since $$c_{1}\cdot 2x+c_{2}\left| x \right|=0
$$
for all $x$ in $[-1,1]$, then we can take $x=-1$ and $x=1$. $$
\begin{cases}
-2c_{1}+c_{2}=0 \\
2c_{1}+c_{2}=0
\end{cases}
$$
Thus $c_{1}=c_{2}=0$ and they are linear independent in $C[-1,1]$.

For **b**,
since $x \in C[0,1]$, $\left| x \right|=x$. Thus $$
c_{1}\cdot 2x+c_{2}\left| x \right| =2c_{1}x+c_{2}x=0
$$
then there exists $c_{2}\ne 0,c_{1}\ne0$ satisfying the equation.

## [[Linear_Algebra_Textbook.pdf#page=153&selection=283,0,284,1|Question 18]]

Let $Y=(\mathbf{y}_{1},\mathbf{y}_{2},\mathbf{y}_{3})$ and $X=(\mathbf{x}_{1},\mathbf{x}_{2},\mathbf{x}_{3})$, then since $\mathbf{y}_{1},\mathbf{y}_{2},\mathbf{y}_{3}$ are linearly independent, the matrix $Y$ is nonsingular. Then $$
Y=(A\mathbf{x}_{1},A\mathbf{x}_{2},A\mathbf{x}_{3})=AX
$$
since $\det(Y)=\det(A)\det(X)\ne 0$, thus $\det(A)\ne 0$. Then $A$ is nonsingular.
Thus $$
\mathbf{x}_{1}=A^{-1}\mathbf{y}_{1},\mathbf{x}_{2}=A^{-1}\mathbf{y}_{2},\mathbf{x}_{3}=A^{-1}\mathbf{y}_{3}.
$$
Then for $$c_{1}\mathbf{x}_{1}+c_{2}\mathbf{x}_{2}+c_{3}\mathbf{x}_{3}=\mathbf{0}$$
we have $$
A^{-1}(c_{1}\mathbf{y}_{1}+c_{2}\mathbf{y}_{2}+c_{3}\mathbf{y}_{3})=\mathbf{0}
$$
Then multiply $A$ of both sides, we can know that $c_{1}=c_{2}=c_{3}=0$ since $\mathbf{y}_{1},\mathbf{y}_{2},\mathbf{y}_{3}$ are linearly independent.
(Note the multiplication of matrices.[[Note 1.3 Matrix Arithmetic#^f1b55b|Multiplication of Matrices]] It is the linear combination of the column vector)