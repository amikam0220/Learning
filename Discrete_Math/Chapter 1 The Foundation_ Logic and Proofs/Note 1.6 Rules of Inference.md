---
Date: 2025-03-21T14:48:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=90&selection=6,0,6,18|The link of chapter 1.6, Discrete Mathematic]]"
---
## **Introduction**

In this section, we need to study proofs and and arguments, learn the rules and incorrect reasoning and show how the rules are combination.

## **Valid Arguments in Propositional Logic**

- **Introduction of Argument and Argument Form**
	An argument in propositional logic is a sequence of propositions. All but the final proposition in the argument are called premises and the final proposition is called conclusion. An argument is valid if the truth of all premises implies that the conclusion is true.
	An argument form in propositional logic is a sequence of compound propositions involving propositional variables. An argument form is valid no matter which particular propositions are substituted for the propositonal variables in its premises, the conclusion is true if and only if the premises are all true.
	Suppose $p_{1},p_{2},\cdots,p_{n}$ are premises and $q$ is conclusion. If the argument form is valid, then $$(p_{1}\wedge p_{2}\wedge \cdots\wedge p_{n}\to q)$$is a tautology.

## **Rules of Inference for Propositional Logic**


| Rule Expression                                                            | Name                        |
| -------------------------------------------------------------------------- | --------------------------- |
| $(p\land(p\rightarrow{q}))\xrightarrow{}q$                                 | Modus ponens肯定前件式           |
| $(\neg{q}\land(p\rightarrow{q}))\xrightarrow{}\neg{p}$                     | Modus tollens否定后件式          |
| $((p\rightarrow{q})\land(q\rightarrow{r}))\xrightarrow{}(p\rightarrow{r})$ | Hypothetical syllogism假言三段论 |
| $((p\lor{q})\land\neg{p})\xrightarrow{}q$                                  | Disjunctive syllogism析取三段论  |
| $p\xrightarrow{}(p\lor{q})$                                                | Addition附加律                 |
| $(p\land{q})\xrightarrow{}p$                                               | Simplification化简律           |
| $(p\rightarrow{q})\xrightarrow{}(\neg{q}\rightarrow\neg{p})$               | Contrapositive逆否律           |
| $((p)\land(q))\xrightarrow{}(p\land{q})$                                   | Conjunction合取律              |
| $((p\lor{q})\land(\neg{p}\lor{r}))\xrightarrow{}(q\lor{r})$                | Resolution消解律               |
## **Using Rules of Inference to Build Arguments**

- **Strategy:**
	- Set appropriate propositions.
	- Reason step by step by the rules of inference.

## **Resolution**

- **Introduction:**
	The resolution is used by many computer programs to develop automated reasoning and proving, For the resolution $((p\vee q)\wedge(\neg p\lor r))\to(q\lor r)$, the final disjunction $q\vee r$ is called resolvent. 
- **Strategy:**
	If we need to construct proofs only using resolution, we need to expressed the hypotheses and conclusion as clauses which is a disjunction of variables or negation of these variables.

## **Fallacies**

- **Fallacy of affirming the conclusion:**
	The proposition $$((p\to q)\wedge q)\to p$$is not a tautology.
- **Fallacy of denying the hypothesis:**
	The proposition $$((p\to q)\wedge \neg p)\to \neg q$$is not a tautology.

## **Rules of Inference for Quantified Statements**


| Rule Expression                                                                 | Name                           |
| ------------------------------------------------------------------------------- | ------------------------------ |
| $\displaystyle\frac{\forall xP(x)}{\therefore P(c)}$                            | Universal instantiation全称实例化   |
| $\displaystyle\frac{P(c)\text{ for an arbitrary }c}{\therefore\forall xP(x)}$   | Universal generalization普遍推广   |
| $\displaystyle \frac{\exists xP(x)}{\therefore P(c)\text{ for some element }c}$ | Existential instantiation存在实例化 |
| $\displaystyle \frac{P(c)\text{ for some element }c}{\therefore \exists xP(x)}$ | Existential generalization存在推广 |

## **Combining Rules of Inference for Propositions and Quantified Statements**

- Universal Modus Ponens
	$$\frac{\begin{align} & \forall x(P(x)\to Q(x)) \\ & P(a),\text{where }a\text{ is a particular element in the domain}\end{align}}{\therefore Q(a)}$$
- Universal Modus Tollens
	$$\frac{\begin{align} & \forall x(P(x)\to Q(x)) \\ & \neg Q(a),\text{where }a\text{ is a particular element in the domain}\end{align}}{\therefore \neg P(a)}$$