---
Date: 2025-06-26T16:38:00
tags:
  - Advanced_Math_notes
---
# Masses and First Moments

## Mass

The mass of a object with $\delta(x,y,z)$ as the density is $$
M=\iiint_{D}\delta(x,y,z)\,dV
$$
## First Moment

The first moment is defined as the ==multiplication of the mass== of the object and the ==distance from the object to the rotation plane(rotation axis in two dimensions)==, or, the ==triple integral(double integral in two dimensions)== over $D$ of the ==distance== from the point $(x,y,z)$ to the plane ==multiplied by the density== of the solid at the point.

## Center of Mass

The center of mass is found from the first moments, defined by ==first moment over total mass==. For instance, the $x$-coordinate of the center of mass is $\bar{x}=M_{yz} / M$.

## Centroid

When the density of a solid object or plate is ==constant==, the center of mass is called the ==centroid== of the object.(same to the geometric center)

# Moments of Inertia

The moment of inertia(or the second moment) focus on how much energy is stored in the shaft or how much ==energy is generated== by rotating at a ==particular angular velocity==.

The ==moment of inertia== of the shaft about its axis of rotation is$$
I=\int r^{2} \, dm =\int r^{2}\delta \, dV 
$$
And the kinetic energy is$$
\mathrm{KE}_{\mathrm{shaft}}=\frac{1}{2}Iw^{2}
$$
where $r$ is the distance to the axis of rotation, $w$ is angular velocity.
The moments of inertia about the line $L$ in three dimension is:$$
I_{L}=\iiint r^{2}\delta\,dV
$$
In two dimension is $$
I_{L}=\iint r^{2}\delta\,dV
$$
Note that in two-dimensional plate, ,there is a moment of inertia about the origin that is $$
I_{0}=I_{x}+I_{y}=\iint(x^{2}+y^{2})\delta\,dA
$$

