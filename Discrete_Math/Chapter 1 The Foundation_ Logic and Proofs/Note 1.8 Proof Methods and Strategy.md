---
Date: 2025-03-22T22:07:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=113&selection=114,0,114,26|The link of chapter 1.8, Discrete Mathematic]]"
---
## **Introduction**

This section we will know about more methods of proof and illustrated how they work. And we will briefly discuss the strategy behind constructing proofs.

## **Exhaustive Proof and Proof by Cases**

- **Proof by Cases**
	To prove $(p_{1}\vee p_{2}\vee \cdots\vee p_{n})\to q$, we can prove each of $n$ conditional statements $p_{i}\to q,i=1,2,\dots,n$ individually and such an argument is called a proof by cases.
- **Exhaustive Proof**
	Proofs proceed by exhausting all possibilities.
- **Proof by Cases**
	Proof all possible cases that arise in a theorem. When there is no obvious way to begin a proof or not possible to solve all cases in just one proof but the extra information in each case are helpful we can use proof by cases.
- **Without Loss of Generality**
	We assert that by proving one case of a theorem and no additional argument is required to prove other specified cases.
- **Common Errors with Exhaustive Proof and Proof by Cases**
	Draw the incorrect conclusion from some specific examples rather than call cases.

## **Existence Proofs**

- **Existence Proof**
	A proof of a proposition of the form $\exists xP(x)$ is called existence proof.
- **Constructive and Nonconstructive Existence Proof**
	We prove the proposition by find a $a$ such that $P(a)$ and this type of proof is called constructive existence proof.
	In contrast, we prove the proposition in some other way like contradiction and this type is called nonconstructive.

## **Uniqueness Proofs**

- **Uniqueness Proof**
	A proof that assert the existence of a unique element with a particular property. 
- **Remark:**
	Showing that there is a unique element x such that $P (x)$ is the same as proving the statement $∃xP (x) ∧ ∀y(y \ne x) \neg P (y)$.

## **Proof Strategies**

- **Forward and Backward Reasoning**
	Using the premises, together with axioms and known theorems, you can construct a proof using a sequence of steps that leads to the conclusion. This type of reasoning, called forward reasoning.
	When the conclusion is far from obvious, we can use backward reasoning.  To reason backward to prove a statement $q$, we find a statement $p$ that we can prove with the property that $p\to q$.
- **Adapting Existing Proofs**
	An excellent way to look for possible approaches that can be used to prove a statement is to take advantage of existing proofs of similar results.

## **Looking for Counterexamples**

 When confronted with a conjecture, you might first try to prove this conjecture, and if your attempts are unsuccessful, you might try to find a counterexample.  If you cannot find a counterexample, you might again try to prove the statement. In any case, looking for counterexamples is an extremely important pursuit, which often provides insights into problems. 

## **Proof Strategy in Action**

## **Tilings**

## **The Role of Open Problems**

## **Additional Proof Methods**