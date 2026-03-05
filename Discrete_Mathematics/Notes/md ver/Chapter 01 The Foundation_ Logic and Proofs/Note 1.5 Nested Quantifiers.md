---
Date: 2025-03-21T13:54:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=78&selection=72,0,72,17|The link of chapter 1.5, Discrete Mathematics]]"
---
## **Introduction**

This section we need to learn about the nested quantifiers and how to use nested quantifiers to express mathematical statements, English sentences and its negations.

## **Understanding Statements of Involving Nested Quantifiers**

- **Definition:**
	One quantifier is within the scope of another.
- **Thinking of Quantification as Loops:**
	In working with quantifications of more than one variable, it is sometimes helpful to think in terms of nested loops. For example,to prove $\forall x\forall yP(x,y)$ is true, we can make an outer loop through all possible values for $x$ and then make an inner loop for each $x$ to judge whether each $y$ satisfies $P(x,y)$.

## **The Order of Quantifiers**

- **For all universal quantifications or all existential quantifications:**
	$$\forall x\forall yP(x,y)\equiv \forall y\forall xP(x,y)$$
	It is true when $P(x,y)$ is true for every pair $x,y$ and false when there is a pair $x,y$ for which $P(x,y)$ is false.
	$$\exists x \exists yP(x,y)\equiv \exists y\exists xP(x,y)$$

	It is true when there is a pair $x,y$ for which $P(x,y)$ is true and false for every $x,y$ $P(x,y)$ is false.
- **For Other Statement:**
	The universal quantification and existential quantifications can not exchange since they are not equivalent.

## **Translating Mathematical Statement into Statements Involving Nested Quantifiers**

- **Strategy:**
	Find the relationship between the mathematical statement and logical expressions.

## **Translating from Nested Quantifiers into English**

- **Strategy:**
	- Write out what the quantifiers and predicates in the expression mean.
	- Express this meaning in a simpler sentence.

## **Translating English Sentences into Logical Expressions**

- **Strategy:**
	- Select suitable variables,proposition and connectors to represent the expressions in the English sentences.
	- Connect them together by logic.

## **Negating Nested Quantifiers**

- **Strategy:**
	Negate successively applying the rules for negating statements involving a single quantifier. For example, $$\begin{align}\neg \forall x\exists y(xy=1) & \equiv\exists x\neg \exists y(xy=1) \\ & \equiv \exists x\forall y\neg(xy=1) \\ & \equiv \exists x\forall y(xy\ne 1)\end{align}$$

