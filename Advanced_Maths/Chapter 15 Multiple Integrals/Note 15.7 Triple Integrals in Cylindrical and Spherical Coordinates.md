---
Date: 2025-06-26T17:05:00
tags:
  - Advanced_Math_notes
---
# Integration in Cylindrical Coordinates

## Definition

Cylindrical coordinates represent a point $P$ in space by ordered triples $(r,\theta,z)$ where
- $r$ and $\theta$ are polar coordinates for the ==vertical projection== of $P$ on the $xy$-plane
- $z$ is the ==rectangular vertical coordinates==.

## Equations Relating Rectangular $(x,y,z)$ and Cylindrical $(r,\theta,z)$ Coordinates

$$x=r\cos\theta\quad y=r\sin\theta\quad z=z$$
$$
r^{2}=x^{2}+y^{2} \quad \tan\theta=\frac{y}{x}
$$
## Integrals of Cylindrical Coordinates

$$\iiint_{D}fr\,dr\,d\theta\,dz=\iiint_{D}f\,dz\,r\,dr\,d\theta$$

# Spherical Coordinates and Integration

## Definition

Spherical coordinates represent a point $P$ in space by ordered triples $(\rho,\phi,\theta)$ where
- $\rho$ is the ==distance from $P$ to the origin==.
- $\phi$ is the angle $\overrightarrow{OP}$ makes with the ==positive $z$-axis==.($0\leq \phi\leq \pi$)
- $\theta$ is the angle from ==cylindrical coordinates==.($0\leq\theta\leq 2\pi$)

## Equations

$$
r=\rho \sin \phi,x=r\cos\theta=\rho \sin \phi \cos \theta
$$
$$
z=\rho \cos \phi,y=r\sin \theta=\rho \sin \phi \sin \theta
$$
$$
\rho=\sqrt{ x^{2}+y^{2}+z^{2} }=\sqrt{ r^{2}+z^{2} }
$$
## Integrals of Spherical Coordinates

$$
\iiint_{D}f(\rho,\phi,\theta)\rho^{2}\sin \phi \,d\rho\,d\phi\,d\theta
$$
and $$
dV=\rho^{2}\sin \phi\,d\rho\,d\phi\,d\theta
$$


