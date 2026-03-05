---
Date: 2025-12-23T16:22:00
---
# Magnetism

==Poles== of a magnet are the ends where objects are ==most strongly attracted==.(Two poles North and south)

Like poles repel each other, opposite magnetic poles attract each other.(similar to electric charges)

Magnetic poles ==cannot be isolated==.

# Magnetic Field

The strength of a magnetic field is represented by ==magnetic field strength==, a physical quantity that reflects the ==characteristics of the magnetic force==.
Direction is indicated by ==the north pole of a compass needle==. Magnitude can be given by ==the force exerted on a moving charge==. (Called ==Lorentz force==)
$$
\vec{F}=q\vec{v}\times \vec{B}
$$

(SI unit $T$, $1T=10^{4}G$).

The forces exerted on a charge in an electric and magnetic field is
$$
\vec{F}=q(\vec{E}+\vec{v}\times \vec{B})
$$
The direction of Lorentz force can be determined by ==right-hand== rule(cross product).
Note for ==negative charge==.

The Lorentz force is ==always== perpendicular to $\vec{v}$ and $\vec{B}$.

# Magnetic Field Lines and Magnetic Flux

A series of directional curves are drawn such that ==the tangent at each point== on the curve ==represents the direction of the magnetic field strength== at that point, and the ==density== of the curves is ==proportional to the magnitude of the magnetic field strength==.

Characteristics:
- do not intersect
- closed curves without a beginning or end

Magnetic Flux:
$$
\Phi_{B}=\int \vec{B}\cdot d\vec{A}
$$
(Unit: $Wb$)

The principle of magnetic flux continuity(==Gauss's Law of magnetic fields==)
$$
∮\vec{B}\cdot d\vec{A}=0
$$
That is, ==no magnetic core or magnetic monopole==.

# Motion of Charged Particles in Magnetic Field

## Uniform magnetic field

- $\vec{v}\parallel \vec{B}$, $\vec{F}=0$. ==Uniform linear motion==.
- $\vec{v}\perp \vec{B}$, $F=qvB= \frac{mv^{2}}{R}$. ==Uniform circular motion==.

Thus, cyclone radius and cyclone period:
$$
\begin{align}
 & R=\frac{mv}{qB} \\
 & T=\frac{2\pi R}{v}= \frac{2\pi m}{qB}
\end{align}
$$
The period is ==independent of both speed and radius==.

- $\vec{v}$ and $\vec{B}$ has angle $\theta$
	$\vec{v}=\vec{v_{\perp}}+\vec{v_{\parallel}}$
	where $v_{\perp}=v\sin\theta,F_{m}=qv_{\perp}B$, uniform circular motion
	$v_{\parallel}=v\cos\theta , F_{m}=0$, uniform linear motion.
	Totally, ==Helical Path==.
![[helical path.png]]

# Applications of Motion of Charged Particles

## Cyclotron

![[cyclotron.png]]
Consist of two D-shaped electrode. Electrode is in the uniform magnetic fields and inside two dee is alternating electric field. Particles injected in $S$ and then accelerate into electrode. 
==Uniform circular motion== inside the Dee, accelerating in the electric field.
$$
\begin{align}
 & R=\frac{mv}{qB} \\
 & \omega=\frac{qB}{m}
\end{align}
$$
where angular speed is independent to velocity to ensure the frequency same to the alternating electric field.

## Velocity Selector

![[velocity selector.png]]
When a charged particle enters ==perpendicularly== into a ==uniform electric field and a uniform magnetic field== that are ==orthogonal to each other==, the velocity of the particle passing through without deflection satisfies the following condition:
$$
qvB=Eq
$$
that is, 
$$
v = \frac{E}{B}
$$

## Thomson's e/m Experiment (Discovery of the Electron)

![[Thomson's experiment.png]]
Use magnetic field and electric field discover the electron. ($e/m$ is always definite value)

## Mass Spectrometers

![[mass spectrometer.png]]
The mass $m$ of the particle can be determined by measuring $R$.
$$
\begin{align}
 & v=\frac{E}{B} \\
 & R=\frac{mv}{qB} \\ 
 & m= \frac{qBR}{E}
\end{align}
$$

# Magnetic Force on a Current-Carrying Wire

![[current-carrying wire.png]]
$$
\vec{F}=∮Id\vec{l}\times \vec{B}
$$
($\vec{v}dq\times \vec{B}=\vec{v}qnSdl\times \vec{B}=\vec{J}Sdl\times \vec{B}=Id\vec{l}\times \vec{B}$)
In essence, it is the macroscope expression of ==Lorentz force==.