---
Date: 2025-03-28T15:31:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=136&selection=79,1,80,4&color=yellow|The link of chapter 2.1, Discrete Mathematic]]"
---
## **Introduction**

In this section, we study the set which is the fundamental discrete structure on which all other discrete structures are built.

- **Definition of Set(Intuitive Definition)**
	A set is an unordered collection of objects, called elements or members of the set. A set is said to contain its elements. We write $a\in A$ to denote that $a$ is an element of the set $A$. The notation $a\notin A$ denotes that $a$ is not an element of the set $A$.
	It is common for sets to be denoted using uppercase letters. Lowercase letters are usually used to denote elements of sets.
- **Ways to Describe a Set**
	- **Roster Method**
		A notation where all members of the set are listed between braces. 
	- **Set Builder Notation**
		We characterize all those elements in the set by stating the property or properties they must have to be members.
- **Some Special Sets**
	$$\begin{align} & \mathbf{N}=\{0,1,2,\cdots\}\text{, the set of}\mathbf{\;natural\;numbers} \\ &\mathbf{Z}=\{\cdots,-1,0,1,\cdots\}\text{, the set of}\mathbf{\;integers} \\ & \mathbf{Z^{+}}=\{1,2,\cdots\}\text{, the set of}\mathbf{\;positive\;numbers} \\ &\mathbf{Q}=\left\{  \frac{p}{q}|p\in \mathbf{Z},q\in \mathbf{Z},q\ne0 \right\}\text{, the set of}\mathbf{\;rational\;numbers} \\ &\mathbf{R}\text{, the set of}\mathbf{\;real\;numbers} \\ &\mathbf{R^{+}}\text{, the set of}\mathbf{\;positive\;real\;numbers} \\ & \mathbf{C}\text{, the set of}\mathbf{\;complex\;numbers} \end{align}$$
- **Intervals**
	closed interval and open interval
- **Datatype in Computer Science**
	a datatype or type is the name of a set, together with a set of operations that can be performed on objects from that set.
- **Equal Sets**
	Two sets are equal if and only if they have the same elements. Therefore, if $A$ and $B$ are sets, then $A$ and $B$ are equal if and only if $\forall x(x\in A\leftrightarrow x\in B)$. We write $A=B$ if $A$ and $B$ are equal sets.
- **Empty Set(Null Set) and Singleton Set**
	There is a special set that has no elements. This set is called the empty set, or null set, and is denoted by $\emptyset$. It can be denoted by $\{ \;\}$ or a set of elements with certain properties turns out to be the null set. 
- **Naive Set Theory**
	Note that the term object has been used in the definition of a set without specifying what an object is. And the description of a set as a collection of objects based on the intuitive notation of a object. So it might lead to ==paradoxes== that there exists a set containing the objects with the same property no matter the property is. And the theory to use intuitive notion is Naive Set theory.

## **Venn Diagrams**

In Venn diagrams ==the universal set $U$==, which contains all the objects under consideration, is represented by a rectangle. And circles or other geometrical figures are used to represent sets inside the rectangle.  Sometimes points are used to represent the particular elements of the set.

![[Example for Venn Diagrams.png]]

## **Subsets**

- **Definition of Subsets**
	The set $A$ is a subset of $B$ if and only if every element of $A$ is also an element of $B$. We use the notation $A\subseteq B$ to indicate that $A$ is a subset of the set $B$.
	And $A\subseteq B$ is equivalent to $$\forall x(x\in A\to x\in B)$$is true. 
	And if $x$ belongs to $A$ then $x$ also belongs to $B$, then we can prove $A$ is a subset of $B$. If find a single $x\in A$ such that $x\notin B$, then we can prove $A$ is not a subset of $B$.
	To show two sets are equal, we can prove that $A\subseteq B\text{ and }B\subseteq A$.
- **Theorem 1**
	For every set $S$, 
	- $\emptyset\subseteq S$
	- $S\subseteq S$
- **Proper Subset**
	If a set $A$ is a subset of $B$ and $A\neq B$, we write $A\subset B$ and say $A$ is a proper subset of $B$. That is equivalent to $$\forall x(x\in A\to x\in B)\wedge \exists x(x\in B\wedge x\notin A)$$ is true.

## **The Size of a Set**

- **Definition of the size of set**
	Let $S$ be a set. If there are exactly $n$ distinct elements in $S$ where $n$ is a nonnegative integer, we say that $S$ is a ==finite set== and that $n$ is the ==cardinality== of $S$. The cardinality of $S$ is denoted by $|S|$.
- **Definition of Infinite Set**
	A set is said to be infinite if it is not finite.

## **Power Sets**

- **Definition of Power Sets**
	Given a set $S$, the power set of $S$ is the set of all subsets of the set $S$. And it is denoted by $\mathcal{P}(S)$.
- **Remarks**
	If a set has $n$ elements, then its power set has $2^{n}$ elements. 

## **Cartesian Products**

- **Definition of ordered $n$-tuples**
	The ordered $n$-tuple $(a_{1},a_{2},\cdots,a_{n})$ is the ordered collection that corresponding element is fixed on the corresponding position.
	We say that two ordered $n$-tuples are equal if and only if each corresponding pair of their elements is equal.
	In particular, the ordered $2$-tuples are called ordered pairs.
- **Definition of Cartesian Products**
	Let $A$ and $B$ be sets. The Cartesian product of $A$ and $B$, denoted by $A\times B$, is the set of all ordered pairs $(a,b)$, where $a\in A$ and $b\in B$. Hence, $$A\times B=\{ (a,b)\;|\;a\in A\wedge b\in B \}$$
	Note that Cartesian product does not satisfy the commutative law and associative law generally, that is, $A\times B$ not equals to $B\times A$ unless $A=\emptyset$ or $B=\emptyset$ or $A=B$ and $A\times B\times C\ne(A\times B)\times C\ne A\times(B\times C)$.
	For the sets $A_{1},A_{2},\cdots,A_{n}$, its Cartesian product is the set of ordered $n$-tuples $(a_{1},a_{2},\cdots,a_{n})$ where $a_{i}$ belongs to $A_{i}$ for $i=1,2,\cdots,n$. That is, $$A_{1}\times A_{2}\times \cdots\times A_{n}=\{ (a_{1},a_{2},\cdots,a_{n})|a_{i}\in A_{i}, i=1,2,\cdots,n \}$$ And $A^{n}$ represents the Cartesian product of $n$ $A$. 
- **Definition of Relation**
	A subset $R$ of the Cartesian product $A\times B$ is called a relation from the set $A$ to the set $B$.  A relation from a set $A$ to itself is called a relation on $A$.

## **Using Set Notation with Quantifiers**

Sometimes we can restrict the domain of a quantified statement explicitly by making use of a particular notation. For example, $$\forall x\in S(P(x))$$

## **Truth Sets and Quantifiers**

Given a predicate $P$ and a domain $D$, we define the truth set of $P$ to be the set elements $x$ in $D$ for which $P(x)$ is true and denoted by $\{ x\in D|P(x) \}$.