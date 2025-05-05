---
Date: 2025-03-07T15:06:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=46&selection=6,0,6,26|The link of chapter 1.3, Discrete Mathematics]]"
---
## **Introduction**

- This section introduces the methods that produce propositions with the same truth value.
- **Definition of tautology, contradiction and contingency**
	A tautology is a compound proposition that is always true.
	A contradiction is a compound proposition that is always false.
	A contingency is a compound proposition that is neither a tautology nor a contradiction.

## **Logical Equivalences**

- **Definition of Logically Equivalent:**
	The compound propositions $p$ and $q$ are called logically equivalent if $p\leftrightarrow q$ is a tautology, denoted by $p\equiv q$.
	Note that $\equiv$ is not a logical connective and $p\equiv q$ is not a compound proposition but a statement that $p\leftrightarrow q$ is a tautology. Sometimes $\Leftrightarrow$ is used instead of $\equiv$.
- Table for Logical Equivalences:

| Table 6                                                                                                  | Logical Equivalences |
| -------------------------------------------------------------------------------------------------------- | -------------------- |
| **Equivalence**                                                                                          | **Name**             |
| $p\land\mathrm{T}\equiv{p} ,p\lor\mathrm{F}\equiv{p}$                                                    | Identity laws        |
| $p\lor\mathrm{T}\equiv\mathrm{T} ,\\\\ p\land\mathrm{F}\equiv{F}$                                        | Domination laws      |
| $p\lor{p}\equiv{p} ,\\\\ p\land{p}\equiv{p}$                                                             | Idempotent laws      |
| $\neg(\neg{p})\equiv{p}$                                                                                 | Double negation law  |
| $p\lor{q}\equiv{q}\lor{p}, \\\\ p\land{q}\equiv{q}\land{p}$                                              | Commutative laws     |
| $(p\lor{q})\lor{r}\equiv{p}\lor(q\lor{r}), \\\\ (p\land{q})\land{r}\equiv{p}\land(q\land{r})$            | Associative laws     |
| $p\lor(q\land{r})\equiv(p\lor{q})\land(p\lor{r}), \\\\ p\land(q\lor{r})\equiv(p\land{q})\lor(p\land{r})$ | Distributive laws    |
| $\neg(p\land{q})\equiv\neg{p}\lor\neg{q,} \\\\ \neg(p\lor{q})\equiv\neg{p}\land\neg{q}$                  | De Morgan’s laws     |
| $p\lor(p\land{q})\equiv{p} ,\\\\ p\land(p\lor{q})\equiv{p}$                                              | Absorption laws      |
| $p\lor\neg{p}\equiv\mathrm{T} ,\\\\ p\land\neg{p}\equiv\mathrm{F}$                                       | Negation laws        |

| Table 7 Logical Equivalences Involving Conditional Statements            |
| ------------------------------------------------------------------------ |
| $p\rightarrow{q}\equiv\neg{p}\lor{q}$                                    |
| $p\rightarrow{q}\equiv\neg{q}\rightarrow\neg{p}$                         |
| $p\lor{q}\equiv\neg{p}\rightarrow{q}$                                    |
| $p\land{q}\equiv\neg(p\rightarrow\neg{q})$                               |
| $\neg(p\rightarrow{q})\equiv{p}\land\neg{q}$                             |
| $(p\rightarrow{q})\land(p\rightarrow{r})\equiv{p}\rightarrow(q\land{r})$ |
| $(p\rightarrow{r})\land(q\rightarrow{r})\equiv(p\lor{q})\rightarrow{r}$  |
| $(p\rightarrow{q})\lor(p\rightarrow{r})\equiv{p}\rightarrow(q\lor{r})$   |
| $(p\rightarrow{r})\lor(q\rightarrow{r})\equiv(p\land{q})\rightarrow{r}$  |

| Table 8 Logical Equivalences Involving Biconditional Statements    |
| ------------------------------------------------------------------ |
| $p\leftrightarrow{q}\equiv(p\rightarrow{q})\land(q\rightarrow{p})$ |
| $p\leftrightarrow{q}\equiv\neg{p}\leftrightarrow\neg{q}$           |
| $p\leftrightarrow{q}\equiv(p\land{q})\lor(\neg{p}\land\neg{q})$    |
| $\neg(p\leftrightarrow{q})\equiv{p}\leftrightarrow\neg{q}$         |
- **The Extension of Associative Law and the De Morgan's Laws**
	- **Associative Law:**
		$p_{1}\lor p_{2}\lor \cdots\lor p_{n}$ and $p_{1}\wedge p_{2}\wedge \cdots\wedge p_{n}$ follows the associative laws. We sometimes use the notation $\lor_{j=1}^{n}p_{j}$ for $p_{1}\lor p_{2}\lor \cdots\lor p_{n}$ and $\wedge_{j=1}^{n}p_{j}$ for $p_{1}\wedge p_{2}\wedge \cdots\wedge p_{n}$.
	- **De Morgan's Laws:**
		$\neg(p_{1}\lor p_{2}\lor \cdots\lor p_{n})\equiv(\neg p_{1}\wedge \neg p_{2}\wedge \cdots\wedge \neg p_{n})$ and $\neg(p_{1}\wedge p_{2}\wedge \cdots\wedge p_{n})\equiv(\neg p_{1}\lor \neg p_{2}\lor \cdots\lor p_{n})$ follows the De Morgan's Laws. We sometimes use the notation $\neg \left( \lor_{j=1}^{n}p_{j} \right)\equiv \lor_{j=1}^{n}\neg p_{j}$ and $\neg(\wedge_{j=1}^{n}p_{j})\equiv \lor_{j=1}^{n}p_{j}$.

## **Using De Morgan's Laws**

- The laws tell us how to negate conjunctions and how to negate disjunctions.

## **Constructing New Logical Equivalences**

- **Strategy:**
	We use if $p$ and $q$ are logically equivalent and $q$ and $r$ are logically equivalent then $p$ and $r$ are logically equivalent to prove the problems.

## **Propositional Satisfiability**

- **Definition of satisfiability:**
	A compound proposition is satisfiable if there is an assignment of truth values to its variables to make the proposition true and such an assignment is called a solution. If not, it is unsatisfiable.

## **Applications of Satisfiability**

- **Example--Sudoku Puzzle:**
	- For each cell with a given value, we assert $p(i,j,n)$ when the cell in row $i$ and column $j$ with the value $n$.
	- We assert that every row contains every number:$$\bigwedge_{i=1}^{9}\bigwedge_{n=1}^{9}\bigvee_{j=1}^{9}p(i,j,n)$$that is, for any $i$ from $1$ to $9$ and any $n$ from $1$ to $9$, there exists at least one $j$ from $1$ to $9$ such that the cell has the value $n$ in row $i$ and column $j$.
	- We assert that every column contains every number:$$\bigwedge_{j=1}^{9}\bigwedge_{n=1}^{9}\bigvee_{i=1}^{9}p(i,j,n)$$that is, for any $j$ from $1$ to $9$ and any $n$ from $1$ to $9$, there exists at least one $i$ from $1$ to $9$ such that the cell has the value $n$ in row $i$ and column $j$.
	- We assert that each of the nine $3\times3$ blocks contains every number:$$\bigwedge_{r=0}^2\bigwedge_{s=0}^2\bigwedge_{n=1}^9\bigvee_{i=1}^3\bigvee_{j=1}^3p(3r+i,3s+j,n)$$that is for any blocks and any $n$ from $1$ to $9$, there exist at least one cell in row $i$ and column $j$ from $1$ to $9$ with the value $n$ in the block.
	- To assert that no cell contains more than one number, we take the conjunction over all values of $n,n^{\prime},i$ and $j$ where each variable ranges from $1$ to $9$ and $n\ne n^{\prime}$ of $$p(i,j,n)\to \neg p(i,j,n^{\prime})$$
## **Solving Satisfiability Problems**

- **Strategy:**
	Truth table, equivalently judge its negation when the number of variables is small.
