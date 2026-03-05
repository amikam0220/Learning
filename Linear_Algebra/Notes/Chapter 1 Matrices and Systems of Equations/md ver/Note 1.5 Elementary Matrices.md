---
Date: 2025-02-19T09:28:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=73&selection=127,0,127,19|The link of chapter 1.5, Linear algebra]]"
---
## **Equivalent Systems**

- If an $m\times n$ linear system $A\mathbf{x}=\mathbf{b}$, then if we multiply both sides of the equation by a nonsingular $m\times m$ matrix $M$, then the new system $U\mathbf{x}=\mathbf{c}$ is a equivalent system of $A\mathbf{x}=\mathbf{b}$, in which $U=MA=E_{k}\cdots E_{1}A$ and $\mathbf{c}=M\mathbf{b}=E_{k}\cdots E_{1}\mathbf{b}$.

## **Elementary Matrices**

- **Definition:**
	A sequence of special matrices $E_{k},\cdots,E_{1}$ to obtain an equivalent system in row echelon form by matrix multiplications rather than row operations.
- Three types of elementary matrices corresponding to elementary row operations:
	- Interchanging two rows:
		For an $n\times n$ matrix, $$E_{1}=\begin{pmatrix}0 & 1  & \cdots & 0 \\1 & 0 & \cdots & 0 \\\vdots &  &  & \vdots \\0 & \cdots &  \cdots& 1\end{pmatrix}$$ we can interchange the first row and the second row by $E_{1}A$ and interchange the first column and the second column by $AE_{1}$. Other interchanging are similar.
	- Multiply a row by a nonzero constant:
		For an $n\times n$ matrix, $$E_{2}=\begin{pmatrix}c & 0 & \cdots & 0 \\0 & 1 & \cdots & 0 \\\vdots &  &  & \vdots \\0 &\cdots & \cdots & 1\end{pmatrix}$$ we can multiply the first row by $c$ by $E_{2}A$ and multiply the first column by $c$ by $AE_{2}$. Others are similar. And the first type and the second type are symmetric. Since suppose the changed entries is symmetric about the diagonal.
	- Adding a multiple of one row to another row: 
		For an $n\times n$ matrix, $$E_{3}=\begin{pmatrix}1 & 0 & \cdots & c \\0 & 1 & \cdots & 0 \\\vdots &  &  & \vdots \\0 & \cdots & \cdots & 1\end{pmatrix}$$ we can add $c$ times the last row to the first row by $E_{3}A$ and add $c$ times the first column to the last column by $AE_{3}$. Others are similar.
	- In general, suppose that $E$ is an $n\times n$ elementary matrix, then for a $n\times r$ matrix $A$, $EA$ has the same effect of performing the row operation on $A$. For a $m\times n$ matrix $B$, $BE$ has the same effect of performing the column operation on $B$.
- **Theorem 1.5.1**
	If $E$ is an elementary matrix, then $E$ is nonsingular and $E^{-1}$ is an elementary matrix of the same type.
	- For the type 1, the inverse matrix of $E_{ij}$ will also be $E_{ij}$ since we can interchange the same rows(columns) $i,j$ again.
	- For the type 2, the inverse matrix of $E_{i}(k)$ will be $E_{i}\left( \frac{1}{k} \right)$ since we can transform into the initial matrix by multiplying the $i$th row(column) by $\frac{1}{k}$.  
	- For the type 3, the inverse matrix of $E_{ij}(k)$ will be $E_{ij}(-k)$ since we can transform into the initial matrix by adding $-k$ times $j$th rows(columns) to $i$th rows(columns). For a particular transformation of type 3, we can take the opposite number of the nonzero entry that is not on the diagonal to get $E_{ij}(-k)$. 
- **Row Equivalent:**
	- Definition:
		A matrix $B$ is row equivalent to a matrix $A$ if there exists a finite sequence $E_{1},E_{2},\cdots,E_{k}$ of elementary matrices such that $$B=E_{k}E_{k-1}\cdots E_{1}A$$ 
	- Properties:
		- If $A$ is row equivalent to $B$, then $B$ is row equivalent to $A$.
		- If $A$ is row equivalent to $B$ and $B$ is row equivalent to $C$, then $A$ is row equivalent to $C$.
		- If two augmented matrix $(A|\mathbf{b})$ and $(B|\mathbf{c})$ are row equivalent, then $A\mathbf{x}=\mathbf{b}$ and $B\mathbf{x}=\mathbf{c}$ are equivalent systems.
- **Theorem 1.5.2**
	Let $A$ be an $n\times n$ matrix, the following are equivalent: ^878745
	- $A$ is nonsingular.
	- $A\mathbf{x}=\mathbf{0}$ has only the trivial solution $\mathbf{0}$.
	- $A$ is row equivalent to $I$.
	- $A$ can be expressed as the product of some elementary matrices.
- **Corollary 1.5.3**
	The system $A\mathbf{x}=\mathbf{b}$ of $n$ linear equations in $n$ unknowns has a unique solution if and only if the matrix $A$ is nonsingular.
- **A Method for computing $A^{-1}$:**
	- Augment $A$ by $I$ and perform the elementary row operations to transform $A$ to $I$ and then $I$ will be transformed into $A^{-1}$ since suppose that $EA=I$, then $E=A^{-1}$, thus $EI=A^{-1}$. The process is to transform the augmented matrix $(A|I)$ into $(I|A^{-1})$.
	- Example: Compute $A^{-1}$ if $$A=\begin{pmatrix}1 & 4 & 3 \\-1 & -2 & 0 \\2 & 2 & 3\end{pmatrix}$$ solution:$$\begin{align}\left(\begin{array}{ccc|ccc}1 & 4 & 3 & 1 & 0 & 0 \\-1 & -2 & 0 & 0 & 1 & 0  \\2 & 2 & 3 & 0 & 0 & 1\end{array}\right) & \to\left(\begin{array}{ccc|ccc}1 & 4 & 3 & 1 & 0 & 0 \\0 & 2 & 3 & 1 & 1 & 0 \\0 & -2 & 3 & 0 & 2 & 1\end{array}\right) \\\to\left(\begin{array}{ccc|ccc}1 & 4 & 3 & 1 & 0 & 0 \\0 & 2 & 3 & 1 & 1 & 0 \\0 & 0 & 6 & 1 & 3 & 1\end{array}\right) & \to\left(\begin{array}{ccc|ccc}1 & 4 & 0 & \frac{1}{2} & -\frac{3}{2} & -\frac{1}{2} \\0 & 2 & 0 & \frac{1}{2} & -\frac{1}{2} & -\frac{1}{2} \\0 & 0 & 6 & 1 & 3 & 1\end{array}\right) \\\to\left(\begin{array}{ccc|ccc}1 & 0 & 0 & -\frac{1}{2} & -\frac{1}{2} & \frac{1}{2} \\0 & 2 & 0 & \frac{1}{2} & -\frac{1}{2} & -\frac{1}{2} \\0 & 0 & 6 & 1 & 3 & 1\end{array}\right) & \to\left(\begin{array}{ccc|ccc}1 & 0 & 0 & -\frac{1}{2} & -\frac{1}{2} & \frac{1}{2} \\0 & 1 & 0 & \frac{1}{4} & -\frac{1}{4} & -\frac{1}{4} \\0 & 0 & 1 & \frac{1}{6} & \frac{1}{2} & \frac{1}{6}\end{array} \right) \end{align}$$ thus,$$A^{-1}=\begin{pmatrix}-\frac{1}{2} & -\frac{1}{2} & \frac{1}{2} \\ \frac{1}{4} & -\frac{1}{4} & -\frac{1}{4} \\ \frac{1}{6} & \frac{1}{2} & \frac{1}{6}\end{pmatrix}$$

## **Diagonal and Triangular Matrices**

- Triangular Matrices:
	- upper triangular:
		For an $n\times n$ matrix $A$, $a_{ij}=0$ for $i>j$.
	- lower triangular:
		For an $n\times n$ matrix $A$, $a_{ij}=0$ for $i<j$.
	- triangular:
		It is either upper triangular or lower triangular.
	- Remarks: A triangular matrix may have 0's on the diagonal but for a [[Note 1.1 Systems of Linear Equations#^da88cb|strict triangular form]], it must be upper triangular with nonzero diagonal entries.
- Diagonal Matrices:
	For an $n\times n$ matrix $A$, $a_{ij}=0$ whenever $i\neq j$. And diagonal matrices is both upper triangular matrix and lower triangular matrix.

## **Triangular Factorization**

- **Represent the elimination process in terms of matrix factorization(only operation 3):**
	For an $n\times n$ matrix $A$ and $E$ is the elementary matrix of $A$, if we call the resulting matrix $U$ and set the matrix $L$ as the inverse matrix of $E$, then can use$$A=LU$$ to represent the process of reduction. And the factorization of the matrix $A$ into a unit lower triangular matrix $L$ times a strict upper triangular matrix $U$ is often referred to as an $LU$ factorization.
- The matrix $L$:
	The matrix $L$ is lower triangular with 1's on the diagonal, called unit lower triangular. And if $i>j$, then $l_{ij}$ is the multiple of the $j$th row subtract from the $i$th row during the reduction process.($i-l_{ij}\cdot j$)

## **Section 1.5 Exercises**

- [[Linear_Algebra_Textbook.pdf#page=82&selection=309,0,310,0|Question 13th]]
	For the first and second type elementary matrix, they are symmetric so $E^{T}=E$ and they are the same type elementary matrix. For the third matrix, the $k$ in the $E_{ij}(k)$ will be symmetric about the diagonal. Thus $E$ is to add $k$ times $i$th to $j$th row and $E^{T}$ is to add $k$ times $j$th to $i$th row and they are the same type elementary matrix.
- [[Linear_Algebra_Textbook.pdf#page=82&selection=317,0,318,0|Question 14th]]
	Since $$t_{ij}=\sum_{k=1}^{n} u_{ik}r_{kj}$$and when $i<j$, $$\begin{align} & u_{i1}=u_{i 2}=\cdots=u_{i,i-1}=0 \\ &r_{j+1, j}=r_{j+2,j}=\cdots=r_{nj}=0\end{align}$$then $$t_{ij}=\sum_{k=1}^{n} u_{ik}r_{kj}=u_{i1}r_{1j}+\cdots+u_{in}r_{nj}=0$$ thus the matrix $T$ is upper triangular matrix. When $i=j$, $$t_{jj}=u_{j1}r_{1j}+\cdots+u_{jj}r_{jj}+\cdots+u_{jn}r_{nj}=u_{jj}r_{jj},j=1,\dots ,n.$$
