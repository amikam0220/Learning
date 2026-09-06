---
Date: 2026-06-10T20:38:00
---
A point estimation provides no information about ==precision and reliability== of estimation. The point estimate says nothing about ==how close it might be to actual value==. 

So we use ==entire interval of plausible values==, an ==interval estimate or confidence interval(CI)==.
We want to find a interval(CI). The probability of the interval ==cover the true value== is ==confidence level(CL)==. 
# 7.1 Basic Properties of Confidence Intervals

## Considering a Simple Case

- Population is normal distribution
- $\sigma$ is known
![[example 7.1.png]]

The sample mean is $\mu$ and standard deviation is $\sigma / \sqrt{ n }$.
Then $Z=\frac{\bar{X}-\mu}{\sigma/\sqrt{ n }}$.
For confidence level $100(1-\alpha)\%$, we find $P\left(- z_{\frac{\alpha}{2}}<Z<z_{\frac{\alpha}{2}} \right)=1-\alpha$.
i.e., $P\left( \bar{X}-\frac{\sigma}{\sqrt{ n }}z_{\frac{\alpha}{2}}<\mu<\bar{X}+\frac{\sigma}{\sqrt{ n }}z_{\frac{\alpha}{2}} \right)=1-\alpha$.
For $\alpha=0.05$, i.e., the confidence level is $95\%$, corresponding $z_{0.025}=1.96$.
## Confidence Level, Precision, and Choice of Sample Size

Reliability is opposed to precision.
Higher confidence level, larger $\sigma$ and smaller $n$ correspond to wider interval.

# 7.2 Large-Sample Confidence Intervals for a Population Mean and Proportion

- Any population, normal or un-normal
- $\sigma$ is known
- $n$ is large enough($n>40$)

By ==CLT==, $\bar{X}$ has approximately a normal distribution.

If $\sigma$ is not known, we can use the $S$(variance) of sample to replace $\sigma$.

## Proposition

If $n$ is sufficiently large($n>40$), the standardized variable 
$Z=\frac{\bar{X}-\mu}{S / \sqrt{ n }}$ where $S$ is the standard deviation of sample.

## One-Sided Confidence Intervals

In some cases, we will want only the upper confidence or the lower one.

### Proposition

A large-sample upper confidence bound for $\mu$ is
$$
\mu < \bar{x}+z_{\alpha}\cdot \frac{s}{\sqrt{ n }}
$$

and large-sample lower confidence bound for $\mu$ is
$$
\mu>\bar{x}-z_{\alpha}\cdot \frac{s}{\sqrt{ n }}
$$

note that it is $z_{\alpha}$ rather than $z_{\frac{\alpha}{2}}$.
![[One-side confidence intervals.png]]

# 7.3 Intervals Based on a Normal Population Distribution 

- Normal distribution
- $\mu$ and $\sigma$ are unknown
- $n$ is small

If $n$ is small, the CLT cannot be invoked.

## Theorem

The rv 
$$
T=\frac{\bar{X}-\mu}{S / \sqrt{ n }}
$$
has a probability distribution called a ==$t$ distribution== with $n-1$ degrees of freedom(df).

## Properties of $t$ Distribution

the only parameter in $T$ is the number of df is $v=n-1$.

![[properties of t distribution.png]]

As $v\to \infty$, the sequence of $t_{v}$ curves approaches the standard normal curve $N(0,1)$.

## Notation

let $t_{\alpha,v}$ be the value on the measurement axis for which the area under the $t$ curve with $v$ df to the right of $t_{\alpha,v}$ is $\alpha$; $t_{\alpha,v}$ is called a $t$ critical value.
![[notation of t distribution.png]]

## Proposition

let $x$ and $s$ be the ==sample mean and sample standard deviation== computed from the results of a random sample from a ==normal population== with mean $\mu$, then a $100(1-\alpha)\%$ confidence interval for $\mu$ is
$$
\left( \bar{x}-t_{\frac{\alpha}{2},n-1}\cdot \frac{s}{\sqrt{ n }},\bar{x}+t_{\frac{\alpha}{2},n-1}\cdot \frac{s}{\sqrt{ n }} \right)
$$

