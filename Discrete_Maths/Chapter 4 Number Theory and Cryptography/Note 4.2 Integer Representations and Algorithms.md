---
Date: 2025-04-27T09:13:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=266&selection=1083,0,1083,38&color=yellow|The link of chapter 4.2, Discrete Mathematics]]"
---
# Introduction

In this section we will introduce the representations of integer and show related algorithms.

## Representation of Integers

## Theorem 1

Let $b$ be an integer greater than 1, then if $n$ is a positive integer, it can be expressed uniquely in the form $$
n=a_{k}b^{k}+a_{k-1}b^{k-1}+\cdots+a_{1}b+a_{0}
$$
where $k$ is a nonnegative integer, $a_{0},a_{1},\cdots,a_{k}$ are nonnegative integers ==less than== $b$ and $a_{k}\ne 0$.

The proof can be done by using mathematical induction. The representation of $n$ given in Theorem 1 is called the ==base== $b$ ==expansion== of $n$, denoted by $(a_{k}a_{k-1}\cdots a_{1}a_{0})_{b}$. And typically the subscript 10 can be omitted for ==decimal expansions==.

## Binary Expansions

Choose 2 as the base gives the ==binary expansions==. And it is used by computers to represent and do arithmetic with integers.

## Octal and Hexadecimal Expansions

Base 8 expansions are called ==octal expansions== and base 16 expansions are ==hexadecimal expansions==, use the number and the letters from $a$ to $f$ to represent 10 to 15.
==Bytes== are bit strings of length ==eight== and can be represented by two hexadecimal digits.($2^{8}=16^{2}$)

## Base Conversion

To construct base $b$ expansion of an integer $n$, we first divide $n$ by $b$ to obtain the quotient and the remainders, that is $$
n=bq_{0}+a_{0},0\leq a_{0}<b
$$
then the remainder $a_{0}$ is the ==rightmost digit== in the base $b$ expansion of $n$. Then divide $q_{0}$ by $b$ to obtain the quotient and the remainders. Continue this process until the quotient is zero.
![[Discrete Mathematics and Its Applications 7th.pdf#page=270&rect=264,758,648,885|Discrete Mathematics and Its Applications 7th, p.249]]

The algorithm can be thought of as a greedy algorithm.
## Conversion Between Binary, Octal and Hexadecimal Expansions

To converse between binary and octal and between binary and hexadecimal expansions, we need to know that ==each octal digit== corresponds to a block of ==three binary digits== and ==each hexadecimal digit== corresponds to a block of ==four binary digits==.

# Algorithms for Integer Operations

Suppose that the binary expansion of $a$ and $b$ are $$
a=(a_{n-1}a_{n-2}\cdots a_{1}a_{0})_{2},b=(b_{n-1}b_{n-2}\cdots b_{1}b_{0})_{2}
$$

## Addition Algorithm

For addition algorithm, we need to begin at the rightmost bit, then for every bit, we have that $$a_{k}+b_{k}+c_{k-1}=c_{k}\cdot 2 +s_{k}$$
where $k\geq1$ and $s_{k}$ is the bit in the binary expansion of $a+b$. For $k=0$, $a_{0}+b_{0}=c_{0}\cdot 2+s_{0}$. Then the procedure produces the binary expansion of the sum namely $a+b=(s_{n}s_{n-1}s_{n-2}\cdots s_{1}s_{0})_{2}$
![[Discrete Mathematics and Its Applications 7th.pdf#page=272&rect=264,717,644,865|Discrete Mathematics and Its Applications 7th, p.251]]
And the time complexity of this algorithm is $O(n)$.

## Multiplication Algorithm

Using the distributive law, we see that $$
\begin{align}
ab & =a(b_{0}2^{0}+b_{1}2^{1}+\cdots+b_{n-1}2^{n-1})  \\
 & =a(b_{0}2^{0})+a(b_{1}2^{1})+\cdots+a(b_{n-1}2^{n-1})
\end{align}
$$
Then if $b_{j}=0$, then $a(b_{j}2^{j})=0$. If not, $a(b_{j}2^{j})=(ab_{j})2^{j}=a\cdot 2^{j}$. Then we can obtain the result by ==shifting== the binary expansion of $a$ $j$ places to the left, adding $j$ zero bits at the tail end. Then obtain $ab$ by adding the $n$ integers $ab_{j}2^{j},j=0,1,\cdots,n-1$.

![[Discrete Mathematics and Its Applications 7th.pdf#page=273&rect=241,842,626,1006|Discrete Mathematics and Its Applications 7th, p.252]]

Since for $ab_{j}2^{j},j=0,1,\cdots,n-1$ requires at most $$
0+1+2+\cdots+n-1
$$ ==shifts==. Hence the number of shifts required is $O(n^{2})$.

## Algorithm For $\mathbf{div}$ and $\mathbf{mod}$

![[Discrete Mathematics and Its Applications 7th.pdf#page=274&rect=262,721,650,874|Discrete Mathematics and Its Applications 7th, p.253]]
And we need $O(n^{2})$ bit operations here.
For $a<0$, actually $-a=q\cdot d+r$, thus $a=-q\cdot d-r=-(q+1)\cdot d+(d-r)$. Thus $r:=d-r,q:=-(q+1)$

# Modular Exponentiation

To find $b^{n}\,\mathbf{mod}\,m$, we need to transfer the power into binary expansion, that is, $$
b^{n}=b^{a_{k-1}2^{k-1}+\cdots+a_{1}\cdot2+a_{0}}=b^{a_{k-1}2^{k-1}}\cdots b^{a_{1}\cdot2}\cdot b^{a_{0}}
$$
Then the algorithm successively finds $b\,\mathbf{mod}\,m,b^{2}\,\mathbf{mod}\,m,\cdots,b^{2^{k-1}}\,\mathbf{mod}\,m$ and multiplies together those terms where $a_{j}=1$. Then finding the remainder of the product after each multiplication. It uses the [[Note 4.1 Divisibility and Modular Arithmetic#Corollary 2|corollary]].
![[Discrete Mathematics and Its Applications 7th.pdf#page=275&rect=242,799,605,924|Discrete Mathematics and Its Applications 7th, p.254]]
And it uses $O(\log ^{2} m\log n)$ bit operations.