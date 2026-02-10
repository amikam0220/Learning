---
Date: 2025-10-25T14:32:00
---
## 1. Objective

1. To familiarize with the use of a micrometer caliper and a reading microscope.
2. To master the graphic method for data processing and measure the Young's modulus of steel.

## 2. Principle

### 2.1 Core Concepts

* **Stress**: Force per unit cross-sectional area ($\text{Stress} = \frac{F}{S}$, unit: Pa), where $F$ is tensile force and $S$ is wire cross-sectional area.
* **Strain**: Relative elongation ($\text{Strain} = \frac{\Delta l}{l}$, dimensionless), where $\Delta l$ is wire elongation and $l$ is original length.
* **Young's Modulus (****$E$****)**: Stiffness indicator of materials, calculated as $E = \frac{\text{Stress}}{\text{Strain}} = \frac{F \cdot l}{S \cdot \Delta l}$.

### 2.2 Experimental Logic & Linear Relationship

* **Force & Area Calculation**: Tensile force $F = Mg$ ( $M$ = weight mass, $g =$ gravitational acceleration); wire cross-sectional area $S = \frac{1}{4}\pi d^2$ ( $d$ = wire diameter).
* **Elongation Measurement**: Wire elongation $\Delta l$ equals the downward displacement of the cross board (attached to the wire end), measured via a reading microscope.
* **Linear Graphic Method**: Rearrange $E$ formula to $\Delta l = \left( \frac{4gl}{\pi d^2 E} \right) M$ — $\Delta l$ is linearly proportional to $M$. Plot $\Delta l-M$ graph, get slope $k = \frac{4gl}{\pi d^2 E}$, then solve $E = \frac{4gl}{\pi d^2 k}$.

## 3. Procedure

1. **Measure Wire Diameter**: Use micrometer to measure $d$ at 5 positions, calculate average $\bar{d}$ (correct with zero reading $d_0$).
2. **Level Stand**: Adjust base screws to level the stand; ensure frame is parallel to the wire, and microscope scale aligns with cross board’s "|".
3. **Calibrate Microscope**: Adjust eyepiece for clear scale; lock base when cross board is visible; align reticule with cross’s "-", record initial reading $C_0$.
4. **Load & Record**: Add 9 weights (0.200 Kg each), record microscope readings $C_i$ ( $i=1-9$ ) after each load.
5. **Unload & Record**: Remove weights step-by-step, record $C_i'$ ( $i=8-0$ ); calculate average $\bar{C}_i = \frac{C_i + C_i'}{2}$.
6. **Calculate Elongation**: $\Delta l_i = \bar{C}_i - \bar{C}_0$ ( $i=0-8$ ).

## 4. Data Recording & Processing

### 4.1 Data Form

![[Physics_Experiments/Pre-Lab Report/Figures of EP 06/table1.png]]

### 4.2 Core Calculation 

#### Step 1: Calculate Slope $k$
Plot $\Delta l-M$ graph, draw the best-fit line. Select two distant points (e.g., $(M_1, \Delta l_1)$ and $(M_8, \Delta l_8)$), compute $k = \frac{\Delta l_8 - \Delta l_1}{M_8 - M_1}$ (unit: $\text{m/Kg}$).

#### Step 2: Compute Young's Modulus $E$

Substitute $g =$, $l$, $\bar{d}$, $k$ into:$E = \frac{4gl}{\pi \bar{d}^2 k}$

#### Step 3: Uncertainty Analysis

* **Main Error Sources**:
- **Diameter uncertainty (****$u_{d}$****)**: From micrometer precision (±0.00001 m) and wire inhomogeneity, estimate $u_d \approx 0.00002\ \text{m}$.
- **Elongation uncertainty (****$u_{\Delta l}$****)**: From microscope precision (±0.0001 m) and elastic hysteresis, estimate $u_{\Delta l} \approx 0.0002\ \text{m}$.
- **Slope uncertainty (****$u_{k}$****)**: From $\Delta l-M$ data dispersion, estimate $u_k \approx 0.0001\ \text{m/Kg}$.
* **Total Uncertainty (****$u_{E}$****)**:
  Synthesize key uncertainties, approximate $u_{E}$ 
- **Final Result:** $E=$

## 5. Error Analysis

* **Systematic Errors**:
	1. Micrometer zero error: Correct with $d_0$;
	2. Parallax error: Align eye perpendicularly to microscope scale;
	3. Elastic hysteresis: Average loading-unloading readings.
* **Random Errors**:
	1. Wire diameter inhomogeneity: 5-point measurement;
	2. Weight mass deviation: Use calibrated weights;
	3. Slope fitting error: More data points + best-fit line.

## 6. Questions

1. Why average loading and unloading readings?
	Metal wires exhibit elastic hysteresis. They don’t immediately return to their original length when unloaded, causing differences between loading and unloading readings. Averaging these values reduces this systematic error, making $\bar{C_{i}}$ closer to the true position.
    
2. How does a bent wire affect results?
	A bent wire makes the measured original length l larger than the actual effective length (since the bent part doesn’t stretch). This overestimation of l leads to a larger calculated $E$ when substituted into the formula.