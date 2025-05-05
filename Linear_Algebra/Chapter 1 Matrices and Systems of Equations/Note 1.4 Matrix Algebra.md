---
Date: 2025-02-08T12:44:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=59&selection=255,1,257,14|The link of chapter 1.4, Linear Algebra]]"
---
## **Algebraic Rules**

- **Theorem 1.4.1:** Each of the following statements is valid for any scalars $\alpha$ and $\beta$ and any matrices $A,B,C$ .
	- $A+B=B+A$
	- $(A+B)+C=A+(B+C)$
	- $(AB)C=A(BC)$
	- $A(B+C)=AB+AC$
	- $(A+B)C=AC+BC$
	- $(\alpha\beta)A=\alpha(\beta A)$
	- $\alpha(AB)=(\alpha A)B=A(\alpha B)$
	- $(\alpha+\beta)A=\alpha A+\beta A$
	- $\alpha(A+B)=\alpha A+\alpha B$
- **Warning:** In general, $AB\neq BA$ .

## **Notation** 

- **A $n \times n$ matrix multiplied by itself $k$ times ($k$ is a positive number):** 
	$$A^k=\underbrace{AA\cdots A}_{k\,\mathrm{times}} $$ 
##  **Application 1 A Simple Model for Marital Status Computations**

- **Strategy:** 
	Let a matrix $A$ whose first row is the percentages of married and single women who are married after 1 year, and the second row is the percentages of women who are single after 1 year. Then we let $\mathbf{x}$ be a vector whose entries are the number of married and single women. Then the number of married and single women after $n$ years can be determined by computing $A^{n}\mathbf{x}$ .
- **Example:** 
	[[Linear_Algebra_Textbook.pdf#page=62&selection=190,0,190,8|Simple model for marital status computations]]

## **Application 2 Ecology: Demographics of the Loggerhead Sea Turtle**

- **Strategy:**
	To create a Leslie matrix $L$ to correspond a population model and create a vector $\mathbf{x}_{0}$ to represent the initial population, then the population after $k$ years will be $L^k\mathbf{x}_{0}$.
- **Example:** 
	[[Linear_Algebra_Textbook.pdf#page=63&selection=8,0,8,50|Demographics of the Turtle]]

## **The Identity Matrix**

- **Definition:** 
	The $n\times n$ identity matrix is the matrix $I=(\delta_{ij})$,where $$\delta_{ij}=\begin{cases}
1 \quad \mathrm{if}\;i =j\\
0\quad \mathrm{if}\;i \neq j
\end{cases}$$ 
- Remarks:
	- Application:
		For any $n\times n$ matrix $A$, $$IA=AI=A$$ For any $m\times n$ matrix $B$, $$BI=B$$ For any $n\times r$ matrix $C$, $$IC=C$$ 
	- Standard notation:
		The column vectors of the $n\times n$ identity matrix $I$ are the standard vectors to define a coordinate system in Euclidean $n$-space. And it is denoted as $\mathbf{e}_{j}$ for the $j$th column vector of $I$. Thus the matrix $I$ can be written as $$I=(\mathbf{e}_{1},\mathbf{e}_{2},\cdots,\mathbf{e}_{3})$$
- **Zero Matrix:**
	Zero matrix is the matrix whose entries are all zero. (Denoted by $O$)
## **Matrix Inversion**

- **Definition:** 
	An $n\times n$ matrix $A$ is said be nonsingular or invertible if there exists a matrix $B$ such that $AB=BA=I$. The matrix $B$ is said to be a multiplicative inverse of $A$.
	- singular:
		An $n\times n$ matrix is said to be singular if it does not have multiplicative inverse.
		When we can find a nonzero vector $\mathbf{x}$ with $A\mathbf{x}=\mathbf{0}$ or say we can't find the linear combination of the column of $A$ to get $I$, then the matrix $A$ is singular since suppose there exists a matrix $B$ that is the multiplication inverse of $A$, then multiple both sides of the equation by $B$, then we get $\mathbf{x}=\mathbf{0}$, which is conflict with the proposition.
- Features:
	- A matrix can have at most one multiplicative inverse and the inverse of $A$ is denoted by $A ^{-1}$.
	- Only square matrices have multiplicative inverses and can be said singular or nonsingular.
	- Any products of nonsingular is nonsingular.
- **Theorem 1.4.2:**
	If $A$ and $B$ are nonsingular $n\times n$ matrices, then $AB$ is also nonsingular and $(AB)^{-1}=B^{-1}A^{-1}$.
	- Remarks:
		If $A_{1},\cdots,A_{n}$ are all nonsingular $m\times m$ matrices, then the product is nonsingular and $$(A_{1}A_{2}\cdots A_{n})^{-1}=A_{n}^{-1}\cdots A_{2}^{-1}A_{1}^{-1}$$
## **Algebraic Rules for [[Note 1.3 Matrix Arithmetic#**The Transpose of a Matrix**|Transposes]]**

- Rules:
	- $(A^T)^T=A$
	- $(\alpha A)^T=\alpha A^T$
	- $(A+B)^T=A^T+B^T$
	- $(AB)^T=B^TA^T$

## **Application 3 Networks and Graphs**

- Graph Theory:
	A technique using symmetric matrices to solve the problems involving networks.
- Basic concepts:
	- Graph: A set of points called vertices.
	- Edge: A set of unordered pairs of vertices. It can be represented by the vertices like $\{V_{i},V_{j}\}$.
- **Representation for the network in matrices:**
	- If the graph contains a total of $n$ vertices, we can define an $n\times n$ matrix $A$ by $$a_{ij}=\begin{cases}
        1\quad \mathrm{if}\;\{V_{i},V_{j}\}\;\text{is an edge of the graph} \\
        0\quad \text{if there is no edge joining }V_{i}\text{ and }V_{j} \\
        \end{cases}$$and the matrix is called the adjacency matrix of the graph. And all adjacency matrix are symmetric since if $\{V_{i},V_{j}\}$ is an edge of the graph and then $a_{ij}=a_{ji}=1$ and $a_{ij}=a_{ji}=0$ if there is no edge joining $V_{i}$ and $V_{j}$. In either case, $a_{ij}=a_{ji}$.
- **Theorem 1.4.3:**
	- walk: a sequence of edges linking one vertex to another.
	- Theorem: 
		If $A$ is an $n\times n$ adjacency matrix of a graph and $a_{ij}^{(k)}$ represents the $(i,j)$ entry of $A^k$, then $a_{ij}^{(k)}$ is equal to the number of walks of length $k$ from $V_{i}$ to $V_{j}$.

# **Section 1.4 Exercises**

- [[Linear_Algebra_Textbook.pdf#page=71&selection=8,0,9,0|Question 1st]]
	- $(A+B)^{^{2}}=(A+B)(A+B)=(A+B)A+(A+B)B=A^{^{2}}+BA+AB+B^{^{2}}$. In general, $BA+AB\ne 2AB$.
	- $(A+B)(A-B)=A^{^{2}}+BA-AB-B^{^{2}}$. In general, $AB\ne BA$.
- [[Linear_Algebra_Textbook.pdf#page=71&selection=89,0,89,1|Question 2nd]]
	If we take $a$ as an $n\times n$ matrix $A$ and $b$ as the $n\times n$ identity matrix $I$, then the rules in Question 1st work since $AI=IA$.
- [[Linear_Algebra_Textbook.pdf#page=71&selection=127,0,127,2|Question 3rd]]
	Since $AB=O$, then we know that $\sum_{k=1}^{2}a_{ik}b_{kj}=0$, that is, $a_{i1}b_{1j}+a_{i 2}b_{2j}=0$. Then, $\frac{a_{i1}}{a_{i 2}}=- \frac{b_{2 j}}{b_{1 j}}$. So we can let $$A=\begin{pmatrix}ka & a \\ tb & b\end{pmatrix}\quad B=\begin{pmatrix}-c & -d \\ kc & td \end{pmatrix}$$
- [[Linear_Algebra_Textbook.pdf#page=71&selection=850,1,851,0|Question 12th]]
	Idea: Prove by definition that $AA^{-1}=A^{-1}A=I$. Note that we need to compute both $AA^{-1}$ and $A^{-1}A$.
- [[Linear_Algebra_Textbook.pdf#page=72&selection=231,0,232,0|Question 22nd]]
	Definition:
		An $n\times n$ matrix $A$ is said to be **involution** if $A^{^{2}}=I$.
- [[Linear_Algebra_Textbook.pdf#page=72&selection=342,0,342,3|Question 24th]]
	Definition:
		A matrix $A$ is said to be **idempotent** if $A^{^{2}}=A$.