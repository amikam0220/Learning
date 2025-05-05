---
Date: 2025-04-11T15:01:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=191&selection=126,0,126,19|The link of chapter 2.5, Discrete Mathematic]]"
---
# Introduction

In this section, we will know about the cardinality of infinite sets. 

## Definition of the Size of Cardinality

The sets $A$ and $B$ have the ==same== cardinality if and only if there is a ==one-to-one correspondence== from $A$ to $B$, denoted by $|A|=|B|$.
If there is a ==one-to-one function== from $A$ to $B$, the cardinality of $A$ is ==less than or the same== as the cardinality of $B$ and we write $|A|\leq|B|$. If they have different cardinality then it is $|A|<|B|$.

# Countable Sets
## Definition of Countable Sets

A set that is either ==finite== or has ==the same cardinality== as the set of ==positive integers== is called ==countable==. A set that is not countable is called ==uncountable==. If a set is countable, we denote the cardinality of $S$ by $ℵ_0$, reading as "aleph null".

The set of all ==integers== and all ==rational numbers== are countable. 

# An Uncountable Set

The set of all ==real numbers== are uncountable.

## Results about Cardinality

### Theorem 1

If $A$ and $B$ are countable sets, then $A\cup B$ is also countable.

### Theorem 2--SCHRODER-BERNSTEIN THEOREM

If $A$ and $B$ are sets with $|A|\leq|B|$ and $|B|\leq|A|$, then $|A|=|B|$. In other words, if there are one-to-one functions $f$ from $A$ to $B$ and $g$ from $B$ to $A$, then there is a one-to-one correspondence between $A$ and $B$.

## Uncomputable Functions

We say that a function is ==computable== if there is a computer program in some programming language that finds the values of this function. If not we say it is uncomputable.


