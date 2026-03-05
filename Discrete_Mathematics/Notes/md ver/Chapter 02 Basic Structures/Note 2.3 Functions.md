---
Date: 2025-03-30T20:40:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=159&selection=680,0,680,9|The link of chapter 2.3, Discrete Mathematics]]"
---
## **Introduction**

In this section, we will understand what is function and its properties.

- **Definition of Function**
	Let $A$ and $B$ be nonempty sets. A function $f$ from $A$ to $B$ is an assignment of exactly one element of $B$ to each element of $A$. We write $f(a)=b$ if $b$ is the unique element of $B$ assigned by the function $f$ to the element $a$ of $A$. If $f$ is a function from $A$ to $B$, we write $f:A\to B$.
	Sometimes functions are called mappings and transformations.
- **Definition of Important Concepts in Functions**
	If $f$ is a function from $A$ to $B$, we say that $A$ is the ==domain== of $f$ and $B$ is the ==codomain== of $f$. If $f(a)=b$, we say that $b$ is the ==image== of $a$ and $a$ is a ==preimage== of $b$. The ==range==, or image, of $f$ is the set of all images of elements of $A$. Also, if $f$ is a function from $A$ to $B$, we say that $f$ ==maps== $A$ to $B$.
	And we can know the range is the ==subset== of codomain.
	Two functions are equal when they have the same domain, have the same codomain, and map each element of their common domain to the same element in their common codomain.
- **Definition of Real-Valued and Integer-Valued Functions and Its Computation**
	A function is called real-valued if its ==codomain== is the set of real numbers, and it is called integer-valued if its codomain is the set of integers. 
	Let $f_{1}$ and $f_{2}$ be functions from $A$ to $\mathbf{R}$ or $\mathbf{Z}$, then $f_{1}+f_{2},f_{1}f_{2}$ are also functions from $A$ to $\mathbf{R}$ or $\mathbf{Z}$ defined for all $x\in A$ by $$(f_{1}+f_{2})(x)=f_{1}(x)+f_{2}(x),(f_{1}f_{2})(x)=f_{1}(x)f_{2}(x)$$
- **Definition of Image of Sets**
	Let $f$ be a function from $A$ to $B$ and let $S$ be a subset of $A$. The image of $S$ under the function $f$ is the subset of $B$ that consists of the images of the elements of $S$. We denote the image of $S$ by $f(S)$, so $$f(S)=\{ t|\exists s\in S(t=f(s)) \}$$or $\{ f(s)|s\in S \}$.

## **One-to-One and Onto Functions**

- **Definition of One-to-One Function**
	A function $f$ is said to be one-to-one, or an ==injunction==, if and only if $f(a)=f(b)$implies that $a=b$ for all $a$ and $b$ in the domain of $f$. A function is said to be ==injective== if it is one-to-one.
	![[One-to-One function.png]]
	That is, $$\forall a\forall b(f(a)=f(b)\to a=b)\text{ or }\forall a\forall b(a\ne b\to f(a)\ne f(b))$$
- **Definition of Increasing and Decreasing Functions**
	A function $f$ whose domain and codomain are subsets of the set of real numbers is called increasing if $f(x)\leq f(y)$, and strictly increasing if $f(x)<f(y)$, whenever $x<y$ and $x$ and $y$ are in the domain of $f$. That is, increasing if $\forall x\forall y(x<y\to f(x)\leq f(y))$ and strictly increasing if $\forall x\forall y(x<y\to f(x)< f(y))$.
	Similarly, $f$ is called decreasing if $f(x)\geq f(y)$, and strictly decreasing if $f(x)>f(y)$, whenever $x<y$ and $x$ and $y$ are in the domain of $f$. (The word strictly in this definition indicates a strict inequality.) That is, increasing if $\forall x\forall y(x<y\to f(x)\geq f(y))$ and strictly increasing if $\forall x\forall y(x<y\to f(x)> f(y))$.
- **Definition of Onto Function**
	A function $f$ from $A$ to $B$ is called onto, or ==surjection==, if and only if for every element $b\in B$ there is an element $a\in A$ with $f(a)=b$. And a function $f$ is called ==surjective== if it is onto.
	And we can know that the codomain and the range are the same set.
	![[Onto function.png]]
	That is, $$\forall y\exists x(f(x)=y)$$
- **Definition of One-to-One Correspondence**
	The function $f$ is a one-to-one correspondence, or a ==bijection==, if it is both one-to-one and onto. We also say that such a function is ==bijective==.

## **Inverse Functions and Compositions of Functions**

- **Definition of Inverse Functions**
	Let $f$ be a one-to-one correspondence from the set $A$ to the set $B$. The inverse function of $f$ is the function that assigns to an element $b$ belonging to $B$ the unique element $a$ in $A$ such that $f(a)=b$. The inverse function of $f$ is denoted by $f^{-1}$. Hence, $f^{-1}(b)=a$ when $f(a)=b$.
	Sometimes we can restrict the domain or the codomain of a function, or both, to obtain an invertible function.
	![[The inverse functions.png]]
- **Definition of Composition of functions**
	Let $g$ be a function from the set $A$ to the set $B$ and let $f$ be a function from the set $B$ to the set $C$. The composition of the functions $f$ and $g$, denoted for all $a\in A$ by $f\circ g$, is defined by $$(f\circ g)(a)=f(g(a))$$
	![[Composition of functions.png]]

## **The Graphs of Functions**

- **Definition of Graph**
	Let $f$ be the function from the set $A$ to the set $B$, the graph of the function $f$ is the set of ordered pairs $\{ (a,b)|a\in A\text{ and } f(a)=b \}$.

## **Some Important Functions**

- **Floor Function and Ceiling Function**
	The floor function assigns to the real number $x$ the largest integer that is less than or equal to $x$. The value of the floor function at $x$ is denoted by $\lfloor x \rfloor$. It also called the greatest integer function, denoted by $[x]$.
	The ceiling function assigns to the real number $x$ the smallest integer that is greater than or equal to $x$. The value of the ceiling function at x is denoted by $\lceil x \rceil$.
- **Factorial Function**
	$f:\mathbf{N}\to \mathbf{Z}^{+}$, $f(n)=n!$.

## **Partial Functions**

- **Definition of Partial Functions**
	A partial function $f$ from a set $A$ to a set $B$ is an assignment to each element $a$ in a subset of $A$, called the domain of definition of $f$ , of a unique element $b$ in $B$. The sets $A$ and $B$ are called the domain and codomain of $f$, respectively. We say that $f$ is undefined for elements in $A$ that are not in the domain of definition of $f$ . When the domain of definition of $f$ equals $A$, we say that $f$ is a ==total function==.