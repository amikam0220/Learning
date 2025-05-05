---
Date: 2025-04-23T18:59:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=763&selection=225,1,226,39&color=yellow|The link of chapter 13.4, Advanced Math]]"
---
# Curvature and Normal Vectors of a Curve

## Definition of Curvature 

If $\mathbf{T}$ is the unit vector of a smooth curve, the ==curvature== function of the curve is $$
\kappa=\left| \frac{d\mathbf{T}}{ds} \right| 
$$
When the curvature is large, $\mathbf{T}$ turns sharply as the particle passes through $P$.
It is related to the changed distance rather than the time. It contains the information of the length.
## Formula for Calculating Curvature

If $\mathbf{r}(t)$ is a smooth curve, then the curvature is $$
\kappa =\left| \frac{d^{2}\mathbf{r}(s)}{ds^{2}} \right| = \frac{1}{\left| \mathbf{v} \right| }\left| \frac{d\mathbf{T}}{dt} \right| 
$$
where $\mathbf{T}=\frac{\mathbf{v}}{\left| \mathbf{v} \right|}$ is the unit tangent vector.

## Definition of Principal Unit Normal

At a point where $\kappa \ne 0$, the ==principal unit normal== vector for a smooth curve in the plane is $$
\mathbf{N}=\frac{1}{\kappa} \frac{d\mathbf{T}}{ds}
$$
It contains the information of the direction. It can create a coordinate system with the position of the particle as the origin.
## Formula for Calculating $\mathbf{N}$

If $\mathbf{r}(t)$ is a smooth curve, then the principal normal is $$
\mathbf{N} = \frac{d\mathbf{T} / dt}{\left| d\mathbf{T}/dt \right| }
$$
where $\mathbf{T}=\mathbf{v} / \left| \mathbf{v} \right|$ is the unit tangent vector.
# Circle of Curvature for Plane Curves

The ==circle of curvature== or ==osculating circle== at a point $P$ on a plane curve where $\kappa \ne 0$ is the circle in the plane of the curve that 
- is tangent to the curve at $P$. (has the same tangent line the curve has)
- has the intersection point $P$ with the curve. (has the same tangent line the curve has)
- has the same curvature the curve has at $P$. 
# Exercises

P751 11 17