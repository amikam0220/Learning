---
Date: 2025-03-04T15:15:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=106&selection=966,0,966,26|The link of chapter 2.2, Linear Algebra]]"
---
## **The Effects of Row Operations on the Determinant**

- **Lemma 2.2.1:**
	Let $A$ be an $n\times n$ matrix. If $A_{jk}$ denotes the cofactor of $a_{jk}$ for $k=1,\cdots,n$, then$$a_{i1}A_{j1}+a_{i 2}A_{j 2}+\cdots+a_{in}A_{jn}=\begin{cases}\det(A),\text{if } i = j \\0,\text{if }i\ne j\end{cases}$$
	Proof:
		If $i=j$, then the expression is just the [[Note 2.1 The Determinant of a Matrix#^f2afdf|cofactor expansion]] of $\det(A)$ along the $i$th row of $A$. If $i\ne j$, then we can take a matrix $B$ by replacing the $j$th row of $A$ by the $i$th row of $A$: $$B=\begin{pmatrix}a_{11} & a_{12} & \cdots & a_{1n} \\\vdots \\a_{i1} & a_{i 2} & \cdots & a_{in} \\\vdots \\a_{i1} & a_{i_{2}} & \cdots & a_{in} \\\vdots \\a_{n1} & a_{n 2} & \cdots & a_{nn}\end{pmatrix}$$Since two rows of $B$ are the same, then $\det(B)=0$. Then $$\det(B)=a_{i 1}B_{j 1}+a_{i2}B_{j2}+\cdots+a_{in}B_{jn}=a_{i1}A_{j1}+a_{i 2}A_{j2}+\cdots+a_{in}A_{jn}=0$$ ^021335
- **Row Operation 1:**
	In general, if $A$ is an $n\times n$ matrix and $E_{ij}$ is the $n\times n$ elementary matrix to do the row operation 1, then $$\det(E_{ij}A)=-\det(A)$$
- **Row Operation 2:**
	If $A$ is an $n\times n$ matrix and $E_{i}(k)$ is the $n\times n$ elementary matrix to do the row operation 2, then $$\det(E_{i}(k)A)=k\det(A)=\det(E_{i}(k))\det(A)$$
- **Row Operation 3:**
	If $A$ is an $n\times n$ matrix and $E_{ij}(k)$ is the $n\times n$ elementary matrix to do the row operation 3, then $$\det(E_{ij}(k)A)=\det(A)=\det(E_{ij}(k))\det(A)$$
- **Summary:**
	If $E$ is an elementary matrix, then$$\det(EA)=\det(E)\det(A)$$where$$\det(E)=\begin{cases}-1 & \text{if } E \text{ is of type 1.} \\k\ne 0 & \text{if } E \text{ is of type 2.} \\1 & \text{if }E \text{ is of type 3.}\end{cases}$$Similar results hold for column operations. The effects that row or column operations have on the value of the determinant can be summarized as follows:
	- Interchanging two rows(or columns) of a matrix changes the sign of the determinant.
	- Multiplying a single row or column of a matrix by a scalar multiplies the value of the determinant by the scalar.
	- Adding a multiple of one row (or column) to another does not change the value of determinant.

## **Main Results**

- **Theorem 2.2.2:**
	An $n\times n$ matrix $A$ is singular if and only if $$\det(A)=0$$
	Proof:
		The matrix can be reduced to row echelon form with a finite number of row operations. Thus, $$U=E_{k}E_{k-1}\cdots E_{1}A$$where $U$ is in row echelon form and $E_{i}$'s are all elementary matrices.  Then $$\det(U)=\det(E_{k}\cdots E_{1}A)=\det(E_{k})\det(E_{k-1})\cdots\det(E_{1})\det (A)$$since the determinants of the $E_{i}$'s are all nonzero, it follows that $\det(U)=0$ if and only if $\det(A)=0$.If $A$ is singular, then $U$ has a row consisting entirely of zeros, hence $\det(U)=0$. If $A$ is nonsingular, then $U$ is upper triangular with 1's along the diagonal and hence $\det(U)=1$.
	Corollary:
		If $A$ is nonsingular, it is simpler to reduce $A$ to triangular form. Then we can just evaluate the determinant by the product of the diagonal entries.
	Example: Evaluate $$\left| \begin{array}{ccc}2  &1 &3 \\4 & 2 & 1 \\6 & -3 & 4  \end{array} \right| $$
	Sol:$$\begin{align}\left| \begin{array}{ccc}2  &1 &3 \\4 & 2 & 1 \\6 & -3 & 4  \end{array} \right|=\left| \begin{array}{ccc}2 & 1 & 3 \\0 & 0 & -5 \\0 & -6 & -5 \end{array} \right|  & =(-1)\left|\begin{array}{ccc}2 & 1 & 3  \\0 & -6 & -5 \\0 & 0 & -5\end{array}\right| \\ & = (-1)(2)(-6)(-5) \\ & =-60\end{align}$$
- **Theorem 2.2.3:**
	If $A$ and $B$ are $n\times n$ matrices, then $$\det(AB)=\det(A)\det(B)$$Proof:
		If $B$ is singular, then $AB$ is also singular, therefore,$$\det(AB)=0=\det(A)\det(B)$$If $B$ is nonsingular, it can be written as a product of elementary matrices. Then$$\begin{align}\det(AB) & =\det(AE_{k}E_{k-1}\cdots E_{1}) \\ & =\det(A)\det(E_{k})\cdots E_{1}  \\ & =\det(A)\det(E_{k}\cdots E_{1}) \\ & =\det(A)\det(B)\end{align}$$Lemma: If $B$ is singular, then $AB$ is also singular.
		Proof:
			If $B$ is singular, then there exists $B\mathbf{x}_{0}=\mathbf{0}, \mathbf{x}_{0}\ne\mathbf{0}$. Thus $$AB\mathbf{x}_{0}=A\mathbf{0}=\mathbf{0}$$thus there exists a nonzero solution for $AB\mathbf{x}_{0}=\mathbf{0}$. Then by the [[Note 1.5 Elementary Matrices#^878745|Theorem 1.5.2]], $AB$ is singular.

## **Section 2.2 Exercise**

- [[Linear_Algebra_Textbook.pdf#page=112&selection=668,0,668,2|Question 5th]]
	Property: $$\det(\alpha A)=a^{n}\det(A)$$
- [[Linear_Algebra_Textbook.pdf#page=112&selection=705,0,706,0|Question 6th]]
	Property: $$\det(A^{-1})=\frac{1}{\det(A)}$$
- [[Linear_Algebra_Textbook.pdf#page=113&selection=181,0,182,0|Question 16th]]
	Since $A^{T}=-A$, $\det(A^{T})=\det(A)=\det(-A)=\det(-I)\det(A)=(-1)^{n}\det(A)$. When $n$ is odd, $\det(A)=-\det(A)$. Then $\det(A)=0$.
- [[Linear_Algebra_Textbook.pdf#page=113&selection=338,0,338,3|Question 18th]]
	- Expanding $\det(E)$ by cofactors along the first row and similarly expanding the others $\det(E)=1\cdot \det(E_{11})=1\cdot1\cdot \det((E_{11})_{11})=1\cdots1\det(B)=\det (B)$
	- Similar to the first small question but along the last row. $\det(F)=1\cdot1\cdots1\cdot \det(A)=\det(A)$.
	- Since $C=EF$, $\det(C)=\det(E)\det(F)=\det(B)\det(A)=\det(A)\det (B)$.
- [[Linear_Algebra_Textbook.pdf#page=113&selection=554,0,555,1|Question 19th]]
	Exchange the each corresponding rows for $A$ and $B$, which totally exchange $k$ times. That is $$M=E_{k}E_{k-1}\cdots E_{1}C$$ where $C=\begin{pmatrix}A & O \\ O & B\end{pmatrix}$. Thus $\det(M)=\det(E_{k})\cdot \det(E_{k-1})\cdots\det(C)=(-1)^{k}\det(A)\det(B)$.
