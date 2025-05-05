---
Date: 2025-03-30T18:12:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=148&selection=6,0,6,14|The link of chapter 2.2, Discrete Mathematics]]"
---
## **Introduction**

This section, we will learn the ways to combine the sets.

- **Definition of Union**
	Let $A$ and $B$ be sets. The union of the sets $A$ and $B$, denoted by $A\cup B$ is the set that contains those elements that are either in $A$ or in $B$, or in both. That is, $$A\cup B=\{ x|x\in A\vee x\in B \}$$ 
	![[Venn Diagram of the Union.png]]
- **Definition of Intersection**
	Let $A$ and $B$ be sets. The intersection of the sets $A$ and $B$, denoted by $A\cap B$, is the set containing those elements in both $A$ and $B$. That is, $$A\cap B=\{ x|x\in A\wedge x\in B \}$$
	![[Venn Diagram of the Intersection.png]]
- **Definition of Disjoint**
	Two sets are called disjoint if their intersection is the empty set.
- **The Principle of Inclusion-Exclusion**
	For two sets $A$ and $B$, $$|A\cup B|=|A|+|B|-|A\cap B|$$
- **Definition of Difference**
	Let $A$ and $B$ be sets. The difference of $A$ and $B$, denoted by $A-B$, is the set containing those elements that are in $A$ but not in $B$. The difference of $A$ and $B$ is also called the complement of $B$ with respect to $A$. That is, $$A-B=\{ x|x\in A\wedge x\notin B \}$$
	![[Venn Diagram of the Difference.png]]
- **Definition of Complement**
	Let $U$ be the universal set. The complement of the set $A$, denoted by $\overline{A}$, is the complement of $A$ with respect to $U$. Therefore, the complement of the set $A$ is $U-A$. That is, $$\overline{A}=\{ x|x\in U\wedge x\not\in A \}$$and there exists $$A-B=A\cap \overline{B}$$

## **Set Identities**

| Table 1                                                                                               | Set Identities      |
| ----------------------------------------------------------------------------------------------------- | ------------------- |
| **Identity**                                                                                          | **Name**            |
| $A\cap{U}=A , A\cup\emptyset=A$                                                                       | Identity laws       |
| $A\cup{U}=U , A\cap\emptyset=\emptyset$                                                               | Domination laws     |
| $A\cup{A}=A , A\cap{A}=A$                                                                             | Idempotent laws     |
| $\overline{(\overline{A})}=A$                                                                         | Complementation law |
| $A\cup{B}=B\cup{A} , A\cap{B}=B\cap{A}$                                                               | Commutative laws    |
| $A\cup(B\cup{C})=(A\cup{B})\cup{C} , A\cap(B\cap{C})=(A\cap{B})\cap{C}$                               | Associative laws    |
| $A\cup(B\cap{C})=(A\cup{B})\cap(A\cup{C}) , A\cap(B\cup{C})=(A\cap{B})\cup(A\cap{C})$                 | Distributive laws   |
| $\overline{A\cap{B}}=\overline{A}\cup\overline{B} , \overline{A\cup{B}}=\overline{A}\cap\overline{B}$ | De Morgan’s laws    |
| $A\cup(A\cap{B})=A , A\cap(A\cup{B})=A$                                                               | Absorption laws     |
| $A\cup\overline{A}=U , A\cap\overline{A}=\emptyset$                                                   | Complement laws     |
## **Generalized Unions and Intersections**

- **Definition of Union for More Sets**
	The union of a collection of sets is the set that contains those elements that are members of at least one set in the collection. And we use $$A_{1}\cup A_{2}\cup \cdots\cup A_{n}=\bigcup^{n}_{i=1}A_{i}$$to denote the union of the sets $A_{1},A_{2},\cdots,A_{n}$.
- **Definition of Intersection for More Sets**
	The intersection of a collection of sets is the set that contains those elements that are members of all the sets in the collection. And we use $$A_{1}\cap A_{2}\cap \cdots\cap A_{n}=\bigcap^{n}_{i=1}A_{i}$$to denote the intersection of the sets $A_{1},A_{2},\cdots,A_{n}$. 

## **Computer Representation of Sets**

The sets stored in the computer use a method for storing elements using an arbitrary ordering of the elements of the universal set. Let the universal set $U$ is finite. First, specify an arbitrary ordering of the elements of $U$, for instance $a_{1},a_{2},\cdots,a_{n}$. Then represent a subset $A$ of $U$ with the bit string of length $n$, where the $i$th bits in this string is $1$ if $a_{i}$ belongs to $A$ and $0$ if $a_{i}$ does not belong to $A$.