---
Date: 2025-04-16T10:58:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=709&selection=183,1,184,15|The link of chapter 12.3, Advanced Math]]"
---
# Angle Between Vectors
## Definition of Dot Product

The ==dot product== $\mathbf{u}\cdot \mathbf{v}$ of vectors $\mathbf{u}=\left< u_{1},u_{2},u_{3} \right>$ and $\mathbf{v}=\left< v_{1},v_{2},v_{3} \right>$ is $$
\mathbf{u}\cdot \mathbf{v}=u_{1}v_{1}+u_{2}v_{2}+u_{3}v_{3}=\left| \mathbf{u} \right| \left| \mathbf{v} \right| \cos\theta
$$
where $\theta$ is the angle between the two vectors.
## Theorem 1--Angle Between Two Vectors

The angle $\theta$ between two nonzero vectors $\mathbf{u}=\left< u_{1},u_{2},u_{3} \right>$ and $\mathbf{v}=\left< v_{1},v_{2},v_{3} \right>$ is given by $$
\theta=\cos ^{-1} \left( \frac{u_{1}v_{1}+u_{2}v_{2}+u_{3}v_{3}}{\left| \mathbf{u} \right| \left| \mathbf{v} \right| } \right) 
$$
or in the notation of the dot product, $$
\theta=\cos ^{-1}\left( \frac{\mathbf{u}\cdot \mathbf{v}}{\left| \mathbf{u} \right| \left| \mathbf{v} \right| } \right) 
$$
The proof can be done by using the law of cosines, constituting the vector $\mathbf{w}=\mathbf{u}-\mathbf{v}$.

# Perpendicular (Orthogonal) Vectors
## Definition

Vectors $\mathbf{u}$ and $\mathbf{v}$ are ==orthogonal== (or ==perpendicular==) if and only if $\mathbf{u}\cdot \mathbf{v}=0$. And the ==zero vector== is perpendicular to any vector.

# Dot Product Properties and Vector Projections
## Properties of the Dot Product

If $\mathbf{u},\mathbf{v},\mathbf{w}$ are any vectors and $c$ is a scalar, then
- $\mathbf{u}\cdot \mathbf{v}=\mathbf{v}\cdot \mathbf{u}$
- $(c \mathbf{u})\cdot\mathbf{v}=\mathbf{u}\cdot(c \mathbf{v})=c(\mathbf{u}\cdot \mathbf{v})$
- $\mathbf{u}\cdot(\mathbf{v}+\mathbf{w})=\mathbf{u}\cdot\mathbf{v}+\mathbf{u}\cdot \mathbf{w}$
- $\mathbf{u}\cdot \mathbf{u}=\left| \mathbf{u} \right|^{2}$
- $\mathbf{0}\cdot \mathbf{u}=0$
The upper properties can be proved by the definition of the dot product.

## Vector Projection

The ==scalar component== of $\mathbf{u}$ in the direction of $\mathbf{v}$ is the scalar $$
\left| \mathbf{u} \right| \cos\theta=\frac{\mathbf{u}\cdot \mathbf{v}}{\left| \mathbf{v} \right| }=\mathbf{u}\cdot \frac{\mathbf{v}}{\left| \mathbf{v} \right| }
$$
The ==vector projection== of $\mathbf{u}$ onto $\mathbf{v}$ is the vector $$
\text{proj}_{\mathbf{v}}\mathbf{u}=\left| \mathbf{u} \right| \cos\theta  \frac{\mathbf{v}}{|\mathbf{v}|}=\left( \frac{\mathbf{u\cdot}\mathbf{v}}{\left| \mathbf{v} \right| ^{2}} \right)\mathbf{v} 
$$

# Exercises 12.3

P698 5