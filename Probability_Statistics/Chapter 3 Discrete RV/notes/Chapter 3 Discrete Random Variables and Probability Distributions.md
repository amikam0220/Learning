---
Date: 2026-04-01T18:53:00
---
# Introduction

We have a rule that assigns $s$ to each simple event in $S$ ==a single real number==. Mathematically speaking, we are dealing with a function.

# 3.1 Random Variable

## Random variable(RV)

For a given ==sample space $S$== of some experiment, a random variable is ==any rule that associates a number with each outcome in $S$==.
Or, a random variable is a ==function== whose ==domain is the sample space== and whose ==range is the set of real number==.(RV is a function rather than variable)

Random variables are denoted by ==uppercase letters==(X, Y, etc.). We use ==lowercase letters==(x, y, etc.) to denote a ==variable==. Here we use lowercase letters to represent some ==particular value== of the corresponding ==random variable==.
The notation $X(s)=x$ means that $x$ is the value associated with the outcome $s$ by the RV $X$.

## Two Types of Random Variables

- Discrete Random Variable
	Possible values either ==constitute a finite set== or can be ==listed in an infinite sequence==.
- Continuous Random Variable
	Its set of possible values consists on an ==entire interval on the number line==. And no way to create an infinite listing them.

## Bernoulli Random Variable

Any random variable whose ==only possible== are ==0 and 1== is called ==Bernoulli random variable==.

# 3.2 Probability Distributions for Discrete Random Variables

## Probability Distribution

The ==probability distribution== or ==probability mass function(pmf)== of a discrete RV is defined for every number $x$ by 
$$p(x)=P(X=x)=P(\text{all }s\text{ in }S:X(s)=x)$$
Note:
$$p_{i}=p(x_{i})\geq0,\sum_{i=1}^{n}p(x_{i}) = 1$$

| $x$    | $x_{1}$ | $\cdots$ | $x_{n}$ |
| ------ | ------- | -------- | ------- |
| $p(x)$ | $p_{1}$ | $\cdots$ | $p_{n}$ |

## A parameter of a Probability Distribution

Suppose $p(x)$ depends on a ==quantity that can be assigned any one of a number of possible values== with each different value determining a different probability distribution. Such a quantity is called ==parameter== of the distribution.
For example, $p(x_{1})=\alpha,p(x_{2})=1-\alpha$ where $a$ is a parameter.  
The collection of all probability distributions for different values of the parameter is called ==a family of probability distributions==.

## Cumulative Distribution Function

The cumulative distribution function(cdf) $F(x)$ of a discrete RV $X$ with pmf $p(x)$ is defined for every number $x$ by
$$F(x)=P(X\leq x)=\sum_{y:y\leq x} p(y) $$

- Proposition
	For any two numbers $a$ and $b$ with $a\leq b$,
	$$P(a\leq X\leq b)=F(b)-F(a-)$$
	where $a-$ represents strictly less than $a$.
	If the only possible values are integers and if $a,b$ are integers, then
	$$P(a\leq X\leq b)=F(b)-F(a-1)$$
	If $a=b$, we have $P(X=a)=F(a)-F(a-1)$.

- Three Properties of cdf(discrete/continuous cases)
	- Non-decreasing. i.e., $x_{1}<x_{2} \Leftrightarrow F(x_{1})\leq F(x_{2})$
	- $F(-\infty)=\lim_{ x \to -\infty }F(x)=0$, $F(+\infty)=\lim_{ x \to +\infty }F(x)=1$
	- $F(x+0)=F(x)$

# 3.3 Expected Values of Discrete Random Variables

## The expected value of $X$

Let $X$ be a discrete RV with set of possible values $D$ and pmf $p(x)$. The expected value or mean value of $X$, denoted by $E(X)$ or $\mu_{X}$ is
$$E(X)=\mu_{X}=\sum_{x \in D} x\cdot p(x) $$
If the sum does not exist, we say the expectation of $X$ does not exist(infinite case)
For Bernoulli RV, $E(X)=p$.
- Example 3.19 find the expected value of $p(x)=p(1-p)^{x-1},x=1,2,\cdots$
	$$\begin{align}E(x) & =\sum_{x=1}^{\infty} xp(1-p)^{x-1} \\ & = p\sum_{x=1}^{\infty} \left[ -\frac{d}{dp}(1-p)^{x} \right] \\  & =-p \frac{d}{dp}\sum_{x=1}^{\infty} (1-p)^{x} \\  & =-p\cdot \frac{d}{dp}\left( \frac{1}{1-(1-p)}-1 \right) \\  & =\frac{1}{p}\end{align}$$
	
## The expected value of a ==function==

Let $X$ be a discrete RV with set of possible values $D$ and pmf $p(x)$. The expected value or mean value of any function $h(X)$, denoted by $E[h(X)]$ or $\mu_{h(X)}$, is computed by $$E[h(X)]=\sum _{x \in D} h(x)\cdot p(x)$$

- Rule of Expected Value
	$$E(aX+b)=aE(X)+b$$

## The Variance of $X$

Let $X$ have pmf $p(x)$ and the expected value $\mu$, then the variance of $X$ denoted by $V(X)$ or $\sigma^{2}_{X}$, or just $\sigma^{2}$, is $$V(X)=\sum_{x \in D}(x-\mu)^{2}\cdot p(x)=E[(X-\mu)^{2}]$$
The standard deviation(SD) of $X$ is $$\sigma_{X}=\sqrt{ \sigma^{2}_{X} }$$
- A short formula for $\sigma^{2}$
	$$V(X)=\sigma^{2}=\left[ \sum_{D}x^{2}p(x) \right]-\mu^{2}=E(X^{2})-[E(X)]^{2}$$

- Rules of Variance 
	- $V(aX+b)=a^{2}\sigma_{X}^{2}$
	It is not related to $b$.

# 3.4 The Binomial Probability Distribution

## Requirements for a ==binomial experiment==

- The experiment consists of $n$ smaller experiments called ==trials==, where $n$ is ==fixed in advance==.
- ==Only one of two outcomes== for each trail, which we denote by ==success(S) or failure(F)==.
- The trails are ==independent==
- The probability of success is ==constant==, denoted by $p$.

- Rule
	If ==the sample size $n$ is at most 5% of the population size==, the experiment can be analyzed as though it were ==exactly a binomial experiment== for experiment ==without replacement==.

## Binomial random variable

- Definition:
	Given a binomial experiment consisting of $n$ trails, the binomial random variable $X$ associated with this experiment is defined as ==$X$ is the number of $S's$ among the $n$ trials==.
- $X\sim \mathrm{Bin}(n,p)$
	Possible values for $X$ in an $n$-trial experiment are $x=0,1,\cdots,n$. We write $X\sim \mathrm{Bin}(n,p)$ to indicate $X$ is a binomial RV based on $n$ trials with success probability $p$.
	And because of the pmf of a binomial rv depends on the two parameters $n$ and $p$. We ==denote the pmf by $b(x;n,p)$==.
- Theorem:
	$$b(x;n,p)=\begin{cases}\left(\begin{align}n \\x\end{align}\right)p^{x}(1-p)^{n-x},x=0,1,2,\cdots,n \\0,otherwise\end{cases}$$
- Notation
	For $X\sim \mathrm{Bin}(n,p)$, the ==cdf== will be denoted by
	$$P(X\leq x)=B(x;n,p)=\sum_{y=0}^{x}b(y;n,p),x=0,1,\cdots,n $$  
- The mean and variance of $X$
	If $X\sim \mathrm{Bin}(n,p)$, then $$E(X)=np,V(X)=np(1-p)=npq$$
	where $q=1-p$

## The Geometric Distribution(Supplementary)

- Definition
	The number of trails up to and including the ==first success== in a sequence of independent Bernoulli trials with a constant success probability $p$ has a ==geometric distribution== with parameter $p$. The probability mass function is 
	$$P(X=x)=(1-p)^{x-1}p$$
	And $$P(X\leq x)=1 - (1-p)^{x}$$
	(It can be obtained by geometric progression)
	And $$E(X)=\frac{1}{p},Var(X)=\frac{1-p}{p^{2}}$$

# 3.5 Hypergeometric and Negative Binomial Distributions

- Proposition:
	If ==$X$'s is the number of $S$'s== in a completely random ==sample of size $n$== drawn from a population consisting of $M$ $S$'s and $(N-M)$ $F$'s, then the probability distribution of $X$ called the ==hypergeometric distribution== is given by $$P(X=x)=h(x;n,M,N)=\frac{\binom{M}{x}\binom{N-M}{n-x}}{\binom{N}{n}}$$
- The range of rv $X$
	$\mathrm{Max}(0,n-(N-M))\leq X\leq \mathrm{Min}(n,M)$

- Proposition
	The ==mean and variance== of the hypergeometric rv $X$ are $$E(X)=np, V(X)=\frac{N-n}{N-1}\cdot n\cdot p\cdot(1-p)$$
	where $p = \frac{M}{N}$ and $N-n / N-1$ is less or equal to 1, called ==finite population correction factor==.

## The Negative Binomial Distribution

The negative binomial rv and distribution are based on an experiment satisfying the following conditions.
- The experiment consists of a sequence of independent trails
- Each trail can result in either a success or a failure
- The probability of success is constant
- The experiment continues ==until a total of $r$ successes have been observed==, where $r$ is ==a specified positive integer==.
The random variable is $X$ = ==the number of failures== that precede the $r$th success. $X$ is called ==negative binomial variable==.

$$
nb(x;r,p)=\binom{x+r-1}{r-1}p^{r}(1-p)^{x}
$$
For The first $x+r-1$ trails, arrange $r-1$ $S$. For the last, it is fixed $S$.
Thus
$$
nb(x;r,p)=\binom{x+r-1}{r-1}p^{r-1}(1-p)^{x}\cdot p=\binom{x+r-1}{r-1}p^{r}(1-p)^{x}
$$

In some sources, the negative binomial rv is taken to be the number of $X+r$ rather than the number of failures.

In the special case $r=1$, the pmf is
$$
nb(x;1,p)=(1-p)^{x}p,x=0,1,2,\cdots
$$
Both $X$ = the number of $F$'s and $Y$ = number of trails $(1+X)$ are called ==geometric random variables==. The pmf is called the ==geometric distribution==.

Proposition:
If $X$ is a negative binomial rv, then
$$
E(X)=\frac{r(1-p)}{p},V(X)=\frac{r(1-p)}{p^{2}}
$$

# 3.6 The Poisson Probability Distribution

## Poisson Distribution

A random variable $X$ is said to have a ==Poisson distribution== with parameter $\lambda(\lambda>0)$ if the pmf of $X$ is 
$$
p(x;\lambda)= \frac{e^{-\lambda}\lambda^{x}}{x!},
$$
The value of $\lambda$ is ==frequency a rate per unit time or per unit area==.(mean)

The Maclaurin infinite series expansion of $e^{\lambda}$:
$$e^{\lambda}=1+\lambda+\frac{\lambda^{2}}{2!}+\cdots=\sum_{x=0}^{\infty} \frac{\lambda^{x}}{x!}$$
Thus 
$$
\sum_{n=0}^{\infty} e^{-\lambda} \frac{\lambda^{x}}{x!} = 1
$$

Proposition:
If $X$ has a Poisson distribution with parameter $\lambda$, then 
$$
E(X)=V(x)=\lambda
$$



## The Poisson Distribution as a Limit

The rational for using the Poisson distribution in many situations is provided by the following proposition
Proposition:
Suppose that in the ==binomial pmf== $b(x;n,p)$, we let $n\to \infty$ and $p\to0$ in such a way that ==$np$ approaches a value $\lambda>0$, then $b(x;n,p)\to p(x;\lambda)$==.

That is, when $n$ is large and $p$ is small, $b(x;n,p)\approx p(x;\lambda)$. This approximation can safely be applied if $n\geq 100$, $p\leq 0.01$ and $np\leq 20$.