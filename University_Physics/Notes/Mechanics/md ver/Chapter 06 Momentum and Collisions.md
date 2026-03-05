---
Date: 2025-11-26T14:54:00
---
# Momentum

The ==linear momentum== $\vec{p}$ of a mass $m$ moving with velocity $\vec{v}$ is defined:
$$
\vec{p}=m\vec{v}
$$
And the direction of the momentum is the same as velocity's.

The ==time rate== of change of momentum of an object is equal to the ==net force==.
$$
\vec{F_{net}}=\frac{\Delta \vec{p}}{\Delta t}
$$
And we can get 
$$
\vec{F_{net}}=\frac{d\vec{p}}{dt}=\frac{d}{dt}(m\vec{v})=m \frac{d\vec{v}}{dt}=m\vec{a}
$$
so the relations are ==equivalent expressions of Newton's second law==.

# Impulse

The impulse $\vec{I}$ is defined as(for a single, constant force):
$$
\vec{I}=\vec{F}\Delta t
$$
The direction is the same as the force's

For the change of momentum, the impulse $\vec{J}$ has:
$$
\vec{J}=\int_{t_{i}}^{t_{f}} \vec{F}(t) \, dt 
$$
and since $\vec{F_{net}}=\frac{d\vec{p}}{dt}$, we have 
$$
\Delta \vec{p} = \vec{J}
$$

# Impulse-Momentum Theorem

The impulse acting on an object equals to the change in momentum
$$
\vec{F}\Delta t=\Delta \vec{p}=m\vec{v_{f}}-m \vec{v_{i}}
$$
If the force is not constant, use the ==average force==, which satisfies:
$$
\vec{F_{avg}}\Delta t=\Delta \vec{p}
$$

# Momentum Conservation

Momentum is conserved for the system of objects
$$
m_{1}\vec{v_{1i}}+m_{2}\vec{v_{2i}}=m_{1}\vec{v_{1f}}+m_{2}\vec{v_{2f}}
$$

# Collisions

For collisions, ==momentum is always conserved==.
- Inelastic collisions: Kinetic energy is ==not conserved==. Perfectly inelastic collisions lose kinetic energy most, occurring when the objects stick together.
- Elastic collisions: Kinetic energy is conserved.

# Glancing Collisions

The conservation of momentum implies that the total momentum of the system ==in each direction==:
$$
\begin{align}
 & m_{1}v_{1ix}+m_{2}v_{2ix}=m_{1}v_{1fx}+m_{2}v_{2fx} \\
 &  m_{1}v_{1iy}+m_{2}v_{2iy}=m_{1}v_{1fy}+m_{2}v_{2fy}
\end{align}
$$
# Rocket Propulsion

An inelastic collision. Kinetic energy is ==increased==. It has
$$
R v_{rel}=Ma
$$
where 
$$
R=-\frac{dM}{dt}
$$
, the rate at which the rocket loses mass. $v_{rel}$ is the relative speed, $v_{rel}=v+dv-u$

And we can get the change of the velocity of a rocket:
$$
v_{f}-v_{i}=v_{rel}\ln \frac{M_{i}}{M_{f}}
$$
obtained by integrating 
$$
dv=-v_{rel} \frac{dM}{M}
$$
, equivalent to the first equation.
