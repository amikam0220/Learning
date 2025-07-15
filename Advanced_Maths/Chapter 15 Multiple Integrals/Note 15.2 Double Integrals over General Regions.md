---
Date: 2025-05-28T20:18:00
tags:
  - Advanced_Math_notes
---
# Double Integrals over Bounded, Nonrectangular Regions

The Riemann sum are obtained by ==covering the region with a grid of small rectangular cells whose union contains all points of the region==. Partition is formed by ==taking the rectangles lying completely inside it==.

# Volume

## Theorem 2--Fubini's Theorem(Stronger Form)

For a continuous function $f(x,y)$,
- if $R:a\leq x\leq b,g_{1}(x)\leq y\leq g_{2}(x)$ and $g_{1},g_{2}$ are continuous on $[a,b]$, then $$\iint_{R}f(x,y)dA=\int_{a}^{b} \int_{g_{1}(x)}^{g_{2}(x)} f(x,y) \, dy  \, dx $$
- if $R:c\leq y\leq d,h_{1}(x)\leq x\leq h_{2}(x)$ and $h_{1},h_{2}$ are continuous on $[c,d]$, then $$\iint_{R}f(x,y)dA=\int_{c}^{d} \int_{h_{1}(x)}^{h_{2}(x)} f(x,y) \, dx  \, dy $$
Note that when ==reordering the integrals==, we need to ==rewrite the limit of integration== by analyzing or sketching rather than simply reorder the limits.

# Properties of Double Integrals

Similar to single integrals.
# Exercises

P866 47 51
