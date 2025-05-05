---
Date: 2025-04-22T20:27:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=742&selection=11,1,12,34|The link of chapter 13.1, Advanced Math]]"
---
# Definitions

To describe a particle's coordinates as functions defined on $I$: $$
x=f(t),y=g(t),z=h(t),t\in I
$$
And the points $(x,y,z)=(f(t),g(t),h(t)),t\in I$ make up the ==curve== in space and we call it the ==path== of the particle. And the upper equations and interval ==parametrize== the curve.

A curve in space can be also represented in vector form, $$
\mathbf{r}(t)=\overrightarrow{OP} =f(t)\mathbf{i}+g(t)\mathbf{j}+h(t)\mathbf{k}
$$
The vector is from the origin to the particle's ==position== $P(f(t),g(t),h(t))$ at time $t$. And it is the particle's ==position vector==. The functions $f,g,h$ are the ==component functions==(==components==) of the position vector. The particle's path as the ==curve traced by $\mathbf{r}$== during the time interval $I$. And the function is called ==vector-valued function== or ==vector function==. 

Real-valued functions are called ==scalar functions==.

# Limits and Continuity

## Definition of Limit

Let $\mathbf{r}(t)=f(t)\mathbf{i}+g(t)\mathbf{j}+h(t)\mathbf{k}$ be a vector function with domain $D$ and $\mathbf{L}$ a vector. Then we say that $\mathbf{r}$ has ==limit== $\mathbf{L}$ as $t\to t_{0}$ and write $$
\lim_{ t \to t_{0} } \mathbf{r}(t)=\mathbf{L}
$$
if for every $\epsilon>0$, there exists a corresponding number $\delta>0$ such that for all $t\in D$, $$
0<\left| t-t_{0} \right| <\delta \implies \left| \mathbf{r}(t)-\mathbf{L} \right| <\epsilon
$$
And if $\mathbf{L}=L_{1}\mathbf{i}+L_{2}\mathbf{j}+L_{3}\mathbf{k}$, then it can be shown that $\lim_{ t \to t_{0} }\mathbf{r}(t)=\mathbf{L}$ when $$
\lim_{ t \to t_{0} } f(t)=L_{1},\lim_{ t \to t_{0} }g(t)=L_{2},\lim_{ t \to t_{0} } h(t)=L_{3} 
$$
So the equation $$
\lim_{ t \to t_{0} } \mathbf{r}(t)=\left(\lim_{ t \to t_{0} } f(t)\right)\mathbf{i}+\left(\lim_{ t \to t_{0} } g(t)\right)\mathbf{j}+\left( \lim_{ t \to t_{0} } h(t) \right) \mathbf{k}
$$
provides a practical way to calculate limits.

## Definition of Continuity

A vector function $\mathbf{r}(t)$ is ==continuous== at $t=t_{0}$ in its domain if $\lim_{ t \to t_{0} }\mathbf{r}(t)=\mathbf{r}(t_{0})$ and the function is ==continuous== if it is continuous at every point in its domain.

# Derivatives and Motion

## Definition of Derivative

The vector function $\mathbf{r}(t)=f(t)\mathbf{i}+g(t)\mathbf{j}+h(t)\mathbf{k}$ has a ==derivative(is differentiable) at $t$== if $f,g,h$ have derivatives at $t$. And the derivative is $$
\mathbf{r}^{\prime}(t)=\frac{d\mathbf{r}}{dt}=\lim_{ \Delta t\to 0 } \frac{\mathbf{r}(t+\Delta t)-\mathbf{r(t)}}{\Delta t}=\frac{df}{dt}\mathbf{i}+\frac{dg}{dt}\mathbf{j}+\frac{dh}{dt}\mathbf{k}
$$
And the vector function is ==differentiable== if it is differentiable at every point of its domain. And the curve is ==smooth== if $d\mathbf{r} /dt$ is continuous and never $\mathbf{0}$. The vector $\mathbf{v}^{\prime}(t)$ is the ==tangent== of the curve at $t$ and the tangent line to the curve is the line through the point $(f(t_{0}),g(t_{0}),h(t_{0}))$ with the tangent $\mathbf{r}^{\prime}(t_{0})$.

## Definition of Motion

If $\mathbf{r}$ is the position vector of a particle moving along a smooth curve in space, then $$
\mathbf{v}(t)=\frac{d\mathbf{r}}{dt}
$$
is the particle's ==velocity vector==, tangent to the curve. At any time $t$, the direction of $\mathbf{v}$ is the ==direction of motion==. The magnitude of $\mathbf{v}$ is ==speed==. And the derivative $\mathbf{a}=d\mathbf{v} / dt$ is the particle's ==acceleration vector==. 

# Differentiable Rules

Let $\mathbf{u}$ and $\mathbf{v}$ be differentiable vector functions at $t$, $\mathbf{C}$ a constant vector and $c$ any scalar, $f$ any differentiable scalar function.

| Rule                   | Formula                                                                                                                                                 |
| ---------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Constant Function Rule | $$\frac{d}{dt}\mathbf{C}=\mathbf{0}$$                                                                                                                   |
| Scalar Multiple Rules  | $$\frac{d}{dt}[c \mathbf{u}(t)]=c \mathbf{u}^{\prime}(t)$$<br>$$\frac{d}{dt}[f(t)\mathbf{u}(t)]=f^{\prime}(t)\mathbf{u}(t)+f(t)\mathbf{u}^{\prime}(t)$$ |
| Sum Rule               | $$\frac{d}{dt}[\mathbf{u}(t)+\mathbf{v}(t)]=\mathbf{u}^{\prime}(t)+\mathbf{v}^{\prime}(t)$$                                                             |
| Dot Product Rule       | $$\frac{d}{dt}[\mathbf{u}(t)\cdot \mathbf{v(t)}]=\mathbf{u}^{\prime}(t)\cdot \mathbf{v}(t)+\mathbf{u}(t)\cdot \mathbf{v}^{\prime}(t)$$                  |
| Cross Product Rule     | $$\frac{d}{dt}[\mathbf{u}(t)\times \mathbf{v}(t)]=\mathbf{u}^{\prime}(t)\times \mathbf{v}(t)+\mathbf{u}(t)\times \mathbf{v}^{\prime}(t)$$               |
| Chain Rule             | $$\frac{d}{dt}[\mathbf{u}(f(t))]=f^{\prime}(t)\mathbf{u}^{\prime}(f(t))$$                                                                               |

The proof can be done by the definitions.

# Vector Functions of Constant Length

If $\mathbf{r}$ is a differentiable vector function of $t$ of constant length, then $$
\mathbf{r}\cdot \frac{d\mathbf{r}}{dt}=0
$$
That is, the position vector $\mathbf{r}$ is always perpendicular to its velocity vector.
For example, the particle moving on a sphere centered at the origin with radius $c$ have $$
\mathbf{r}(t)\cdot \mathbf{r}(t)=c^{2}
$$
take derivatives of both sides $$
2\mathbf{r}^{\prime}(t)\cdot \mathbf{r}(t) = 0.
$$
That is $$
\mathbf{r}\cdot \frac{d\mathbf{r}}{dt}=0
$$

# Exercises

P732 17
