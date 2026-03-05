---
Date: 2025-12-21T10:21:00
---
# Electric Field and Electric Forces

The charge generates an ==electric field in the space around itself==. The ==basic property== of the electric field is to ==exert a force on other charges in it==.

Electric field (electric field strength):
A physical quantity to describe the ==characteristics of the electric field force==.
$$
\vec{E}=\frac{\vec{F}}{q_{0}}\left( \vec{E}=\lim_{ q_{0} \to 0 } \frac{\vec{F}}{q_{0}} \right)
$$
It is a vector field. The direction is defined as the electric force of small ==positive test charge==.

An electric field with ==equal electric field strength== everywhere is called a ==uniform field==.

# Electric Field Calculations

## Electric Field of Point Charge

$$
\vec{E}= \frac{1}{4\pi\epsilon_{0}}\cdot \frac{q}{r^{2}}\hat{r}
$$
where $\hat{r}= \frac{\vec{r}}{r}$ is unit vector
![[electric field of point charge.png]]

## Electric Field of Discrete Charges (Principle of Superposition)

$$
\vec{E}=\sum \vec{E_{i}}=\sum \frac{1}{4\pi\epsilon_{0}} \cdot \frac{q_{i}}{r_{i}^{2}}\hat{ r_{i}}
$$
![[discrete charges.png]]

## Electric Field of Continuous Charge Distribution

$$
\vec{E}=\frac{1}{4\pi\epsilon_{0}}\int \frac{dq}{r^{2}}\hat{r}
$$
For electrified body, $dq=\rho dV$; for electrified surface, $dq = \sigma dS$; for electrified line, $dq=\lambda dl$, where $\rho,\sigma, \lambda$ is corresponding density of charge.
![[continuous.png]]

## Problem Solving Strategy

- Apply Coulomb's Law
- Sum all the x- and y- components(convert the vector to scalars)
- Find the resultant force

## Problem-Solving Tactics-- A Field Guide for Lines of Charge

General strategy is to ==pick out an element $dq$ of the charge, find $d\vec{E}$ due to the element and integrate $d \vec{E}$ over the entire line of charge==.

Note for the ==symmetry situation==.

- Rings($P$ on axis of symmetry)
	Replace $r^{2}$ with $z^{2}+R^{2}$. Express the adding component of $d\vec{E}$ in terms of $\theta$ where $\theta$ is the angle between the electric field and the symmetric axis. And $\cos\theta = \frac{z}{r}$.
- Circular arc($P$ at the center of curvature)
	Express the adding component of $d\vec{E}$ by $\theta$ and use $ds=rd\theta$ transfer the variable to $\theta$.
- Straight line($P$ on an extension of the line)
	Replace $r$ with $x$.
- Straight line($P$ at perpendicular distance from the line of charge)
	Replace $r$ with $x$ and $y$. If $P$ is on the ==perpendicular bisector==, replace the variable by trigonometric function. If not, respectively integrate x- and y- components and then integrate the total electric field.

## Expand

For a flat plate with ==infinite charges evenly distributed in space==, it generates a ==uniform field== and 
$$
E=\frac{\sigma}{2\epsilon_{0}}
$$
![[flat plate.png]]

For parallel capacitor, it can be seen as two flat plate with infinite charges. The electric field outside is ==zero==, inside is 
$$
E=\frac{\sigma}{\epsilon_{0}}
$$

# Electric Field Lines

The tools to describe ==the spatial distribution of the electric field==.

The ==direction of the tangent line== represents the ==direction of the electric field strength== at that point, and the ==density of the curves== represents the ==magnitude of the electric field strength== at that point.

Characteristic of electric field lines:
- Starting from a ==positive charge== and returning to a ==negative charge==, the curve is an ==open line==.
- Electric field lines are artificially introduced and do ==not actually exist==.

For point charge, the lines radiate equally in all directions(positive outward, negative inward)
![[point charge.png]]
For two equal charges
![[two equal charges.png]]
