---
Date: 2025-04-07T09:57:00
tags:
  - Advanced_Math_notes
link: "[[Linear_Algebra_Textbook.pdf#page=132&selection=260,0,260,9|The link of chapter 3.2, Linear Algebra]]"
---
- **Definition of Subspace**
	If $S$ is a nonempty subset of a vector space $V$, and $S$ satisfies the conditions 
	- $\alpha \mathbf{x}\in S$ whenever $x\in S$ for any scalar $\alpha$. 
	- $\mathbf{x}+\mathbf{y}\in S$ whenever $\mathbf{x}\in S$ and $\mathbf{y}\in S$.
	then $S$ is said to be a ==subspace== of $V$. And every subspace of a vector space is a vector space in its own right.
- **Remarks**
	- Since $0\cdot \mathbf{x}=\mathbf{0}$, $\mathbf{0}\in S$.
	- We define the $\{\mathbf{0}\}$ as the ==zero subspace== and the subspaces excluding zero subspace and $V$ itself is ==proper subspace==.
	- To show a subset $S$ of a vector space is a subspace, we need to prove that $S$ is nonempty and that its closure properties in the definition. Since every subspace must contain the zero space, we can verify that $S$ is nonempty by showing that $\mathbf{0}\in S$.

## **The Null Space of a Matrix**

- **Definition**
	Let $A$ be an $m\times n$ matrix. Let $N(A)$ denote the set of all solutions of the homogeneous system $A\mathbf{x}=\mathbf{0}$. That is, $$N(A)=\{ \mathbf{x}\in\mathbb{R}^{n}|A\mathbf{x}=\mathbf{0} \}$$ and we call it the ==null space== of $A$.
	Proof of subspace:
		Clearly $\mathbf{0} \in N(A)$ thus it is a nonempty set. For any $\mathbf{x}\in S$ and any scalar $\alpha$, $A\alpha\mathbf{x}=\alpha A\mathbf{x}=\alpha \mathbf{0}=\mathbf{0}$ hence the first property satisfies. And for $\mathbf{x,y}\in A$, $A(\mathbf{x}+\mathbf{y})=A\mathbf{x}+A\mathbf{y}=\mathbf{0}+\mathbf{0}=\mathbf{0}$ hence the second property satisfies and it is a subspace of $\mathbb{R}^{n}$.

## **The Span of a Set of Vectors**

- **Definition**
	Let $\mathbf{v_{1},v_{2},\cdots,v_{n}}$ be the vectors in a vector space $V$. A sum of the form $\alpha_{1}\mathbf{v}_{1}+\alpha_{2}\mathbf{v}_{2}+\cdots+\alpha _n\mathbf{v}_{n}$ where $\alpha_{k}$ is scalars is called a ==linear combination== of $\mathbf{v_{1},v_{2},\cdots,v_{n}}$. The set of all linear combinations of $\mathbf{v_{1},v_{2},\cdots,v_{n}}$ is called the ==span== of $\mathbf{v_{1},\cdots,v_{n}}$, devoted by $\text{Span}(\mathbf{v_{1}},\cdots,\mathbf{v}_{n})$.
- **Theorem 3.2.1**
	If $\mathbf{v_{1},v_{2},\cdots,v_{n}}$ are the elements of a vector space $V$, then $\text{Span}(\mathbf{v_{1},\cdots,v_{n}})$ is a subspace of $V$.
	Proof:
		Clearly the span is a nonempty set. For the first property, suppose $\beta$ is arbitrary scalar, then $$\beta(\alpha_{1}\mathbf{v}_{1}+\alpha_{2}\mathbf{v}_{2}+\cdots+\alpha_{n}\mathbf{v}_{n})=\alpha_{1}\beta \mathbf{v}_{1}+\alpha_{2}\beta \mathbf{v}_{2}+\cdots+\alpha _{n}\beta \mathbf{v}_{n}$$ is also the linear combination of those vectors. For the second property, $$a_{1}\mathbf{v}_{1}+\cdots+a_{n}\mathbf{v}_{n}+b_{1}\mathbf{v}_{1}+\cdots+b_{n}\mathbf{v}_{n}=(a_{1}+b_{1})\mathbf{v}_{1}+\cdots+(a_{n}+b_{n})\mathbf{v}_{n}$$ is also the linear combination of those vectors.
- **Geometric Representation for $\mathbb{R}^{3}$**
	In $\mathbb{R}^{3}$, the span of $\mathbf{e}_{1}$ and $\mathbf{e}_{2}$ represents the set of all vectors in $3$-space in the $x_{1}x_{2}$-plane. And a vector $\mathbf{x}$ in $\mathbb{R}^{3}$ is in $\text{Span}(\mathbf{e}_{1},\mathbf{e}_{2})$ if and only if it lies in the $x_{1}x_{2}$-plane in $3$-space. Similarly, given two vectors $\mathbf{x},\mathbf{y}$ which are not collinear and not zero vector, then they can form a plane and it is the representation of $\text{Span}(\mathbf{x},\mathbf{y})$. 

## **Spanning Set for a Vector Space**

- **Definition**
	The set $\{ \mathbf{v_{1},\cdots,v_{n}} \}$ is a ==spanning set== for $V$ if and only if every vector in $V$ can be written as a linear combination of $\mathbf{v}_{1},\cdots,\mathbf{v}_{n}$.

## **Exercise Section 3.2**

- [[Linear_Algebra_Textbook.pdf#page=140&selection=672,0,673,1&color=yellow|Question 5th]]
	- Suppose $p(x)=x^{4},q(x)=-x^{4}+x^{3}$(The even degree means the leading term has even degree), then their sum is not in the set so it is not subspace.
	- Since zero vector is not in the set, the set is not the subspace of $P_{4}$.
	- The set is the polynomials whose constant is zero and it satisfies the closure property and nonempty. So it is the subspace.
	- For $p(x),q(x)$, if their sum is a constant or their root is not the same, they will not have at least one real root. So it is not the subspace.
- [[Linear_Algebra_Textbook.pdf#page=141&selection=1112,0,1112,2|Question 18th]]
	Since $\mathbf{0 }\in S$, if $S\ne \{ \mathbf{0} \}$, then we suppose $\mathbf{a}\in S$. Since for every vector $\mathbf{s}\ne \mathbf{0}$, we have $\alpha \mathbf{a}=\frac{s}{a}\mathbf{a}=\mathbf{s}$. So $S=\{ \mathbf{0} \}$ or $\mathbf{S}=\mathbb{R}^{1}$.
- [[Linear_Algebra_Textbook.pdf#page=141&selection=1233,0,1233,2|Question 21st]]
	The element in $S$ is the linear combination of $\mathbf{e}_{1}$ and in $T$ is $\mathbf{e}_{2}$'s. Since for $\mathbf{x}\in S,\mathbf{y}\in T$, $\mathbf{x}+\mathbf{y}=\alpha \mathbf{e}_{1}+\beta \mathbf{e}_{2}$, which is not in $S$ or $T$. So it is not a subspace.
- [[Linear_Algebra_Textbook.pdf#page=141&selection=1349,0,1350,0|Question 23rd]]
	Actually, the two are not right in general. Note that the ==plus== is not the same as the ==disjunction==. 