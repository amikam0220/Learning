---
Date: 2025-03-21T20:02:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=101&selection=619,0,619,22|The link of chapter 1.7, Discrete Mathematics]]"
---
## **Introduction**

In this section we need to learn about the notion of a proof and the methods for constructing proofs.  We will know their application in both mathematics and computer science.

## **Some Terminology**

- **Theorem:**
	A statement that can be shown to be true. (also referred to as facts or results) In mathematical writing, the term theorem is somewhat important true statement.
- **Proposition:**
	Less important theorems.
- **Proof:**
	A valid argument that establishes the truth of a theorem.
- **Axioms(Postulates):**
	Statements used in a proof we assume to be true.
- **Lemma:**
	A less important theorem that is helpful in the proof of other results.
- **Corollary:**
	A theorem that can be established directly from a theorem that has been proved.
- **Conjecture:**
	A statement that is being proposed to be a true statement. The conjecture becomes a theorem when it is proved.

## **Understanding How Theorem Are Stated**

Many theorems assert that a property holds for all elements in a domain, such as the integers or the real numbers. And in general the standard convention in mathematics is to omit the universal quantifiers. When proving, we often choose a general element of the domain and then use the property of the general element to make the subsequent proof.

## **Methods of Proving Theorems**

One we have chosen a proof method, we use axioms, definitions of terms, previously proved results, and rules of inference to complete the proof.

## **Direct Proof**

- **Definition:**
	A direct proof of a conditional statement $p\to q$ is constructed by assuming $p$ is true, then subsequent steps are constructed using rules of inference, and the final step showing $q$ is true.

## **Proof by Contraposition**

- **Definition:**
	To prove a conditional statement $p \to q$ is true, we can prove $\neg q\to \neg p$ is true. Then take $\neg q$ as premise to obtain $\neg p$ is true.
- **Vacuous and Trivial Proofs**
	Vacuous Proofs:
		If we can prove the proposition $p$ is false in the proof of $p\to q$, then we can finish the proof easily.
	Trivial Proofs:
		A proof of $p\to q$ that use the fact that $q$ is true is called trivial proof.
## **Proofs by Contradiction**

- **Definition:**
	To prove a statement $p$ is true, we can prove that $\neg p\to(r\wedge \neg r)$ is true for some proposition $r$. Since $r\wedge \neg r$ is $\mathrm{F}$ and so $\neg p$ is $\mathrm{F}$. Thus $p$ is $\mathrm{T}$.
	To prove a conditional statement $p\to q$ is true, we can assume $p$ and $\neg q$ is true then we use the steps from the proof of $\neg q\to \neg p$ to show that $\neg p$ is true. Then we obtain $p\wedge \neg p$ which is $F$ and complete the proof. That is $(p\wedge \neg q)\to F$, which is equivalent to $p\to q$.
- **Proofs of Equivalence:**
	To prove a biconditional statement $p\leftrightarrow q$, we can show that $p\to q$ and $q\to p$ are both true. For a theorem states that $p_{1},p_{2},\cdots,p_{n}$ are equivalent, we can use that $$p_{1}\leftrightarrow p_{2}\leftrightarrow \cdots\leftrightarrow p_{n}\leftrightarrow (p_{1}\to p_{2})\wedge(p_{2}\to p_{3})\wedge \cdots\wedge(p_{n}\to p_{1})$$
- **Counterexamples:**
	To state $\forall xP(x)$ is false, we can only find a counterexample $x$ for which $P(x)$ is false.

## **Mistakes in Proofs**

There are many common errors made in constructing mathematical proofs. 
- **Begging the question(Circular reasoning)**
	The steps of a proof are based on the truth of the statement being proved or the statements equivalent to it.
