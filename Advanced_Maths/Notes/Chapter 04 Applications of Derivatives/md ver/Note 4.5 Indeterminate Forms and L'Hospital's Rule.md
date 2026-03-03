---
Date: 2024-12-18T14:15:00
tags:
  - Advanced_Math_notes
link: "[[Thomas Calculus Early Transcendentals (12ed).pdf#page=271&selection=597,0,597,40|The link of chapter 4.5, Advanced Math]]"
---
## **Indeterminate Forms**

- **Type $\frac{0}{0}$:**
	For a limit of form $\lim_{ x \to a } \frac{f(x)}{g(x)}$ where $\lim_{ x \to a } f(x)=\lim_{ x \to a }g(x) =0$, then the limit is called an indeterminate form of type $\frac{0}{0}$.
- **Type $\frac{\infty}{\infty}$:**
	For a limit of form $\lim_{ x \to a } \frac{f(x)}{g(x)}$ where $\lim_{ x \to a  }f(x)=\lim_{ x \to a  }g(x)=\infty$, then the limit is called an indeterminate form of type $\frac{\infty}{\infty}$.
- **L'Hospital's Rule:**
	Suppose $f(x)$ and $g(x)$ are differentiable and $g^{\prime}(x)\ne0$ on a open interval that contains $a$ (except possibly $a$). Suppose that$$\lim_{ x \to a } f(x)=\lim_{ x \to a } g(x)=0$$or that$$\lim_{ x \to a } f(x)=\lim_{ x \to a } g(x)=\infty$$Then $$\lim_{ x \to a } \frac{f(x)}{g(x)}=\lim_{ x \to a } \frac{f^{\prime}(x)}{g^{\prime}(x)}$$if the limit on the right side of the equation exists.

## **Indeterminate Forms $\infty \cdot0,\infty-\infty$**

- **$\infty \cdot0$:**
	$$f(x)\cdot g(x)=\frac{f(x)}{\frac{1}{g(x)}} \text{ or } \frac{g(x)}{\frac{1}{f(x)}}$$
- **$\infty-\infty$:**
	Convert difference into a quotient so that we have a indeterminate form of type $\frac{0}{0}$ or $\frac{\infty}{\infty}$.

## **Indeterminate Powers**

- The limit $$\lim_{ x \to a } f(x)^{g(x)}$$Rewrite the function as an exponential:$$f(x)^{g(x)}=e^{g(x)\ln f(x)}$$then $g(x)\ln f(x)$ is of type $0\cdot \infty$
 