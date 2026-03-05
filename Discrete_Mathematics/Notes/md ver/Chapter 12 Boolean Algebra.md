---
Date: 2025-12-29T19:26:00
---
# Chapter Summary 

- Boolean Functions
- Representing Boolean Functions
- Logic Gates
- Minimization of Circuits

# Section 12.1 Boolean Functions

## Section Summary 

- Introduction to Boolean Algebra
- Boolean Expressions and Boolean Functions
- Identities of Boolean Algebra
- Duality
- The abstract definition of a Boolean Algebra

## Introduction to Boolean Algebra

Boolean algebra has rules for working with element with ==binary set $\{ 0,1 \}$== together with operator Boolean sum($+$), Boolean product($\cdot$), complement($\bar{\space}$)

These operators are defined by:
- Boolean sum:(==similar to $\vee$==)
	$1+1=1,\ 1+0=1,\ 0+1=1,\ 0+0=0$
- Boolean product(==similar to $\wedge$==):
	$1\cdot 1=1,\ 1\cdot 0 = 0, \ 0 \cdot 1 = 0,\ 0\cdot 0 = 0$
- Complement:
	$\bar{0}=1,\ \bar{1}=0$

## Boolean Expressions and Boolean Functions

Definition:
Let $B=\{ 0,1 \}$, then $B^{n}=\{ (x_{1},x_{2},\cdots,x_{n})|x_{i}\in B \}$ is the set of all possible $n$-tuples of $0$s and $1$s. The variable $x$ is called a ==Boolean variable== if it assumes value only from $B$.(only 0 or 1) A function from $B^{n}$ to $B$ is called a ==Boolean function of degree $n$==.

Example, $F(x,y)=x$, $F(x,y,z)=xy+\bar{z}$.
example table:
![[Boolean functions.png]]

## Boolean Expressions and Boolean Functions

Definition:
Boolean functions $F$ and $G$ of $n$ variables are ==equal== if and only if $F(b_{1},\cdots,b_{n})=G(b_{1},\cdots,b_{n})$ whenever $b_{1},\cdots,b_{n} \in B$. Two different Boolean expressions that represent the same function are ==equivalent==.

Definition:
The ==complement== of Boolean function $F$ is $\bar{F}$, where $\bar{F}(x_{1},\cdots,x_{n})= \overline{F(x_{1},\cdots,x_{n})}$.

Definition:
Boolean sum and Boolean product of two Boolean functions $F$ and $G$ are defined by
$$
\begin{align}
 & (F+G)(x_{1},\cdots,x_{n})=F(x_{1},\cdots,x_{n})+G(x_{1},\cdots,x_{n}) \\
 & (FG)(x_{1},\cdots,x_{n})=F(x_{1},\cdots,x_{n})G(x_{1},\cdots,x_{n})
\end{align}
$$

Example:
The number of different Boolean functions of degree $n$ is $2^{2^{n}}$.($2^{n}$ different $n$-tuples, each tuple corresponding $2$ situations of output)

## Identities of Boolean Algebra

![[Boolean Identity.png]]

Example: to show a expression is valid, draw the table of Boolean function.

## Formal Definition of a Boolean Algebra

Definition:
A ==Boolean algebra== is a set $B$ with two binary operations $\vee$ and $\wedge$, element $0$ and $1$, a unary operation $\bar{ \ }$ such that for all $x,y,z\in B$ satisfied identity law, complement law, associative law, commutative law, distributive law.

The set regarding set theory rather than propositional variable can also represent a Boolean algebra.

# Section 12.2 Representing Boolean Functions

## Section Summary

- Sum-of-Products Expansions
- Functional Completeness

## Sum-of-Product Expansion

Example: Find Boolean expression represent function $F$ and $G$.
![[Example of sum-of-product.png]]

General principle is that each combination of values of the variables for which the functions have the value 1 ==requires a term in the Boolean sum that is the Boolean product of the variables or their complements==.

Definition:
A ==literal== is a Boolean variable or its complement. A ==min term== of the Boolean variable $x_{1},\cdots,x_{n}$ is a Boolean product $y_{1},\cdots,y_{n}$ where $y_{i}=x_{i}$ or $y_{i}=\bar{x_{i}}$. Hence, a min term is a ==product of $n$ literals== with one literal for each variable.

The min term $y_{1},\cdots,y_{n}$ has value 1 if and only if each $x_{i}=1$ for $y_{i}=x_{i}$, $x_{i}=0$ for $y_{i}=\bar{x_{i}}$.

Definition:
The sum of min terms that represents the function is called ==sum-of-products expansion== or ==disjunctive normal form== of the Boolean function.

Example: Find the sum-of-products expansion for $F(x,y,z)=(x+y)\bar{z}$.
- Method 1: Using a table
- Method 2: Using Boolean Identities.
$$
\begin{align}
F(x,y,z) & =(x+y)\bar{z} \\
 & =x\bar{z}+y\bar{z} \\
 & =x1\bar{z}+1y\bar{z} \\
 & =x(y+\bar{y})\bar{z}+(x+\bar{x})y\bar{z} \\
 & =xy\bar{z}+x\bar{y}\bar{z}+xy\bar{z}+\bar{x}y\bar{z} \\
 & =xy\bar{z}+x\bar{y}\bar{z}+\bar{x}y\bar{z} \\
\end{align}
$$

## Functional Completeness

Definition:
Because every Boolean function can be represented using Boolean operator set $\{  \cdot,+,\bar{\ }\}$, which is ==functionally complete==.

- $\{ \cdot, \bar{\ } \}$ is functionally complete since $x+y=\overline{\bar{x}\bar{y}}$
- $\{ +,\bar{\ } \}$ is functionally complete since $xy=\overline{\bar{x}+\bar{y}}$
- nand operator, denoted by $|$, defined by $1|1=0,\ 1|0=0|1=0|0=1$ is functionally complete.
- nor operator, denoted by $\downarrow$, defined by $0\downarrow 0 = 1,\ 1\downarrow 0 = 0 \downarrow 1=1\downarrow 1 = 0$, is functionally complete.

# Section 12.3 Logic Gates

## Section Summary 

- Logic Gates
- Combination of Gates
- Example of Circuits

## Logic Gates

==Gates== take as input of two or more Boolean variables and produce one or more bit as output. And ==inverters== take the value of Boolean variable as input and produce its complement as output.

![[gates and inverters.png]]

## Combinations of Gates

Combinational circuits can be constructed using a combination inverters and gates. Gates can share input and the output may be the input of another gate.

Example:
- $(x+y)\bar{x}$
- $\bar{x}\overline{(y+\bar{z})}$
- $(x+y+z)(\bar{x}\bar{y}\bar{z})$

![[combination of gates.png]]

## Adders

### Half Adder

Add two bits and output the carry and sum. (not accept from a previous addition)
![[half adder.png]]

it is a ==multiple output circuit==.

### Full Adder

Compute the sum bit and the carry bit when two bits and a carry are added.
![[full adder.png]]

A half adder and multiple full adders can be used to produce ==the sum of $n$ bit integers==.