---
Date: 2025-03-17T20:31:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=113&selection=779,0,779,34|The link of chapter 2.3, Linear Algebra]]"
---
## **The Adjoint of a Matrix**

- **Definition:**
	Let $A$ be a $n\times n$ matrix. We define a new matrix called the adjoint of $A$ by $$\text{adj}A=\begin{pmatrix}A_{11} & A_{21} & \cdots & A_{n1} \\A_{12} & A_{22} & \cdots & A_{n2} \\\vdots \\A_{1n} & A_{2n} & \cdots & A_{nn}\end{pmatrix}$$
- **Properties:**
	By [[Note 2.2 Properties of Determinants#^021335|Lemma 2.2.1]], $$A(\text{adj}A)=\det(A)I$$If $A$ is nonsingular, $\det(A)$ is a nonzero scalar, then $$A\left( \frac{1}{\det(A)}\text{adj}A \right)=I$$Thus, $$A^{-1}= \frac{1}{\det(A)}\text{adj}A,\det(A)\ne 0$$

## **Cramer's Rule**

- **Theorem 2.3.1 Cramer's Rule:**
	Let $A$ be an $n\times n$ nonsingular matrix, and let $\mathbf{b}\in \mathbb{R}^{n}$. Let $A_{i}$ be the matrix replacing the $i$th column of $A$ by $\mathbf{b}$. If $\mathbf{x}$ is the unique solution of $A\mathbf{x}=\mathbf{b}$, then $$x_{i}=\frac{\det(A_{i})}{\det(A)}\quad for \quad i=1,2,\cdots,n$$Proof:
		Since $$\mathbf{x}=A^{-1}\mathbf{b}=\frac{1}{\det(A)}(\text{adj}A)\mathbf{b}$$then $$\mathbf{x}=\begin{pmatrix}b_{1}A_{11}+b_{2}A_{21}+\cdots+b_{n}A_{n1} \\b_{1}A_{12}+b_{2}A_{22}+\cdots+b_{n}A_{n2} \\\vdots \\b_{1}A_{1n}+b_{2}A_{2n}+\cdots+b_{n}A_{nn}\end{pmatrix}$$thus $$\begin{align}x_{i} & =\frac{b_{1}A_{1i}+b_{2}A_{2i}+\cdots+b_{n}A_{ni}}{\det(A)} \\ & =\frac{\det(A_{i})}{\det(A)}\end{align}$$
	Cramer's Rule gives us a method for writing the solution of $n\times n$ system of linear equations in terms of determinants.

## **Application 1 Coded Messages**

- **Idea:**
	Take a matrix $A$ whose entries are all integers and whose determinant is $\pm1$.(ensure the entries in the $A^{-1}$ be integers) Then multiply the matrix with coded message by $A$ to further encode the coded message. Then the message can be decode by multiplying the matrix by $A^{-1}$. (The matrix $A$ can be obtained by apply row operation 1 and 3 to the identity $I$).

## **The Cross Product**

- **Definition:**
	Given two vectors $\mathbf{x}$ and $\mathbf{y}$ in $\mathbb{R}^{3}$, then we can define the cross product, denoted $\mathbf{x}\times \mathbf{y}$, $$\mathbf{x}\times \mathbf{y}=\begin{pmatrix}x_{2}y_{3}-y_{2}x_{3} \\y_{1}x_{3}-x_{1}y_{3} \\x_{1}y_{2}-y_{1}x_{2}\end{pmatrix}$$If $C$ is any matrix of the form $$C=\begin{pmatrix}\hat{i} & x_{1} & y_{1} \\\hat{j} & x_{2} & y_{2} \\\hat{k} & x_{3} & y_{3}\end{pmatrix}$$then $\det(C)=\hat{i}C_{11}+\hat{j}C_{21}+\hat{k}C_{31}=\mathbf{i}(\mathbf{x}\times \mathbf{y})$ where $\mathbf{i}=(\hat{i},\hat{j},\hat{k})$. Then $$\mathbf{x}\times \mathbf{y}=C_{11}\mathbf{e_{1}}+C_{21}\mathbf{e_{2}}+C_{31}\mathbf{e_{3}}=\begin{pmatrix}C_{11} \\C_{21} \\C_{31}\end{pmatrix}=\left| \begin{array}{ccc}\mathbf{e}_{1} & x_{1} & y_{1} \\\mathbf{e}_{2} & x_{2} & y_{2}  \\ \mathbf{e}_{3} & x_{3} & y_{3} \end{array} \right| $$

## **Application 2 Newtonian Mechanics**

- **Definition of length of vector:**
	If $\mathbf{x}$ is a vector in either $\mathbb{R}^{2}$ or $\mathbb{R}^{3}$, then we define the length of $\mathbf{x}$, denoted $||x||$, by $$||\mathbf{x}||=(\mathbf{x}^{T}\mathbf{x})^{1/2}$$and a vector is said to be a unit vector if $||\mathbf{x}||=1$.
- **The Representation of a Vector in Two-or-Three-Dimensional Space**
	- **In two-dimensional space:**
		We can conveniently represent the position of vectors at time $t$ as linear combination of vectors $\mathbf{T}(t)$ and $\mathbf{N}(t)$, where $\mathbf{T}(t)$ is a unit vector in the direction of the tangent line to curve at the point $(x_{1}(t),x_{2}(t))$ and $\mathbf{N}(t)$ is a unit vector in the direction of a normal line to the curve at the given point.
	- **In three-dimensional space:**
		We define the third unit vector $\mathbf{B}(t)=\mathbf{T}(t)\times \mathbf{N}(t)$ as the binormal vector which obeys the right hand rule.

## **Exercise Section 2.3**

- [[Linear_Algebra_Textbook.pdf#page=120&selection=647,0,648,0|Question 6th]]
	Property:
		If $A$ is singular, the product $A\,\mathrm{adj}A=0$.
- [[Linear_Algebra_Textbook.pdf#page=121&selection=61,0,62,0|Question 8th]]
	Property:
		If $A$ is a nonsingular $n\times n$ matrix with $n>1$, then $$\det(\mathrm{adj}\,A)=(\det(A))^{n-1}$$
- [[Linear_Algebra_Textbook.pdf#page=121&selection=207,0,207,3|Question 10th]]
	Property:
		If $A$ is nonsingular, then $\mathrm{adj}\,A$ is nonsingular and $$(\mathrm{adj}\,A)^{-1}=\det(A^{-1})A=\mathrm{adj}\,A^{-1}$$
- [[Linear_Algebra_Textbook.pdf#page=121&selection=247,0,248,1&color=yellow|Question 11th]]
	Suppose $\mathrm{adj}\,A$ is nonsingular, then there exist $(\mathrm{adj}\,A)^{-1}$. Then $$A\,\mathrm{adj}\,A=\det(A)I=O$$ Then multiply $\mathrm{adj}\,A$ of both sides, then $$A=O$$ But when $A=O,\mathrm{adj}\,A=O$, which is singular. That is conflict with the hypothesis. 
