---
Date: 2025-04-16T18:14:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=717&selection=167,1,168,17|The link of chapter 12.4, Advanced Math]]"
---
# The Cross Product of Two Vectors in Space
## Definition of Cross Product

$$
\mathbf{u}\times \mathbf{v}=(\left| \mathbf{u} \right| \left| \mathbf{v} \right| \sin\theta)\mathbf{n}
$$
where $\mathbf{n}$ is the ==unit vector perpendicular to the plane== by the ==right-hand rule==.

## Parallel Vectors

Nonzero vectors $\mathbf{u}$ and $\mathbf{v}$ are ==parallel== if and only if $\mathbf{u}\times \mathbf{v}=\mathbf{0}$.

## Properties of the Cross Product

If $\mathbf{u},\mathbf{v},\mathbf{w}$ are any vectors and $c$ is a scalar, then
- $(r\mathbf{u})\times(s\mathbf{v})=(rs)(\mathbf{u}\times \mathbf{v})$
- $\mathbf{u}\times \mathbf{v}=-(\mathbf{v}\times \mathbf{u})$
- $(\mathbf{v}+\mathbf{w})\times \mathbf{u}=\mathbf{v}\times \mathbf{u}+\mathbf{w}\times \mathbf{u}$
- $\mathbf{u}\times(\mathbf{v}+\mathbf{w})=\mathbf{u }\times\mathbf{v}+\mathbf{u}\times \mathbf{w}$
- $\mathbf{0}\times \mathbf{u}=\mathbf{0}$
- $\mathbf{u}\times(\mathbf{v}\times \mathbf{w})=(\mathbf{u}\cdot \mathbf{w})\mathbf{v}-(\mathbf{u}\cdot \mathbf{v})\mathbf{w}$

And it is ==not associative==.
For the pairwise cross products of $\mathbf{i,j,k}$, we find $$
\begin{align}
 \mathbf{i}\times \mathbf{j}  & =\mathbf{k} \\
 \mathbf{j}\times \mathbf{k} & =\mathbf{i} \\
\mathbf{k}\times \mathbf{i} & =\mathbf{j}
\end{align}
$$
and $$\mathbf{i}\times \mathbf{i}=\mathbf{j}\times \mathbf{j}=\mathbf{k}\times \mathbf{k}=\mathbf{0}$$
![[pairwise cross products.png]]



# $\left| \mathbf{u}\times \mathbf{v} \right|$ Is the Area of a Parallelogram

since $$
\left| \mathbf{u}\times \mathbf{v} \right| =\left| \mathbf{u} \right| \left| \mathbf{v} \right| \left| \sin\theta \right| \left| \mathbf{n} \right| =\left| \mathbf{u} \right| \left| \mathbf{v} \right| \sin\theta
$$
it represents ==the area of a parallelogram== with the two neighbor sides of $\mathbf{u},\mathbf{v}$.

# Determinant Formula for $\mathbf{u}\times \mathbf{v}$
## Calculating the Cross Product as a Determinant

If $\mathbf{u}=u_{1}\mathbf{i}+u_{2}\mathbf{j}+u_{3}\mathbf{k}$ and $\mathbf{v}=v_{1}\mathbf{i}+v_{2}\mathbf{j}+v_{3}\mathbf{k}$, then 
$$
\mathbf{u}\times \mathbf{v}=\left| \begin{matrix}
\mathbf{i} & \mathbf{j} & \mathbf{k} \\
u_{1} & u_{2} & u_{3} \\
v_{1} & v_{2} & v_{3} \\
\end{matrix} \right| 
$$

### Proof

$$
\begin{align}
\mathbf{u}\times \mathbf{v} & =(u_{1}\mathbf{i}+u_{2}\mathbf{j}+u_{3}\mathbf{k})\times(v_{1}\mathbf{i}+v_{2}\mathbf{j}+v_{3}\mathbf{k}) \\ 
 & =  u_{1}v_{1}\mathbf{i}\times \mathbf{i}+u_{1}v_{2}\mathbf{i}\times \mathbf{j}+u_{1}v_{3}\mathbf{i}\times \mathbf{k} +u_{2}v_{1}\mathbf{j}\times \mathbf{i}+\cdots+u_{3}v_{3}\mathbf{k}\times \mathbf{k}\\
 & = (u_{2}v_{3}-u_{3}v_{2})\mathbf{i}-(u_{1}v_{3}-u_{3}v_{1})\mathbf{j}+(u_{1}v_{2}-u_{2}v_{1})\mathbf{k}
\end{align}
$$
and it is the expansion of the upper determinant.

# Triple Scalar or Box Product
## Definition of Triple Scalar Product

The product $(\mathbf{u}\times \mathbf{v})\cdot \mathbf{w}$ is called the ==triple scalar product==(or ==box scalar product==) of $\mathbf{u},\mathbf{v},\mathbf{w}$.
And it has the formula $$
\left| (\mathbf{u}\times \mathbf{v})\cdot \mathbf{w} \right|=\left| \mathbf{u}\times \mathbf{v} \right|\left| \mathbf{w} \right| \left| \cos\theta \right|   
$$
Since $\left| \mathbf{u}\times \mathbf{v} \right|$ is the area of the parallelogram and $|\mathbf{w}||\cos\theta|$ is the projection of $\mathbf{w}$ onto the perpendicular vector of the $\mathbf{u}\times \mathbf{v}$. So the triple scalar product is actually the ==volume of a parallelepiped==. 
![[triple scalar product.png]]
And by the geometric definition, we can know that $$
(\mathbf{u}\times \mathbf{v})\cdot \mathbf{w}=(\mathbf{v}\times \mathbf{w})\cdot \mathbf{u}=(\mathbf{w}\times \mathbf{u}) \cdot \mathbf{v}
$$

## Calculating the Triple Scalar Product as a Determinant

$$
(\mathbf{u}\times \mathbf{v}) \cdot \mathbf{w}=\left| \begin{matrix}
u_{1}  & u_{2} & u_{3} \\
v_{1} & v_{2} & v_{3} \\
w_{1} & w_{2} & w_{3}
\end{matrix} \right| 
$$

### Proof

$$
\begin{align}
(\mathbf{u}\times \mathbf{v}) \cdot \mathbf{w} & =\left[ \left| \begin{matrix}
u_{2} & u_{3} \\
v_{2} & v_{3}
\end{matrix} \right|\mathbf{i}-\left| \begin{matrix}
u_{1}  & u_{3} \\
v_{1} & v_{3}
\end{matrix} \right|\mathbf{j} +\left| \begin{matrix}
u_{1}  & u_{2} \\
v_{1} & v_{2}
\end{matrix} \right|\mathbf{k}   \right] \cdot \mathbf{w} \\
 & =w_{1}\left| \begin{matrix}
u_{2} & u_{3} \\
v_{2} & v_{3}
\end{matrix} \right|-w_{2}\left| \begin{matrix}
u_{1}  & u_{3} \\
v_{1} & v_{3}
\end{matrix} \right|+w_{3}\left| \begin{matrix}
u_{1}  & u_{2} \\
v_{1} & v_{2}
\end{matrix} \right| \\
 & =\left| \begin{matrix}
u_{1}  & u_{2} & u_{3} \\
v_{1} & v_{2} & v_{3} \\
w_{1} & w_{2} & w_{3}
\end{matrix} \right| 
\end{align}
$$

# Exercises 12.4

P704 3, 23