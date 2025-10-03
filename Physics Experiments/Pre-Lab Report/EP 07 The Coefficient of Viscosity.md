---
Date: 2025-09-27T11:20:00
---
# 1. Objective

To familiarize with the use of a micrometer and a vernier caliper and measure the coefficient of viscosity of castor oil.

# 2. Principle

Viscosity is an internal friction property exhibited by all fluids. Liquids like castor oil, which flow slowly, have higher viscosity than water. This experiment relies on **Stokes’ Law** to calculate the viscosity coefficient ($\eta$).

## 2.1 Stokes’ Law

The viscous drag force $F$ acting on a sphere moving steadily in an infinite fluid is given by: $F=6\pi \eta vr$, where $\eta$ is viscosity coefficient, $v$ is velocity of the sphere, and $r$ is radius of the sphere. This law is only valid for steady motion in an _infinitely extended fluid_; vessel walls/bottoms distort the drag force if the fluid is confined.

## 2.2 Force Balance and Terminal Velocity

When a sphere falls vertically in viscous castor oil, three forces act on it
- Downward weight: $W=\frac{3}{4}\rho \pi r^{3}g$ ($\rho$ is density of the sphere)
- Upward buoyancy: $U=\frac{3}{4}\sigma \pi r^{3}g$ ($\sigma$ is density of castor oil)
- Upward viscous drag: $F=6\pi \eta  rv_{t}$
The sphere accelerates until the resultant force is zero, reaching a constant **terminal velocity** $v_{t}$. At equilibrium $W-U-F=0$.
![[figure 1.png]]

Substituting W, U, and F into the equilibrium equation and rearranging gives: $$
v_{t}=\frac{2r^{2}(\rho-\sigma)g}{9\eta}
$$
## 2.3 Calculation of Viscosity Coefficient

Terminal velocity is measured by $v_{t}=\frac{L}{t}$​, where $L$ is distance between marks A and B, and $t$ is average time for the sphere to fall from A to B (A is far below the surface to ensure $v_{t}$ is reached; B is not near the bottom). Then we can obtain the equation of $\eta$: $$
\eta= \frac{(\rho-\sigma)g}{18L}d^{2}t
$$
where $d=2r$, $r$ is the radius of the ball and $d$ is the diameter of the ball.
![[figure 2.png]]

Since the fluid is confined, vessel walls affect motion. The corrected formula accounts for this:$$\eta=\frac{(\rho-\sigma)g}{18L}d^{2}t\left( 1-2.4 \frac{d}{D}-3.3 \frac{d}{2h} \right)$$where $D$ is the inner diameter of the vessel, and $h$ is the height of castor oil .

# 3. Procedure

1. **Measure Basic Parameters**: Record the initial ($T_{begin}$) and final ($T_{finish}$​) temperatures of castor oil to calculate the average temperature ($T_{average}$​). Measure the density of the sphere ($\rho_{ball}$) and castor oil ($\sigma_{oil}$), distance $L$ between A and B, vessel inner diameter $D$, and oil height $h$. Complete table 1.
2. **Measure Sphere Diameter**: Use a micrometer to measure the diameter ($d_{1}$) of Ball 1 three times.
3. **Measure Falling Time**: Release Ball 1 from the top of the oil. Record the time ($t_{1}$) it takes to fall from mark A to B, repeating three times.
4. **Repeat for Second Sphere**: Repeat steps 2–3 for Ball 2 (measuring $d_{2}$ and $t_{2}$​ three times each). Complete table 2.

# 4. Data Recording and Processing

## 4.1 Data Form

### Table 1: Basic Parameters

![[figure 3.png]]
### Table 2: Sphere Measurement Data

![[figure 4.png]]


## 4.2 Data Calculation

- **Reference value**: $\eta_{reference}=6.20 P$
- **Viscosity for Ball 1**: $\eta_{1}$
- **Viscosity for Ball 2**: $\eta_{2}$
- **Average of Viscosity:** $\eta_{avg}$
-  **Uncertainty Estimation**: $U_{\eta}$
- **Final Result:** $\bar{\eta}$

## 4.3 Data Analysis

1. **Data Validity Check**:

2. **Impact of Vessel Correction Term**:

3. **Result Consistency**:


# 5. Error Analysis

## 5.1 Systematic Errors

- **Vessel Wall Effect**: Even with the correction formula, residual errors from the finite vessel cannot be fully eliminated, as the correction is empirical.
- **Instrument Precision**: The micrometer (minimum division: 0.01 mm) and stopwatch (0.1 s resolution) have inherent measurement limits, leading to biases in $d$ and $t$.
- **Temperature Variation**: Viscosity is highly temperature-dependent (castor oil viscosity decreases with increasing temperature). Small temperature fluctuations cause errors in $\eta$.

## 5.2 Random Errors

- **Human Reaction Time**: Delays in starting/stopping the stopwatch lead to variations in $t$ measurements.
- **Sphere Uniformity**: Imperfectly spherical balls cause inconsistent drag forces, affecting falling time repeatability.


# 6. Questions

1. **Why is a correction term added to the viscosity formula?**
	The correction term accounts for the effect of the finite vessel walls and bottom, which increase viscous drag beyond the prediction of Stokes’ Law (for infinite fluids).
2. **How does temperature affect the experiment result?**
	Viscosity of castor oil decreases significantly with increasing temperature. Higher temperatures reduce oil internal friction, decreasing the falling time (t) and thus the calculated η.