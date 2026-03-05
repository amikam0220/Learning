---
Date: 2025-12-23T18:04:00
---
# Magnetic Field of a moving charge

![[moving charges.png]]
$$
\vec{B}= \frac{\mu_{0}}{4\pi} \frac{q\vec{v}\times \hat{r}}{r^{2}}
$$
where $\mu_{0}=4\pi \times10^{-7 }N\cdot s^{2}/C^{2}$.(vacuum magnetic permeability), $\hat{r}$ is the unit vector from the charge to field point, $r$ is the distance from the charge to field point.

# Magnetic Field of a Current Element

![[current element.png]]
For each point, 
$$
d\vec{B}=\frac{\mu_{0}}{4\pi}\cdot \frac{dq \vec{v}\times \hat{r}}{r^{2}}=\frac{\mu_{0}}{4\pi}\cdot \frac{Id\vec{l}\times \hat{r}}{r^{2}}
$$
Thus, the law of Biot and Savart is 
$$
\vec{B}=\frac{\mu_{0}}{4\pi}∮ \frac{Id\vec{l}\times \hat{r}}{r^{2}}
$$
In essence, the magnetic field of a current element is ==the superposition of moving charge==.

# Magnetic Field due to a current in a Long Straight Wire

![[long straight wire.png]]
It is obtained by the law of Biot and Savart:
$$
\begin{align}
 & \vec{B}=\frac{\mu_{0}}{4\pi}∮ \frac{Id\vec{l}\times \hat{r}}{r^{2}}, \vec{B}=B\vec{e} \\
 & dB=\frac{\mu_{0}}{4\pi}\cdot \frac{Idy\cdot \sin \phi}{r^{2}},\sin \phi=\frac{x}{r},r=\sqrt{ x^{2}+y^{2} } \\
 & B=∮dB=\frac{\mu_{0}I}{4\pi}\int_{-a}^{a} \frac{xdy}{(x^{2}+y^{2})^{3/2}}=\frac{\mu_{0}I}{4\pi} \frac{2a}{x\sqrt{ x^{2}+a^{2} }}\\
\end{align}
$$
when $a\to \infty$, $$\vec{B}=\vec{e} \frac{\mu_{0}I}{2\pi x}$$
where $\vec{e}$ is the tangent unit vector of the circle.

# Force Between Parallel Conductors

![[parallel conductors.png]]

Two straight currents in the ==same direction attract== each other, while those in ==opposite directions repel== each other.

The force per unit length is 
$$
\frac{F}{L}=\frac{\mu_{0}II^{\prime}}{2\pi r}
$$
Not only do current-carrying conductors in the same direction attract each other, but ==different parts of the current also attract each other==. This constriction of conductive liquids and gases is called pinch effect.

# Ampere's Law

![[Ampere's Law.png]]

$$
∮\vec{B}\cdot d\vec{s}=\mu_{0}i_{enc}
$$
where $i_{enc}$ is the net current enclosed by the close path.
if the direction of the current follows the ==right-hand rule== then the current in a loop is ==positive==. 

Apply for symmetry situation.