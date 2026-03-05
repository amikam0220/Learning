---
Date: 2025-02-07T21:07:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=16&selection=66,0,66,27|The link of chapter 1.1, Linear Algebra]]"
---
## **Linear Equations** 

- **Definition:** A linear equation in $n$ unknowns is an equation of the form $$a_1x_1+a_2x_2+\cdots+a_nx_n=b$$ where $a_1,a_2,\cdots,a_n$ and $b$ are real numbers and $x_1,x_2,\cdots,x_n$ are variables.
- **Linear System:** A linear system of $m$ equations in $n$ unknowns is a system of the form$$\begin{align*}&a_{11}x_1+a_{12}x_2+\cdots+a_{1n}x_n=b_1\\&a_{21}x_1+a_{22}x_2+\cdots+a_{2n}x_n=b_2\\&\vdots\\&a_{m1}x_1+a_{m2}x_2+\cdots+a_{mn}x_n=b_m\end{align*}$$ where $a_{ij}$'s and $b_{i}$'s are all real numbers. And the form is an $m\times n$ linear systems.
- **Consistent and inconsistent:** If a linear system has at least one solution, we say it's consistent. If not, it's inconsistent.
- **Solution Set:** The set of all solutions of a linear system.

## **Equivalent Systems**

- **Definition:** Two systems of equations involving the same variables are said to be equivalent if they have the same solution set.
- **Three operations to obtain an equivalent system:**  ^398a07
	- Interchange the order of any two equations.
	- Multiple the same nonzero real number of both sides of an equation.
	- Add(or subtract) a multiple of one equation to(or from) another.

## **$n\times n$ Systems**

- **Strict triangular form:** A system is said to be strict triangular form if in the $k$th equation, the coefficients of the $k-1$ variables are all zero and the coefficient of $x_k$ is nonzero($k=1,\cdots,n$).For example, $$\begin{align*}3x_1+2x_2+x_3&=1\\x_2-x_3&=2\\2x_3&=4\end{align*}$$ In general, we can use [[Note 1.1 Systems of Linear Equations#^398a07|the upper operations]] to try to obtain an equivalent system that is strict triangular form. ^da88cb
- **Matrix:** A rectangular array of numbers. A matrix having $m$ rows and $n$ columns is said to be $m\times n$. A matrix is said to be square if the number of rows equals to columns'. 
- **Coefficient Matrix and Augmented Matrix:** A matrix that associates with the coefficients of the linear system is said to be coefficient matrix. A matrix that attach an additional matrix on the right hand is said to be augmented matrix.(denoted by $(A|B)$) For example,$$(A|B)=\left(\begin{array}{ccc|ccc}a_{11}&\cdots&a_{1n}&b_{11}&\cdots&b_{1r}\\\vdots&&&\vdots\\a_{m1}&\cdots&a_{mn}&b_{m1}&\cdots&b_{mr}\end{array}\right)$$ and there, we use the augmented matrix like $$\left(\begin{array}{ccc|c}a_{11}&\cdots&a_{1n}&b_{1}\\\vdots&&&\vdots\\a_{m1}&\cdots&a_{mn}&b_{m}\end{array}\right)$$
- **Elementary Row Operations to the Augmented Matrix:**  ^6606f3
	- Interchange two rows.
	- Multiply a row by a nonzero real number.
	- Replace a row by its sum with a multiple of another row.
- **Elimination:** ^ca7c63
	- **Pivot and Pivotal Row:** The first-nonzero entry that are needed to be eliminate is called pivot. The row containing pivot is called pivotal row.
	- **Process:**
		- Choose the pivot and the pivot row.(Interchange two rows if the first entry of first row is zero)
		- Use the [[Note 1.1 Systems of Linear Equations#^6606f3|elementary row operations]] to eliminate the column containing the pivot excluding the pivot itself.
		- Change the pivot row to the next row and repeat upper process until the matrix become the strict triangular form.
		- Back substitution.
	- * Remark: The determinant of a triangular matrix $A$ equals to the product of the pivots. To a general square matrix, we can use elimination to get a triangular matrix. But the sign of the determinant will change for every row swaps.
## **Geometric Representation of matrix**

- **$2\times 2$ System:** To a linear system $$\begin{cases} 2x_1-x_2=0 \\
-x_1+2x_2=3
\end{cases}$$ It can be written as$$\begin{pmatrix}2&-1 \\
-1&2\end{pmatrix}\begin{pmatrix}x_1 \\
x_2\end{pmatrix}=\begin{pmatrix}0 \\
	3\end{pmatrix}$$ and denoted by $A\mathbf{x}=\mathbf{b}$. 
	- **Row Picture:** It can be represented by two lines which intersect at a single point $(1,2)$ 
	- **Column Picture:** It can be represented as the [[Note 1.3 Matrix Arithmetic#^1dc923|linear combination]] of the column vectors of $\begin{pmatrix}2&-1 \\ -1&2\end{pmatrix}$ .
- **$n\times n$ System:** To a linear system$$\begin{align*}&a_{11}x_1+a_{12}x_2+\cdots+a_{1n}x_n=b_1\\&a_{21}x_1+a_{22}x_2+\cdots+a_{2n}x_n=b_2\\&\vdots\\&a_{m1}x_1+a_{m2}x_2+\cdots+a_{mn}x_n=b_m\end{align*}$$ with $m$ equations and $n$ unknowns.
	- **Row Picture:** Every equations represents a $n-1$ hyperplane in the $n$-dimensional space. If the system has a solution, it will be the common intersection point.
	- **Column Picture:** It can be represented as the linear combination of the column vectors of $A$. The system has a solution if and only if $b$ can be represented as the linear combination of the column vectors of $A$.

## **Section 1.1 Exercises**

-  [[Linear_Algebra_Textbook.pdf#page=26&selection=231,0,232,0|question 9th]]
	- The equation system is equivalent to $$\begin{cases}-m_{1}x_{1}  +x_{2} = b_{1} \\ (m_{1}-m_{2})x_{1}=(b_{2}-b_{1}) \end{cases}$$if $m_{1}\ne m_{2}$, then $x_{1}=\frac{b_{1}-b_{2}}{m_{1}-m_{2}}$, and $x_{2}$ has a unique corresponding value. Then the system will have a unique solution.
	- If $m_{1}=m_{2}$, then $-m_{1}x_{1}+x_{2}=-m_{2}x_{1}+x_{2}$. So if we subtract the equation (2) from the equation (1),$$0=b_{1}-b_{2}$$so the system will be consistent if and only if $b_{1}=b_{2}$.
	- For part (a), if $m_{1}\ne m_{2}$, the two equations are two lines with different slope and the intersection will be unique, which is the unique solution of the system.<br> For part (b), if $m_{1}=m_{2}$, the two lines will be parallel or the same line. And they have intersections only if they are the same line, which is $b_{1}=b_{2}$.