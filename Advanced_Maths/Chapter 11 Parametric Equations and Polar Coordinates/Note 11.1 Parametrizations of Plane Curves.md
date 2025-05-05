---
Date: 2025-04-02T19:54:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=645&selection=37,0,37,32|The link of chapter 11.1, Advanced Math]]"
---
## **Parametric Equations**

- **Definition**
	If $x$ and $y$ are given as functions $$x=f(t),y=g(t)$$ over an interval $I$ of $t$-values, then the set of points $(x,y)=(f(t),g(t))$ defined by these equations is a parametric curve. The equations are parametric equations for the curve. And the variable $t$ is a ==parameter== for the curve and its domain $I$ is the ==parameter interval==. If $I$ is a closed interval $a\leq t\leq b$, the point $(f(a),g(a))$ is the initial point and $(f(b),g(b))$ is the terminal point.  When we give parametric equations and a parameter interval for a curve, we say that we have ==parametrized== the curve. The equations and interval together constitute a ==parametrization== of the curve.

## **Cycloids**

![[Cycloid.png]]
A wheel of radius a rolls along a horizontal straight line. Find parametric equations for the path traced by a point $P$ on the wheel’s circumference. The path is called a ==cycloid==.
There the coordinates of $P$ are $$x=at+a\cos\theta,y=a+a\sin\theta$$ where $t$ is the angle the wheel turns through measured in radians. Then we can express the $\theta$ in terms of $t$, that is $$\theta=\frac{3\pi}{2}-t$$ Then $$\cos\theta=-\sin t,\sin\theta=-\cos t$$
Then the parametric equations of the cycloid are $$x=a(t-\sin t),y=a(1-\cos t)$$