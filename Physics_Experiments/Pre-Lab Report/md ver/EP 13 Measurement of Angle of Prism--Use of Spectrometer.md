---
Date: 2025-11-18T10:05:00
---

# 1. Objective

1. To master the reading principle of the angular vernier.
2. To learn and practice the method of measuring the angle of a prism using a spectrometer.

# 2. Principle

## 2.1 Structure of the Spectrometer

A spectrometer consists of three core components: a telescope, a platform, and a collimator. The collimator, a tube with a converging lens at one end and an adjustable slit at the other, converts light from the slit into parallel beams (since the tube length equals the lens focal length). The platform supports the prism, which deviates and disperses parallel light into a spectrum. The telescope, equipped with an objective lens and an eyepiece, focuses incident light and allows observation of the spectral image.

Prior to use, the spectrometer must be adjusted to meet three conditions: (1) Light from the collimator is parallel; (2) Incident, refracted, reflected, and diffracted beams lie in the same plane; (3) The telescope’s optical axis is perpendicular to the spectrometer’s spin axis.

## 2.2 Angular Vernier and Angle Reading

The angular vernier operates similarly to a vernier caliper. Its reading device includes a main scale circle and a vernier scale disc, with double verniers symmetrically arranged to eliminate eccentric difference. For this experiment, the main scale division $\alpha=0.5^{\circ}(30^{\prime})$, and the vernier has 30 divisions ($n=30$) equal to 29 main scale divisions. The least count is $\Delta\theta=\alpha / n = 1^{\prime}$.

The measured angle $\phi=\left| \phi_{1}-\phi_{2} \right|$. For cross-zero readings (spanning 0°, 180°, or 360°), use $\phi=\left| 180^{\circ}+\phi_{2}-\phi_{1} \right|$ or $\phi=\left| 360^{\circ}+\phi_{2}-\phi_{1} \right|$.

## 2.3 Prism Angle Measurement

When the prism is positioned with its angle $\angle A$ facing the collimator, parallel light reflects off its two smooth faces. Let $\theta$ be the angle between the telescope positions when aligned with the two reflected slit images. From geometric relationships: $2i_{1}+2i_{2}+\theta=360^{\circ}$and  $(90^{\circ}-i_{1})+(90^{\circ}-i_{2})=\angle A$. Combining these gives $\angle A = \theta / 2$.
![[prismangle.png]]

# 3. Procedure

1. The spectrometer is pre-adjusted in the lab. Do not touch any knobs until instructed, as misadjustment is time-consuming to correct.
2. Turn on the sodium light source near the collimator slit. Locate the slit image with the naked eye, move the telescope to align with it, and adjust for a sharp image. Narrow the slit for clarity.
3. Place the prism at the platform center, orienting its ground glass face perpendicular to the collimator so $\angle A$ faces the collimator.
4. Find the slit image reflected from one prism face (e.g., AB) with the naked eye. Move the telescope, use the slow-motion screw to align the crosshairs with the image center, and record the telescope position $T_{1}$. Repeat for the other face (AC) to get $T_{2}$.
5. Calculate ∠A using the relationship $\theta=\left| T_{1}-T_{2} \right|$ and $\angle A = \theta / 2$.

# 4. Data Recording and Processing

## 4.1 Data Form

  ![[Physics_Experiments/Pre-Lab Report/Figures of EP 13/table1.png]]

$\theta_{1}=\phi_{left1}-\phi_{left 2}$
$\theta_{2}=\phi_{right 1} - \phi _{right 2}$
$\theta=\frac{1}{2}(\theta_{1}+\theta_{2})$
$\angle A= \frac{1}{2}\theta$

## 4.2 Data Calculation

$$
\angle \bar{A}= \frac{\sum\angle A_{i}}{i} 
$$

$$u_{1}=\sqrt{ \frac{\sum (\angle A_{i} - \angle \bar{A})^{2}}{n(n-1)}  }$$

$$
u_{\theta}=\sqrt{ u_{\phi_{1}}^{2} +u_{\phi_{2}}^{2}}
$$
$$
u_{2} = u_{\theta} /2
$$

$$
u_{\angle A} =\sqrt{ u_{1}^{2}+u_{2}^{2} }
$$

$$
\angle A = \angle \bar{A} + u_{\angle A}
$$

## 4.3 Data Analysis

### 4.3.1 Data Validity Check

### 4.3.2 Data Repeatability Analysis

### 4.3.3 Result Consistency Verification

# 5. Error Analysis

## 5.1 Systematic Errors

- Eccentric difference: Eliminated by double verniers.
- Instrument misalignment: Pre-adjustment reduces telescope/collimator errors.
- Scale inaccuracy: The 1′ least count limits systematic deviation.

## 5.2 Random Errors

- Parallax error: Occurs when reading verniers at an angle; mitigated by perpendicular viewing.
- Prism placement: Slight platform shifts cause reflection angle deviations; solved by centering the prism.
- Crosshair alignment: Minor errors from manual adjustment; reduced by fine-tuning the slow-motion screw.

# 6. Questions

## Question 1: Are there other methods to measure the prism angle?

Answer: Yes, the minimum deviation method. When light passes through the prism, the deviation angle reaches a minimum when the incident and emergent angles are equal. Using the relationship 
$$n=\frac{\sin\frac{A+\delta_{min}}{2}}{\sin \frac{A}{2} }$$ ($n$ = refractive index, $\delta_{min}$ = minimum deviation angle), measure $\delta _{min}$ and n to calculate A.

## Question 2: What is the function of the double verniers on the spectrometer’s scale circle?

Answer: They eliminate eccentric difference caused by imperfect alignment between the main scale circle’s center and the vernier disc’s center. By averaging readings from the two symmetric verniers, this error is canceled out, improving angle measurement accuracy.
