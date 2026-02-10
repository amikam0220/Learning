---
Date: 2025-11-25T10:10:00
---
## 1. Objective

1. To understand the principle of the Hall Effect.  
2. To learn the output characteristics of Hall Effect sensors.  
3. To measure the magnitude of the magnetic field along the axis of a solenoid using a Hall Effect sensor.  

## 2. Principle

### 2.1 Basic Hall Effect Principle

![[figure1.png]]
When charged particles in a conductor move through a magnetic field, they experience a Lorentz force  $\vec{F}_{\text{magnet}} = q\vec{v} \times \vec{B}$ , causing charge separation perpendicular to the current direction. This separation creates a transverse electric field  $E_H$ , and equilibrium is reached when the electric force balances the magnetic force:  $qE_H = qvB$ .  

The Hall voltage  $V_{\text{Hall}}$  (potential difference from charge separation) is  $V_{\text{Hall}} = E_H b$  (where  $b$  is the conductor’s transverse width). Substituting  $E_H$  and relating current  $I_s = nqvb d$  (  $n$ : carrier density,  $d$ : conductor thickness) gives:  

 $$V_{\text{Hall}} = R_H \frac{I_s B}{d}$$  

For a commercial Hall sensor,  $R_H$  (Hall coefficient) and  $d$  are known, so  $V_{\text{Hall}} = K_H I_s B$  (  $K_H = R_H/d$ , Hall sensitivity). The magnetic field  $B$  is calculated as:  

 $$B = \frac{V_{\text{Hall}}}{K_H I_s}$$  
### 2.2 Eliminating Side Effects

Side effects (e.g., Ettingshausen effect) distort  $V_{\text{Hall}}$ . The **symmetrical measurement method** uses four voltage readings (  $V_1: +I_s,+B$ ;  $V_2: +I_s,-B$ ;  $V_3: -I_s,+B$ ;  $V_4: -I_s,-B$ ) to get the true Hall voltage:  
 $$V_{\text{Hall}} = \frac{1}{4}(|V_1| + |V_2| + |V_3| + |V_4|)$$  

### 2.3 Solenoid Magnetic Field

![[figure2.png]]
For a long solenoid (length ≫ diameter) with  $N$  turns per meter and excitation current  $I_M$ :  

- Central field:  $B = \mu_0 N I_M$  
- End field:  $B = \frac{1}{2}\mu_0 N I_M$  

## 3. Procedure

### 3.1 Measuring Hall Sensor Output Characteristics

1. Connect the measurement device to the experimental setup as shown in Fig. 3.  
![[Experimental setup.png]]
2. Turn the  $I_M$  and  $I_s$  adjustment knobs fully counterclockwise.  
3. Power on the device; adjust the zero resistor if ammeter/voltmeter readings are not “0.00”.  
4. Set  $X_1 = 14.00\ \text{cm}$ ,  $X_2 = 0.00\ \text{cm}$  to place the Hall probe at the solenoid center.  
5. Plot  $V_{\text{H}}-I_s$  curve: Keep  $I_M = 0.500\ \text{A}$ ; adjust  $I_s = 1.00–6.00\ \text{mA}$ , measure  $V_1–V_4$  for each  $I_s$ , and record in Table 1.  
6. Plot  $V_{\text{H}}-I_M$  curve: Keep  $I_s = 5.00\ \text{mA}$ ; adjust  $I_M = 0.100–0.700\ \text{A}$ , measure  $V_1–V_4$  for each  $I_M$ , and record in Table 2.  

### 3.2 Measuring Solenoid Axial Magnetic Field

Keep  $I_M = 0.500\ \text{A}$  and  $I_s = 5.00\ \text{mA}$ ; adjust  $X_1$  and  $X_2$  as in Table 3, measure  $V_1–V_4$  for each position, and record in Table 3.  

## 4. Data Recording and Processing

### 4.1 Data Form and Graph

#### Table 1:  $V_{\text{H}}$  vs.  $I_s$  (  $I_M = 0.500\ \text{A}$  )

  ![[Physics_Experiments/Pre-Lab Report/Figures of EP 11/table1.png]]

$V_{\mathrm{H}}-I_{\mathrm{s}}$ Curve:


#### Table 2:  $V_{\text{H}}$  vs.  $I_M$  (  $I_{M}=0.500\ \mathrm{A}$ ,  $I_s = 5.00\ \text{mA}$  )

![[Physics_Experiments/Pre-Lab Report/Figures of EP 11/table2.png]]
$V_{\mathrm{H}}-I_{\mathrm{M}}$ Curve:

#### Table 3:  $B$  vs. $X$ (  $I_M = 0.500\ \text{A}$ ,  $I_s = 5.00\ \text{mA}$  )

![[Physics_Experiments/Pre-Lab Report/Figures of EP 11/table3.png]]

$\mathrm{B}-\mathrm{X}$ curve:

### 4.2 Data Calculation

- **Hall Voltage Calculation**: For  $I_s = 1.00\ \text{mA}$  (Table 1), the true Hall voltage is derived from the symmetrical measurement method: $V_{\text{Hall}} = \frac{1}{4}(|1.02| + |-0.98| + |-1.01| + |0.99|) = 1.00\ \text{mV}$  

- **Magnetic Field Calculation**: Using the Hall sensitivity  $K_H = 10\ \text{mV/(mA·KGS)}$  and  $B = \frac{V_{\text{Hall}}}{K_H I_s}$ : $B =\ \text{KGS}$  


1. $u_{V_{\text{Hall}}} = \frac{1}{4} \sqrt{u_{V_1}^2 + u_{V_2}^2 + u_{V_3}^2 + u_{V_4}^2} =$  
2. Since uncertainty in  $K_H$ are is introduced by Hall sensor calibration and it effects the result very little, we omits $u_{K_H}$ .  
3. For  $I_s = 1.00\ \text{mA}$ , assume  $u_{I_s} = 0.01\ \text{mA}$ .  
 4. $\frac{u_B}{B} = \sqrt{\left( \frac{u_{V_{\text{Hall}}}}{V_{\text{Hall}}} \right)^2 + \left( \frac{u_{I_s}}{I_s} \right)^2}$  

Substituting values :  

 $u_{B }=\ \text{KGS}$ , and  $B = \  \text{KGS}$ .  

  

### 4.3 Data Analysis

-  $V_{\text{Hall}}-I_s$  Curve: Linear (  $R^2 \approx 1$  ), confirming  $V_{\text{Hall}} \propto I_s$  when  $B$  is constant (fixed  $I_M$ ).  
-  $V_{\text{Hall}}-I_M$  Curve: Linear (  $R^2 \approx 1$  ), confirming  $V_{\text{Hall}} \propto I_M$  when  $I_s$  is constant, as  $B \propto I_M$  for the solenoid.  
-  $B-x$  Curve:  $B$  reaches a maximum at the solenoid center (  $x = 7.00\ \text{cm}$ ) and decreases toward the ends, consistent with the theoretical relation  $B_{\text{end}} = \frac{1}{2}B_{\text{center}}$ .  

## 5. Error Analysis

### 5.1 Systematic Errors

- **Sensor Calibration Deviation**: Uncertainty in the Hall sensitivity  $K_H$  (from sensor manufacturing or calibration) affects the accuracy of  $B$  calculations.  
- **Solenoid Parameter Variation**: Differences between the solenoid’s actual turns per meter (  $N$ ) and its nominal value introduce discrepancies between the measured  $B$  and theoretical  $B$ .  
- **Instrument Zero Drift**: Slow changes in the ammeter or voltmeter’s zero reading over the experiment can distort small  $V_{\text{Hall}}$  or current readings, especially for low  $I_s$  or  $I_M$ .  

### 5.2 Random Errors

- **Current Fluctuation**: Small, temporary variations in  $I_s$  or  $I_M$  (from power supply instability) lead to slight changes in  $V_{\text{Hall}}$ , affecting the repeatability of measurements. 
- **Probe Positioning Error**: Difficulty in precisely adjusting  $X_1$  and  $X_2$  to the target positions causes minor variations in  $B$  readings, particularly near the solenoid ends where  $B$  changes rapidly.  
- **Reading Parallax**: Misalignment between the observer’s line of sight and the voltmeter/ammeter scale can lead to small errors in reading  $V_1–V_4$  or current values.  

## 6. Questions

### Question 1: Why is the symmetrical measurement method used?

Answer: It eliminates side effects (e.g., Ettingshausen effect, Nernst effect) that produce spurious voltage offsets in  $V_{\text{Hall}}$ . These effects depend on the direction of  $I_s$  or  $B$ ; by averaging the absolute values of four readings with reversed  $I_s$  and  $B$ , the offsets cancel out, ensuring the calculated  $V_{\text{Hall}}$  reflects only the true Hall Effect.  

### Question 2: How does the solenoid’s axial magnetic field distribute, and why?

Answer: The axial magnetic field is nearly uniform at the solenoid’s center and decreases to approximately half the central value at the ends. This distribution arises because magnetic field lines inside a long solenoid are nearly parallel to the axis at the center, while at the ends, lines diverge outward, reducing the field strength. 