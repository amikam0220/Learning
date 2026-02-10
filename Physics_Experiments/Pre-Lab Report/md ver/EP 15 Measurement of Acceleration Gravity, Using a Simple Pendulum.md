---
Date: 2025-10-19T23:35:00
---
## 1. Objective

To measure the gravitational acceleration (​$g$) using a simple pendulum.
## 2. Principle

### 2.1 Core Principle

A simple pendulum (point mass + inextensible, massless string) undergoes simple harmonic motion when displaced by a small angle. The period ($T$) is given by:
$$T = 2\pi\sqrt{\frac{L}{g}}$$
where $L$ is total pendulum length (string length + bob radius), $T$ is time for one oscillation.

### 2.2 Linear Regression for Accuracy

To reduce random errors, measure $T$ for multiple $L$ values. Rewrite the period formula as a linear relationship:
$$L=\left( \frac{g}{4\pi^{2}} \right)T^{2}=KT^{2}$$
where $K$ is slope of the $L$-$T^{2}$ plot, which will be a straight line. Thus $K = \frac{g}{4\pi^{2}}$. Then $g$ can be obtained by $g=4\pi^{2}K$.
## 3. Procedure

1. **Adjust Initial String Length**: Rotate the screw at the top of the pendulum device to set the string length to approximately 60 cm.

2. **Level the Frame**: Adjust the screws under the device’s base to make the frame vertical. Ensure the string is parallel to the frame to avoid conical motion during oscillation.

3. **Measure Bob Diameter**: Measure the diameter of the metal bob ($d$) 5 times along different directions. Record the zero reading of the vernier caliper ($d_0$) first, then calculate the average diameter ($\bar{d}$).

4. **Calculate Total Pendulum Length**: Measure the actual length of the string ($l$) with a meter scale. The total pendulum length is $L = l + \frac{\bar{d}}{2}$ (adding half the bob diameter to account for the distance from the string’s end to the bob’s center).

5. **Measure Oscillation Time**:
	* Displace the bob slightly and release it gently to start oscillations.
	* Use the stopwatch to record the time for 20 complete oscillations. Repeat this measurement 3 times for the same string length to get consistent data.

6. **Repeat for Different Lengths**: Adjust the string length to approximately 70 cm, 80 cm, 90 cm, 100 cm, and 110 cm. For each length, repeat Steps 5 to obtain 6 sets of data in total.
## 4. Data Recording and Processing

### 4.1 Data Form and Graph

#### Table 1
![[Physics_Experiments/Pre-Lab Report/Figures of EP 15/table1.png]]
#### Table 2

![[Physics_Experiments/Pre-Lab Report/Figures of EP 15/table2.png]]

#### Graph ($L-T^{2}$)

$K=$, $g=$.
### 4.2 Data Calculation

#### 4.2.1 Calculate the Gradient ($K$)

Use linear regression and two-point method to find the gradient of the straight line. And $K =$

#### 4.2.2 Compute Gravitational Acceleration ($g$)

Using $g = 4\pi^2 K$ (where $\pi \approx 3.1416$):
$g =$

#### 4.2.3 Uncertainty Estimation

* **Length uncertainty**: $u(L)$ 
* **Time uncertainty**: $u(\bar{t}_{20})$ 
* **Total uncertainty of $g$**: $u(g)$ 

#### 4.2.4 Final Expected Result

$g =$

### 4.3 Data Analysis

#### 4.3.1 Data Validity Verification

#### 4.3.2 Quality of Linear Fitting

#### 4.3.3 Result Consistency Analysis 

#### 4.3.4 Error Source Validation

## 5. Error Analysis

### 5.1 Systematic Errors

* **String Extensibility**: String elongation increases $L$ and $T$, lowering $g$ slightly.
* **Parallax Error in Length Measurement**: Misalignment between the eye and meter scale may overestimate $L$, contributing to decrease in $g$.
* **Air Resistance**: As noted, drag increases $T$, leading to decrease in $g$.

### 5.2 Random Errors

* **Human Reaction Time**: Averaging 5 trials reduces this error for $t_{30}$.
* **Angle Fluctuation**: Small deviations from 5° (±0.5°) cause negligible changes in $T$ (<0.01 s), contributing to uncertainty in $g$.

## 6. Questions


1. **Why does the small-angle approximation make the pendulum’s motion simple harmonious motion?**

   For small angle, $\sin\theta$ can approximate as $\theta$ , which linearizes the restoring force. This linear force satisfies the simple harmonious motion condition ($F \propto -\text{displacement}$); if not, $\sin\theta$ deviates from $\theta$, and $T$ depends on $\theta$.
   
2. **Why is averaging multiple trials $t_{30}$ more reliable than measuring a single oscillation time ($t_{1}$)?**

   Measuring $t_1$ amplifies reaction time error. Averaging 5 trials of $t_{30}$ reduces the relative uncertainty.

 