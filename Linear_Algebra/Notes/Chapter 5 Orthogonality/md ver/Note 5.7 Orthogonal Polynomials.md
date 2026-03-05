---
Date: 2025-06-24T09:53:00
tags:
  - Linear_Algebra_notes
---
# Orthogonal Sequences

## Definition of Orthogonal Polynomials

For a sequence of polynomials, if the ==inner product== of each pair of them are zero, the sequence is a ==sequence of orthogonal polynomials==. Moreover, if its elements are ==unit==, the sequence is a sequence of ==orthonormal polynomials==.

## Theorem 5.7.1

For a sequence of orthogonal polynomials $p_{0},p_{1},\cdots$, 
- $p_{0},\cdots,p_{n-1}$ form a basis for $P_{n}$.
- $p_{n}$ is orthogonal to ==every polynomials of degree less than $n$==.($p_{n}\in P^{T}$)

And we can know that 
$$
p=\sum_{i=0}^{n-1} \frac{\langle p,p_{i}\rangle}{\langle p_{i},p_{i}\rangle}p_{i}=\sum_{i=0}^{n-1} \frac{\langle f,p_{i}\rangle}{\langle p_{i},p_{i}\rangle}p_{i}
$$

where $p$ is the ==best least approximation to $f$ by the elements of $P_{n}$==.

## Theorem 5.7.2

For a sequence of orthogonal polynomials $p_{0},\cdots$, let $a_{i}$ denote the ==lead coefficient of $p_{i}$== for each $i$ and $p_{-1}(x)$ be zero polynomials, then we have 
$$
\alpha_{n+1}p_{n+1}(x)=(x-\beta_{n+1})p_{n}(x)-\alpha_{n}\gamma_{n}p_{n-1}(x)\quad (n\geq0)
$$

where $\alpha_{0}=\gamma_{0}=1$ and 
$$
\alpha_{n}=\frac{a_{n-1}}{a_{n}},\beta_{n}=\frac{\langle p_{n-1},xp_{n-1}\rangle}{\langle p_{n-1},p_{n-1}\rangle},\gamma_{n}=\frac{\langle p_{n},p_{n}\rangle}{\langle p_{n-1},p_{n-1}\rangle}
$$

The theorem can use ==three-term recursion relation== to find the elements in the sequence.

We are ==free to choose== $a_{n}$ since any ==nonzero multiple of the orthogonal polynomials are also orthogonal polynomials==. Since we can choose all $a_{i}=1$ such that 
$$
p_{n+1}(x)=(x-\beta_{n+1})p_{n}(x)-\gamma_{n}p_{n-1}(x)\quad (n\geq0)
$$

## Theorem 5.7.3 

For a sequence of orthogonal polynomials with the inner product 
$$
\langle p,q\rangle=\int_{a}^{b} p(x)q(x)w(x) \, dx 
$$
, then the ==zero points== of $p_{n}(x)$ are all ==real and distinct== and ==lie in the interval== $(a,b)$.