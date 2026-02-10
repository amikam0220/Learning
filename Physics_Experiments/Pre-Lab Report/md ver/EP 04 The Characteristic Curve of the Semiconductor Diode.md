---
Date: 2025-11-10T15:53:00
---
## 1. Objective

To examine how current varies as a function of voltage for a semiconductor diode, and to plot the corresponding current-voltage (I\~V) curve under forward bias and reverse bias conditions. Additionally, to determine whether the semiconductor diode obeys Ohm’s Law by analyzing its I-V characteristic.

## 2. Principle

Ohm’s Law states that "the resistance of a specific circuit element remains constant over a wide range of voltages," implying a linear relationship between current (I) and voltage (V) (i.e., $I \propto V$) for "ohmic conductors." However, Ohm’s Law is not universal—many components (including semiconductors) are "non-ohmic" and do not follow this linear relationship.

A semiconductor diode is a non-linear circuit element designed to allow current flow in only one direction. It consists of two joined semiconductor types, and its behavior depends on bias direction:

* **Forward bias**: The diode is connected to allow current flow (the triangle in the diode symbol points in the direction of permitted current).
* **Reverse bias**: The diode is connected to oppose current flow.
![[bias.png]]

To characterize the diode, the potential difference (V) across it and the corresponding current (I) are measured simultaneously (using circuits in Fig. 2). An I-V graph (called the "characteristic curve") summarizes the component’s behavior:

* **Ohmic conductors** (e.g., resistors) have straight-line I-V curves through the origin ($V/I = \text{constant}$).
* **Non-ohmic conductors** (e.g., diodes) have non-straight I-V curves (Fig. 4), where $V/I$ is not constant, violating Ohm’s Law.
![[curve.png]]
## 3. Procedure

### 3.1 Preliminary Resistance Measurement

1. Use the ohmmeter setting of a multimeter to measure:
	* $R_1$: Resistance of the diode under forward bias.
	* $R_2$: Resistance of the diode under reverse bias.
2. Record $R_1$ and $R_2$, then judge if the diode works normally (a functional diode has a small $R_1$ and a very large $R_2$).

### 3.2 Forward Bias I-V Measurement

1. Construct the circuit as shown in Fig. 2(a) or Fig. 2(b).
2. Adjust the sliding contact of the variable rheostat starting from the zero position to gradually increase the voltage across the diode.
3. For each adjustment, measure the voltage (V) across the diode and the corresponding current (I).
4. Record all V and I values in Table 1.
![[forwardBias.png]]

### 3.3 Reverse Bias I-V Measurement

1. Reconstruct the circuit as shown in Fig. 2(c) or Fig. 2(d).
2. Again, adjust the sliding contact of the variable rheostat from zero to increase the reverse voltage across the diode.
3. Measure the voltage (V) and corresponding current (I) for each adjustment.
4. Record all V and I values in Table 2.
![[reverseBias.png]]

## 4. Data Recording and Processing

### 4.1 Data form and Graph
#### (A) Write down $R_{1}$ and $R_{2}$

$R_1 = \_\_\_\_\_\ \Omega \quad ; \quad R_2 = \_\_\_\_\_\ \Omega$

#### (B) 

##### Table 1: Current-Voltage Data (Forward Bias)
![[Physics_Experiments/Pre-Lab Report/Figures of EP 04/table1.png]]

##### Table 2: Current-Voltage Data (Reverse Bias)
![[Physics_Experiments/Pre-Lab Report/Figures of EP 04/table2.png]]

#### (C) Graph of V-I of Forward Bias and Reverse Bias


### 4.2 Data Analysis

#### 4.2.1 Data Validity Check

#### 4.2.2 Characteristic Curve Analysis

#### 4.2.3 Ohm's Law Verification

#### 4.2.4 Result Consistence

## 5. Error Analysis

### 5.1 Systematic Errors

* **Instrument Precision**: Multimeters, voltmeters, and ammeters have inherent accuracy limits, leading to small deviations in measured V and I.
* **Circuit Contact Resistance**: Loose connections between components add unintended resistance, altering current readings.
* **Bias Direction Misalignment**: Accidental reversal of diode connections (even briefly) can damage the diode or produce invalid reverse/forward bias data.

### 5.2 Random Errors

* **Parallax Error**: Reading meter scales at an angle (not perpendicular) causes misreadings of V and I.
* **Rheostat Adjustment**: The sliding contact may not stay fixed during measurement, leading to fluctuating voltage and current values.
* **Temperature Drift**: Sustained current flow heats the diode, slightly changing its resistance and distorting I-V readings (more significant in forward bias).

## 6. Pre-Questions

What do you think the voltage, current and resistance would change if you switch the positive and negative cables at the power supply?
	 **Voltage**: Polarity reverses (forward bias voltage becomes reverse bias, and vice versa).
	 **Current**: If originally forward-biased (visible current), it switches to reverse-biased (current drops to nearly zero); if originally reverse-biased (negligible current), it switches to forward-biased (current rises sharply).
	 **Resistance**: Reverses—small forward resistance ($R_1$) becomes large reverse resistance ($R_2$), and vice versa—due to the diode’s one-way conduction.
## 7. Questions

1. Make a titled, labeled graph of voltage versus current what is the relationship between the current through the diode and the voltage drop across the diode in forward bias and reverse bias state.
	**Graph**: See Section 4.1 for title, axes, and plotting details.
	**Forward bias**: Below the diode’s threshold voltage, current is almost zero; once V exceeds the threshold, I increases sharply with V.
	**Reverse bias**: I remains nearly zero even as V increases (until breakdown voltage is reached, which is beyond this experiment’s scope).

2. Describe the diode’s behave qualitatively. Dose it obey ohm’s law? Can you think of anything a diode would be useful for?
	 **Ohmic? No**: Its I-V curve is non-straight, so $V/I$ (resistance) is not constant, violating Ohm’s Law.
	 **Application**: AC-DC rectifiers. Diodes’ one-way conduction filters out the negative half-cycle of AC, converting it to pulsating DC—their non-ohmic behavior is key to this function.