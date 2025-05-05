---
Date: 2025-02-17T21:28:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=342&selection=323,1,324,35|The link of chapter 5.4, Advanced Math]]"
---
## **Mean Value Theorem for Definite Integrals**

- **Theorem 3-- The Mean Value Theorem for Definite Integrals:**
	- **Definition:** If $f$ is continuous on $[a,b]$, then at some point $c$ in $[a,b]$,$$f(c)=\frac{1}{b-a}\int_{a}^{b}f(x)  \, dx $$
	- Proof: If we divide both sides of the [[Note 5.3 The Definite Integral#^f4b30d|Max-Min Inequality]] by $(b-a)$, we obtain$$\mathrm{min}f\leq \frac{1}{b-a}\int_{a}^{b} f(x) \, dx\leq \mathrm{max}f $$ Since $f$ is continuous, then by [[Note 2.5 Continuity#**Intermediate Value Theorem for Continuous Functions**|intermediate value theorem]], there must be some points $c$ in $[a,b]$ satisfying $f(c)=\frac{1}{b-a}\int_{a}^{b} f(x) \, dx$.

## **Fundamental Theorem, Pt 1**

- **Theorem 4-- The Fundamental Theorem of Calculus, Pt 1:** ^4ac48a
	- **Definition:** If $f$ is continuous on $[a,b]$, then $F(x)=\int_{a}^{x}  f(t)\, dt$ is continuous on $[a,b]$ and differentiable on $(a,b)$ and its derivative is $f(x)$:$$F^\prime(x)=\frac{d}{dx}\int_{a}^{x} f(t) \, dt=f(x) $$The theorem actually connect integrals and derivatives. If $f$ is any continuous function, then then there exists a differentiable function $F$ whose derivative is $f$.
	- Example: Use the Fundamental Theorem to find $dy/dx$ if 
		- $$y = \int_{1}^{x^2} \cos t \,dt$$
		- Sol: Let $u=x^2$, then $$\begin{align}\frac{dy}{dx} & =\frac{dy}{du}\cdot \frac{du}{dx} \\ & =\left( \frac{d}{du}\int_{1}^{u}  \cos t\, dt  \right) \frac{du}{dx} \\ & =\cos u\cdot \frac{du}{dx} \\ & =2x\cos x^2\end{align}$$
		- $$y=\int_{1+3x^2}^{4} \frac{1}{2+e^t} \, dt $$
		- Sol: $$\begin{align} \frac{d}{dx}\int_{1+3x^2}^{4} \frac{1}{2+e^t} \, dt & =\frac{d}{dx}\left( -\int_{4}^{1+3x^2} \frac{1}{2+e^t} \, dt  \right)  \\ & =-\frac{d}{du}\int_{4}^{1+3x^2} \frac{1}{2+e^t} \, dt\cdot \frac{du}{dx} \\ & =-\frac{1}{2+e^{1+3x^{2}}} \frac{d}{dx}(1+3x^2) \\ & =-\frac{6x}{2+e^{1+3x^2}}\end{align}$$
	- Proof:
		Let $f(t)$ be an integrable function over a finite interval $I$, then fix an $a\in I$ and another number $x\in I$. Then we can define a new function $F$ whose value at $x$ is $$F(x)=\int_{a}^{x} f(t) \, dt $$
		The derivative of $F(x)$ is $$\begin{align}F^\prime(x) & =\lim_{ h \to 0 } \frac{F(x+h)-F(x)}{h} \\ & =\lim_{ h \to 0 } \frac{1}{h}\left[ \int_{a}^{x+h} f(t) \, dt-\int_{a}^{x} f(t) \, dt   \right] \\ & =\lim_{ h \to 0 } \frac{1}{h}\int_{x}^{x+h}f(t)  \, dt \end{align}$$ Then by the mean value theorem, there is a $c$ in $[x,x+h]$ satisfying$$f(c)=\frac{1}{h}\int_{x}^{x+h} f(t) \, dt $$ As $h\to 0$, $x+h \to x$ and $c\to x$ . Since $f$ is continuous at $x$, $$\lim_{ h \to 0}f(c)=f(x) $$ Thus $$F^\prime(x)=\lim_{ h \to 0 }f(c)=f(x) $$

## **Fundamental Theorem, Pt 2 (The Evaluation Theorem)**

- **Theorem 4-- The Fundamental Theorem of Calculus, Pt 2:** ^be4871
	- **Definition:** If $f$ is continuous at every point in $[a,b]$ and $F$ is any antiderivative of $f$ on $[a,b]$, then $$\int_{a}^{b} f(x) \, dx=F(b)-F(a) $$
	- Proof:
		By Pt.1 , we can suppose an antiderivative of $f$ namely$$G(x)=\int_{a}^{x}  f(t)\, dt $$ Since $F^\prime(x)=f(x)$, then $F(x)$ is another antiderivative of $f$, thus $F(x)=G(x)+C$ . Then$$\begin{align}F(b)-F(a) & =[G(b)+C]-[G(a)+C] \\ & =G(b)-G(a) \\ & =\int_{a}^{b}f(t)  \, dt-\int_{a}^{a} f(t) \, dt \\ & =\int_{a}^{b}f(t)  \, dt-0 \\ & =\int_{a}^{b}  f(t)\, dt    \end{align}$$since the variables in the integral is [[Note 5.3 The Definite Integral#^b15f33|dummy variables]], we can arbitrarily replace the variables. 
	- Process:
		- Find an antiderivative $F$ of $f$, and
		- Calculate the number $F(b)-F(a)$, which is equal to $\int_{a}^{b}f(x)  \, dx$.
	- Notation:
		The notation for the difference $F(b)-F(a)$ is $$\left.F(x)\right]_{a}^b\quad\mathrm{or}\quad[F(x)]_{a}^b$$ depending on whether $F$ has one or more terms.

## **The Integral of a Rate**

- **Theorem 5-- The Net Change Theorem:**
	The net change in a function $F(x)$ on $[a,b]$ is the integral of its rate of change: $$F(b)-F(a)=\int_{a}^{b}F^\prime(x)  \, dx $$ (It can be obtain by take the $F^\prime(x)=f(x)$ to the evaluation theorem.)

## **The Relationship between Integration and Differentiation**

- The processes of integration and differentiation are "inverses" of each other. And it's important to find the antiderivative in order to evaluate definite integral easily.

## **Total Area**

- **Strategy:** To find the area between the graph of $y=f(x)$ and the $x$-axis on $[a,b]$ :
	- Subdivide $[a,b]$ at the zeros of $f$.
	- Integrate $f$ over each subinterval.
	- Add the absolute values of the integrals.

## **Exercise**

- P333 13 19 23 39 69 79 81
- [[Thomas Calculus Early Transcendentals (12ed).pdf#page=351&selection=611,0,611,3|Question 69th]] Initial Value Problems
	For the initial value problems$$\frac{dy}{dx}=f(x),y(x_{0})=y_{0}$$the solution can be expressed as $$y(x)=\int f(x) \, dx +C$$also, $$y(x)=\int_{x_{0}}^{x} f(t) \, dt +y_{0}$$since in the initial value problems, by [[Note 5.4 The Fundamental Theorem of Calculus#**Fundamental Theorem, Pt 2 (The Evaluation Theorem)**|the evaluation theorem]], $$\begin{align}\int_{x_{0}}^{x} f(t) \, dt  & =F(x)-F(x_{0}) \\ & =\int f(x) \, dx +C_{0}-F(x_{0})\end{align}$$where $F(x)$ is an antiderivative of $f(x)$.
	then $$y(x)=\int f(x) \, dx +C_{0}-F(x_{0})+y_{0}$$which is equivalent to $$y(x)=\int f(x) \, dx +C$$
	where $C=C_{0}-F(x_{0})+y_{0}$.
	So for this problem, express $y(x)$ in the definite integral form, $$y(x)=\int_{2}^{x} \sec t \, dt +3$$