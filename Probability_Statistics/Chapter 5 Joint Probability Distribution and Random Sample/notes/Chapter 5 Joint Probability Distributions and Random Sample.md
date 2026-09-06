---
Date: 2026-05-13T19:08:00
---
# 5.1 Jointly Distributed Random Variables

## The Joint Probability Mass Function for Two Discrete Random Variables

The joint probability mass function $p(x,y)$:
$$
p(x,y)=P(X=x,Y=y)
$$
For a set $A$ consisting of pairs of $(x,y)$ values, to obtain $p[(X,Y)\in A]$, 
$$
p[(X,Y)\in A]=\sum \sum_{(x,y)\in A}^{} p(x,y)
$$
Two requirements for a pmf
$$
p(x,y)\geq 0, \sum_{x}^{} \sum_{y}^{} p(x,y)=1
$$

## The marginal Probability Mass function

The marginal probability mass function of $X$ and $Y$, denoted by $p_{X}(x)$ and $p_{Y}(y)$, respectively, are given by
$$
p_{X}(x)=\sum_{y}^{} p(x,y),p_{Y}(y)=\sum_{x}^{} p(x,y)
$$

## The Joint Probability Density Function for Two Continuous Random Variables

$f(x,y)$ is the joint probability density function for $X$ and $Y$ if for any two-dimensional set $A$
$$
P[(X,Y)\in A] = \int \int _{A} f(x,y)dxdy
$$

Two requirements for a joint pdf
- $f(x,y)\geq 0$
- $\int_{-\infty}^{\infty} \int_{-\infty}^{\infty} f(x,y) \, dx \, dy=1$

If $A$ is the two-dimensional rectangle set $\{ (x,y):a\leq x\leq b, c\leq y\leq d \}$, then
$$
P[(X,Y)=A]=P(a\leq X\leq b,c\leq Y\leq d)=\int_{a}^{b} \int_{c}^{d} f(x,y) \, dy  \, dx 
$$
It is the volume under density surface above $A$.

## Marginal Probability Density Function

The marginal probability density functions of $X$ and $Y$, denoted by $f_{X}(x),f_{Y}(y)$, respectively are given by
$$
\begin{align}
 f_{X}(x)=\int_{-\infty}^{\infty} f(x,y) \, dy ,-\infty<x<\infty \\
f_{Y}(y)=\int_{-\infty}^{\infty} f(x,y) \, dx ,-\infty<y<\infty
\end{align}
$$

## Independent Random Variables

Two random variables $X$ and $Y$ are said to be independent if ==for every pair of $x$ and $y$== values,
$$
\begin{align}
 & p(x,y)=p_{X}(x)\cdot p_{Y}(y),(X,Y\text{ are discrete}) \\
 & f(x,y)=f_{X}(x)\cdot f_{Y}(y),(X,Y\text{ are continuous})
\end{align}
$$

## More than Two Random Variables

For more random variables,
$$
\begin{align}
 & p(x_{1},x_{2},\cdots,x_{n})=P(X_{1}=x_{1},X_{2}=x_{2},\cdots,X_{n}=x_{n})(\text{discrete variables}) \\
 & P(a_{1}\leq X_{1}\leq b_{1},\cdots,a_{n}\leq X_{n}\leq b_{n})=\int_{a_{1}}^{b_{1}} \cdots\int_{a_{n}}^{b_{n}} f(x_{1},\cdots,x_{n}) \, dx _{n} \,\cdots dx_{1} (\text{continuous variables})
\end{align}
$$
## Multinomial Experiment

An experiment consisting of $n$ independent and identical trials where each trial can result in any one of $r$ possible outcomes. Let $p_{i}=P$(Outcome $i$ on any particular trial), and define random variables by $X_{i}=\text{The number of trials resulting in outcome } i(i=1,2,\cdots,r)$, the joint pmf is called the ==multinomial distribution==, shown to be
$$
p(x_{1},\cdots,x_{r})=\frac{n!}{x_{1}!x_{2}!\cdots x_{r}!}p_{1}^{x_{1}}\cdots p_{r}^{x_{r}},x_{i}=0,1,\cdots \text{ with }x_{1}+x_{2}+\cdots+x_{r}=n
$$

## Independent

For more random variables, they are said to be independent if for every pair, every triple and so on, ==the joint pmf or pdf of the subset is equal to the product of the marginal pmf or pdf==.

## Conditional Distribution

The conditional probability density function of $Y$ given that $X=x$ is
$$
f_{Y|X}(y|x)= \frac{f(x,y)}{f_{X}(x)},-\infty<y<\infty
$$
if $X,Y$ are discrete, then
$$
f_{Y|X}(y|x)= \frac{p(x,y)}{p_{X}(x)},-\infty<y<\infty
$$

# 5.2 Expected Values, Covariance and Correlation

## The Expected Value of a function $h(x,y)$

The expected value of a function $h(x,y)$, denoted by $E[h(x,y)]$ or $\mu h(x,y)$ is 
$$
E[h(X,Y)]=\sum_{x}\sum_{y}h(x,y)\cdot p(x,y);X,Y\text{ are discrete}
$$
and
$$
E[h(X,Y)]=\int_{-\infty}^{\infty} \int_{-\infty}^{\infty} h(x,y)f(x,y) \, dx  \, dy; X,Y\text{ are continuous}
$$
## Covariance

When $X$ and $Y$ are ==not independent==, it is frequency of interest to assess ==how strongly they are related to one another==
The Covariance between two rv's $X$ and $Y$ is
$$
Cov(X,Y)=E[(X-\mu_{X})(Y-\mu_{Y})]
$$
for discrete
$$
\sum_{X}\sum_{Y}(x-\mu_{X})(y-\mu_{Y})p(x,y)
$$
for continuous
$$
\int_{-\infty}^{\infty} \int_{-\infty}^{\infty} (x-\mu_{X})(y-\mu_{Y})f(x,y) \, dx  \, dy 
$$
- If strong positive relationship, $Cov(x,y)$ should be quite ==positive==
- If strong negative relationship, $Cov(x,y)$ should be quite ==negative==
- If not strongly related, $Cov(x,y)$ near 0.

### Proposition

$$
Cov(X,Y)=E(XY)-\mu_{X}\mu_{Y}
$$
Note that
$$
Cov(X,X)=E(X^{2})-\mu_{X}^{2}=V(X)
$$

## Correlation

The correlation coefficient of $X,Y$, denoted by $Corr(X,Y),\rho_{X,Y}$ or just $\rho$, is defined by
$$
\rho_{X,Y}= \frac{Cov(X,Y)}{\sigma_{X}\cdot \sigma_{Y}}
$$

### Proposition

If $a$ and $c$ are either ==both positive or both negative==
$$
Corr(aX+b,cY+d)=Corr(X,Y)
$$
and for any two rv's $X$ and $Y$, $-1 \leq Corr(X,Y)\leq 1$.

If $X$ and $Y$ are ==independent==, then $\rho=0$, but $\rho=0$ ==does not imply independence==. They are said to be ==uncorrelated==.

$\rho=1\text{ or }-1$ if and only if $Y=aX+b$ for some numbers $a$ and $b$ and $a\neq0$.

# 5.3 Statistics and Their Distributions

From this section, we consider function of $n$ random variables $X_{1},\cdots,X_{n}$ focusing especially on their average $(X_{1},X_{2},\cdots,X_{n}) / n$. We call any such function, ==itself a random variable, a statistic==. We studies ==the distribution of statistics, like sample mean, sample standard deviation and so on==.

In summary, the value of the individual sample observations ==vary form sample to sample==, so in general the value of any quantity ==computer from sample data==, and the value of a sample characteristic used as an estimate of the corresponding population characteristic, will ==virtually never coincide with what is being estimated==.
# Statistic

A statistic is any ==quantity== whose value can be calculated from ==sample data==.

A statistic is a ==random variable== since there is ==uncertainty== as to what value of particular statistic will result before obtaining data. A statistic will be denoted by an ==uppercase letter==. Calculated or observed value of the statistic uses ==lowercase letter==.

The probability distribution of a statistic is sometimes referred to as its ==sampling distribution==. It depends on
- The population distribution(normal, uniform, etc.)
- The sample size $n$
- ==The method of sampling==(replacement or without replacement)

# Random Sample

The rv's $X_{1},X_{2},\cdots,X_{n}$ are said to form ==a simple random sample== of size $n$ if
- The $X_{i}$'s are independent rv's
- Every $X_{i}$ has the ==same probability distribution==

And we say that the $X_{i}$'s are ==independent and identically distributed(i.i.d)==.

Sampling ==with replacement== or from an infinite population is ==random sampling==. Sampling without replacement from a finite population is generally considered not random sampling. However, if $n / N \leq 0.05$, it is ==approximately random sampling==.

## Deriving the Sampling Distribution of a Statistic

- Method 1: Calculations based on probability rules.
- Method 2: Carrying out a simulation experiments.

Example 5.20
![[Example5.20.png]]

$\bar{X}$ sampling distribution is centered at the population mean $\mu$ and $S^{2}$ sampling distribution is centered at the population variance $\sigma^{2}$

## Simulation Experiments

It is usually used when a derivation via probability rules is ==too difficult or complicated to be carried out==. Such an experiment is virtually always done with the aid of a computer.
The following characteristics of an experiment must be specified
- The statistic of interest
- The population distribution
- The sample size $n$
- The number of replications $k$. (the actual sampling distribution emerges as $k\to \infty$)

When $n$ increases, no matter ==what type the population distribution is==, the  $\bar{X}$ sampling distribution will close to ==normal distribution==.

# 5.4 The Distribution of the Sample Mean

## Proposition

Let $X_{1},\cdots,X_{n}$ be a random sample from a distribution with mean value $\mu$ and standard deviation $\sigma$. Then
$$
\begin{align}
 & E(\bar{X})=\mu_{\bar{X}}=\mu \\
 & V(\bar{X})=\sigma_{\bar{X}}^{2} = \frac{\sigma^{2}}{n},\sigma_{\bar{X}}=\frac{\sigma}{\sqrt{ n }}
\end{align}
$$
With $T_{0}=X_{1}+\cdots+X_{n}$(the sample total),
$$
\begin{align} 
 & E(T_{0})=n\mu \\
 & V(T_{0})=n\sigma^{2},\sigma_{T_{0}}=\sqrt{ n } \sigma
\end{align}
$$

## Proposition

Let $X_{1},\cdots,X_{n}$ be a random sample ==from a normal distribution== with mean $\mu$ and standard deviation $\sigma$. Then for any $n$, $\bar{X}$ is ==normally distributed== as is $T_{0}$.

## The Central Limit Theorem (CLT)

Let $X_{1},\cdots,X_{n}$ be a random sample from any distribution with mean $\mu$ and variance $\sigma^{2}$, then ==if $n$ is sufficiently large==, $\bar{X}$ has approximately a ==normal distribution== with
$$
\mu_{\bar{X}}=\mu,\sigma^{2}_{\bar{X}}=\frac{\sigma^{2}}{n}
$$
and $T_{0}$ also has approximately a normal distribution with
$$
\mu_{T_{0}}=n\mu,\sigma^{2}_{T_{0}}=n\sigma^{2}
$$

Usually ==if $n>30$==, the CLT can be used.

# 5.5 The Distribution of a Linear Combination

## Linear Combination

Given a collection of $n$ random variables $X_{1},\cdots,X_{n}$ and $n$ numerical constants $a_{1},\cdots,a_{n}$, the rv
$$
Y=a_{1}X_{1}+a_{2}X_{2}+\cdots+a_{n}X_{n}=\sum_{i=1}^{n} a_{i}X_{i}
$$
is called a ==linear combination of the $X_{i}$'s==.

## Proposition

Let $X_{1},\cdots,X_{n}$ have mean values $\mu_{1},\cdots,\mu_{n}$ respectively and variances $\sigma_{1}^{2},\cdots,\sigma_{n}^{2}$.
$$
E\left( \sum_{i=1}^{n} a_{i}X_{i} \right)=\sum_{i=1}^{n} a_{i}E(X_{i})=\sum_{i=1}^{n} a_{i}\mu_{i}
$$
for any $X_{i}$.

If $X_{i}$ are independent,
$$
V\left( \sum_{i=1}^{n} a_{i}X_{i} \right) = \sum_{i=1}^{n} a_{i}^{2}V(X_{i})=\sum_{i=1}^{n} a_{i}^{2}\sigma_{i}^{2}
$$
and $\sigma_{\sum_{i=1}^{n}a_{i}X_{i}}=\sqrt{ \sum_{i=1}^{n}a_{i}^{2}\sigma_{i}^{2} }$

For ==any== $X_{i}$,
$$
V\left( \sum_{i=1}^{n} a_{i}X_{i} \right)=\sum_{i=1}^{n} \sum_{j=1}^{n} a_{i}a_{j}Cov(X_{i},X_{j})
$$

## Corollary

$$
E(X_{1}-X_{2})=E(X_{1})-E(X_{2})
$$
and if they are independent, 
$$
V(X_{1}-X_{2})=V(X_{1})+V(X_{2})
$$
note that ==the sign is sum==.

## Proposition

If $X_{1},\cdots,X_{n}$ are independent, normally distributed. then ==any linear combination of $X_{i}$'s also has a normal distribution==.

