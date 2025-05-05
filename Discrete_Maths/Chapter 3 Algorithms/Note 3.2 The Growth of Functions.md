---
Date: 2025-04-19T10:41:00
tags:
  - Discrete_Mathematic_Notes
link: "[[Discrete Mathematics and Its Applications 7th.pdf#page=225&selection=471,0,471,23|The link of chapter 3.2, Discrete Math]]"
---
# Introduction

In this section we will estimate the time of an algorithm, the growth of a function to solve the problem and show the methods.

# Big-$O$ Notation
## Definition of Big-$O$ Notation

Let $f$ and $g$ be functions from the set of ==integers or real numbers== to the set of ==real numbers==. Then we say $f(x)$ is $O(g(x))$ if there are constants $C$  and $k$ such that $$
\left| f(x) \right| \leq C\left| g(x) \right| 
$$ where $x>k$. The constants $C$ and $k$ are called ==witnesses== to the relationship. (Obviously $C$ is positive). So when proving, we just need to ==find the pair of witnesses==.

Intuitively, the definition says that $f(x)$ grows slower or equivalent than some fixed multiple of $g(x)$ as $x$ grows without bound. That is, the value of $f(x)$ is always be limited by the fixed multiple of $g(x)$ when $x\to \infty$.

Sometimes we express it as $$f(x)=O(g(x))$$ but the equals sign is ==not== genuine equality. Actually $O(g(x))$ is a set and the sign represents in the set.

## Working with the Definition of Big-$O$ Notation

A useful approach for finding a pair of witnesses is to first ==select a value== of $k$ for which the size of $\left| f(x) \right|$ can be readily estimated when $x>k$ and to see whether to find a constant $C$ satisfy the definition.

To prove one function is not the big-O of another, we can prove by the contradiction that suppose that there exist $k,C$. 

And When using big-$O$ notation, the function $g$ in the big-$O$ is chosen to be as small as possible.
## The Same Order

If the two function $f$ and $g$ can be ==expressed as mutual big-$O$ of each other==, that is $$
f(x)=O(g(x)),g(x)=O(f(x))
$$
Then we can say they are of the ==same order==. 

# Big-$O$ Estimates for Some Important Functions
## Theorem 1

Let $f(x)=a_{n}x^{n}+a_{n-1}x^{n-1}+\cdots+a_{1}x+a_{0}$,  where $a_{0},a_{1},\cdots,a_{n}$ are real numbers. Then $f(x)$ is $O(x^{n})$.

## Important Functions

The next functions are sequenced in ascending: 
$$
1,\log n,n,n\log n,n^{2},2^{n},n!
$$

# The Growth of Combinations of Functions
## Theorem 2

Suppose that $f_{1}(x)$ is $O(g_{1}(x))$ and that $f_{2}(x)$ is $O(g_{2}(x))$. Then $(f_{1}+f_{2})(x)$ is $$
O(\text{max}(\left| g_{1}(x) \right| ,\left| g_{2}(x) \right| ))
$$
## Corollary 1

Suppose that $f_{1}(x),f_{2}(x)$ are both $O(g(x))$, then $(f_{1}+f_{2})(x)$ is $O(g(x))$.

## Theorem 3

Suppose that $f_{1}(x)$ is $O(g_{1}(x))$ and $f_{2}(x)$ is $O(g_{2}(x))$, then $(f_{1}f_{2})(x)$ is $O(g_{1}(x)g_{2}(x))$.

# Big-Omega and Big-Theta Notation

## Definition of Big-Omega($\Omega$) Notation

Let $f$ and $g$ be functions from the set of integers or the set of real numbers to the set of real numbers. We say $f(x)$ is $\Omega(g(x))$ if there are ==positive constants== $C$ and $k$ such that $$
\left| f(x) \right| \geq C\left| g(x) \right| 
$$ whenever $x>k$.

We can know that $$
f(x)\text{ is }\Omega(g(x))\Leftrightarrow g(x)\text{ is } O(f(x))
$$
## Definition of Big-Theta($\Theta$) Notation

Let $f$ and $g$ be functions from the set of integers or the set of real numbers to the set of real numbers. We say that $f(x)$ is $\Theta(g(x))$ if $f(x)$ is $O(g(x))$ and $f(x)$ is $\Omega(g(x))$. That is $f(x)$ and $g(x)$ are of the ==same order==. (or $f(x)$ is of ==order== $g(x)$).

## Theorem 4

Let $f(x)=a_{n}x^{n}+a_{n-1}x^{n-1}+\cdots+a_{1}x+a_{0}$, where the coefficients are real numbers with $a_{n}\ne 0$. Then $f(x)$ is of order $x^{n}$.