---
Date: 2025-04-29T20:23:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=790&selection=1005,1,1006,42|The link of chapter 14.2, Advanced Math]]"
---
# Limits for Functions of Two Variables

## Definition 

We say that a function $f(x,y)$ approaches the ==limit== $L$ as $(x,y)$ approaches $(x_{0},y_{0})$ and write $$
\lim_{ (x,y) \to (x_{0},y_{0}) } f(x,y)=L
$$
if for every number $\epsilon>0$, there exists a corresponding number $\delta>0$ such that for all $(x,y)$ in the domain of $f$, $$
0<\sqrt{ (x-x_{0})^{2}+(y-y_{0})^{2} }<\delta\implies \left| f(x,y)-L \right| <\epsilon
$$
## For a Single Varaible

it can be shown that $$
\begin{align}
 & \lim_{ (x,y) \to (x_{0},y_{0}) }x=x_{0} \\
 & \lim_{ (x,y) \to (x_{0},y_{0}) } y=y_{0} \\
 & \lim_{ (x,y) \to (x_{0},y_{0}) } k=k (\text{any number }k) 
\end{align}
$$
## Theorem 1--Properties of Limits of Functions of Two Variables

![[Thomas Calculus Early Transcendentals (12ed).pdf#page=792&rect=265,401,615,652|Thomas Calculus Early Transcendentals (12ed), p.775]]

# Continuity

## Definition 

A function $f(x,y)$ is ==continuous== at the point $(x_{0},y_{0})$ if 
- $f$ is defined at $(x_{0},y_{0})$
- $\lim_{ (x,y) \to (x_{0},y_{0}) }f(x,y)$ exists.
- $\lim_{ (x,y) \to (x_{0},y_{0}) }f(x,y)=f(x_{0},y_{0})$.

## Two-Path Test for Nonexistence of a Limit

If a function $f(x,y)$ has ==different limits along two different paths== in the domain of $f$ as $(x,y)$ approaches $(x_{0},y_{0})$, then $\lim_{ (x,y) \to (x_{0},y_{0}) }f(x,y)$ does not exist.
(But having the same limit along all straight lines approaching $(x_{0},y_{0})$ does not imply the limit exists.)

## Continuity of Composites

If $f$ is continuous at $(x_{0},y_{0})$ and $g$ is a ==single-variable== function continuous at $f(x_{0},y_{0})$, then the composite function $h=g\circ f$ defined by $h(x,y)=g(f(x,y))$ is continuous at $(x_{0},y_{0})$.

# Functions of More than Two Variables

The conclusions for functions of two variables can also extend to functions of three or more variables.

# Extreme Values of Continuous Functions on Closed, Bounded Sets

For a function more than one variables, there still exists that if it is continuous on a closed, bounded set $R$ in the plane then it has absolute minimum and maximum at some point in $R$.

# Exercises

P780 23 33 47