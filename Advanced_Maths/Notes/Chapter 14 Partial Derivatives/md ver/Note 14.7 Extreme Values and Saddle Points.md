---
Date: 2025-05-14T20:17:00
tags:
  - Advanced_Math_notes
---
# Derivative Tests for Local Extreme Values

## Definition of Local Extrema(Relative Extrema)

For $f(a,b)$,
- Local maximum if $f(a,b)\geq f(x,y)$ nearby
- Local minimum if $f(a,b)\leq f(x,y)$ nearby

## Theorem 10--First Derivative Test for Local Extreme Values

If ==$f(a,b)$ is local maximum or minimum== and ==the first partial derivatives exist==, then 
$$
f_{x}(a,b) =f_{y}(a,b)=0
$$

It is sufficient but not necessary.

## Definition of Critical Point

The points where ==both partial derivatives are zero== or ==both partial derivatives do not exist==.

Not that ==not every critical point is correspond to a local extremum==.(similar to single-variable function)

## Definition of Saddle Point

The critical point that exists both $f(x,y)>f(a,b)$ and $f(x,y)<f(a,b)$ nearby. That is, the ==critical point== that is ==neither local maximum nor minimum==.

## Theorem 11--Second Derivative Test for Local Extreme Values

|               | $f_{x x}$ | $f_{x x}f_{yy}-f_{xy}^{2}$<br>(<br>$$\left\| \begin{matrix}<br>f_{x x}&f_{xy}\\<br>f_{xy} &f_{yy}\\<br>\end{matrix} \right\| $$<br>) |
| ------------- | --------- | ------------------------------------------------------------------------------------------------------------------------------------ |
| local maximum | $<0$      | $>0$                                                                                                                                 |
| local minimum | $>0$      | $>0$                                                                                                                                 |
| saddle point  | \         | $<0$                                                                                                                                 |
| inconclusive  | \         | $=0$                                                                                                                                 |

# Absolute Maxima and Minima on Closed Bounded Regions

- Find the local extrema of interior points.
- Find maximum and minimum ==on each boundary side==.
- Compare and obtain the answer.
# Exercises

P827 27 29 35 53