---
Date: 2025-12-20T12:33:00
---

# Definition of Thermodynamic

The study of ==heat== and its ==relationship== to ==work, energy and matter==.

# Internal Energy

Represent the ==total energy== contained within a system, encompassing ==kinetic and potential energies== of its ==particles==. ($U$)

# Heat $Q$ and Work $W$

Heat is the ==transfer of energy== due to a ==temperature difference==.
Work is the ==transfer of energy== due to ==force== acting through a distance.

$$
W=Fx=pSx=p\Delta V
$$
# The First Law Equation

$$
\Delta U=Q-W
$$
$\Delta U$ is the change in interna energy, $Q$ is the heat ==added to== the system, $W$ is the work ==done by the system==.

When temperature increases, $\Delta U$ is positive.

The Law provides a ==connection between microscopic and macroscopic== worlds. And changes in the internal energy result in changes in the measurable ==macroscopic variables== of the system
- pressure
- temperature
- volume

# Work in Thermodynamic Processes

Assumptions:
- Deal with ==ideal gas==
- In thermodynamic equilibrium(==same temperature and pressure== of every part of the gas)

And 
$$
W=P\Delta V
$$
can comprehend the ==energy changes==.

# Second Law of Thermodynamics

Clausius:
	heat cannot ==spontaneously== transfer from a lower temperature body to a higher temperature body.
Kelvin:
	it is impossible to extract heat from a single source and convert it ==completely== into useful work without causing other side effects.
The principle of entropy increases:
	the ==increase in entropy== during an ==irreversible thermodynamic process== is always ==greater than zero==.

It shows ==the direction== of natural processes and the ==behavior== of energy with in systems.
If heat are made to flow in the opposite direction, it need ==external work==. This means that the Second Law limits the ==efficiency== of energy transformations.

The Second Law also shows ==the direction of time==.

# Entropy and Disorder

Entropy is a measure of ==disorder== or randomness in a system. The Second law shows that natural processes tend to move towards ==greater disorder==.
==Spontaneous process== in an ==isolated system== always increase entropy.

# Methods of Heat Transfer

Need to know the ==rate and mechanisms== of heat transfer.

Methods include
- conduction
- convection(热对流)
- radiation

# Conduction

It is an ==exchange of energy== between microscopic particles by ==collisions== and less energetic particles ==gain energy== during ==collisions== with more energetic particles.
Rate depends on the substance.

In general, metals are good conductors, which contain large number of ==free electrons== and transport energy.

Conduction can occur only if ==there is a difference in temperature== between two parts of conducting medium.

## Conduction Equation

$$
P_{\mathrm{cond}}=\frac{Q}{t}=kA \frac{T_{H}-T_{C}}{L}
$$
where $P_{\mathrm{cond}}$ is the rate of conduction, $k$ is thermal conductivity, $A$ is the area of conduction, $T_{H}$ is the high temperature and $T_{c}$ is low temperature.
![[conduction equation.png]]

For slab, the ==heat resistance== 
$$
R=\frac{L}{kA}
$$
Thus the $P_{\mathrm{cond}}$ is similar to $I$, $\Delta T$ is similar to $U$. The heat resistance is similar to electric resistance.
For steady state, the energy transfer rate is the same in each layer.

# Convection

Energy transferred by the ==movement of a substance==.
When the movement results from differences in temperature, it is called ==natural convection==; When the movement is forced, it is called ==forced convection==.

## Example

Air directly above the flame is warmed and rises, transferring the energies.

Applications:
- boiling water
- radiators
- cooling automobile engines

# Radiation

It ==does not require physical contact==. Energy transferred by ==electromagnetic waves== due to ==thermal vibrations of molecules==. 

## Radiation Equation

$$
P_{\mathrm{rad}} = \sigma\epsilon AT^{4}
$$
where $P_{\mathrm{rad}}$ is the rate of energy transfer, $A$ is the surface area of the object, $\sigma$ is a constant, $\epsilon$ is ==emissivity(vary from 0 to 1)== and $T$ is Kelvin temperature.

In general, an object also absorb the energy by radiation. Thus 
$$
P_{\mathrm{net}} = P_{\mathrm{abs}}-P_{\mathrm{rad}}=\sigma\epsilon A(T_{\mathrm{env}}^{4}-T^{4})
$$
When an object is in ==equilibrium==, it ==radiates and absorbs== at the same rate.

## Ideal Absorbers

A ==ideal absorber== is an object that absorbs ==all of the energy incident on it==. $\epsilon=1$. Also called the ==black body or ideal radiator==. A ideal reflector absorbs none of the energy incident on it. $\epsilon=0$.

# Ideal Gas

- No fixed volume and pressure and can expand to fill the container.
- Most gases at room temperature and pressure behave ==approximately== as an ideal gas.
- Atoms or molecules move randomly
- No long-range force on one another
- Each particle is point-like

## Moles

Used to express the ==amount of gas in a given volume==.
$$
n= \frac{m}{M}
$$
where $m$ is mass and $M$ is molar mass. 

## Avogadro's Number

The number of particles in a mole is called ==Avogadro's Number==.
The mass of an ==individual atom==
$$
m_{\mathrm{atom}}=\frac{M}{N_{A}}
$$

## Ideal Gas Law

$$
PV=nRT
$$
where $R$ is the ==universal gas constant==, $n$ is the number of moles, $T$ is Kelvin temperature, $P$ is pressure and $V$ is volume.

Alternatively,
$$
PV=Nk_{B}T
$$
where $k_{B}$ is Boltzmann's constant and $k_{B}=\frac{R}{N_{A}}$. $N$ is the total number of molecules.

## Kinetic Theory of Gases

Assumptions:
- Large number of molecules, average separations is larger than their dimensions.
- Obey Newton's Laws of motion, move randomly as a whole
- Interact only by ==short-range forces== during ==elastic collisions==
- Molecules elastically collide with the wall.
- Gas is pure substance, all molecules are identical.

## Pressure of an Ideal Gas

The pressure is proportional to ==the number of molecules per unit volume== and to the ==average translational kinetic energy== of a molecule.

## Average Translational Kinetic Energy

$$
K_{\mathrm{avg}}=\frac{3}{2}kT, k= \frac{R}{N_{A}}
$$
That is, ==at a given temperature==, all ideal gas molecules has the ==same average translational kinetic energy==.

## Internal Energy

For monatomic gas, the $KE$ is the ==only type of energy the molecules can have==
$$
U=\frac{3}{2}nRT
$$

Thus
$$
\Delta U = \frac{3}{2}nR\Delta T
$$
## Speed of Molecules

$$
\begin{align}
 & v_{\mathrm{avg}}=\sqrt{ \frac{8RT}{\pi M} } \\
 & v_{\mathrm{P}}=\sqrt{ \frac{2RT}{M} } \\
 & v_{\mathrm{rms}}=\sqrt{ \frac{3RT}{M} } \\
\end{align}
$$
Average speed, most probable speed, rms speed.(root-mean-square)

## Maxwell Distribution

A system of gas at a given temperature will exhibit a variety of speeds. When temperature increases, the curve move to the region of high speed, the region of distribution widen.
![[Maxwell Distribution.png]]