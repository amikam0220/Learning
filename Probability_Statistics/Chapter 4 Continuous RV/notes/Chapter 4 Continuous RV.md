---
Date: 2026-04-15T21:01:00
---
# 4.1 Continuous Random Variables and Probability Density Functions

## Continuous Random Variables

A random variable $X$ is said to be ==continuous== if its set of possible values is ==an entire interval of numbers==. i.e., for some $A<B$, any number $x$ between $A$ and $B$ is possible.

## Probability Distribution for Continuous Variables

Let $X$ be a continuous rv, then a ==probability distribution== or ==probability density function(pdf)== of $X$ is $f(x)$ for two any numbers $a<b$
$$
P(a\leq X\leq b)=\int_{a}^{b} f(x) \, dx 
$$

The probability that $X$ takes on a value in the interval $[a,b]$ is the ==area== under the graph of density function.
![[probability distribution.png]]

It ==should satisfy==:
- $f(x)\geq 0$ for all $x$
- $\int_{-\infty}^{\infty} f(x) \, dx$ = the area under the entire graph of $f(x)$ = 1.


For pmf, $P(X=c)=p(c)$; for pdf, $P(X=c)=\int_{c}^{c} f(x) \, dx=0$

### Proposition

If $X$ is a continuous rv, then ==for any number $c$, $P(X=c)=0$.== Furthermore, 
$$
\begin{align}
P(a\leq X\leq b) & = P(a<X\leq b) \\
 & =P(a\leq X <b) \\
 & =P(a<X<b) \\
\end{align}
$$

Note that $P(A)=0$ ==not equals to== $A$ is an impossible event.(Impossible event: the event contain no simple event)

## Uniform Distribution

A continuous rv $X$ is said to have a ==uniform distribution== on the interval $[a,b]$ if the pdf of $X$ is 
$$
f(x;a,b)=\begin{cases}
\frac{1}{b-a},a\leq x\leq b \\
0,\mathrm{otherwise}
\end{cases}
$$

# 4.2 Cumulative Distribution Functions and Expected Values

## Cumulative Distribution Function

The cumulative distribution function $F(x)$ for a continuous rv $X$ is defined for every number $x$ by
$$
F(x)=P(X\leq x)=\int_{-\infty}^{x} f(y) \, dy
$$
For each $x$, $F(x)$ is the ==area== under the ==density curve to the left of $x$==.

## Use $F(x)$ to compute probabilities

Let $X$ be a continuous rv with pdf $f(x)$ and cdf $F(x)$, then for any number $a$, 
$$
P(X>a)=1-F(a)
$$
and for any two numbers $a$ and $b$ with $a<b$
$$
P(a\leq X\leq b)=F(b)-F(a)
$$

## Obtaining $f(x)$ from $F(x)$

If $X$ is a continuous rv with pdf $f(x)$ and cdf $F(x)$, then
$$
\begin{align}
F(x)=P(X\leq x) = \int_{-\infty}^{x} f(y) \, dy \\
f(x)=F^{\prime}(x)=\left( \int_{-\infty}^{x} f(y) \, dy  \right)^{\prime} 
\end{align}
$$

## Percentiles of a Continuous Distribution

Let $p$ be a number between 0 and 1. The ==(100p)th percentile== of the distribution of a continuous rv $X$, denoted by $\eta(p)$ is defined by
$$
p=F(\eta(p))=\int_{-\infty}^{\eta(p)} f(y) \, dy 
$$
## The Median

The ==median== of a continuous distribution, denoted by $\tilde{\mu}$, is the ==50th percentile==. That is $0.5 = F(\tilde{\mu})$. That is ==half the area under the density curve==.

For symmetric distribution, $\mu=\tilde{\mu}$. In general, $\mu\neq \tilde{\mu}$.

## Expected/Mean Value

The expected/mean value of a continuous rv $X$ with pdf $f(x)$ is
$$
\mu_{X}=E(X)=\int_{-\infty}^{\infty} xf(x) \, dx 
$$
### Expected value of a function

Suppose $h(X)$ is any function of $X$, then
$$
E(h(X))=\mu_{h(X)}=\int_{-\infty}^{\infty} h(x)f(x) \, dx 
$$

## The Variance

$$
\sigma_{X}^{2}=V(X)=\int_{-\infty}^{\infty} (x-\mu)^{2}f(x) \, dx =E[(X-\mu)^{2}]
$$
and the standard deviation(SD) is
$$
\sigma_{X}=\sqrt{ V(X) }
$$

## Proposition

$$
\begin{align}
E(aX+b)=aE(X)+b \\
V(X)=E(X^{2})-[E(X)]^{2} \\
\end{align}
$$

# 4.3 The Normal Distribution

A continuous rv $X$ is said to have a ==normal distribution== with parameters $\mu,\sigma$ where $-\infty<\mu<+\infty,0<\sigma$, if the pdf of $X$ is
$$
f(x;\mu,\sigma)=\frac{1}{\sqrt{ 2\pi }\sigma}e^{-(x-\mu)^{2}/ 2\sigma^{2}},-\infty<x<\infty
$$

It is the ==most important== one in all probability and statistics. Many numerical population has distribution that can be fit very closely by an appropriate normal curve. Even the distribution is discrete, the normal curve often gives an excellent approximation.

## Properties of $f(x;\mu,\sigma)$

$$
\begin{align}
E(X)=\mu \\
V(X)=\sigma^{2}
\end{align}
$$
It can be denoted as, $X\sim N(\mu,\sigma^{2})$. $\mu$ is the location of axis of symmetry and $\sigma$ control the shape of the graph. The more smaller $\sigma$ is, the more concentrated of the graph around the symmetry.

## Standard Normal Distribution

The normal distribution with parameter values ==$\mu=0,\sigma=1$== is called the ==standard normal distribution==. A random variable that has a standard normal distribution is called a standard normal variable and will be denoted by $Z$. The pdf of $Z$ is 
$$
f(z;0,1)= \frac{1}{\sqrt{ 2\pi }}e^{-z^{2}/2},-\infty<z<\infty
$$

The cdf of $Z$ is 
$$
\Phi(z)=\int_{-\infty}^{z} f(t) \, dt=\int_{-\infty}^{z} \frac{1}{\sqrt{ 2\pi }}e^{-t^{2}/2} \, dt  
$$
### Properties of $\Phi(z)$

- $\Phi(-z)=1-\Phi(z)$
- $\Phi(0)=0.5$
- $P(\left| X \right|\leq z)=2\Phi(z)-1$
- $P(\left| X \right|\geq z)=2[1-\Phi(z)]$

## $z_{\alpha}$ notation

$z_{\alpha}$ will denote the values on the measurement axis for which $\alpha$ of the area under the $z$ curve lies to the right of $z_{\alpha}$. That is, for the $z$ curve, $P(Z\geq z_{\alpha})=\alpha$. $z_{\alpha}$ is the $100(1-\alpha)$th percentile of the standard normal distribution.

## Nonstandard Normal Distribution

If $X$ has the normal distribution with mean $\mu$ and standard deviation $\sigma$, then 
$$
Z= \frac{X-\mu}{\sigma}
$$

has a standard normal distribution.

### Relationship between Nonstandard Distribution and Normal Distribution

If we let $(x-\mu) / \sigma=z$, then $x=\mu+\sigma z,dx=\sigma dz$. Then 
$$
\begin{align}
F(x) & =\frac{1}{\sqrt{ 2\pi }\sigma}\int_{-\infty}^{x}e^{-(x-\mu)^{2}/2\sigma^{2}}  \, dx \\
 & =\frac{1}{\sqrt{ 2\pi }}\int_{-\infty}^{z} e^{-z^{2}/2} \, dz \\
  & =\Phi\left( \frac{x-\mu}{\sigma} \right)
\end{align} 
$$
Thus, when $X\sim N(\mu,\sigma^{2})$, $Y=\frac{X-\mu}{\sigma}\sim N(0,1)$

### Equality of nonstandard and standard normal curve area

$$
P(Z\leq z)=P(X\leq \sigma z+\mu)=\int_{-\infty}^{\sigma z+\mu} f(x;\mu,\sigma) \, dx 
$$
And $(100p)$th percentile for normal $(\mu,\sigma)$ = $\mu+[(100p)\text{th for standard normal}]\cdot\sigma$

If the population distribution of a variable is (approximately) normal, then
- $P(\mu-\sigma\leq x\leq \mu+\sigma)\approx 68\%$
- $P(\mu-2\sigma\leq x\leq \mu+2\sigma)\approx 95\%$
- $P(\mu-3\sigma\leq x \leq \mu+3\sigma) \approx 99.7\%$

## The Normal Distribution and Discrete Population

The normal population is often used as an approximation to the distribution of values in a ==discrete population==.
For a single point, we use the ==rectangle== to replace it.
## The Normal Approximation to the Binomial Distribution

Let $X$ be a binomial rv based on $n$ trails with success probability $p$, then if the binomial probability histogram is ==not too skewed==, $X$ has approximately a ==normal distribution== with $\mu=np,\sigma_{X}=\sqrt{ np(1-p) }$. 

In practice, the approximation is adequate provided that both $np\geq 10,n(1-p)\geq 10$.

And we have 
$$
\begin{align}
p(X\leq x) & =B(x;n,p) \\
 & \approx(\text{area under the normal curve to the left of }x+0.5) \\
 & =\Phi\left( \frac{x+0.5-np}{\sqrt{ np(1-p) }} \right)
\end{align}
$$
and
$$
p(X\geq x)=P\left( Z\geq \frac{x-0.5-np}{\sqrt{ np(1-p) }} \right)=1-\Phi\left( - \frac{x-0.5-np}{\sqrt{ np(1-p) }} \right)
$$
and
$$
p(X=x)=P\left( \frac{x-0.5-np}{\sqrt{ np(1-p) }}\leq Z\leq \frac{x+0.5-np}{\sqrt{ np(1-p) }} \right)
$$

# 4.4 The Gamma Distribution and Its Relatives

## Gamma Function

For $\alpha>0$, the gamma function $\Gamma(\alpha)$ is defined by
$$
\Gamma(\alpha)=\int_{0}^{\infty} x^{\alpha-1}e^{-x} \, dx 
$$
(not necessary to remember)
Most important properties of gamma function are the following:
- For any $\alpha>1$, $\Gamma(\alpha)=(\alpha-1)\Gamma(\alpha-1)$
- ==For any positive integer== $n$, $\Gamma(n)=(n-1)!$
- $\Gamma\left( \frac{1}{2} \right)=\sqrt{ \pi }$

## The Family of Gamma Distributions

A continuous random variable $X$ has a gamma distribution if the pdf of $X$ is
$$
f(x;\alpha,\beta)=\begin{cases}
\frac{1}{\beta^{\alpha}\Gamma(\alpha)}x^{\alpha-1}e^{-x/\beta},x\geq0 \\
0,\text{otherwise}
\end{cases}
$$
where $\alpha,\beta > 0$.

## Mean and Variance

For gamma distribution $f(x;\alpha,\beta)$,
$$
\begin{align}
 & E(X)=\mu=\alpha\beta \\
 & V(x)=\sigma^{2}=\alpha\beta^{2}
\end{align}
$$

## Standard Gamma Distribution

The standard gamma distribution $\beta=1$.

$$
f(x;\alpha)=\begin{cases}
\frac{x^{\alpha-1}e^{-x}}{\Gamma(\alpha)},x\ge 0 \\
0, \text{otherwise}
\end{cases}
$$
Satisfy two basic properties:
- $f(x;a)\geq 0$
- $\int_{0}^{\infty} f(x;a) \, dx = \frac{\left( \int_{0}^{\infty} x^{\alpha-1}e^{-x} \, dx \right)}{\Gamma(\alpha)}=1$

## The cdf of a standard gamma distribution

$$
F(x;a)=\int_{0}^{x} \frac{y^{\alpha-1}e^{-y}}{\Gamma(\alpha)} \, dy,x>0 
$$

## Proposition

For nonstandard gamma distribution, the cdf of $X$ is 
$$
P(X\leq x)=F(x;\alpha,\beta)=F\left( \frac{x}{\beta};\alpha \right)
$$

## The Exponential Distribution

$X$ has an exponential distribution with parameter $\lambda(\lambda>0)$ if the pdf of $X$ is
$$
f(x;\lambda)=\begin{cases}
\lambda e^{-\lambda x},x\geq0 \\
0,\text{otherwise}
\end{cases}
$$
A special case of general gamma pdf: $\alpha=1,\beta = 1 / \lambda$. Therefore, $E(X)=\alpha\beta=\frac{1}{\lambda},V(X)=\frac{1}{\lambda^{2}}$.

### The cdf of Exponential Distribution

$$
F(x;\lambda)=\begin{cases}
0,x<0 \\
1-e^{-\lambda x},x\geq 0 \\
\end{cases}
$$

## The Chi-Squared Distribution

Let $v$ be a positive integer, then a random variable $X$ is said to have a chi-squared distribution with parameter $v$ if the pdf of $X$ is the gamma density with $\alpha= v/2$ and $\beta=2$,
$$
f(x,v)=\frac{1}{2^{v/2}\Gamma(v/2)}x^{v/2-1}e^{-x/2},x>=0
$$
$v$ is called the number of degrees of freedom of $X$. The symbol $\chi^{2}$ is often used in place of "chi-squared". Not necessary to remember the pdf.

# 4.5 Other Continuous Distribution

## The Weibull Distribution

A random variable $X$ is said to have a Weibull distribution with parameters $\alpha,\beta(\alpha>0,\beta>0)$ if the cdf of $X$ is
$$
f(x;\alpha,\beta)=\begin{cases}
\frac{\alpha}{\beta^{\alpha}}x^{\alpha-1}e^{-(x/\beta)^{\alpha}},x\geq0 \\
0,x<0
\end{cases}
$$
(cdf will be given in exam)
When $\alpha=1$, the pdf reduces to the exponential distribution.

## The Lognormal Distribution

If rv $Y=\ln(X)$ has a normal distribution, then $X$ is said to have a lognormal distribution.
$$
f(x;\mu,\sigma)=\frac{1}{\sqrt{ 2\pi }\sigma x}e^{-(\ln(x)-\mu)^{2}/2\sigma^{2}},x\geq0
$$

## The Beta Distribution

# 4.6 Probability Plots
 
After obtaining a numerical samples, we should ==construct the probability plot== to assume the distribution.

## Sample Percentile

Order $n$ sample observations from the smallest to the largest. Then the $i$th smallest observation in the list is taken to be the $[100(i-0.5) / n]$th sample percentile.

Consider the following pairs as a point on 2D coordinate system in a figure. x: $[100(i-0.5) / n]$th percentile of the distribution; y: $i$th smallest sample observation.

## Normal Probability Plot

from 
x: $[100(i-0.5) / n]$th percentile of the distribution; $y$: $i$th smallest sample observation
to
x: $[100(i-0.5) / n ]$th $z$ percentile; y: $i$th smallest sample observation($p$).

where $z=\Phi^{-1}(p_{i})$. And $x = \mu + \sigma z$.

If the graph is line, it is approximately normal distribution. If the line cross the original point with 45 degree, it is standard normal distribution.
The intercept is $\mu$, the slope is $\sigma$.

If the graph is not the line, it is not a normal distribution.
