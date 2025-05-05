---
Date: 2025-04-09T18:25:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=670&selection=483,1,484,38|The link of chapter 11.5, Advanced Math]]"
---
# Area in the Plane
### Conclusion--Area of the Fan-Shaped Region Between the Origin and the Curve $r=f(\theta),\alpha\leq\theta\leq\beta$

The area is $$A=\int_{\alpha}^{\beta} \frac{1}{2}r^{2} \, d\theta $$
and it is the integral of the area differential $$dA=\frac{1}{2}r^{2}d\theta=\frac{1}{2}(f(\theta))^{2}d\theta$$
![[area of fan-shaped region.png]]
Note that the region is ==different== from the integral of $y=f(x)$, which is the area under the curve to $x$-axis.

### Conclusion--Area of the Region $0\leq r_{1}(\theta)\leq r\leq r_{2}(\theta),\alpha\leq\theta\leq\beta$

$$
A=\int_{\alpha}^{\beta} \frac{1}{2}r_{2}^{2} \, d\theta-\int_{\alpha}^{\beta} \frac{1}{2}r_{1}^{2} \, d\theta=\int_{\alpha}^{\beta} \frac{1}{2}(r_{2}^{2}-r_{1}^{2}) \, d\theta  
$$
![[area of difference of fan-shaped region.png]]
Note the region of $\theta$ and necessary graph.

# Length of a Polar Curve

If $r=f(\theta)$ has a continuous first derivative for $\alpha\leq\theta\leq\beta$ and if the point $P(r,\theta)$ traces the curve $r=f(\theta)$ exactly once as $\theta$ runs from $\alpha$ to $\beta$, then the length of the curve is $$L=\int_{\alpha}^{\beta} \sqrt{ r^{2}+\left( \frac{dr}{d\theta}^{2} \right) } \, d\theta $$which can be obtain by substituting $r=f(\theta),x=r\cos\theta,y=r\sin\theta$ to the $$L=\int_{\alpha}^{\beta} \sqrt{ \left( \frac{dx}{d\theta} \right)^{2}+\left( \frac{dy}{d\theta} \right)^{2} } \, d\theta $$
([[Note 11.2 Calculus with Parametric Curves#^56cf99|the upper formula]])

# Exercises Section 11.5

P656 11 13 21