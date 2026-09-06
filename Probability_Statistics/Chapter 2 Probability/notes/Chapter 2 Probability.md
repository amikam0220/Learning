---
Date: 2026-03-18T18:21:00
---
# What is Probability

Refers to the study of ==randomness and uncertainty==.

In any situations where ==a number of possible outcomes may occur==. The theory of probability provides methods for ==quantifying== changes.

# 2.1 Sample Spaces and Events

## Experiment

Any action or process ==whose outcome is subject to uncertainty==.(toss a coin or several times)

## Sample space

Denoted by $S$, is the ==set of all possible outcomes of the experiment==.
For example, two possible outcomes of fuse D & N, two fuses in sequence $S=\{ DD \ DN\ ND\ NN\}$

## Events

We will be interested in not only the ==individual outcomes of $S$== but also ==various collections of outcomes from $S$==.
An ==event== is any ==collection(subset)== of outcomes contained in ==the sample space $S$==.
- Simple Event(elementary event)
	An event consists of ==exactly one outcome==.
- Compound Event
	An event consists of ==more than one outcome==.
For example, with the sample space $S=\{ 1,2,\cdots,18 \}$, "The outcome is a prime number" is compound event(the subset is $E=\{ 2,3,5,7,11,13,17 \}$) whereas "The outcome is the square of 4" is simple event(the subset is $E=\{ 16 \}$). 

# 2.2 Axioms, Interpretations, and Properties of Probability

## Some Relations from ==Set Theory==

An event is ==just a set== so relationship and results from elementary set theory can be used to ==study events==.

- Union
	The set of all outcomes in ==at least one of the events $A$ and $B$== , denoted by $A\cup B$, read "A or B".
	$A\cup B=\{ x|x \in A\text{ or }x \in B \}$
	![[A or B.png]]

- Intersection
	The set of all outcomes that are in both $A$ and $B$, denoted by $A\cap B$, read "A and B"
	$A\cap B=\{ x|x \in A \text{ and }x \in B \}$
	![[A and B.png]]
	- Disjoint: $A\cap B=\emptyset$(==mutually exclusive== or ==disjoint events==)
		![[A and B are disjoint.png]]

- Complement
	Denoted by $A^{\prime}$. The set of all outcomes in $S$ that are not contained in $A$.
	$A^{\prime}=\{ x \in U|x\not\in A \}$
	![[complement of A.png]]

## Axioms, Interpretations, and Properties of Probabilities

Given an experiment and a sample space $S$, the object of probability is to assign each event $A$ a number $P(A)$. 

- Axiom 1: for any event $A$, $P(A)\geq 0$.
- Axiom 2: $P(S)=1$.
- Axiom 3:
	If $A_{1},A_{2},\cdots$ is an ==finite== collection of ==mutually exclusive events==, then 
	$$P(A_{1}\cup A_{2}\cup \cdots)=\sum_{i=1}^{k} P(A_{i})$$
	If it is an ==infinite collection== of ==mutually exclusive events==, then
	$$P(A_{1}\cup A_{2}\cup \cdots)=\sum_{i=1}^{\infty} P(A_{i})$$

	Proposition: $P(\emptyset)=0$.

## Two special events

- Impossible event
	The event contains ==no simple event==. ($P(A)=0$)
- Certain event
	The event contains ==all simple events==. ($P(B)=1$)

## Interpreting Probability

Methods for assigning appropriate/correct probability
- Based on ==repeatedly experiments(objective)==
- Based on some ==reasonable assumption== or ==prior information(subjective)==

## Relative frequency vs. Probability

As $n$ gets arbitrarily large, $n(A) / n$ approaches a limit value, the limit value is $P(A)$.

## Property 1

For any event $A$, $P(A)=1-P(A^{\prime})$.
## Property 2

If $A$ and $B$ are ==mutually exclusive==, then $P(A\cap B)=0$.
## Property 3

For ==any two events== $A$ and $B$,
$$P(A\cup B)=P(A)+P(B)-P(A\cap B)$$
For any $n$ events $A_{1},\cdots,A_{n}$
$$ \left| \bigcup_{i=1}^{n} A_i \right| = \sum_{k=1}^{n} (-1)^{k+1} \sum_{1 \le i_1 < \dots < i_k \le n} |A_{i_1} \cap \dots \cap A_{i_k}| $$



## Determining Probabilities ==Systematically==

- First determine probability $P(E_{i})$ for ==all simple events==.
- The probability of ==any compound event $A$== is computed by ==adding together the $P(E_{i})$'s== for all $E_{i}$'s in $A$.

## Equally Likely Outcomes

Equal probabilities to all $N$ simple events
With $p=P(E_{i})$ for every $i$, then $p=\frac{1}{N}$.
Consider an event $A$, with $N(A)$ denoting the number of outcomes containing in $A$, then
$$P(A)=\sum_{E_{i} \ in \  A}^{N} \frac{1}{N}= \left( \frac{N(A)}{N} \right)$$

# 2.3 Counting Techniques

## Addition Principle

To do one thing and completed it can have ==$n$-class way==, for each class there are $m_{i}$ different ways. So total $N=\sum_{i=1}^{n}m_{i}$ different ways
Or, $n(A\cup B)=n(A)+n(B)-n(A \cap B)$.
If $A$ and $B$ are disjoint, then $n(A\cup B)=n(A)+n(B)$.

## Multiplication principle

To do one thing and completed it needs to divided into ==$n$ steps==, for each step there are $m_{i}$ different ways. So total $N=m_{1}m_{2}\cdots m_{n}$ different ways

- Ordered pair
	If $O_{1}$ and $O_{2}$ are ==different== objects, then the pair $(O_{1},O_{2})$ is different from the pair $(O_{2},O_{1})$

## Permutation

An ==arrangement== of the objects in a specific order without repetition.

- Number of Permutations of $n$ Objects
	The number of permutations of $n$ distinct objects without repetition denoted by $P_{n,n}$ is $$P_{n,n}=n(n-1)\cdots 2 \cdot 1 = n!$$
- Permutation of $n$ Objects Taken $r$ at a time
	A permutation of a set of $n$ distinct objects taken $r$ at a time without repetition is an arrangement of $r$ of $n$ objects in a specific order.
	$$P_{n,r}= \frac{n!}{(n-r)!}$$


## Combination

The arrangement of the element in the subset ==does not matter==.
Combination of $n$ objects taken $r$ at a time
$$C_{n,r}=\frac{P_{n,r}}{r!}= \frac{n!}{r!(n-r)!}$$

# 2.4 Conditional Probability

We will use $P(A|B)$ to represent ==conditional probability of $A$ given $B$==. $B$ is the ==conditioning event==.

## Definition of Conditional Probability

For any event $A$ and $B$ with $P(B)>0$, the conditional probability of $A$ given $B$ is defined by $$P(A|B)=\frac{P(A\cap B)}{P(B)}$$
Given that $B$ has occurred, the relevant sample space for $P(A|B)$ is ==no longer $S$== but consists of  ==outcomes in $B$==. $A$ has occurred ==if and only if== one of the outcomes in the ==intersection== occurred.


- The Multiplication Rule
	$$P(A\cap B)=P(A|B)P(B)=P(B|A)P(A)$$

	Note:
	- For three events, $$P(A_{1}\cap A_{2}\cap A_{3})=P(A_{1}|A_{2}\cap A_{3})P(A_{2}\cap A_{3})=P(A_{1}|A_{2}\cap A_{3})P(A_{2}|A_{3})P(A_{3})$$
	- For $n$ events, $$P(A_{1}\cap A_{2}\cap \cdots\cap A_{n})=P(A_{n}|A_{1}\cap \cdots\cap A_{n-1})P(A_{n-1}|A_{1}\cap \cdots\cap A_{n-2})\cdots P(A_{2}|A_{1})P(A_{1})$$

## The Law of Total Probability

$$P(B)=P(B\cap A)+P(B\cap A^{\prime})=P(B|A)P(A)+P(B|A^{\prime})P(A^{\prime})$$

- Partition of $S$
	Definition: We say the events $A_{1},\cdots,A_{n}$ represent a ==partition== of the sample space $S$ if 
	- $A_{i}\cap A_{j}=\emptyset$ for all $i\neq j$
	- $\cup_{i=1}^{n}A_{i}=S$
	- $P(A_{i})>0$ for all $i=1,2,\cdots,n$.
- The Law of Total Probability(==general cases==)
	Let $A_{1},\cdots,A_{k}$ be partition of $S$, then for any other event $B$,
	$$P(B)=\sum_{i=1}^{k} P(A_{i}\cap B)=\sum_{i=1}^{k}P(A_{i})P(B|A_{i}) $$
- Probability Tree
	For example,
	![[probability tree.png]]

## Bayes' Theorem

Let $A_{1},\cdots,A_{k}$ be partition of $S$ with $P(A_{i})>0$, then for any other event $B$ for which $P(B)>0$, 
$$P(A_{j}|B)=\frac{P(A_{j}\cap B)}{P(B)}=\frac{P(A_{j})P(B|A_{j})}{P(B)}=\frac{P(A_{j})P(B|A_{j})}{\sum_{i=1}^{k} P(A_{i})P(B|A_{i})}$$
where $j=1,2,\cdots,k$.
Useful for Machine Learning, Artificial Intelligence.

# 2.5 Independence

## Definition

Two events $A$ and $B$ are independent if $P(A|B)=P(A)$ and are dependent otherwise.
Note:
- If $P(A|B)=P(A)$, we have $P(A\cap B)=P(A)P(B)$ and $P(B|A) = P(B)$.
- If $A$ and $B$ are independence, so are the ==following pairs of events==:
	- $A^{\prime},B$
	- $A,B^{\prime}$
	- $A^{\prime},B^{\prime}$
- If two events are mutually exclusive, they cannot be independent.

## Proposition 1

$A$ and $B$ are independent ==if and only if== 
$$P(A\cap B)=P(A)P(B)$$

## Independence of more than two events

- Mutually Independent
	Events $A_{1},\cdots,A_{n}$ are ==mutually independent== if for every $k=2,3,\cdots,n$ and every subset of indices $i_{1},i_{2},\cdots,i_{k}$,
	$$P(A_{i_{1}}\cap A_{i_{2}}\cap \cdots\cap A_{i_{k}})=P(A_{i_{1}})P(A_{i_{2}})\cdots P(A_{i_{k}})$$
	That is, for any number of events, they satisfy the equation.
