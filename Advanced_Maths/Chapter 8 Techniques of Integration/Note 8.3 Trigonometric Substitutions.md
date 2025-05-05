---
Date: 2025-03-25T21:03:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=484&selection=504,0,504,27|The link of chapter 8.3, Advanced Math]]"
---
## **Cases for Trigonometric Substitutions**

- For $\sqrt{ a^{2}+x^{2} }$:
	Let $x=a\tan\theta$, then $a^{2}+x^{2}=a^{2}\sec ^{2}\theta$.
- For $\sqrt{ a^{2}-x^{2} }$:
	Let $x=\sin\theta \text{ or }\cos\theta$, then $a^{2}-x^{2}=a^{2}\cos ^{2}\theta(a^{2}\sin\theta)$.
- For $\sqrt{ x^{2}-a^{2} }$:
	Let $x=\sec\theta$, then $x^{2}-a^{2}=a^{2}\tan ^{2}\theta$.

## **Strategy**

- Write down the substitution for $x$ and then calculate the differential $dx$, then specify the domain of $\theta$ in the substitution.
- Substitute the trigonometric expression and the calculated differential into the integrand and then simplify the results algebraically.
- Integrate the trigonometric integral.
- Convert it back to the original variable $x$.

## **Exercises**

- P470 43
- [[Thomas Calculus Early Transcendentals (12ed).pdf#page=527&selection=4,0,5,0|P510 Question 5th]]
	Let $t =\sin a$, then $$\int \frac{1}{t-\sqrt{ 1-t^{2} }} \, dt=\int \frac{\cos a}{\sin a-\cos a} \, da$$ Then $$\begin{align}\int \frac{\cos a}{\sin a-\cos a} \, da & =\int \frac{\frac{1}{2}[(\cos a+\sin a)+(\cos a-\sin a)]}{\sin a-\cos a} \, da  \\ & = \frac{1}{2}\int \frac{\cos a+\sin a}{\sin a-\cos a}\,da-\frac{1}{2}\int \frac{\sin a-\cos a}{\sin a-\cos a} \, da \\ & =\frac{1}{2}\int \frac{1}{\sin a-\cos a} \, d(\sin a-\cos a) -\frac{1}{2}a+C \\ & =\frac{1}{2}\ln|\sin a-\cos a | -\frac{1}{2}a+C \\ & =\frac{1}{2}\ln|t-\sqrt{ 1-t^{2} }|-\frac{1}{2}\sin ^{-1}t +C\end{align}$$
