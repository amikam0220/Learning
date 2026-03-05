---
Date: 2025-12-20T18:15:00
---
# Molar Specific Heat at Constant Volume

$$
Q=nC_{V}\Delta T\text{ (constant volume) }
$$
where $C_{V}$ is a constant called ==molar specific heat at constant volume==, $Q$ is the heat for gas to increase $\Delta T$ temperature.

By the first law, 
$$
\Delta E_{\mathrm{int}} = Q-W=nC_{V}\Delta T-0=nC_{V}\Delta T
$$
Thus 
$$
C_{V}=\frac{\Delta E_{\mathrm{int}}}{n\Delta T} = \frac{3}{2} R
$$

# Molar Specific Heat at Constant Pressure

$$
Q=nC_{p}\Delta T\text{ (constant pressure) }
$$
where $C_{p}$ is a constant called ==molar specific heat at constant pressure==.

By the first law,

$$
\Delta E_{\mathrm{int}} = Q-W=Q-p\Delta V=Q-nR\Delta T=n\Delta T(C_{p}-R)
$$
Thus
$$
C_{V}=C_{p}-R
$$

The former induction is for ==monatomic ideal gas==.

# Adiabatic Expansion of Ideal Gas

Conditions:
- Happen very fast
- In a well insulated container(no heat transfer)

There exists
$$
pV^{\gamma}=\text{a constant (adiabatic process)}
$$
where $\gamma = C_{p} / C_{V}$.
That is, 
$$
p_{i}V_{i}^{\gamma}=p_{f}V_{f}^{\gamma}
$$
since $pV=nRT$, we have
$$
T_{i}V_{i}^{\gamma-1}=T_{f}V_{f}^{\gamma-1}\text{ (abiabatic process)}
$$

# Free Expansion

Conditions:
The work is not done and the internal energy does not change.

Thus,
$$
p_{i}V_{i} = p_{f}V_{f} \text{ (free expansion) }
$$

# Four Special Processes

$$
\Delta E_{\mathrm{ int}}=Q-W=nC_{V}\Delta T
$$
is suitable for every process.

| Process Type     | Constant Quantity           | Special Results                                                          |
| ---------------- | --------------------------- | ------------------------------------------------------------------------ |
| Isobaric         | $P$                         | $Q=nC_{p}\Delta T; W=p\Delta V$                                          |
| Isothermal       | $T,pV$                      | $Q=W=nRT\ln\left( \frac{V_{f}}{V_{i}} \right);\Delta E_{\mathrm{int}}=0$ |
| Adiabatic        | $pV^{\gamma},TV^{\gamma-1}$ | $Q=0;W=-\Delta E_{\mathrm{int}}$                                         |
| Isochoric        | $V$                         | $W=0;Q=\Delta E_{\mathrm{int}}=nC_{V}\Delta T$                           |
| *free expansion* | $T,pV$                      | $\Delta E_{\mathrm{int}}=Q=W=0$                                          |


# Change in Entropy

$$
\Delta S=S_{f}-S_{i}=\int_{i}^{f} \frac{1}{T} \, dQ \text{ (change in entropy defined) }
$$

For isothermal expansion
$$
\Delta S=\frac{1}{T}\int_{i}^{f}  \, dQ =\frac{Q}{T}
$$
By the first law,
$$
\begin{align}
 & dE_{\mathrm{int}}=dQ-dW \\
 & dQ=pdV+nC_{V}dT \\
 & \frac{dQ}{T}=nR \frac{dV}{V}+nC_{V} \frac{dT}{T} \\
 & \int_{i}^{f} \frac{1}{T} \, dQ=\int_{i}^{f} nR \frac{1}{V} \, dV +\int_{i }^{f} nC_{V} \, \frac{dT}{T}  
\end{align}
$$

Thus,
$$
\Delta S=S_{f}-S_{f} = nR\ln \frac{V_{f}}{Vi} + nC_{V}\ln \frac{T_{f}}{T_{i}}
$$

# Entropy and Disorder

Entropy can be described in terms of disorder. And a disorderly arrangement is more probable than orderly one without interference.
$$
S=k\ln W
$$
where $W$ is multiplicity of configuration. $k$ is Boltzmann constant.

# Carnot Engine

A heat engine operating in an ==ideal, reversible== cycle between two reservoirs.

Carnot's Theorem:
No real engine operating between two energy reservoirs can be more efficient than a Carnot engine operating between the same two energy reservoirs.
Or, Carnot engine is the ==most efficient== engine.

# Carnot Cycle

![[Carnot cycle.png]]

a->b: Isothermal, heat is absorbed and work is positive
b->c: Adiabatic, no heat, temperature decreases and work is positive 
c->d: Isothermal, heat is lost and work is negative
d->a: Adiabatic, no heat, temperature increases and work is negative

Entropy Changes
$$
\Delta S= 0 \text{(reversible process)}=\Delta S_{H} +\Delta S_{L}=\frac{\left| Q_{H} \right| }{T_{H}}- \frac{\left| Q_{L} \right| }{T_{L}}
$$
thus
$$
\frac{\left| Q_{H} \right| }{T_{H}}= \frac{\left| Q_{L} \right| }{T_{L}}
$$

# Efficiency of a Carnot Engine

$$
\epsilon= \frac{\text{energy we get}}{\text{energy we pay for}}= \frac{\left| W \right| }{\left| Q_{H} \right| }
$$
Since 
$$
W=\left| Q_{H} \right| -\left| Q_{L} \right| 
$$
and 
$$
\frac{\left| Q_{H} \right| }{T_{H}}= \frac{\left| Q_{L} \right| }{T_{L}}
$$
Thus
$$
\epsilon_{c}=1 - \frac{T_{L}}{T_{H}}
$$


# Stirling Engine

![[Stirling Engine.png]]
a->b: isothermal
b->c: isochoric
c->d: isothermal
d->a: isochoric

The efficiency of ideal Stirling engine is lower than Carnot engine.

# Refrigerators

Use ==work== to transfer energy ==from a low temperature reservoir== to a ==high-temperature reservoir==.
The efficiency is
$$
K= \frac{\text{what we want}}{\text{what we pay for}} = \frac{\left| Q_{L} \right| }{\left| W \right| }
$$
Similiarly,
$$
K_{C} = \frac{T_{L}}{T_{H}-T_{L}}
$$
