---
Date: 2025-04-21T09:40:00
tags:
  - Linear_Algebra_notes
link: "[[Linear_Algebra_Textbook.pdf#page=190&selection=940,0,940,48|The link of chapter 4.2, Linear Algebra]]"
---
# Theorem and Corollary
## Theorem 4.2.1

If $L$ is a linear transformation mapping $\mathbb{R}^{n}$ into $\mathbb{R}^{m}$, then there is an $m\times n$ matrix $A$ such that $$
L(\mathbf{x})=A\mathbf{x}
$$ Then, the $j$th column vector of $A$ is given by $$
\mathbf{a}_{j}=L(\mathbf{e}_{j}),j=1,2,\cdots,n
$$
### Proof

Since $L(\mathbf{x})=A\mathbf{x}$, then 
$$
L(\mathbf{x})=x_{1}\mathbf{a}_{1}+x_{2}\mathbf{a}_{2}+\cdots+x_{n}\mathbf{a}_{n}
$$

let $\mathbf{x}=\mathbf{e}_{j}$, then $x_{j}=1$ and other scalars are zero. That is, $$
L(\mathbf{e}_{j})=\mathbf{a}_{j}
$$
In fact, when representing the basis of $\mathbf{x}$ as the standard unit basis, the proof can also be done.

The theorem tells us ==how to construct the matrix== $A$ corresponding to a particular linear transformation of $L$. We refer to $A$ as the ==standard matrix representation== of $L$.

## Theorem 4.2.2 Matrix Representation Theorem

If $E=\{ \mathbf{v}_{1},\mathbf{v}_{2},\cdots, \mathbf{v}_{n} \},F=\{ \mathbf{w}_{1},\mathbf{w}_{2},\cdots,\mathbf{w}_{m} \}$ are ordered bases for vector space $V$ and $W$, then corresponding to each linear transformation $L:V\to W$, there is an $m\times n$ matrix $A$ such that $$
[L(\mathbf{v})]_{F}=A[\mathbf{v}]_{E}
$$
for each $\mathbf{v}\in V$. It is similar to [[Note 3.5 Change of Basis#Transition Matrix]].
$A$ is the matrix representing $L$ relative to the ordered bases $E$ and $F$. And $$
\mathbf{a}_{j}=[L(\mathbf{v}_{j})]_{F},j=1,2,\cdots,n
$$

![[Matrix Representation Theorem.png]]
### Proof

Suppose $$
\mathbf{v}=x_{1}\mathbf{v}_{1}+x_{2}\mathbf{v}_{2}+\cdots+x_{n}\mathbf{v}_{n}
$$
and$$
L(\mathbf{v}_{j})=a_{1j}\mathbf{w}_{1}+a_{2j}\mathbf{w}_{2}+\cdots+a_{mj}\mathbf{w}_{m},1\leq j\leq n
$$
Here is $$
\mathbf{a}_{j}=[L(\mathbf{v}_{j})]_{F}
$$
Thus
$$
\begin{align}
L(\mathbf{v}) & =L(x_{1}\mathbf{v}_{1}+\cdots+x_{n}\mathbf{v}_{n}) \\
 & =(x_{1}a_{11}+x_{2}a_{12}+\cdots+x_{n}a_{1n})\mathbf{w}_{1}+\cdots+(x_{1}a_{m1}+\cdots+x_{n}a_{mn})\mathbf{w}_{n} \\
 & =\sum_{i=1}^{m} \left( \sum_{j=1}^{n} a_{ij}x_{j} \right)\mathbf{w}_{i}
\end{align}
$$

Then let $$
y_{i}=\sum_{j=1}^{n} a_{ij}x_{j}
$$
Thus $$
\mathbf{y}=(y_{1},y_{2},\cdots,y_{m})^{T}=A\mathbf{x}
$$


## Strategy

To find the matrix representation $A$ for a linear transformation $L:\mathbb{R}^{n}\to\mathbb{R}^{m}$ with respect to the ordered bases $E=\{ \mathbf{u}_{1},\mathbf{u}_{2},\cdots,\mathbf{u}_{n} \}$ and $F=\{ \mathbf{b}_{1},\cdots,\mathbf{b}_{m} \}$, we need to ==represent each vector $L(\mathbf{u}_{j})$ as a linear combination of $\mathbf{b}_{1},\cdots,\mathbf{b}_{m}$==.

## Theorem 4.2.3

Let $E=\{ \mathbf{u}_{1},\cdots,\mathbf{u}_{n} \}$ and $F=\{ \mathbf{b}_{1},\cdots, \mathbf{b}_{n} \}$ be ordered bases for $\mathbb{R}^{n}$ and $\mathbb{R}^{m}$, respectively. If $L:\mathbb{R}^{n}\to\mathbb{R}^{m}$ is a linear transformation and $A$ is the matrix representing $L$ with respect to $E$ and $F$, then $$
\mathbf{a}_{j}=B^{-1}L(\mathbf{u}_{j}),j=1,\cdots,n
$$
where $B=(\mathbf{b}_{1},\cdots,\mathbf{b}_{m})$. 

### Proof

If $A$ is representing $L$ with respect to $E$ and $F$, then, $$
L(\mathbf{u}_{j})=a_{1j}\mathbf{b}_{1}+\cdots+\mathbf{a}_{mj}\mathbf{b}_{m}=B\mathbf{a}_{j}
$$
Clearly $B$ is nonsingular whose column vectors are the basis for $\mathbb{R}^{m}$. Thus $$
\mathbf{a}_{j}=B^{-1}L(\mathbf{u}_{j}),j=1,\cdots,n
$$
## Corollary 4.2.4

If $A$ is the matrix representing the linear transformation $L:\mathbb{R}^{n}\to\mathbb{R}^{m}$ with respect to the bases $$
E=\{ \mathbf{u}_{1},\cdots,\mathbf{u}_{n} \},F=\{ \mathbf{b}_{1},\cdots,\mathbf{b}_{m} \}
$$
then the reduced row echelon form of $(\mathbf{b}_{1},\cdots,\mathbf{b}_{m}|L(\mathbf{u}_{1}),\cdots,L(\mathbf{u}_{n}))$ is $(I|A)$.

It can be obtained by multiplying $B^{-1}$ of the both sides. (The left side can be seen as $B$).

# Application I Computer Graphics and Animation

For the picture in the plane stored in the computer, it is stored as a set of ==vertices==. Then the vertices can be plotted and connected by lines to produce the picture. If there are $n$ vertices, they are stored in a $2\times n$ matrix. The $x$-coordinates of the vertices are stored in the first row and the $y$-coordinates of the vertices are in the second.
We can transform a figure by ==changing the positions of the vertices== and then drawing the figure. And the primary transformations are as follows.
- Dilations and contractions
	The linear operator of the form $$L(\mathbf{x})=c \mathbf{x}$$
	is ==dilation== if $c>1$ and ==contraction== if $0<c<1$.
- Reflection about an axis.
	If $L_{x}$ is a transformation that reflects a vector $\mathbf{x}$ about $x$-axis, then $$L_{x}(\mathbf{e}_{1})=\mathbf{e}_{1},L_{x}(\mathbf{e}_{2})=- \mathbf{e}_{2}$$
	Thus the matrix $A$ is $\begin{pmatrix}1 & 0 \\ 0 & -1\end{pmatrix}$.
	Similarly, the matrix representation for $L_{y}$ is $\begin{pmatrix}-1 & 0 \\ 0 & 1\end{pmatrix}$.
- Rotations
	The matrix $A$ in the linear operator $L(\mathbf{x})=A\mathbf{x}$ is $$A=\begin{pmatrix}\cos\theta & -\sin\theta \\ \sin\theta & \cos\theta\end{pmatrix}$$
	That is rotating the vector by $\theta$ in the ==counterclockwise== direction.
- Translation
	Translation is a transformation by a vector $\mathbf{a}$ in the form that $$L(\mathbf{x})=\mathbf{x}+\mathbf{a}$$
	Note that if $\mathbf{a}\ne \mathbf{0}$, then $L$ is ==not a linear transformation==.
	So $L$ can ==not be represented by a $2\times 2$ matrix.==
# Homogeneous Coordinates

The ==homogeneous coordinate system== is formed by equating each vector in $\mathbb{R}^{2}$ with a vector in $\mathbb{R}^{3}$ ==having the same first two coordinates and having 1 as its third coordinate==: $$
\begin{pmatrix}
x_{1} \\
x_{2}
\end{pmatrix}\leftrightarrow 
\begin{pmatrix}
x_{1} \\
x_{2} \\
1
\end{pmatrix}
$$
When discussing the upper linear transformation, take the $2\times2$ matrix representation and augment it by ==attaching it the third row and third column of the $3\times 3$ identity matrix==. For example, the dilation matrix $$
\begin{pmatrix}
3 & 0 \\
0 & 3
\end{pmatrix}
$$
and corresponding matrix is $$
\begin{pmatrix}
3 & 0 & 0 \\
0 & 3 & 0 \\
0 & 0 & 1 \\
\end{pmatrix}
$$
such that $$
\begin{pmatrix}
3 & 0 & 0 \\
0 & 3 & 0 \\
0 & 0 & 1
\end{pmatrix}
\begin{pmatrix}
x_{1} \\
x_{2} \\
1
\end{pmatrix}
=\begin{pmatrix}
3x_{1} \\
3x_{2} \\
1
\end{pmatrix}
$$
So we transform the pair $(x_{1},x_{2})$ and just ignore the third coordinate.

For a translation, we ==can find a matrix representation for $L$ with respect to homogeneous coordinate system==. We simply take the $3\times 3$ identity matrix and replace the first two entries of its third column with the entries of $\mathbf{a}$. For example, $\mathbf{a}=(6,2)^{T}$. Then $$
A\mathbf{x}=\begin{pmatrix}
1 & 0 & 6 \\
0 & 1 & 2 \\
0 & 0 & 1
\end{pmatrix}
\begin{pmatrix}
x_{1} \\
x_{2} \\
1
\end{pmatrix}=\begin{pmatrix}
x_{1}+6 \\
x_{2}+2 \\
1
\end{pmatrix}
$$


