---
Date: 2025-02-23T10:06:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=83&selection=332,0,332,20|The link of chapter 1.6, Linear Algebra]]"
---
## **Partition Matrices**

- **Strategy:**
	To think a matrix as being a composition of submatrices, which can be divided by draw horizontal lines between rows and vertical lines between columns. The small matrices are often called blocks.
- **Partition into columns:**
	In general, if $A$ is an $m\times n$ matrix and $B$ is an $n\times r$ matrix, which is partitioned into columns $(\mathbf{b_{1}},\mathbf{b_{2}},\cdots,\mathbf{b}_{n})$, then the block multiplication of $AB$ is $$AB=(A\mathbf{b_{1}},A\mathbf{b_{2}},\cdots,A\mathbf{b}_{r})$$ ^7f2ce3
- **Partition into rows:**
	In general, if $A$ is an $m\times n$ matrix and $B$ is an $n\times r$ matrix, in which $A$ is partitioned into rows $\begin{pmatrix}\mathbf{\vec{a}}_{1} \\\mathbf{\vec{a}}_{2} \\ \cdots \\ \mathbf{\vec{a}}_{n}\end{pmatrix}$, then the block multiplication of $AB$ is $$AB=\begin{pmatrix}\mathbf{\vec{a}}_{1}B \\\mathbf{\vec{a}}_{2}B \\\vdots \\\mathbf{\vec{a}}_{m}B\end{pmatrix}$$ ^dc6414

## **Block Multiplication**

- **Case 1: Partition into two blocks by columns:**
	If $B=\begin{pmatrix}B_{1} & B_{2}\end{pmatrix}$, where $B_{1}$ is an $n\times t$ matrix and $B_{2}$ is an $n\times(r-t)$ matrix, then $$A\begin{pmatrix}B_{1} & B_{2}\end{pmatrix}=\begin{pmatrix}AB_{1} & AB_{2}\end{pmatrix}$$ where $A$ is a $m\times n$ matrix.
- **Case 2: Partition into two blocks by rows:**
	If $A=\begin{pmatrix}A_{1} \\ A_{2}\end{pmatrix}$, where $A_{1}$ is a $t\times n$ matrix and $A_{2}$ is a $(m-t)\times n$ matrix, then $$\begin{pmatrix}A_{1} \\A_{2}\end{pmatrix}B=\begin{pmatrix}A_{1}B \\A_{2}B\end{pmatrix}$$
- **Case 3: Partition into four blocks:**
	Let $A=\begin{pmatrix}A_{1}  &  A_{2}\end{pmatrix}$ and $B=\begin{pmatrix}B_{1}  \\ B_{2}\end{pmatrix}$, where $A_{1}$ is a $m\times t$ matrix, $A_{2}$ is a $m\times (n-t)$ matrix, $B_{1}$ is an $t\times r$ matrix and $B_{2}$ is an $(n-t)\times r$ matrix, then $$\begin{pmatrix}A_{1} & A_{2}\end{pmatrix}\begin{pmatrix}B_{1} \\B_{2} \end{pmatrix}=A_{1}B_{1}+A_{2}B_{2}$$
- **Case 4: Partition into multiple proper blocks:**
	In general, if the blocks have the proper dimensions, the block multiplication can be carried out in the same manner as ordinary matrix multiplication. Thus, if $$A=\begin{pmatrix}A_{11} & \cdots & A_{1n} \\\vdots \\A_{m1} & \cdots & A_{m n}\end{pmatrix}\quad \text{and}\quad B=\begin{pmatrix}B_{11} & \cdots & B_{1r} \\\vdots \\B_{n1} & \cdots & B_{nr}\end{pmatrix}$$ then $$AB=\begin{pmatrix}C_{11} & \cdots & C_{1r} \\\vdots \\C_{m1} & \cdots & C_{mr}\end{pmatrix}$$ where $$C_{ij}=\sum_{k=1}^nA_{ik}B_{kj}$$

## **Outer Product Expansions**

- **Scalar product(inner product):**
	If a row vector with $n$ rows times a column vector with $n$ columns, or say, if a $1\times n$ matrix times an $n\times 1$ matrix, the product will be a scalar, then the product is referred as a scalar product or inner product. For example,$$\mathbf{x}^T\mathbf{y}=(x_{1},x_{2},\cdots,x_{n})\begin{pmatrix}y_{1} \\y_{2} \\\vdots \\y_{n}\end{pmatrix}=x_{1}y_{1}+x_{2}y_{2}+\cdots+x_{n}y_{n}$$where $\mathbf{x}$ and $\mathbf{y}$ in $\mathbb{R}^n$.
- **Outer product:**
	If a column vector with $n$ columns times a row vector with $n$ rows, or say, if an $n\times1$ matrix times a $1\times n$ matrix, the product will be an $n\times n$ matrix, then the product is referred as a outer product. For example, $$\mathbf{x}^T\mathbf{y}=\begin{pmatrix}x_{1} \\x_{2} \\\vdots \\x_{n}\end{pmatrix}(y_{1},y_{2},\cdots,y_{n})=\begin{pmatrix}x_{1}y_{1} & x_{1}y_{2} & \cdots & x_{1}y_{n} \\x_{2}y_{1} & x_{2}y_{2} & \cdots & x_{2}y_{n} \\ \vdots \\ x_{n}y_{1} & x_{n}y_{2} & \cdots & x_{n}y_{n}\end{pmatrix}$$
- **Outer product expansion:**
	Generalize the idea of outer product to matrix, suppose that there is an $m\times n$ matrix $X$ and an $n\times r$ matrix $Y$, then $$XY=(\mathbf{x}_{1},\mathbf{x}_{2},\cdots,\mathbf{x}_{n})\begin{pmatrix}\mathbf{\vec{y}}_{1} \\\mathbf{\vec{y}}_{2} \\\vdots \\\mathbf{\vec{y}}_{n}\end{pmatrix}=\mathbf{x}_{1}\mathbf{\vec{y}}_{1}+\cdots+\mathbf{x}_{n}\mathbf{\vec{y}}_{n}$$ This representation is referred as an outer product expansion.^99b99a

## **Section 1.6 Exercises**

- [[Linear_Algebra_Textbook.pdf#page=91&selection=759,0,760,0|Question 9th]]
	- Since $D$ is a diagonal matrix, then we know $\mathbf{d}_{j}=d_{jj}\mathbf{e}_{j}$. Thus $$D=(d_{11}\mathbf{e}_{1},d_{22}\mathbf{e}_{2},\cdots,d_{nn}\mathbf{e}_{n})$$
	- For $AD$, $$\begin{align}AD & =A(d_{11}\mathbf{e}_{1},\cdots,d_{nn}\mathbf{e}_{n}) \\&=(d_{11}A\mathbf{e}_{1},\cdots,d_{nn}A\mathbf{e}_{n}) \\ & =(d_{11}\mathbf{a}_{1},\cdots, d_{nn}\mathbf{a}_{n}) \end{align}$$
- [[Linear_Algebra_Textbook.pdf#page=91&selection=1044,1,1045,0|Question 11th]]
	For the matrix $A$, we can use the $(A|I)$ to find $A^{-1}$. $$\begin{align}(A|I) & =\left(  \begin{array}{cc|cc}A_{11} & A_{12} & I & O \\O & A_{22} & O & I\end{array}\right) \\ & =\left(\begin{array}{cc|cc}I & A_{11}^{-1}A_{12} & A_{11}^{-1} & O \\O & I & O & A_{22}^{-1}\end{array}\right) \\ & =\left( \begin{array}{cc|cc}I & O & A_{11}^{-1} & -A_{11}^{-1}A_{12}A_{22}^{-1} \\ O & I & O & A_{22}^{-1}\end{array} \right) \end{align}$$Note that we are through the row operation thus the matrix is left multiplication.
- [[Linear_Algebra_Textbook.pdf#page=91&selection=1146,0,1147,0|Question 12th]]
	Suppose $A$ is singular, then there exists $\mathbf{x}_{1}\neq \mathbf{0}$ such that $A\mathbf{x}_{1}=\mathbf{0}$. Then let $\mathbf{x}=\begin{pmatrix}\mathbf{x}_{1} \\ \mathbf{0}\end{pmatrix}$, then $$M\mathbf{x}=\begin{pmatrix}A & O \\O & B\end{pmatrix}\begin{pmatrix}\mathbf{x}_{1} \\\mathbf{0}\end{pmatrix}=\mathbf{0}$$since $\mathbf{x}\ne\mathbf{0}$, then $M$ is singular. And $B$ is similar.
	
