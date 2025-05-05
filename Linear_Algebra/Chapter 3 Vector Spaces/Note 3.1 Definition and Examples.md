---
Date: 2025-03-25T14:42:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=125&selection=26,0,28,22|The link of chapter 3.1, Linear Algebra]]"
---
## **Euclidean Vector Spaces**

- **Geometric Representation of Vectors in $\mathbb{R}^{2}$:**
	Given a nonzero vector $\mathbf{x}=\begin{pmatrix}x_{1}  \\ x_{2}\end{pmatrix}$, then $\mathbf{x}$ can be any line segment from $(a,b)$ to $(a+x_{1},b+x_{2})$. 
	And its Euclidean length is the length of the directed line segment $\sqrt{ x_{1}^{2}+x_{2}^{2} }$. 
	For each scalar $\alpha$, the product $\alpha \mathbf{x}$ is defined by $\alpha \begin{pmatrix}x_{1} \\ x_{2} \end{pmatrix}=\begin{pmatrix}\alpha x_{1} \\ \alpha x_{2}\end{pmatrix}$ and the sign of $\alpha$ determine the direction of $\alpha \mathbf{x}$. 
	And the addition of two vector $\mathbf{u},\mathbf{v}$ then $\mathbf{u+v}$ is represented by the directed line segment from the initial point of $\mathbf{u}$ to the terminal point of $\mathbf{v}$ when we place the initial point of $\mathbf{v}$ at the terminal point of $\mathbf{u}$. And $\mathbf{u+v}=\begin{pmatrix}u_{1}+v_{1} \\ u_{2}+v_{2}\end{pmatrix}$.
- **Algebraic Representation of the Scalar Multiplication and Addition**
	- For Multiplication:
		$$\alpha \mathbf{x}=\begin{pmatrix}\alpha x_{1} \\\alpha x_{2} \\\vdots \\\alpha x_{n} \end{pmatrix}$$
	- For Addition:
		$$\mathbf{x+y}=\begin{pmatrix}x_{1}+y_{1} \\x_{2}+y_{2} \\\vdots \\x_{n}+y_{n}\end{pmatrix}$$
	for any $\mathbf{x,y}\in\mathbb{R}^{n}$ and any scalar $\alpha$.

## **The Vector Space $\mathbb{R}^{m\times n}$**

- **Definition**
	Let $\mathbb{R}^{m\times n}$ denote the set of all $m\times n$ matrices with real entries thus the operation will obey certain algebraic rules.

## **Vector Space Axioms**

- **Definition of Vector Space**
> [!info] [[Linear_Algebra_Textbook.pdf#page=128&selection=171,0,503,1|Definition]]
> > Let $V$ be a set on which the operations of addition and scalar multiplication are defined. By this we mean that, with each pair of elements $\mathbf{x}$ and $\mathbf{y}$ in $V$ , we can associate a unique element $\mathbf{x+y}$ that is also in $V$ , and with each element $\mathbf{x}$ in $V$ and each scalar $\alpha$, we can associate a unique element $\alpha \mathbf{x}$ in $V$ . The set $V$ , ==together with the operations of addition and scalar multiplication==, is said to form a ==vector space== if the following axioms are satisfied: 
> > A1. $\mathbf{x+y=y+x}$ for any $\mathbf{x}$ and $\mathbf{y}$ in $V$ . 
> > A2. $\mathbf{(x+y)+z=x+(y+z)}$ for any $\mathbf{x,y}$ and $\mathbf{z}$ in $V$ . 
> > A3. There exists an element $\mathbf{0}$ in V such that $\mathbf{x+0=x}$ for each $\mathbf{x}\in V$. 
> > A4. For each $\mathbf{x}\in V$ , there exists an element $-\mathbf{x}$ in $V$ such that $\mathbf{x+(-x)=0}$. 
> > A5. $\mathbf{\alpha (x+y)=\alpha x+\alpha y}$ for each scalar $\alpha$ and any $\mathbf{x}$ and $\mathbf{y}$ in $V$ . 
> > A6. $\mathbf{(\alpha+\beta)x=\alpha x+\beta x}$ for any scalars $\alpha$ and $\beta$ and any $\mathbf{x}\in V$ . 
> > A7. $\mathbf{(\alpha\beta)x=\alpha(\beta x)}$ for any scalars $\alpha$ and $\beta$ and any $\mathbf{x}\in V$ . 
> > A8. $1\cdot \mathbf{x=x}$ for all $\mathbf{x}\in V$ .

- **Remarks**
	- An important component of the definition is the closure properties of the two operations. that is, 
		- If $\mathbf{x}\in V$ and $\alpha$ is a scalar, then $\alpha \mathbf{x}\in V$.
		- If $\mathbf{x,y}\in V$, then $\mathbf{x+y}\in V$.
	- Closure property is that the operation result of the elements in certain set is still in that set.

## **The Vector Space $C[a,b]$**

- **Definition**
	$C[a,b]$ denote the set of all real-valued functions that are defined and continuous on the interval $[a,b]$. And the vectors are the functions in $C[a,b]$. The sum $f+g$ of two functions in $C[a,b]$ is defined by $(f+g)(x)=f(x)+g(x)$. Let $\alpha$ is a real number, then we define $\alpha f$ by $(\alpha f)(x)=\alpha f(x)$. Clearly they are in $C[a,b]$.
- **Proof of Vector Space**
	1. $(f+g)(x)=f(x)+g(x)=g(x)+f(x)=(g+f)(x)$.
	2.  $[f+(g+z)](x)=f(x)+(g+z)(x)=f(x)+g(x)+z(x)=(f+g)(x)+z(x)=[(f+g)+z](x)$
	3. Let $z(x)=0$ for all $x$ in $[a,b]$, then $f+z=f$ for all $f$ in $C[a,b]$.
	4. Let $\alpha=-1$, then $(\alpha f)(x)=(-f)(x)=-f(x)$, then $[f+(-f)](x)=f(x)-f(x)=0$ for all $x$ in $[a,b]$.
	5. $\alpha(f+g)(x)=\alpha(f(x)+g(x))=\alpha f(x)+\alpha g(x)$.
	6. $[(\alpha+\beta)f](x)=(\alpha+\beta)f(x)=\alpha f(x)+\beta f(x)$.
	7. $[(\alpha\beta)f](x)=(\alpha\beta)f(x)=\alpha(\beta f(x))=[\alpha(\beta f)](x)$
	8. Let $\alpha=1$, then $1\cdot f=f$.

## **The Vector Space $P_{n}$**

- **Definition**
	$P_{n}$ denote the set of all polynomials of degree less than $n$. And define $p+q$ and $\alpha p$ respectively by $(p+q)(x)=p(x)+q(x)$ and $(\alpha p)(x)=\alpha p(x)$. The zero vector is $z(x)=0x^{n-1}+0x^{n-2}+\cdots+0$.

## **Additional Properties of Vector Spaces**

- **Theorem 3.1.1**
	If $V$ is a vector space and $\mathbf{x}$ is any element of $V$, then 
	- $0\mathbf{x}=\mathbf{0}$.
	- $\mathbf{x+y=0}$ implies that $\mathbf{y=-x}$.
	- $(-1)\mathbf{x}=-\mathbf{x}$.

## **Exercise Section 3.1**

- [[Linear_Algebra_Textbook.pdf#page=132&selection=137,0,138,0|Question 16th]]
	Definition
		In general, two vector spaces are said to be ==isomorphic== if their elements can be put into a one-to-one correspondence that is preserved under scalar multiplication and addition as $\alpha p\leftrightarrow\alpha \mathbf{a}$ and $p+q\leftrightarrow \mathbf{a+b}$.