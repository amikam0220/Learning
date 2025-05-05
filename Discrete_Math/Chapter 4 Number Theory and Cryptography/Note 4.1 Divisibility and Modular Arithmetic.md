---
Date: 2025-04-25T15:38:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=258&selection=95,0,95,35&color=yellow|The link of chapter 4.1, Discrete Mathematics]]"
---
# Introduction

In this section, we will know the divisibility and the modular arithmetic.

# Division

## Definition of Divisibility

If $a,b$ are integers and $a\ne0$, we say that $a$ ==divides== $b$ if there is an integer $c$ such that $b=ac$ or say $c=\frac{b}{a}$. When $a$ divides $b$ we say $a$ is a ==factor== or ==divisor== of $b$ and that $b$ is a ==multiple== of $a$. The notation $a\mid b$ denotes that $a$ divides $b$ and $a \nmid b$ denotes that $a$ does not divide $b$.

## Theorem 1

Let $a,b,c$ be integers, where $a\ne 0$, then 
- if $a \mid b$ and $a \mid c$, then $a \mid (b+c)$.
- if $a\mid b$, then $a \mid bc$ for all integers $c$.
- if $a\mid b$ and $b\mid c$, then $a\mid c$.

## Corollary 1

If $a,b,c$ are integers, where $a\ne 0$, such that $a \mid b$ and $a\mid c$, then $a\mid(mb+nc)$ whenever $m,n$ are integers.

# The Division Algorithm

## Theorem 2 The Division Algorithm

Let $a$ be an integer and $d$ a ==positive integer==. Then there are unique integers $q$ and $r$ with $0\leq r\leq d$ such that $a=dq+r$.
(Actually, it is not really an algorithm)

## Definition 2

In the equality given in the division algorithm, $d$ is called the ==divisor==, $a$ is called the ==dividend==, $q$ is called the ==quotient==, and $r$ is called the ==remainder==. The notation is $$
q=a \,\mathbf{div}\, d,r=a \,\mathbf{mod}\, d
$$
Both the upper two are functions on the set of integers. And we have $a\,\mathbf{div}\,d=\lfloor a / d \rfloor$ and $a\,\mathbf{mod}\,b=a-d\lfloor a / d \rfloor$.

# Modular Arithmetic

## Definition of Modular

If $a$ and $b$ are integers and $m$ is a positive integer, then $a$ is ==congruent== to $b$ ==modulo== $m$ if $m$ divides $a-b$, denoted by $a\equiv b(\text{mod }m)$. And we say $a\equiv b(\text{mod }m)$ is a ==congruence== and that $m$ is its ==modulus== (plural ==moduli==). If $a$ and $b$ are not congruent modulo $m$, we write $a\not\equiv b(\text{mod }m)$.

Note that here the "mod" are different.

## Theorem 3

Let $a$ and $b$ be integers, and let $m$ be a positive integer. Then $a\equiv b(\text{mod }m)$ if and only if $a\,\mathbf{mod}\,m=b\,\mathbf{mod}\,m$.

## Theorem 4

Let $m$ be a positive integer. The integers $a$ and $b$ are congruent modulo $m$ if and only if there is an integer $k$ such that $a=b+km$.

## Congruence Class

==The set of all integers== congruent to an integer $a$ modulo $m$ is called the ==congruence class== of $a$ modulo $m$. 

## Theorem 5

Let $m$ be a positive integer. If $a\equiv b(\text{mod }m)$ and $c\equiv d(\text{mod }m)$, then $$
a+c\equiv b+d(\text{mod }m),ac\equiv bd(\text{mod } m)
$$
Note that some properties seemed to be true are not valid. Such as if $ac\equiv bc(\text{mod }m)$ then $a\equiv b(\text{mod }m)$ may be false; if $a\equiv b(\text{mod }m),c\equiv d(\text{mod }m)$, then $a^{c}\equiv b^{d}(\text{mod }m)$ may be false.
## Corollary 2

Let $m$ be a positive integer and let $a$ and $b$ be integers, then $$
(a+b)\,\mathbf{mod}\,m=((a\,\mathbf{mod}\,m)+(b\,\mathbf{mod}\,m))\mathbf{mod}\,m
$$
$$
ab\,\mathbf{mod}\,m\equiv((a\,\mathbf{mod}\,m)(b\,\mathbf{mo d}\,m))\mathbf{mo d}\,m 
$$

# Arithmetic Modulo $m$

We can define arithmetic operations on $Z_{m}$, the set of nonnegative integers less than $m$, that is, the set $\{ 0,1,\cdots,m-1 \}$. Then we can define the $+_{m}$ by $$
a+_{m}b=(a+b)\,\mathbf{mod}\,m
$$

and define the $\cdot_{m}$ by $$
a\cdot_{m}b=(a\cdot b)\,\mathbf{mod}\,m
$$
And the upper are ==arithmetic modulo $m$==.
It satisfies the properties:
Closure, asscosiativity, commutativity, identity elements, additive inverses($a+_{m}(m-a)=0$), distributivity.