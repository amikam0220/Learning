---
Date: 2025-04-23T11:43:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=759&selection=62,1,63,19|The link of chapter 13.3, Advanced Math]]"
---
# Arc Length Along a Space Curve

## Definition of the Length

The ==length== of a smooth curve $\mathbf{r}(t)=x(t)\mathbf{i}+y(t)\mathbf{j}+z(t)\mathbf{k},a\leq t\leq b$, that is traced exactly once as $t$ increases from $t=a$ to $t=b$, is $$
L=\int_{a}^{b} \sqrt{ \left( \frac{dx}{dt} \right) ^{2}+\left( \frac{dy}{dt} \right)^{2}+\left( \frac{dz}{dt} \right) ^{2} } \, dt 
$$
That is, $$
L=\int_{a}^{b} \left| \mathbf{v} \right|  \, dt 
$$
where $\left| \mathbf{v} \right|$ is the length of a velocity vector $d\mathbf{r} / dt$.

## Arc Length Parameter with Base Point $P(t_{0})$

If we choose a base point $P(t_{0})$ on a smooth curve $C$ parametrized by $t$, each value of $t$ determines a point $P(t)=(x(t),y(t),z(t))$ on $C$ and the ==arc length parameter== for the curve is $$
s(t)=\int_{t_{0}}^{t} \left| \mathbf{v}(c) \right|  \, dc=\int_{t_{0}}^{t}  \sqrt{ [x^{\prime}(c)]^{2}+[y^{\prime}(c)]^{2}+[z^{\prime}(c)]^{2} }\, dc 
$$
That is to use the as parameter distance $s$ rather the time $t$ to express the position function $\mathbf{r}$.

# Speed on a Smooth Curve

The derivative of $s$ with respect to $t$ is the speed of the moving particle(by Fundamental Theorem of Calculus). That is, $$
\frac{ds}{dt}=\left| \mathbf{v}(t) \right| 
$$
# Unit Tangent Vector

The ==unit tangent vector== is $$
\mathbf{T}=\frac{\mathbf{v}}{\left| \mathbf{v} \right| }
$$
or for the differentiable vector function $\mathbf{r}$, by the chain rule we have $$
\frac{d\mathbf{r}}{ds}=\frac{d\mathbf{r}}{dt} \frac{dt}{ds}=\mathbf{v} \frac{1}{\left| \mathbf{v} \right| }=\mathbf{T}
$$
That is the information of direction of the velocity. 

# Exercises

P745 13