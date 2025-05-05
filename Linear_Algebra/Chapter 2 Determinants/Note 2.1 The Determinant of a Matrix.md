---
Date: 2025-02-23T18:30:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=99&selection=66,0,66,27|The link of chapter 2.1, Linear Algebra]]"
---
## **Determinant for Simple Matrices**

- **$1\times 1$ Matrices:**
	For $A=(a)$, then we define $$\mathrm{\det}(A)=a$$then $A$ will be nonsingular if and only if $\mathrm{\det(A)\ne 0}$.
- **$2\times2$ Matrices**
	For $$A=\begin{pmatrix}a_{11} & a_{12} \\a_{21} & a_{22}\end{pmatrix}$$then we define$$\mathrm{\det}(A)=a_{11}a_{22}-a_{12}a_{21}$$then $A$ is nonsingular if and only if $\mathrm{\det}(A)\ne 0$.

## **Notation**

- **Representation:**
	For a matrix $$A=\begin{pmatrix}a_{11} & a_{21} & \cdots & a_{1n} \\a_{21} & a_{22} & \cdots & a_{2n} \\\vdots &  &  &  \\a_{n1} & a_{n 2} & \cdots & a_{nn} \end{pmatrix}$$then $$\left| \begin{array}{cccc}a_{11} & a_{21} & \cdots & a_{1n} \\a_{21} & a_{22} & \cdots & a_{2n} \\\vdots &  &  &  \\a_{n1}&a_{n2} & \cdots & a_{nn} \end{array} \right| $$represents the determinant of $A$.
- **Definition of minor and cofactor:**
	Let $A=(a_{ij})$ be $n\times n$ matrix, and let $M_{ij}$ denote the $(n-1)\times(n-1)$ matrix obtained from $A$ by deleting the $i$th row and the $j$th column. Then the determinant of $M_{ij}$ is called the **minor** of $a_{ij}$. And we define the **cofactor** $A_{ij}$ of $a_{ij}$ by $$A_{ij}=(-1)^{i+j}\mathrm{\det}(M_{ij})$$
- **Definition of Determinant:**
	The determinant of an $n\times n$ matrix $A$, denoted by $\mathrm{\det}(A)$, is a scalar to judge whether the matrix is singular and associated with the matrix $A$. It is defined as $$\mathrm{\det}(A)=\begin{cases}a_{11},\text{if } n=1 \\a_{11}A_{11}+a_{12}A_{12}+\cdots+a_{1n}A_{1n},\text{if }n>1\end{cases}$$where $$A_{1j}=(-1)^{1+j}\mathrm{\det}(M_{1j}),j=1,\cdots,n$$are the cofactors associated with the entries in the first row of $A$.
- **Understanding of Determinant:**
	If a determinant is not zero, it represents the sketched space of the vectors for the corresponding matrix, or the factor of the $n$-dimensional space's linear transformation for the corresponding matrix. Its sign represents whether the direction among the vectors change.
	If a determinant is zero, it represents the sketched space of the vectors for the corresponding matrix is zero, or the transformation squishes the space into a smaller dimension. And the corresponding matrix is singular since after the transformation there is no linear transformation can turn it into the original space and it must map multiple vectors.
- **Theorem 2.1.1:**
	If $A$ is an $n\times n$ matrix with $n\geq 2$, then $\det(A)$ can be expressed as a cofactor expansion of any row or column of $A$, that is $$\begin{align}\det(A) & =a_{i1}A_{i 1}+a_{i 2}A_{i 2}+\cdots+a_{in}A_{in} \\  & =a_{1j}A_{1j}+a_{2j}A_{2j}+\cdots+a_{nj}A_{nj}\end{align}$$for $i=1,\cdots,n$ and $j=1,\cdots,n$. ^f2afdf
	**Understanding:**
		The recursion definition of determinant actually is divide the higher-dimensional space into the linear combination of lower-dimensional space. The selected line is the direction we need to map the higher-dimensional space into. The size of the lower-dimensional space is the corresponding cofactor and its height is the value of the selected entry.
	- Example:
		To evaluate $$\left| \begin{array}{cccc} 0 & 2 & 3 & 0 \\0 & 4 & 5 & 0  \\0 & 1 & 0 & 3 \\2 & 0 & 1 & 3\end{array} \right| $$we would expand down the first column since the first three entries are zero, leaving$$-2\left| \begin{array}{ccc}2 & 3 & 0 \\4 & 5 & 0 \\1 & 0 & 3\end{array} \right| =-2\cdot3\cdot \left| \begin{array}{cc}2 & 3 \\4 & 5  \end{array} \right|=12 $$ 

- **Theorem 2.1.2:**
	If $A$ is an $n\times n$ matrix, then $\det(A^{T})=\det(A)$.
- **Theorem 2.1.3:**
	If $A$ is an $n\times n$ **triangular** matrix, then the determinant of $A$ equals the product of the diagonal elements of $A$.
- **Theorem 2.1.4:**
	Let $A$ be an $n\times n$ matrix, If
	- $A$ has a row or column consisting entirely of zeros
	- or $A$ has two identical rows or columns
	Then $\det(A)=0$.

## **Section 2.1 Exercise**

- [[Linear_Algebra_Textbook.pdf#page=106&selection=609,0,610,1|Question 10th]]
	When $n=1$, then the matrix $A=\begin{pmatrix}a & b \\ a & b\end{pmatrix},\det(A)=ab-ab=0$. Then suppose the result holds for $(k+1)\times(k+1)$ matrix. When the matrix is $(k+2)\times(k+2)$ and the $i$th row and $j$th row are the identical. We expand $\det(A)$ by factors along the $m$th row where $m\ne i$ and $m\ne j$. Then $$\det(A)=a_{m1}\det(M_{m 1})+a_{m2}\det(M_{m2})+\cdots+a_{m,k+2}\det(M_{m,k+2})$$where $M_{ms},1\leq s\leq k+2$ is a $(k+1)\times(k+1)$ matrix having two identical rows. So $\det(M_{ms})=0$, $\det(A)=0$.