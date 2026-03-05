---
Date: 2025-02-04T19:39:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=42&selection=6,0,6,17|The link of chapter 1.3, Linear Algebra]]"
---
## **Matrix Notation**

- **Notation:**
	- Use capital letters $A,B,C$ and so on to represent the matrices without writing out all their entries.
	- Use $a_{ij}$ to represent the entry of the matrix $A$ in $i$th row and $j$th column and use $(i,j)$ to represent the location of that entry.
	- Use $A=(a_{ij})$ to shortly represent a matrix.

## **Vector**

1. **Scalar:** The entries in the matrices. (Either real or complex numbers)
2. **Vector**: 
	- **Vector:** An $n$-tuple of real numbers that is as a solution of a system of a $m$ linear equations in $n$ unknowns.
		- **Row Vector:** A vector represented by a $1\times n$ matrix.
			- **notation:** (no universally accepted standard notation)$$\mathbf{\overrightarrow{x}}=(x_1,x_2,\cdots,x_n)$$
		- **Column Vector:** A vector represented by an $n\times 1$ matrix.(shorten for $vector$ since the almost uses.)
			- $Euclidean\,n$-$space$:The set of all vectors of real number. Denoted by $\mathbb R^n$.
			- **notation:** $$\bf{x}=\begin{pmatrix}x_1\\x_2\\\vdots\\x_n\end{pmatrix}$$
		- **Example:** The solution of the linear system $\begin{align*}x_1+x_2=3\\x_1-x_2=1\end{align*}$ can be represented by the row vector $\begin{pmatrix}2&1\end{pmatrix}$ and the column vector $\begin {pmatrix}2\\1\end{pmatrix}$.
	- **Notation in matrix**:
		- **For $j$th column:** $$\mathbf{a}_j=\begin{pmatrix}a_{1j}\\a_{2j}\\\vdots\\a_{mj}\end{pmatrix}\qquad j=1,\cdots,n$$
		- **For $i$th row:** (no universally accepted standard notation)$$\mathbf{a}_i=(a_{i1},a_{i2},\cdots,a_{in})\qquad i=1,\cdots,m$$
		- **For the matrix *A*:** $$A=(\mathbf{a}_1,\mathbf{a}_2,\cdots,\mathbf{a}_n)=\begin{pmatrix}\mathbf{\overrightarrow{a_1}}\\\mathbf{\overrightarrow{a_2}}\\\vdots\\\mathbf{\overrightarrow{a_m}}\end{pmatrix}$$
		- **Example:** If $$A=\begin{pmatrix}3&2&5\\-1&8&4\end{pmatrix}$$then $$\mathbf{a}_1=\begin{pmatrix}3\\-1\end{pmatrix},\mathbf{a}_2=\begin{pmatrix}2\\8\end{pmatrix},\mathbf{a}_3=\begin{pmatrix}5\\4\end{pmatrix}$$and$$\mathbf{\overrightarrow{a}}_1=(3,2,5),\mathbf{\overrightarrow{a}}_2=(-1,8,4)$$
## **Equality**

- **Definition:** Two $m\times n$ matrices $A$ and $B$ are said to be **equal** if $a_{ij}=b_{ij}$ for each $i$ and $j$.

## **Scalar Multiplication**

- **Definition:** If $A$ is an $m\times n$ matrix and $\alpha$ is a scalar, then $\alpha A$ is the $m\times n$ matrix whose $(i,j)$ entry is $\alpha a_{ij}$.

## **Matrix Addition**

- **Definition:** If $A=(a_{ij})$ and $B=(a_{ij})$ are both $m \times n$ matrices, then the sum $A+B$ is the $m\times n$ matrix whose $(i,j)$ entry is $a_{ij}+b_{ij}$ for each ordered pair $(i,j)$.
- **Zero matrix:** A matrix whose entries are all zero, denoted by $O$.
- **Additive inverse**: A matrix adds the matrix $A$ to produce the zero matrix, denoted by $-A$.

## **Matrix Multiplication and Linear Systems**

- **One Equation in Several Unknowns:** For a linear equation with $n$ unknowns of the form$$a_1x_{1}+a_{2}x_2+\cdots+a_nx_n=b$$ if we let $$A=(a_1,a_2,\cdots,a_n) \quad \text{and} \quad \mathbf{x}=\begin{pmatrix}x_1\\x_2\\\cdots\\x_n\end{pmatrix} $$ and define the product$A\mathbf{x}$ by $$A\mathbf{x}=a_1x_1+a_2x_2+\cdots+a_nx_n$$ then the system can be written in the form $A\bf{x}=\bf{b}$. ^94f751
- **$M$ Equations in $N$ Unknowns:** For a $m\times n$ linear system$$\begin{align*}&a_{11}x_1+a_{12}x_2+\cdots+a_{1n}x_n=b_1\\&a_{21}x_1+a_{22}x_2+\cdots+a_{2n}x_n=b_2\\&\vdots\\&a_{m1}x_1+a_{m2}x_2+\cdots+a_{mn}x_n=b_m\end{align*}$$ then we let$$A=\begin{pmatrix}a_{11}&a_{12}&\cdots&a_{1n}\\ a_{21}&a_{22}&\cdots&a_{2n}\\\vdots\\ a_{m1}&a_{m2}&\cdots &a_{mn}\end{pmatrix},\quad \bf{x}=\begin{pmatrix}x_1\\x_2\\\vdots\\x_n\end{pmatrix},\quad \bf{b}=\begin{pmatrix}b_1\\b_2\\\vdots\\b_m\end{pmatrix}$$ and the product $A\bf{x}$ is  $$A\bf{x}=\begin{pmatrix}a_{11}x_1+a_{12}x_2+\cdots+a_{1n}x_n\\a_{21}x_1+a_{22}x_2+\cdots+a_{2n}x_n\\\vdots\\ a_{m1}x_1+a_{m2}x_2+\cdots+a_{mn}x_n\\\end{pmatrix}$$then the system can be written in the form $A\mathbf{x}=\bf{b}$.It can be understood as$$A\bf{x}=\begin{pmatrix}a_{11}x_1+a_{12}x_2+\cdots+a_{1n}x_n\\a_{21}x_1+a_{22}x_2+\cdots+a_{2n}x_n\\\vdots\\ a_{m1}x_1+a_{m2}x_2+\cdots+a_{mn}x_n\\\end{pmatrix}=\begin{pmatrix}\bf{\vec{a_1}x}\\\bf{\vec{a_2}x}\\\vdots\\\bf{\vec{a_n}x}\end{pmatrix}$$ It can be understood as well as$$\begin{align*}A\mathbf{x}&=\begin{pmatrix}a_{11}x_1+a_{12}x_2+\cdots+a_{1n}x_n\\a_{21}x_1+a_{22}x_2+\cdots+a_{2n}x_n\\\vdots\\ a_{m1}x_1+a_{m2}x_2+\cdots+a_{mn}x_n\\\end{pmatrix}\\&=x_1\begin{pmatrix}a_{11}\\a_{21}\\\vdots\\a_{m1}\end{pmatrix}+x_2\begin{pmatrix}a_{12}\\ a_{22}\\\vdots\\a_{m2}\end{pmatrix}+\cdots+x_n\begin{pmatrix}a_{1n}\\a_{2n}\\\vdots\\a_{mn}\end{pmatrix}\\&=x_1\mathbf{a}_1+x_2\mathbf{a}_2+\cdots+x_n\mathbf{a}_n\end{align*}$$ and the system can be written as $A\bf{x}=b$. ^439ebb
- **Linear combanition:** $c_1,c_2,\cdots,c_n$ are scalars, then a sum of the form$$c_1\mathbf{a_1}+c_2\mathbf{a_2}+\cdots+c_n\mathbf{a_n}$$ is said to be a **linear combination** of the vectors $\bf{a_1},a_2,\cdots,a_n$ in $\mathbb{R}^n$. ^1dc923
- **Theorem 1.3.1 Consistency Theorem for linear systems:** A linear system $A\bf{x}=b$ is consistent if and only if $\bf{b}$ can be represented as the linear combination of the column vector of $A$. ^c8fd4c
- **Matrix Multiplication:**  ^f1b55b
	- **Conditions:** If and only if $A$ is a $m\times n$ matrix and $B$ is a $n\times q$ matrix they can product a $m\times q$ matrix $C$.
		- Understanding: The matrix multiplication $AB$ actually is to transform the vector by $B$ and then by $A$. Matrix $B$ maps the vectors in the $q$-dimensional space to the $n$-dimensional space and then matrix $A$ must act on the output of $B$. So the column of the matrix $A$ must be $n$ to map the vectors in the $n$-dimensional space to the $m$-dimensional space. And the transformation equals to $C=AB$, which maps the vector in the $q$-dimensional space to the $m$-dimensional space.
	- **Definition:** If $A=(a_{ij})$ is a $m\times n$ matrix and $B=(b_{ij})$ is a $n\times q$ matrix, then the product $AB=C=(c_{ij})$ is a $m\times q$ matrix whose entries are defined by$$c_{ij}=\mathbf{\vec{a}}_i\mathbf{b}_j=\sum\limits_{k=1}^na_{ik}b_{jk}$$ Actually, it's one row times one column, which is as same as the situation in [[Note 1.3 Matrix Arithmetic#^94f751|the situation of upper part]]. ^bb2b6f
	- **Computation:** 
		- By definition. When computing, we can draft the matrix $B$ upper to align the matrix $C$, like$$\begin{align} & \begin{pmatrix}b_{11} & \cdots & b_{1q} \\\vdots  &  & \vdots \\b_{n1} & \cdots & b_{nq}\end{pmatrix} \\ \begin{pmatrix}a_{11} & \cdots & a_{1n} \\\vdots &  & \vdots \\a_{m1} & \cdots & a_{mn}\end{pmatrix} & \begin{pmatrix}c_{11} & \cdots & c_{1q} \\\vdots  &  & \vdots \\c_{m1} & \cdots & c_{mq}\end{pmatrix}\end{align}$$
		- **By the linear combination of the row vector:** The product $AB$ can be understood by$$AB=\begin{pmatrix}\mathbf{\vec{a}}_1B\\\mathbf{\vec{a}}_2B\\\vdots\\\mathbf{\vec{a}}_nB\end{pmatrix}$$ then we can understand the rows in the $C$ as the linear combination of the row vectors of $B$.(See also [[Note 1.6 Partition Matrices#^dc6414|Partition into rows]])
		- **By the linear combination of the column vector:** The product $AB$ can be understood by$$AB=(A\mathbf{b}_1,A\mathbf{b}_2,\cdots,A\mathbf{b}_n)$$ then we can use the same method of [[Note 1.3 Matrix Arithmetic#^439ebb|the upper part]], which understands the columns in $C$ as the linear combination of the column vectors of $A$.(See also [[Note 1.6 Partition Matrices#^7f2ce3|Partition into columns]])
		- **By the sum of the columns of $A$ times the rows of $B$:** The outcome of one column times one row is a matrix. So the product $AB$ can be understood by$$AB=\mathbf{a}_1\mathbf{\vec{b}}_1+\mathbf{a}_2\mathbf{\vec{b}}_2+\cdots+\mathbf{a}_n\mathbf{\vec{b}}_n$$ for example,$$\begin{align*}\begin{pmatrix}3&-2\\2&4\\1&-3\end{pmatrix}\begin{pmatrix}-2&1&3\\4&1&6\end{pmatrix}&=\begin{pmatrix}3\\2\\1\end{pmatrix}\begin{pmatrix}-2&1&3\end{pmatrix}+\begin{pmatrix}-2\\4\\-3\end{pmatrix}\begin{pmatrix}4&1&6\end{pmatrix}\\&=\begin{pmatrix}-6&3&9\\-4&2&6\\-2&1&3\end{pmatrix}+\begin{pmatrix}-8&-2&-12\\16&4&24\\-12&-3&-18\end{pmatrix}\\&=\begin{pmatrix}-14&1&-3\\12&6&30\\-14&-2&-15\end{pmatrix}\end{align*}$$ (See also [[Note 1.6 Partition Matrices#^99b99a|Outer product expansion]])
 
	- **Remarks:** $AB\neq BA$.

## **Notational Rules**

-  Follow the rules of arithmetic, accosiative law and distributive law(no commutative law).

## **The Transpose of a Matrix** 

- **Definition:** The **transpose** of an $m\times n$ matrix $A$ is the $n\times m$ matrix $B$ defined by$$b_{ji}=a_{ij}$$ for $j=1,\cdots,n$ and $i=1,\cdots,m$. The transpose of $A$ is denoted by $A^T$. The diagonal entries of $A$ and $A^{T}$ are the same.
- **Example:** If $A=\begin{pmatrix}1&2&3\\4&5&6\end{pmatrix}$, then $A^T=\begin{pmatrix}1&4\\2&5\\3&6\end{pmatrix}$.
- **Symmetric matrix:** An $n\times n$ matrix $A$ is said to be symmetric if $A^T=A$.
## **Application 1 Production Costs**

- **Strategy:** Make two matrix of amount and expenses and multiple them to get a new matrix of the total costs.
- **Example:** [[Linear_Algebra_Textbook.pdf#page=51&selection=401,0,403,16|The example of production costs]]
## **Application 2 Information Retrieval**

- **Strategy:** Suppose a database consisting $n$ documents and there are $m$ keywords, we can represent the database by an $m\times n$ matrix $A$. Then we take $a_{ij}$ as the frequency of the $j$th keyword appearing in the $i$th document.Then the searching keywords are represented by a vector $\mathbf{x}$ in $\mathbb{R}^m$. Take the 1 and 0 to represent whether the keyboard appears in the list and simply multiply $A^T$ times $\mathbf{x}$.
- **Example:** 
	- [[Linear_Algebra_Textbook.pdf#page=54&selection=309,0,309,24|Simple Matching Searches]]
	- [[Linear_Algebra_Textbook.pdf#page=56&selection=30,0,30,27|Relative-Frequency Searches]] 

## **Section 1.3 Exercises**

- [[Linear_Algebra_Textbook.pdf#page=58&selection=1137,0,1137,2|Question 11th]]
	For given information, we can get$$\mathbf{x}_{1}=\begin{pmatrix}1 \\1 \\0 \end{pmatrix}\quad\text{and} \quad \mathbf{x}_{2}=\begin{pmatrix}0 \\1 \\1\end{pmatrix}$$so the system is consistent. Since there are two given solution, $A$ must involve a free variable. Thus the system has infinitely many solutions.
- [[Linear_Algebra_Textbook.pdf#page=58&selection=1183,0,1184,0|Question 12th]]
	For given information, we can get $$\mathbf{x}=\begin{pmatrix}1 \\1 \\1 \\1\end{pmatrix}$$so the system is consistent. Since $A$ is a $3\times 4$ matrix, there are most 3 lead variables. Thus there exists at least one free variable in $A$. Then the system has infinitely many solutions.
- [[Linear_Algebra_Textbook.pdf#page=58&selection=1229,0,1230,0|Question 13th]]
	- Since the augmented matrix has reduced row echelon form and $x_{2},x_{4},x_{5}$ are free variables, then we let $x_{2}=a,x_{3}=b,x_{5}=c$. Hence $$\mathbf{x}=(-2-2a-3b-c,a,5-2b-5c,b,c)^{T}$$is the form that the solution consists of all vectors with this form.
	- No matter what the free variables are, since $\mathbf{a}_{1}$and $\mathbf{a}_{3}$ are given, the corresponding $\mathbf{b}$ is unique. Let $x_{2},x_{4},x_{5}$ be zero, then $\mathbf{x}_{0}=(-2,0,5,0,0)^{T}$ is a solution to $A\mathbf{x}=\mathbf{b}$ and hence $$\mathbf{b}=A\mathbf{x}_{0}=-2\mathbf{a}_{1}+5\mathbf{a}_{3}=(8,-7,-1,7)^{T}$$
- [[Linear_Algebra_Textbook.pdf#page=59&selection=122,0,123,0|Question 15th]]
	For $A^{T}$, the diagonal entries is $a_{jj}$ at $(j,j)$. For $-A$, the diagonal entries is $-a_{jj}$ at $(j,j)$. Since $A^{T}=-A$, then $-a_{jj}=a_{jj}$, thus $a_{jj}=0$. So the diagonal entries must all be 0.
	Definition:
		A matrix $A$ is skew symmetric if $A^{T}=-A$.
