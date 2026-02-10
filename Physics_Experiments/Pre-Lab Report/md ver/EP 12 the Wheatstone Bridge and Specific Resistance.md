---
Date: 2025-10-13T10:39:00
---
## 1. Objective

1. To understand the principle of measuring resistance with a Wheatstone Bridge.
2. To measure unknown resistances using a self-built Wheatstone Bridge and a portable Wheatstone Bridge respectively and compare the results.

## 2. Principle

The core is to compare an unknown resistance with known ones, based on the **bridge balance condition**.

### 2.1 Core Structure & Balance Condition

The bridge consists of four resistors ($R_1$, $R_2$, $R_s$ - known standard resistance, $R_x$ - unknown), a galvanometer (G), and a DC supply. 
![[figure01.png]]
At balance:

* No current flows through G (zero deflection), so the potential drop across $R_1$ equals that across $R_s$, and across $R_2$ equals that across $R_x$.
* Key equations:
	$\frac{R_1}{R_2} = \frac{R_s}{R_x} \quad$
	$R_x = \frac{R_1}{R_2} R_s \quad$
	(Ratio $K = \frac{R_1}{R_2}$ is usually an integral power of 10 for easy calculation.)

### 2.2 Exchange Method for Error Reduction

Errors from $R_1$ and $R_2$ (standard resistance boxes) can be minimized by:

1. Keeping $K$ unchanged, swapping $R_x$ and $R_s$, adjusting $R_s$ to a new balanced value $R_s'$.
2. Final formula (eliminates $R_1/R_2$ dependence):
	$R_x = \sqrt{R_s R_s'} \quad$

### 2.3 Portable Wheatstone Bridge (QJ23)

* Integrates galvanometer, dry cells, and pre-calibrated resistors for convenience.
* Set $K$ (0.001–1000, integral power of 10) via a ratio dial; set $R_s$ via four dials (1000Ω, 100Ω, 10Ω, 1Ω).
* Calculate $R_x = K \times \text{total } R_s$ (when G shows zero deflection).

## 3. Procedure

1. **Circuit Connection**: Assemble the bridge as shown in the figure: include $R_h$ (slide-wire resistor for current regulation), $R_b$ (protective resistor), $R_1/R_2/R_s$ (standard resistance boxes), and $R_x$ (unknown resistor). Confirm the circuit with the instructor before turning on the power.
![[figure02.png]]
2. **Balance Adjustment**:
	* Set ratio $K = R_1/R_2$ (e.g., $K=1$ for 100Ω unknown, $K=0.1$ for 200Ω unknown) and initial $R_s$ (estimated based on $R_x$’s nominal value to ensure 4 significant figures).
	* Close switch $K_1$ (battery switch); keep $K_2$ (protective resistor switch) open, then gently press $K_g$ (galvanometer switch). Adjust $R_s$ step-by-step: if G deflects right, increase $R_s$; if left, decrease $R_s$ until G shows no deflection.
	* Close $K_2$ to short-circuit $R_b$, fine-tune $R_s$ for precise balance, then record $R_s$.
3. **Exchange Method**: Swap the positions of $R_x$ and $R_s$, repeat Step 2 to obtain the new balanced $R_s'$, and record the value.
4. **Repeat for Another Resistor**: Replace $R_x$ with the second unknown resistor, repeat Steps 2–3 to collect data.
5. **Comparison with portable Wheatstone bridge measuring resistances**: Measure the same resistances by QJ23 potable Wheatstone bridge and compare the portable bridge’s $R_x$ results with those from the self-built bridge.

## 4. Data Recording and Processing

### 4.1 Data Form

#### Table 1: 

![[Physics_Experiments/Pre-Lab Report/Figures of EP 12/table1.png]]

Resistances of potable Wheatstone bridge:

$R_{1x}=$   , $R_{2x}=$
### 4.2 Data Calculation
  

1. **Self-built Bridge Results**:
	* Unknown 1: $R_x$
	* Unknown 2: $R_{2x}$
2. **Portable Bridge Results**:
	* Unknown 1: $R_x$
	* Unknown 2: $R_{2x}$
3. **Uncertainty Estimation**:
	* Main error source: Instrument precision (±0.01Ω for resistance boxes/dials).
	* Relative uncertainty: ≈0.02%; Absolute uncertainty: ≈0.02Ω (100Ω)、≈0.04Ω (200Ω).
4. **Final Results**:
	* Unknown 1: $R_x = R\pm U_{R}$
	* Unknown 2: $R_{2x} = R\pm U_{R}$

### 4.3 Data Analysis

1. **Validity Check**: 
2. **Consistency**: 
3. **Exchange Method Effect**: 

## 5. Error Analysis

### 5.1 Systematic Errors

* **Resistance Box Precision**: Standard boxes have inherent errors (±0.01Ω), mitigated by the exchange method but not fully eliminated.
* **Contact Resistance**: Loose terminals in the self-built bridge introduce \~0.005Ω extra resistance, causing minor balance deviations.
* **Ratio Dial Offset**: Portable bridge’s ratio dial may have tiny offsets (\~0.001), leading to \~0.1Ω bias for 200Ω.

### 5.2 Random Errors

* **Galvanometer Sensitivity**: Low-sensitivity G (≈5μA/division) misses small currents, causing ±0.01Ω $R_s$ deviations.
* **Human Adjustment**: Manual dial adjustments have \~0.5s reaction delays, leading to ±0.005Ω fluctuations.
* **Power Fluctuations**: DC supply voltage varies ±0.1V, affecting current stability and G deflection.

## 6. Prequestions
 
1. **Why press B before G in the portable bridge?**
	Pressing B first stabilizes circuit current; pressing G afterward avoids sudden current surges (from circuit transients) that could damage G.
2. **How does $K=R_{1} / R_{2}$​​ affect $R_{x}$​ measurement?**
	Choosing $K$ as an integral power of 10 simplifies calculations. For large $R_{x}$, a small $K$ (e.g., 0.01) keeps $R_{s}$​ within dial ranges, ensuring 4 significant figures.