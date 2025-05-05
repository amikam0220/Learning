---
Date: 2025-02-10T22:50:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=330&selection=1286,1,1287,21|The link of the chapter 5.3, Advanced Math]]"
---
## **Definition of the Definite Integral** 

- **Definition:**
	Let $f(x)$ be a function defined on a closed interval $[a,b]$ and $J$ is the limit of the Riemann sums $\sum_{k=1}^nf(c_{k})\Delta x_{k}$ , we say that $J$ is the **Definite integral** of $f$ on the interval $[a,b]$ if the following condition is satisfied:<br> given any number $\epsilon>0$ there is a corresponding number $\delta>0$ such that for every partition $P=\{x_{0},x_{1},\cdots,x_{n}\}$ of $[a,b]$ with $\|P\|<\delta$ and any choice $c_{k}$ in $[x_{k-1},x_{k}]$, we have$$\left|\sum_{k=1}^nf(c_{k})\Delta x_{k}-J\right|<\epsilon$$
	- Understanding:
		The condition is a limiting process, in which the norm $\|P\|$ responds to the independent variable $x$,  $x\to a$ responds to $\|P\|\to{0}$; the Riemann sums $\sum_{k=1}^nf(c_{k})\Delta x_{k}$ responds to the function $f(x)$ since the Riemann sums depends on the norm $\|P\|$; the $J$ responds to the $L$.<br> And in the limiting process, it shows the specialization of the definite integral that the partition is arbitrary but it will still obtain the same limit $J$.
- **Remarks:** 
	In the cases where the subintervals all have equal width $\Delta x=(b-a)/n$, the Riemann sum can be represented as $$S_{n}=\sum_{k=1}^nf(c_{k})\Delta x_{k}=\sum_{k=1}^nf(c_{k})\Delta x=\sum_{k=1}^nf(c_{k})(\frac{b-a}{n})$$ then the **Definite Integral** of $f$ over $[a,b]$ is $J$ that $$J=\lim_{ \|P\| \to 0 }\sum _{k=1}^nf(c_{k})\Delta x_{k}=  \lim_{ n \to \infty }\sum _{k=1}^nf(c_{k})\Delta x $$Note that it is not appropriate to divide the subintervals with equal width. Such as $f(x)= \frac{1}{x},x\in[1,2]$ . We can divide the subinterval by proportional segmentation.($2^{1/n},\cdots,2^{k/n}$), then the Lower Sum is $$
	\begin{align}\sum_{k=1}^{n} \frac{1}{2^{k/n}}\cdot(2^{k/n}-2^{(k-1)/n})  & =\sum_{k=1}^{n} 1-2^{-\frac{1}{n}} \\ & =n\left( 1-2^{-\frac{1}{n}} \right)\end{align}$$Then since $||P||=2-2^{\frac{n}{n-1}}$, thus when $||P||\to0$, $n\to +\infty$. Then $$J=\lim_{ n \to +\infty } n\left( 1-2^{-\frac{1}{n}} \right)=\lim_{ t \to 0^{+} } \frac{1-2^{-t}}{t}=\ln 2$$
- **Notation:** 
	In the definition of the definite integral, the symbol for the number $J$ is $$\int_{a}^bf(x)dx$$ in which the integral symbol $\int$ replaces the sum symbol $\sum$ in the limit, the continuous selection of the function value $f(x)$ replaces the function value $f(c_{k})$ and the differential $dx$ replace the subinterval widths $\Delta x_{k}$. The upper limit of integration $b$ and the lower limit of integration $a$ replaced the interval $[a,b]$.<br> And we say the Riemann sums of $f$ over $[a,b]$ **converge** to the definite integral $J=\int_{a}^bf(x)dx$ and $f$ is **integrable** over $[a,b]$. The variable of integration is called **dummy variable** representing the real number in the closed interval $[a,b]$. ^b15f33

## **Integrable and Nonintegrable Functions** 

- **Theorem 1: Integrability of continuous functions**
	If a function $f$ is continuous over $[a,b]$ or if $f$ only has finitely discontinuities there, then the definite integral $\int_{b}^af(x)dx$ exists and $f$ is integrable over $[a,b]$.

- Nonintegrable Functions:
	A function that is sufficiently discontinuous such that the area of the graph cannot be approximated by rectangles is nonintegrable function.

## **Properties of Definite Integrals**

- **Rules satisfied by definite integrals:** 
	When $f$ and $g$ are integrable over $[a,b]$, the definite integral satisfies the underlying rules:
	- Order of integration: $$\int_{b}^{a}f(x)dx=-\int_{a}^{b}f(x)dx$$(Definition as above is convenient to adapting to the algorithm laws)
	- Zero width interval:$$\int_{a}^af(x)dx=0$$
	- Constant Multiple:$$\int_{a}^b  kf(x)dx=k\int_{a}^bf(x)dx$$
	- Sum and difference:$$\int_{a}^{b}  (f(x)\pm g(x)) dx=\int_{a}^{b}f(x)  \, dx \pm \int_{a}^{b} g(x) \, dx  $$
	- Additivity: $$\int_{a}^{b} f(x) \, dx +\int_{b}^{c}  f(x)\, dx=\int_{a}^{c}f(x)  \, dx  $$
	- Max-Min inequality:<br> If $f$ has maximum value max $f$ and the minimum value min $f$ on $[a,b]$, then$$\mathrm{min}f\leq \frac{\int_{a}^{b} f(x) \, dx}{b-a}\leq \mathrm{max}f$$that is,
	 $$\mathrm{min}\,f\cdot(b-a)\leqslant\int_{a}^{b} f(x) \, dx\leqslant \mathrm{max}\,f\cdot(b-a)$$ ^f4b30d
	- Domination:$$f(x)\geq g(x)\;\mathrm{on}\;[a,b]\implies \int_{a}^{b}f(x)  \, dx\geq \int_{a}^{b} g(x) \, dx  $$
	 $$f(x)\geq 0\;\mathrm{on}\;[a,b]\implies \int_{a}^{b}f(x)  \, dx\geq 0 $$
	 idea: When the problem is difficult, we can first find a special case that is easy. Then we can use the special case to prove the problem (Rolle's Theorem and Mean Value Theorem)
 
## **Area Under the Graph of a Nonnegative Function**

- **Definition:** 
	If $y=f(x)$ is nonnegative and integrable on $[a,b]$, then the **area under the curve $\mathbf{y=f(x)}$ on $\mathbf{[a,b]}$** is the integral of $f$ from $a$ to $b$,$$A=\int_{a}^{b}f(x)  \, dx $$
- Conclusion:$$\int_{a}^{b}  x\, dx=\frac{b^{2}}{2}-\frac{a^{2}}{2},\quad a<b $$ $$\int_{a}^{b}  c\, dx=c(b-a),\quad c \;\mathrm{any\;constant} $$ $$\int_{a}^{b} x^{2} \, dx=\frac{b^{3}}{3}-\frac{a^{3}}{3},\quad a<b $$
	- Proof of the third conclusion:<br> First we define $f(x)=x^{2}$ on $[0,b]$. Then we subdivided the interval into $n$ equal subintervals and $\Delta x=\frac{b}{n}$. And we choose $c_{k}$ as the right endpoint in each subinterval so the partition is $P=\left\{ 0,{b\over n},{\frac{2b}{n},\cdots,{\frac{nb}{n}}} \right\}$ and $c_{k}=\frac{kb}{n}$. So$$\begin{align}
\sum _{k=1}^nf(c_{k})\Delta x&=\sum _{k=1}^n\left( \frac{kb}{n} \right)^{2}\cdot \frac{b}{n} \\
&=\frac{b^{3}}{n^{3}}\sum _{k=1}^nk^{2} \\
&=\frac{b^{3}}{n^{3}}\cdot \frac{n(n+1)(2n+1)}{6} \\
&=\frac{b^{3}}{6}\cdot\left( 2+\frac{3}{n}+\frac{1}{n^2} \right)
\end{align}$$ As $n \to \infty$, the last expression has the limit $b^{3}/3$. Therefore,$$\int_{0}^{b}  x^{2}\, dx=\frac{b^{3}}{3} $$ Thus$$\begin{align}\int_{a}^{b}x^{2}  \, dx&=\int_{a}^{0} x^{2} \, dx+\int_{0}^{b}x^{2}  \, dx \\&=-\int_{0}^{a}x^{2}  \, dx+\int_{0}^{b} x^{2} \, dx \\&=\frac{b^{3}}{3}-\frac{a^{3}}{3}    \end{align} $$

## **Average Value of a Continuous Function Revisited**

- Two approaches to obtain the average:
	- Define the average as the area under the graph of $f(x)$ on $[a,b]$ divided by $b-a$.
	- Define the average as $n$ numbers' sum divided by $n$:<br> We subdivide $[a,b]$ into $n$ subintervals of equal width $\Delta x=(b-a)/n$. Then the average of the $n$ sampled values is $$\begin{align}
\frac{f(c_{1})+f(c_{2})+\cdots+f(c_{n})}{n}&=\frac{1}{n}\sum_{k=1}^nf(c_{k}) \\
&=\frac{\Delta x}{b-a}\sum_{k=1}^nf(c_{k}) \\
&=\frac{1}{b-a}\sum_{k=1}^nf(c_{k})\Delta x
\end{align}$$ As the size of sample increases, the norm of the partition approach zero such that the average approaches the definition.
- **Definition:**
	If $f$ is integrable on $[a,b]$, then its average value on $[a,b]$, also called its **mean**, is$$\mathrm{av}(f)=\frac{1}{b-a}\int_{a}^{b}f(x)  \, dx $$ 