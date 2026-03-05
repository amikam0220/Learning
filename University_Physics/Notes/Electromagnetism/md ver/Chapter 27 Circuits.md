---
Date: 2025-12-22T16:02:00
---
# Resistors in Series and Parallel

## Resistors in Series

$$
\begin{align}
 & I_{1}=I_{2}=\cdots=I \\
 & V_{1}+V_{2}+\cdots=V \\
 & R_{eq}=R_{1}+R_{2}+\cdots
\end{align}
$$

## Resistors in Parallel

$$
\begin{align}
 & I_{1}+I_{2}+\cdots=I \\
 & V_{1}=V_{2}=\cdots=V \\
 & \frac{1}{R_{eq}}=\frac{1}{R_{1}}+\frac{1}{R_{2}}+\cdots
\end{align}
$$

# Kirchhoff's Rules

Some definition:
- Junction: Connection point of ==three or more wires==
- Loop: Any closed circuit in a circuit
- Sign conventions:
	- The current flowing ==into the junction is positive== and ==out is negative==.
	- The direction in which the circuit circulates is ==firstly defined==: along this direction, voltage rise is positive, drop is negative.
![[sign conventions.png]]

## Kirchhoff's Junction Rule (Conservation of Charge)

The ==algebraic sum== of all current intensities at the input and output junction is zero.
$$
\sum I_{i}=0
$$
![[Kirchhoff's Junction Rule.png]]

## Kirchhoff's Loop Rule (Conservation of Energy)

The algebraic sum of all voltages along any loop is zero.
$$
\sum V_{i}=0
$$
![[Kirchhoff's loop rule.png]]

## Problem-Solving Strategy

- Draw the circuit diagram and assign labels and symbols to all known and unknown quantities.
- Assign directions to the currents.
- Apply the junction rule to any junction in the circuit.
- Apply the loop rule to needed loops
- Solve the equations simultaneously for the unknown quantities.

# Electrical Measuring Instruments

Commonly Used instruments: ammeters, voltmeters, ohmmeters, automotive instruments. Al use ==galvanometers== or ==meters==.
Important arguments: Current for full-scale deflection $I_{fs}$; Resistance of the coil $R_{c}$

## Ammeters

Connect the galvanometers in ==parallel== with a shunt resistor $R_{sh}$.
![[ammeters.png]]
$$
I_{fs}R_{c}=(I_{a}-I_{fs})R_{sh}
$$
## Voltmeters

Connect the galvanometers in ==series== with voltage divider resistors $R_{s}$.
![[voltmeters.png]]
$$
V_{V}=I_{fs}(R_{c}+R_{s})
$$

## Ohmmeters

Consist of a galvanometer, a variable resistor and a power supply connected in series.
![[Ohommeters.png]]

The reading direction of an ohmmeter is ==opposite== to that of an Ammeter or Voltmeter.

# Resistance-Capacitance Circuit

Charging a capacitor
$$
\epsilon-iR-q / C=0
$$
where $i = dq/dt$. Thus we have
$$
\begin{align}
 & q=Q_{f}(1-e^{-t / \tau}) \\
 & i=I_{0}e^{-t / \tau} \\
\end{align}
$$
where $Q_{f}=C\epsilon$ is final charge amount, $I_{0}=\frac{\epsilon}{R}$ is initial current. $\tau=RC$ is time constant, deciding the speed of charging.
![[RC circuits.png]]



Half of the energy is ==stored in the capacitor== and the other half is ==consumed by the resistor==.

Discharging a capacitor:
$$
0-iR-\frac{q}{C}=0
$$
where $i=dq / dt$. Thus we have
$$
\begin{align}
 & q=Q_{0}e^{-t / \tau} \\
 & i=-I_{0}e^{-t / \tau}
\end{align}
$$
where $Q_{0}$ is initial charge amount, the negative sign of $i$ express the direction is opposite to the charging. $\tau=RC$.