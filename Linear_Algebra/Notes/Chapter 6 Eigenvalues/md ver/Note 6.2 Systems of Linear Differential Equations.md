---
Date: 2025-06-25T00:09:00
tags:
  - Linear_Algebra_notes
---
# Intro

## First-Order Equations

The system 
$$
Y^{\prime}=AY
$$

where 
$$
Y=\begin{pmatrix}
y_{1} \\
\vdots \\
y_{n}
\end{pmatrix},Y^{\prime}=\begin{pmatrix}
y_{1}^{\prime} \\
\vdots  \\
y_{n}^{\prime}
\end{pmatrix}
$$

is the systems of ==first-order linear differential equations==.

And we need to solve the matrix $Y$.


$$
Y=e^{\lambda t}\mathbf{x}
$$

where $\lambda$ is an ==eigenvalue of $A$== is a solution, $y_{i}$ is the ==function== of $t$, and the $\mathbf{x}$ is the ==coefficient vector== of $y_{i}(t)=x_{i}e^{\lambda t}$.
And any ==linear combination of $Y_{1},Y_{2},\cdots,Y_{n}$== are ==all the solution== of this system where $Y_{1},\cdots,Y_{n}$ with respect to $\lambda_{1},\cdots,\lambda _n$.

And if we know a ==prescribed value $Y_{0}$ when $t=0$==, the problem have a ==unique solution==. And it is called an ==initial value problem==.

# Complex Eigenvalues

$e^{\lambda t}\mathbf{x}$ and $e^{\bar{\lambda}t}\bar{\mathbf{x}}$ are ==both solutions== of the first-order system $Y^{\prime}=AY$. And ==any linear combination== of these solutions will be a solution. Thus we can set 
$$
\begin{align}
Y_{1}=\frac{1}{2}(e^{\lambda t}\mathbf{x}+e^{\bar{\lambda}t}\mathbf{x})=\mathrm{\mathrm{Re}}(e^{\lambda t}\mathbf{x}) \\
Y_{2}=\frac{1}{2}(e^{\lambda t}\mathbf{x}-e^{\bar{\lambda}t}\mathbf{x})=\mathrm{\mathrm{\mathrm{Im}}}(e^{\lambda t}\mathbf{x})
\end{align}
$$


and it is ==not necessary== to find and solve $\bar{\mathbf{x}},\bar{\lambda}$.

# Higher Order Systems

If we have an $m$th-order system 
$$
Y^{(m)}=A_{1}Y+A_{2}Y^{\prime}+\cdots+A_{m}Y^{(m-1)}
$$

where $A_{i}$ is an $n\times n$ matrix. We can ==transform it into a first-order system== by setting 
$$
Y_{1}=Y,Y_{2}=Y^{\prime},\cdots,Y_{m}=Y^{\prime}_{m-1}
$$

And we can use the form 
$$
\begin{pmatrix}
Y_{1}^{\prime} \\
Y_{2}^{\prime} \\
\vdots \\
Y^{\prime}_{m-1} \\
Y_{m}^{\prime}
\end{pmatrix}=
\begin{pmatrix}
O & I & O & \cdots & O \\
O & O & I & \cdots & O \\
\vdots \\
O & O & O & \cdots & I \\
A_{1} & A_{2} & A_{3} & \cdots & A_{m}
\end{pmatrix}
\begin{pmatrix}
Y_{1} \\
Y_{2} \\
\vdots \\
Y_{m-1} \\
Y_{m}
\end{pmatrix}
$$

And we require $Y,Y^{\prime},\cdots,Y^{(m-1)}$ take on ==specific values== to ensure ==unique solution==.

For the system ==simply== in the form of $Y^{(m)}=AY$, the solution is 
$$
Y=e^{\delta t}\mathbf{x}
$$

where $\delta$ is the $m$th roots of the eigenvalue of $A$, that is, $\delta=\sqrt[m]{\lambda  }$.