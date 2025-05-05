---
Date: 2025-03-14T14:31:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=57&selection=930,0,930,25|The link of chapter 1.4, Discrete Mathematics]]"
---
## **Introduction**

This section we need to know a type of logic called predicate logic and know how it can be used to express the meaning of a wide range of statement in mathematics and computer science.

## **Predicates**

- **Definition of Predicates:**
	The part of a statement as a property that the subject of the statement have.
	For example, in the statement $\text{x>3}$ the second part "is greater than 3" is Predicates.
- **Definition of Propositional Functions:**
	A statement of the form $P(x_{1},x_{2},\cdots,x_{n})$ is the value of the propositional function $P$ with $n$ variables $(x_{1},x_{2},\cdots,x_{n})$ and $P$ is also called an $n$-place predicate or $n$-ary predicate.
	For example, the statement "$x+y=z$" can be represented as $R(x,y,z)$. And $R(x,y,z)=\text{T or F}$.
- **Preconditions and Postconditions:**
	The statements that describe valid input are known as preconditions and the statements that control the output satisfied are postconditions.

# **Quantifiers**

- **Definition of Quantifiers:**
	Qualification expresses the extend to which a predicate is true over a range of elements(Like the words *all, some, many* and so on).
- **The Universal Quantifier:**
	- **Domain:**
		Also called domain of discourse or universe of discourse. The values of variables in a propositional function may take.
	- **Definition of the Universal Quantifiers:**
		The universal quantification of $P(x)$ is the statement 
		"$P(x)$ for all values of $x$ in the domain" 
		The notation $\forall xP(x)$ denotes the universal quantification of $P(x)$, read as "for all $xP(x)$" or "for every $xP(x)$". Here $\forall$ is called the universal quantifier. 
	- **Remarks:**
		- An element for which $P(x)$ is false is called a counterexample of $\forall xP(x)$.
		- Generally, all domains of discourse for quantifiers are nonempty since if it is empty then $\forall xP(x)$ is true for any propositional function $P(x)$.
		- The domain must always be specified when a universal quantifier is used otherwise the universal quantifiers is not defined.
		- If all elements in the domain can be listed, then $\forall xP(x)$ is the same as the conjunction$$P(x_{1})\wedge P(x_{2})\wedge \cdots\wedge P(x_{n})$$
- **The Existential Quantifier:**
	- **Definition of the Existential Quantifier:**
		The existential quantification of $P(x)$ is the statement
		"There exists an element $x$ in the domain such that $P(x)$."
		The notation $\exists xP(x)$ denotes the existential quantification of $P(x)$, read as "for some $xP(x)$" and so on. Here $\exists$ is called the existential quantifier.
	- **Remarks:**
		- Generally, all domains of discourse for quantifiers are nonempty since if it is empty then $\exists xP(x)$ is false for any propositional function $P(x)$.
		- If all elements in the domain can be listed, then $\exists xP(x)$ is the same as the disjunction$$P(x_{1})\lor P(x_{2})\lor \cdots\lor P(x_{n})$$
		- Sometimes it is helpful to loop and search when determining the truth value of a quantification. 
- **The Uniqueness Quantifier:**
	- **Definition of the Uniqueness Quantifier:**
		The notation $\exists!xP(x)$(or $\exists_{1}xP(x)$) states the statement
		"There exists exactly one $x$ such that $P(x)$ is true."
		And the notation $\exists!\text{ or }\exists_{1}$ is the uniqueness quantifier.

## **Quantifiers with Restricted Domains**

- **Notation:**
	A condition that a variable must satisfy is included after the quantifier. 
	For example: $\forall x<0(x^{2}>0)$
- **Rule:**
	The restriction of a universal quantification is the same as the universal quantification of a conditional statement. On the other hand, the restriction of an existential quantification is the same as the existential quantification of a conjunction. 
	For example: $\forall x<0(x^{2}>0)\equiv \forall x(x<0\to x^{2}>0)$, $\exists z>0(z^{2}=2)\equiv \exists z(z>0\to z^{2}=2)$ 
## **Precedence of Quantifiers**

The quantifiers $\forall$ and $\exists$ have higher precedence than all logical operators from propositional calculus.

## **Binding Variables**

- **Bound and Free:**
	If a variable uses a quantifier, we say this occurrence of the variable is bound. An occurrence of a variable that is not bound by quantifier or set equal to a particular value is free.
	For example: $\exists x(x+y=2)$, the variable $x$ is bound by the existential quantification, and the variable $y$ is free because it is not bound by a quantifier and no value is assigned to this variable.
- **Scope:**
	The part of a logical expression to which a quantifier is applied is called the scope of the quantifier. (For free variables, it is outside the scope of all quantifiers in the formula)

## **Logical Equivalences Involving Quantifiers**

- **Definition:**
	The statements involving predicates and quantifiers are logically equivalent if and only if they have the same truth no matter which the predicates are substituted into these statements and which domain is used for the variables in these propositional functions. And the notation $S\equiv T$ to indicate that two statement $S$ and $T$ involving predicates and quantifiers are logically equivalent. 

## **Negating Quantified Expressions**

- **De Morgan's Laws for Quantifiers:**
	- $\neg \exists xQ(x)\equiv \forall x\neg Q(x)$.
	- $\neg \forall x P(x)\equiv \exists x\neg P(x)$.

## **Translating from English into Logical Expressions**

## **Using Quantifiers in System Specifications**

## **Examples from Lewis Carroll**

- **Strategies:**
	- Choose the suitable variables in the facts.
	- Translate the natural language into simple and useful logical expressions.

## **Logic Programming**

- **Prolog Facts and Prolog Rules:**
	Prolog facts define predicates by specifying the elements that satisfy these predicates. Prolog rules are used to define new predicates using those already defined by Prolog facts.