---
Date: 2025-12-21T16:09:00
---
# Electric Flux and Enclosed Charge

Electric flux: Number of ==electric field lines== passing through ==the curved surface==.

The electric field vectors point out of the surface, we say there is an ==outward electric flux==. If point into the surface, the ==electric flux is inward==.

![[electric flux.png]]

Whether there is a ==net outward or inward electric flux== through a closed surface depends on the sign of the ==enclosed charge==. ==Outside== the surface ==do not give a net electric flux== since it is through the surface.

The net electric flux proportional to the net amount of charge enclosed but ==is independent of the size and shape== of the closed surface.

# Calculating Electric Flux

## Flat Surface, Uniform Field

The symbol: $\Phi_{E}$.

We define the electric flux through this area to be the scalar product of the electric field and the area vector.
$$
\Phi_{E}=\vec{E}\cdot \vec{A}
$$

For the area vector
$$
\vec{A}=A\hat{n}
$$
where $\hat{n}$ is the ==unit normal vector to the area==. With a closed surface, we always choose the direction of $\hat{n}$ to be ==outward==. Thus we call ==outward electric flux== corresponds to a ==positive value of $\Phi_{E}$==.

## Flux of a Nonuniform Electric Field

We divide $A$ into many small element $dA$, each of which has a unit vector $\hat{n}$ perpendicular to it and $d\vec{A}=\hat{n}dA$. And the total net flux:
$$
\Phi=∮_{S} \vec{E}\;\cdot\mathrm{d}\vec{A}
$$
![[nonuniform electric field.png]]

# Gauss's Law

It is an ==alternative to Coulomb's Law==. Provide a different way to express the relationship between electric charge and electric field.

Gauss's Law:
$$
\Phi_{E} = ∮_{S} \vec{E}\cdot d\vec{A}=\frac{q_{enc}}{\epsilon_{0}}
$$
where $q_{enc}$ is the ==algebraic sum of net charge enclosed by the closed surface(Gaussian surface)==, $E$ is total electric field including both inside and outside. The surface $S$ is called the ==Gaussian surface==.

## Problem Solving Strategy using Gauss's Law

- Analyze the ==symmetry of charge distribution and the electric field==.
- ==Establish== a suitable ==coordinate system==
- Select a suitable Gaussian Surface
- Apply Gauss's Law to calculate the ==electric field strength==.