---
Date: 2025-03-19T19:57:00
---
## **Products of Powers of Sines and Cosines**

- **Strategy:**
	For the integrals of the form: $$\int \sin ^{m} x\cos ^{n}x \, dx $$
	where $m$ and $n$ are nonnegative integers, then we can divide into cases based on $m$ and $n$ being odd or even.
	- If one of $m$ and $n$ is odd, then we can combine the single $\sin x$ or $\cos x$ with $dx$ in the integral. Then we can use [[Note 5.5 Indefinite Integrals and the Substitution Method#^91e997|the substitution]] to solve.
	- If both $m$ and $n$ are even, then we need to substitute $$\sin ^{2}x=\frac{1-\cos2x}{2},\cos ^{2}x=\frac{1+\cos2x}{2}$$to reduce the integrand to one in lower powers of $\cos2x$.
- **Example:**
	- Evaluate $\displaystyle \int \sin ^{3}x\cos ^{2}x \, dx$.
		This is in the first case.$$\begin{align}\int \sin ^{3}x\cos ^{2}x \, dx  &=\int \sin ^{2}x\cos ^{2}x\sin x \,dx \\ & =\int (1-\cos ^{2}x)\cos ^{2}x \,( -d(\cos x)) \\ & =-\int (1-u^{2})u^{2} \, du  \\ & =\int (u^{4}-u^{2}) \, du \\  & =\frac{u^{5}}{5}-\frac{u^{3}}{3}+C=\frac{\cos ^{5}x}{5}-\frac{\cos ^{3}x}{3}+C \end{align}$$
	- Evaluate $\displaystyle \int \cos ^{5} \, dx$.
		This is in the first case.$$\begin{align}\int \cos ^{5}x \, dx  & =\int \cos ^{4}x\cos x  \, dx  \\ & =\int (1-\sin ^{2}x)^{2} \, d(\sin x ) \\ & =\int(1-u^{2})^{2}du \\ & =\int (u^{4}-2u^{2} +1)du \\ & =\frac{\sin ^{5}x}{5}-\frac{2\sin ^{2}x}{2}+\sin x+C\end{align}$$
	- Evaluate $\displaystyle\int \sin ^{2}x\cos ^{4}x \, dx$.
		This is in the second case. $$\begin{align}\int \sin ^{2}x\cos ^{4}x \, dx  & =\int \frac{1-\cos2x }{2} \left( \frac{1+\cos2x}{2} \right)^{2}  \, dx \\ & =\frac{1}{8}\int(1-\cos 2x)(1+2\cos 2x+\cos ^{2}2x)dx \\ & =\frac{1}{8} \int (1+\cos 2x-\cos ^{2}2x-\cos ^{3}2x) \, dx  \\ & =\frac{1}{8}\left[ x+\frac{1}{2}\sin 2x-\int (\cos ^{2}2x+\cos ^{3}2x) \, dx  \right] \end{align}$$then by the [[Note 8.1 Integration by Parts#^aa1758|formula of cosine's n power]], $$\int \sin ^{2}x\cos ^{4}x \, dx=\frac{1}{16}\left( x-\frac{1}{4}\sin4x+\frac{1}{3}\sin ^{3}2x \right)+C$$

## **Integrals of Powers of $\tan x$ and $\sec x$**

- **Idea:**
	$\tan x$ and $\sec x$ have the relationship:
	- $\tan ^{2}x=\sec ^{2}x-1$, $\sec ^{2}x=\tan ^{2}x+1$.
	- $\displaystyle \frac{d}{dx}\tan x=\sec ^{2}x$, $\displaystyle \frac{d}{dx}\sec x=\sec x\tan x$.

## **Products of Sines and Cosines**

- **Strategy:**
	For the integrals $\displaystyle \int \sin mx\sin nx\,dx,\int \sin mx\cos nx \, dx,\int \cos mx\cos nx \, dx$, we can use the formulas to transform the products into the sum: $$\begin{align} & \sin mx\sin nx=\frac{1}{2}[\cos(m-n)x-\cos(m+n)x] \\ & \sin mx\cos nx=\frac{1}{2}[\sin(m-n )x+\sin(m+n)x] \\ & \cos mx\cos nx=\frac{1}{2}[\cos(m-n)x+\cos(m+n)x]\end{align}$$
## **Exercises**

- P466 21, 41, 47