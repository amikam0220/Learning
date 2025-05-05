---
Date: 2025-02-04T11:04:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=26&selection=414,0,414,16|The link of chapter 1.2, Linear Algebra]]"
---



## **The Definition of Row Echelon Form**

- **lead variables:** 
	variables corresponding to the first nonzero elements in each row of the reduced matrix.
- **free variables:** 
	variables corresponding to the skipped column in the reduction process.

- **definition**
	- The first nonzero entry in each nonzero row is 1.
	- The row $k$ that consists of not entirely zeros must has less number of the leading zero entries than the row $k+1$.
	- Rows whose entries are all zero are below the rows having nonzero entries.
	- Example:$$\begin{pmatrix}1&4&2\\0&1&3\\0&0&1\end{pmatrix},\begin{pmatrix}1&2&3\\0&0&1\\0&0&0\end{pmatrix},\begin{pmatrix}1&3&1&0\\0&0&1&3\\0&0&0&0\end{pmatrix}.$$are in the row echelon form and$$\begin{pmatrix}2&4&6\\0&3&5\\0&0&4\end{pmatrix},\begin{pmatrix}0&0&0\\0&1&0\end{pmatrix},\begin{pmatrix}0&1\\1&0\end{pmatrix}$$ are not in the row echelon form.
- **Gaussian elimination:** 
	The process of using [[Note 1.1 Systems of Linear Equations#^6606f3|elementary row operations]] to transform a linear system into one whose augmented matrix is in row echelon form.(reference: [[Note 1.1 Systems of Linear Equations#^ca7c63|Elimination]])
## **Overdetermined Systems**

 -  **Definition:** A linear systems whose equations are more than unknowns. (In matrix, suppose that there are $m$ rows and $n$ columns, then $m>n$.)
-  **Features:** usually inconsistent.(not always)
- **Example:**

	$$\left(\begin{array}{cc|c}1&2&1\\2&3&4\\2&1&3\end{array}\right)$$

## **Underdetermined Systems**

-  **Definition:**

	A linear system whose equations are less than unknowns.(In matrix, suppose that there are $m$ rows and $n$ columns, then $m<n$.)


-  **Features**

	- usually consistent and not possible to have a unique solution.
	- Suppose that there are $m$ linear equations in $n$ unknowns and $r$ nonzero rows, there will be $r$ lead variables and $n-r$ free variables, where $n-r\geqslant n-m>0$.

-  **Example**

	$$\left(\begin{array}{ccc|c}1&2&1&1\\2&-1&1&2\end{array}\right)$$
## **Reduced Row Echelon Form**

- **Definition**

	- In row echelon form.
	- The first nonzero entry in each row is the only nonzero entry in its column.

-  **Example**

	$$\begin{pmatrix}1&0&0&3\\0&1&0&2\\0&0&1&1\end{pmatrix}$$

## **Application 1 Traffic Flow**

- **Strategy:** The number of entering equals to the number of leaving at each intersection.
- **Example:** [[Linear_Algebra_Textbook.pdf#page=33&selection=41,0,41,12|The example of traffic flow]]

## **Application 2 Electrical Networks**

- **Strategy:** Kirchhoff's Laws: the sum of inputting currents equals the sum of outputting currents at every node and the algebraic sum of volt gains equals to the algebraic sum of volt drops.
- **Example:** [[Linear_Algebra_Textbook.pdf#page=34&selection=5,1,38,12|The example of electrical networks]]

## **Homogeneous Systems**

- **Definition:** A system of linear equations whose constants on the right hand side are all zero.
- **Feature:** Always consistent and has a solution that is all variables equal to zero.
- **Theorem 1.2.1:** A $m\times n$ homogeneous system of linear equations has a nontrivial solution if $n>m$. ^370df8
- **Remark:** A $m \times n$ homogeneous system of linear equations has a unique solution that is all variables equals to zero.

## **Application 3 Chemical Equations**

- **Strategy:** Use homogeneous system to find the nontrivial solution to balance the chemical equation.

## **Application 4 Economic Models for Exchange of Goods**

- **Strategy:** Turn the economic model that the inputting value equals to the outputting value into a linear system of equations.

## **Section 1.2 Exercises**

- [[Linear_Algebra_Textbook.pdf#page=39&selection=1316,0,1317,0|question 7th]]
	- The equations in three unknowns in a homogeneous linear system are planes in the three-dimensional space intersecting the original point. 
	 If a equation is the multiple of another, then the two plane are indeed the same plane. Then they will have infinitely many solutions on the plane.
	 If a equation is not the multiple of another, then the two plane will intersect at a line crossing the original point. All the points on the line is the solutions so they will also have infinitely many solutions.
	- There might be no solutions or infinitely many solutions.
	 The equations in a non-homogeneous $2\times3$ linear system are the planes in the three-dimensional space not intersecting the original point.
	 The two plane might be parallel, intersect in a line or be the same plane. When parallel, they have no solutions. When intersecting in a line or being the same plane, they have infinitely many solutions.
