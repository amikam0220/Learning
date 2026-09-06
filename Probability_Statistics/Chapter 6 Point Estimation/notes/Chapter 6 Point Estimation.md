---
Date: 2026-05-27T19:50:00
---
# 6.1 Some General Concepts of Point Estimation

Typically, we use $\theta$ as the parameter that describe the population characteristics.

The point estimate of a parameter $\theta$ is a ==single number== that can be regarded as a ==sensible value== for $\theta$.

A point estimate is obtained by ==selecting a suitable statistic and computing its value from the given sample data==. The selected statistic is called the ==point estimate== of $\theta$. Estimator, denoted by $\hat{\theta}$, is the random variable to estimate the parameter. Estimate is the concrete value from the sample.
![[point estimation.png]]

The ==type of population under study is usually known==, while the ==parameters are unknown==.

## Estimation Error Analysis

$$
\hat{\theta}= \theta+\text{error of estimation}
$$

A good estimator should have two properties:
- Unbiasedness(i.e., the ==average error== should be zero)
- Minimum variance(i.e., the variance of error should be small)

## Unbiased Estimator

A point estimator $\hat{\theta}$ is an ==unbiased estimator== of $\theta$ if
$$
E(\hat{\theta})=\theta\text{ for every possible value of }\theta
$$

If $\hat{\theta}$ is not unbiased, the difference $E(\hat{\theta})-\theta$ is called the bias of $\hat{\theta}$.

## Proposition

When $X$ is a ==binomial rv== with parameters $n$ and $p$, the sample proportion $\hat{p} = X / n$ is an ==unbiased estimator of $p$==.

## Proposition

Let $X_{1},\cdots,X_{n}$ be a random sample from a distribution with mean $\mu$ and variance $\sigma^{2}$, then the estimator
$$
\hat{\sigma}^{2}=S^{2}=\frac{\sum(X_{i}-\bar{X})^{2}}{n-1}
$$
is an unbiased estimator of $\sigma^{2}$, namely $E(S^{2})=\sigma^{2}$. (note the denominator is $n-1$)

## Proposition

If $X_{1},\cdots,X_{n}$ is a random sample from a distribution with mean $\mu$, then ==$\bar{X}$ is an unbiased estimator of $\mu$==. If in addition the distribution is ==continuous and symmetric==, then the ==median== and any ==trimmed mean== are also ==unbiased== estimator of $\mu$.  

## Estimators with Minimum Variance

By the degree of centralizing. More centralized, less $\sigma$.

## Estimator Selection

- When choosing among several different estimators of $\theta$, select one that is unbiased
- For all unbiased $\theta$, choose one that has minimum variance. (called minimum variance unbiased estimator (MVUE) of $\theta$).

## Theorem

Let $X_{i},1<i<n$ be a random sample from a ==normal distribution=== with $\mu$ and $\sigma$, then the estimator
$$
\hat{\mu}=\bar{X}
$$
is the MVUE for $\mu$.
For $\mu$, there exist four estimators: mean, median, trimmed mean, mean of extreme value
- For normal distribution, $\bar{X}$ is best of four estimators
- For Cauchy distribution, the median is best. Bad for $\bar{X}$ and $\bar{X}_{e}$.
- For uniform distribution, $\bar{X}_{e}$ is best.
- The trimmed mean is not best for all three situations, but it is a robust estimator.

## The Standard Error

The standard error of an estimator $\hat{\theta}$ is its standard deviation $\sigma_{\hat{\theta}}=\sqrt{ V(\hat{\theta}) }$

# 6.2 Methods of Point Estimation

Two constructive methods for obtaining point estimators:
- method of moments
- maximum likelihood estimation

## The Method of Moment(矩)

The basic idea of this method is ==equate certain sample characteristics== such as the mean ==to the corresponding population== expected values.

### Moment

Let $X_{1},\cdots,X_{n}$ be random sample from pmf or pdf. The $k$th population moment, or ==$k$th moment of the distribution== $f(x)$, is
$$
E(X^{k})
$$

The ==$k$th sample moment== is
$$
\frac{1}{n}\sum_{i=1}^{n} X_{i}^{k}
$$

### Moment Estimator

Using ==sample moment replaces the population moment==, and find unknown parameter by equations.

![[example 6.12.png]]

![[example 6.13.png]]
- $E(X)=\mu=\alpha\beta,E(X^{2})=V(X)+[E(X)]^{2}=\alpha\beta^{2}+\alpha^{2}\beta^{2}$
- $\bar{X}\to E(X), \frac{1}{n}\sum X_{i}^{2}\to E(X^{2})$.
and by two equations,
$$
\hat{\alpha}=\frac{\bar{X}^{2}}{\frac{1}{n}\sum X_{i}^{2}-\bar{X}^{2}},\hat{\beta}=\frac{\frac{1}{n}\sum X_{i}^{2}-\bar{X}^{2}}{\bar{X}}
$$

# Maximum Likelihood Estimation

The basic idea is that we look at the sample values and then ==choose as our estimates== of the unknown parameters the values for which the pdf or pmf get maximum.

![[example 6.15.png]]
take logarithm and take derivative, get $p=0.3$.

Three steps:
- write the joint pmf/pdf(Likelihood function): $f(x_{1},\cdots,x_{n};\theta_{1},\cdots,\theta_{m})=f(x_{1};\theta_{1},\cdots,\theta_{m})\cdots f(x_{n};\theta_{1},\cdots,\theta_{m})$(if independent).
- Get the logarithm(if necessary)
- take the partial derivative with respect to $\theta_{i}$ and equals them to 0 and solve the resulting equations.

