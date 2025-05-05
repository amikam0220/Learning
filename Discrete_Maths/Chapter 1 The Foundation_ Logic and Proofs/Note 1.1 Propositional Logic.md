---
Date: 2025-03-06T19:34:00
tags:
  - "#Discrete_Mathematic_Notes"
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=22&selection=102,0,102,19|The link of chapter 1.1, Discrete Mathematics]]"
---
## **Introduction**

- This section we will learn an introduction to **logic** to understand mathematical reasoning and learn about its application in computer science.

## **Proposition**

- **Definition of Proposition:**
	A proposition is a declarative sentence(that is, a sentence that declares a fact) that is either true or false, but not both.
	- Example:
		- $x+1=2$
		- $x+y=z$
		are not propositions because ==they are neither true or false== but it can be turned into a proposition if we assign values to variables.
- **Propositional Variables(Statement Variables):**
	The letters that we use to represent propositions($p,q,r,s,\cdots$)
- **Truth Value:**
	$T$ or $F$ depending on the proposition is true or false.
	- **Truth Table:**
		The table displays all the possibilities of propositions. $2^{n}$ rows are required if a compound proposition involves $n$ propositional variables.
- **Propositional Calculus(Propositional Logic):**
	The area of logic that deals with propositions.
- **Definition of Negation:**
	Let $p$ be a proposition, then $\neg p$(also $\overline p$) is the negation of $p$. It is the statement
	"It is not the case that $p$."
	The truth value of the negation of $p$ is opposite of the truth value of $p$.
	- Negation operation:
		The operation that produce the negation of an existing proposition.
- **Connectives:**
	The logical operators that are used to form a new proposition from two or more existing propositions.
- **Definition of Conjunction:**
	Let $p$ and $q$ be propositions, then the conjunctions of $p$ and $q$, denoted by $p \wedge q$, is the proposition "$p$ and $q$". The conjunction $p\wedge q$ is true when $p$ and $q$ are both true and otherwise is false.
	(note that in logical language, the word "but" is used as "and" in a conjunction sometimes)
- **Definition of Disjunction:**
	Let $p$ and $q$ be propositions, then the disjunction of $p$ and $q$, denoted by $p\lor q$, is the proposition "$p$ or $q$." The disjunction $p\lor q$ is false when $p$ and $q$ are both false and otherwise is true.
	(It is an inclusive or.)  
- **Definition of Exclusive or:**
	Let $p$ and $q$ be propositions, then the exclusive or of $p$ and $q$, denoted by $p\oplus q$, is the proposition that is true when exactly one of $p$ and $q$ is true and otherwise is false.

## **Conditional Statements**

- **Definition of Conditional Statement:**
	Let $p$ and $q$ be propositions. Then the conditional statement $p\to q$ is the proposition "if $p$, then $q$." The proposition $p\to q$ is false when $p$ is true and $q$ is false and otherwise is true. In the conditional statement $p\to q$, $p$ is called the hypothesis(or antecedent or premise) and $q$ is called the conclusion(or consequence) 
	(note that when $p$ is false, no matter $q$ is true or false the conditional statement $p\to q$ is true.)
	- The statements "$p$ only if $q$" and "$q$ unless $\neg p$" is equivalent to "$p\to q$".
	- The statement "$p$ only if $q$" says that if $q$ is not true, then $p$ is not true. (Be careful that "$q$ only if $p$" is equivalent to $q\to p$).
	- The statement "$q$ unless $\neg p$" says if $\neg p$ is false, then $q$ is true.
- **If-then Construction in Programming Languages:**
	In most programming languages, if $p$ then $S$ is that $S$ is executed if $p$ is true and not executed if $p$ is false, where $p$ is a proposition and $S$ is a program segment.
- **Converse, Contrapositive, and Inverse**
	For the conditional statement $p\to q$,
	- **Converse:**
		The proposition $q\to p$ is the converse of $p\to q$.
	- **Inverse:**
		The proposition $\neg p\to \neg q$ is the inverse of $p\to q$.
	- **Contrapositive:**
		The proposition $\neg q\to \neg p$ is the contrapositive of $p\to q$.
	- Only the contrapositive has the same truth value as $p\to q$. That is, a conditional statement is equivalent to its contrapositive.
	- The converse and the inverse are also equivalent but neither is equivalent to the original conditional statement. (Can get by truth table)
- **Definition of Biconditionals:**
	Let $p$ and $q$ be propositions, then the biconditional statement(bi-implications) $p\leftrightarrow q$ is the proposition "$p$ if and only if $q$". The statement is true when $p$ and $q$ have the same truth value and otherwise is false. 
	- Sometimes we can use "iff" to abbreviate for "if and only if".
	- $p\leftrightarrow q$ has the same truth value as $(p\to q)\wedge(q\to p)$.
	- In common language, sometimes it is implicit for the statement of "if and only if". So we need to distinguish $p\to q$ and $p\leftrightarrow q$ in natural language.

## **Truth Tables of Compound Propositions**

- We can use the former important logical connectives to build up complicated compound propositions involving any number of propositional variables. Then the truth table will be useful. We can separate column to find the truth value of the complicated propositions.
- Example: Construct the truth table of the compound proposition$$(p\lor \neg q)\to(p\wedge q)$$Sol:	

| $p$ | $q$ | $\neg q$ | $p\lor \neg q$ | $p\wedge q$ | $(p\lor \neg q)\to(p\wedge q)$ |
| --- | --- | -------- | -------------- | ----------- | ------------ |
| T   | T   | F        | T              | T           | T                              |
| T   | F   | T        | T              | F           | F                              |
| F   | T   | F        | F              | F           | T                              |
| F   | F   | T        | T              | F           | F                              |

## **Precedence of Logical Operators**

| Operator          | Precedence |
| ----------------- | ---------- |
| $\neg$            | 1          |
| $\wedge$          | 2          |
| $\lor$            | 3          |
| $\to$             | 4          |
| $\leftrightarrow$ | 5          |
And we will use parentheses to specify the order.

## **Logic and Bit Operations**

- **Bit:**
	A bit is a symbol with two possible values namely 0 and 1. And it can be used to represent the truth value false and true.
- **Boolean Variable:**
	A variable whose value is either true or false.
- **Bit Operations:**
	OR, AND and XOR
- **Definition of Bit String:**
	A bit string is a sequence of zero or more bits. The length of this string is the number of bits in the string.
	- To the two strings with the same length, we can use bitwise OR, AND, XOR to do bit operations.