---
Date: 2025-04-09T09:27:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=666&selection=858,0,858,29|The link of chapter 11.4, Advanced Math]]"
---
# Symmetry
### Symmetry Tests for Polar Graphs

Suppose the point $(r,\theta)$
- Symmetry about the $x$-axis: $(r,-\theta)\text{ or }(-r,\pi-\theta)$
	![[Symmetry about x.png]]
- Symmetry about the $y$-axis: $(r,\pi-\theta)\text{ or }(-r, -\theta)$
	![[Symmetry about y.png]]
- Symmetry about the origin: $(r,\pi+\theta)\text{ or }(-r,\theta)$	
	![[Symmetry about origin.png]]

# Slope
### Slope of the Curve $r=f(\theta)$

$$\left.\frac{dy}{dx}\right|_{(r,\theta)}=\frac{f^{\prime}(\theta)\sin\theta+f(\theta)\cos\theta}{f^{\prime}(\theta)\cos\theta-f(\theta)\sin \theta}$$ where $\frac{dx}{d\theta}\ne 0$ at $(r,\theta)$.

### Remarks

If the curve passes through the origin at $\theta=\theta_{0}$, then $f(\theta_{0})=0$ and $$\left. \frac{dy}{dx}  \right|_{(0,\theta_{0})}=\frac{f^{\prime}(\theta_{0})\sin\theta_{0}}{f^{\prime}(\theta_{0})\cos\theta_{0}}=\tan\theta_{0} $$
### Proof

The slope of a polar curve $r=f(\theta)$ in the $xy$-plane is still given by $dy / dx$ rather than $r^{\prime}=df / d\theta$. Then since $$x=r\cos\theta=f(\theta)\cos\theta,y=r\sin\theta=f(\theta)\sin\theta$$
If $f$ is differentiable function of $\theta$ and $dy / dx\ne 0$, then 
$$\begin{align}
\frac{dy}{dx} & =\frac{dy / d\theta}{dx / d\theta} \\
 & =\frac{ \frac{d}{d\theta}(f(\theta)\cdot \sin\theta)}{\frac{d}{d\theta}(f(\theta)\cdot \cos\theta)} \\
 & =\frac{f^{\prime}(\theta)\sin\theta+f(\theta)\cos \theta}{f^{\prime}(\theta)\cos\theta-f(\theta)\sin\theta}
\end{align}$$

# A Technique for Graphing

- First Graphing $r=f(\theta)$ in the Cartesian $r\theta$-plane.(default from $0$ to $2\pi$)
- Then use the Cartesian graph as a table to sketch the polar coordinate graph.


