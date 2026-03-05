---
Date: 2025-12-22T14:42:00
---
# Electric Current

Current: the ==directional movement== of ==electric charges forms a electric current==.

Electric field is ==set up== in the ==speed of light==; electrons directional drift motion is $10^{-4} \mathrm{m/s}$; random thermal motion is $10^{6}\mathrm{m/s}$.

# Current and Current Density

Current definition
$$
I=\frac{dQ}{dt}
$$

Magnitude: The time rate of charge transfer through the ==cross-sectional area $A$==.
Direction: The direction of directional movement of ==positive charges==.

Current density:
$$
\vec{J}=nq \vec{v_{d}}
$$
Magnitude: current intensity per unit cross-sectional area at this point.
Direction: The direction of directional movement of the positive charge at this point.
$n$ is moving charged particles per unit volume, $q$ is the charge of single charged particle, $\vec{v_{d}}$ is drift speed.

And for current density and current:
$$
I=\int \vec{J} \cdot d \vec{A}
$$

# Resistivity

## Ohm's Law (Differential Form)

$$
\vec{E}=\rho \vec{J}
$$
where $\rho$ is the ==resistivity of material==. The reciprocal of resistivity is ==conductivity== $\sigma= \frac{1}{\rho}$.
Ohm's Law holds true only for ==linear materials under certain conditions==.

Resistivity changes with temperature:
$$
\rho(T)=\rho_{0}[1+\alpha(T-T_{0})], \Delta T<100\mathrm{C}^{\circ}
$$
where $\alpha$ is temperature coefficient of resistivity. For metal, $\alpha>0$; for semiconductor $\alpha<0$.

# Resistance

## Ohm's Law (Integral Form)

$$
V=RI
$$
And resistance 
$$
R=\int \frac{\rho}{A}dl
$$
And resistance changes with temperature
$$
R(T)=R_{0}[1+\alpha(T-T_{0})]
$$


# Electromotive Force and Circuit

==Power source== is a device that drive the positive charges from a low potential to a high potential and convert other forms of energy into electrical energy.

Electromotive force $\epsilon$ is equal to the ==work done by the non-electrostatic force== that move a unit positive charge from negative to positive terminal.
![[electromotive force.png]]
$$
\epsilon=\int_{-}^{+} \vec{E_{n}} \, d\vec{l} 
$$
where $\vec{E_{n}}$ is the non-electric field strength.
Internal resistance $r$ is the resistance of power source.
![[circuit.png]]
Closed-circuit:
$$
\begin{align}
 & V_{ab}=\epsilon-Ir \\
 & V_{ab}=IR
\end{align}
$$
Open-circuit:
$$
\epsilon=V_{ab}
$$
Ohm's Law for the entire circuit:
$$
\epsilon=I(R+r)
$$

# Energy and Power in Electric Circuits

![[energy and power.png]]

Output Power:
$$
P=V_{ab}I=\epsilon I-I^{2}r
$$
Input Power:
$$
P=V_{ab}I=\epsilon I+I^{2}r
$$