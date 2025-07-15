---
Date: 2025-05-21T20:02:00
tags:
  - Advanced_Math_notes
---
# Double Integrals

Double integrals are ==definite integrals==, and functions with more variables have ==no infinite integrals==.
The double integrals can be obtained by Riemann sum of small rectangles. Denoted by $$
\iint_{R} f(x,y)dA, \iint_{R} f(x,y)\,dx\,dy
$$
on the region $R$.
We can see the function as the ==height== of each rectangular box and the integral is the sum of the ==volume==. Similar to ==single integral==.
We can also see the function as the ==density== of unit area and the integral is the ==mass== of the piece. Similar to ==triple integrals==.

# Fubini's Theorem for Calculating Double Integrals

## Theorem 1--Fubini's Theorem(First Form)

For a continuous function $f(x,y)$ through the rectangular region $R:a\leq x\leq b,c\leq y\leq d$, $$
\iint_{R}f(x,y)\,dA=\int_{c}^{d} \int_{a}^{b} f(x,y) \, dx  \, dy =\int_{a}^{b} \int_{c}^{d} f(x,y) \, dy  \, dx 
$$
It is to integrate the small ==area slice== through an axis first, then integrate ==volume== through another axis.
And it is called ==iterated or repeated integral==.
When integrating inner function, see another variable as a ==constant==.
# Exercises

P858 3 7 19