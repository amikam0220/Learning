---
Date: 2025-09-20T17:20:00
---
# 1. Objective

To observe equal-thickness interference phenomena and analyze the characteristics of Newton's rings, calculate the curvature radius of a plano-convex lens using interference principles and master the method of differences for experimental data processing.

# 2. Principle

## 2.1 Interference and Superposition Principle

Interference is a fundamental phenomenon of wave motion, governed by the **superposition principle**: multiple waves propagate independently in the same space, and their combined effect at any point equals the sum of their individual effects. For light waves, constructive interference occurs when the phase difference is a multiple of ($2\pi$), while destructive interference occurs when the phase difference is an odd multiple of ($\pi$).

## 2.2 Formation of Newton’s Rings

When the convex surface of a plano-convex lens is placed in contact with a flat glass plate, a thin air film is formed between them—thin at the contact point and gradually thickening outward. Loci of equal air film thickness are concentric circles.

## 2.3 Curvature Radius Formula

From geometric relations, using diameter and the method of differences (for rings $m$ and $n$, $m>n$), the curvature radius R is:$R = \frac{d_m^2 - d_n^2}{4(m-n)\lambda}$.
# 3. Procedures

## 3.1 Device Adjustment

1. Adjust the microscope eyepiece to make the crosshair “+” sharply focused.
2. Turn on the sodium lamp, align light to incident vertically on reflecting glass P. Place the Newton’s ring apparatus under the microscope objective, and adjust the angle of P until yellow reflected light fills the field of view.
3. Rotate the microscope handwheel to raise/lower the objective tube until Newton’s rings are clearly visible.
4. Rotate the eyepiece to adjust the crosshair, ensuring the vertical line (“|”) is perpendicular to the microscope’s transverse ruler.

## 3.2 Diameter Measurement

1. Locate the center of Newton’s rings with the crosshair. Rotate the reading handwheel clockwise to move the crosshair to the **22nd left dark ring** (to avoid missing rings), then reverse direction (counterclockwise).
2. Record the left positions ($x_{1}$) of from 20th to 6th dark rings as the crosshair moves right.
3. Continue moving the crosshair past the center to the right side, and record the right positions ($x_{2}$) from the 6th to 20th dark rings.

# 4. Data

## 4.1 Data Form

![[Data form.png]]
## 4.2 Calculation


*   Average of $D_{k+10}^2 - D_k^2$: $\overline{\Delta D^2}$

*   Wavelength $\lambda$, 

*   Curvature radius: $R$

*   Uncertainty: $U_R$ (dominated by reading errors)

*   Final result: $R$

## 4.3 Error Analysis

### 4.3.1 Systematic Errors


*   **Backlash error**: Caused by bidirectional rotation of the micrometer drum; avoided by unidirectional measurement.

*   **Fringe center judgment**: Ambiguity in locating the dark ring center due to stripe width.

*   **Instrumental deviation**: Limited precision of the reading microscope (0.01 mm resolution).

### 4.3.2 Random Errors

*   Fluctuations in light intensity affecting fringe clarity.

*   Minor misalignment of the Newton's ring apparatus.

# 5. Pre-Questions

1. Why must the “|” line of the “+” in ocular be vertical to the transverse ruler? How to meet the requirement?
	- **Why**: To ensure the vertical crosshair aligns with the ring’s radial direction (horizontal), guaranteeing accurate horizontal position readings for diameter calculation (avoids measurement bias).
	- **How**: Rotate the eyepiece until the "|" line is parallel to the vertical scale (thus perpendicular to the transverse ruler).
2. How to eliminate the error from pitch difference when you measure the diameter of the Newton’s rings?
	- First, move the crosshair past the target ring (e.g., to the 22nd ring for measuring the 20th) in one direction.
	- Then, record positions by rotating the handwheel **unidirectionally** (no reverse rotation) to eliminate backlash from thread gaps.