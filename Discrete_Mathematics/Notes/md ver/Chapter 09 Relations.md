---
Date: 2025-12-26T14:00:00
---
# Chapter Summary

- Relations and their Properties
- $n$-ary Relations and their Applications
- Representing Relations
- Closures of Relations
- Equivalence Relations
- Partial Orderings

# Section 9.1 Relations and Their Properties

## Section Summary

- Relations and Functions
- Properties of Relations
	- Reflexive Relations
	- Symmetric and Antisymmetric Relations
	- Transitive Relations
- Combining Relations

## Binary Relations

Definition:
A ==binary relation $R$== from $A$ to $B$ is a subset $R\subseteq A\times B$.

Relation is more general than functions. For functions, elements in $A$ all have corresponding element in $B$.

### Binary Relation on a Set

Definition
A binary relation $R$ on $A$ is a subset of $A\times A$ or a relation from $A$ to $A$.

## Reflexive Relations

Definition:
$R$ is reflexive if and only if 
$$
\forall x[x \in A \to(x,x)\in R]
$$

## Symmetric Relations

Definition:
$R$ is symmetric if and only if 
$$
\forall x\forall y[(x,y)\in R\to(y,x)\in R]
$$

## Antisymmetric Relations

Definition
$R$ is antisymmetric if and only if 
$$
\forall x \forall y[(x,y)\in R \wedge(y,x)\in R\to x=y]
$$

## Transitive Relations

Definition:
$R$ is transitive if and only if 
$$
\forall x\forall y\forall z[(x,y)\in R\wedge(y,z)\in R\to(x,z)\in R]
$$

For above, note for the situations that ==the premise is false== then the relation is true.

## Combining Relations

The combination of relations: $R_{1}\cap R_{2},R_{1}\cup R_{2},R_{1}-R_{2},R_{2}-R_{1}$.

## Composition

Definition:
$R_{1}:A\to B$, $R_{2}:B\to C$, then the composition of $R_{2}$ with $R_{1}$ is $R_{2}\circ R_{1}:A\to C$ where if $(x,y)\in R_{1},(y,z)\in R_{2}$, then $(x,z)\in R_{2}\circ R_{1}$.

## Powers of a Relation

Definition
$R:A\to A$ and $R$ is a binary relation, then the power $R^{n}$ is defined inductively by
- Basic Step: $R_{1}=R$
- Inductive Step: $R^{n+1}=R^{n}\circ R$.

Theorem 1:
The relation $R$ on a set $A$ is transitive if and only if 
$$
R^{n}\subseteq R
$$
for $n=1,2,\cdots$.
(proved by mathematical induction)

# Section 9.3 Representing Relations

## Section Summary

- Representing Relations using Matrices
- Representing Relations using Digraphs

## Representing Relations Using Matrices

Suppose $R$ is relation from $A=\{ a_{1},a_{2},\cdots,a_{m} \}$ to $B=\{ b_{1},b_{2},\cdots,b_{n} \}$, then $R$ can be represented by matrix $M_{R}=[m_{ij}]$ where 
$$
m_{ij}=
\begin{cases}
1 \text{ if }(a_{i},b_{j})\in R \\
0\text{ if }(a_{i},b_{j})\not\in R
\end{cases}
$$

## Matrices of Relations on Sets

- If $R$ is a reflexive relation, all elements ==on the main diagonal== of $M_{R}$ are equals to 1.
- If $R$ is symmetric relation, $m_{ij}=1$ whenever $m_{ji}=1$. If $R$ is antisymmetric relation, $m_{ij}=0$ or $m_{ji}=0$ when $i\neq j$.

![[symmetric and Antisymmetric.png]]

## Representing Relations Using Digraphs

Definition:
Vertices set represents elements in the sets, edges set represent the element in the relation set.

## Determining which Properties a Relation has from its Digraph

- Reflexivity: A ==self-loop== must be present at ==all vertices== in the graph.
- Symmetry: If $(x,y)$ is an edge then so is $(y,x)$.
- Antisymmetry: If $(x,y)$ with $x\ne y$ is an edge, then $(y,x)$ is not an edge.
- Transitivity: If $(x,y),(y,z)$ are edges, then so is $(x,z)$.
- ==Powers of Relation==: If there is a path of length $n$ from $x$ to $y$ in $R$, then $(x,y)$ is in $R^{n}$.

# Section 9.5 Equivalence Relations

## Section Summary 

- Equivalent Relations
- Equivalent Classes
- Equivalence Classes and Partitions

## Equivalence Relations

Definition 1:
A relation on a set $A$ is ==equivalence relation== if it is ==reflexive, symmetric and transitive==.

Definition 2:
Two elements $a$ and $b$ are related by equivalence relation are called ==equivalent==, denoted by $a\sim b$. 

Examples:
- Strings: $aRb$ if and only if $l(a)=l(b)$.
- Congruence Modulo $m$: $R=\{ (a,b)|a \equiv b(\mathrm{mod}\ m) \}$.
- Not Equivalent relations: divides relation on the set of positive integers.(not symmetric)

## Equivalence Classes

Definition 3:
$R$ is an equivalence relation on $A$. The ==set of all elements that are related to an element $a$== of $A$ is called the ==equivalence class of $a$==, denoted by $[a]_{R}$.

If $b\in[a]_{R}$, then $b$ is called a ==representative== of this equivalence class.

The equivalence classes of relation congruence modulo $m$ are called the ==congruence classes modulo $m$==. The congruence class of an integer $a$ modulo $m$ is denoted by $[a]_{m}$ thus $[a]_{m}=\{ \cdots,a-2m,a-m,a,a+m,\cdots \}$.

## Equivalence Classes and Partitions

Theorem 1:
$R$ is an equivalence relation on a set $A$. These statements for elements $a$ and $b$ of $A$ are equivalent.
- $aRb$
- $[a]=[b]$
- $[a]\cap[b]\ne \emptyset$

## Partition of a Set

Definition:
A ==partition of $S$== is ==collection of disjoint nonempty subsets of $S$== that have $S$ as their union. i.e., for collection of subsets $A_{i}$,
- $A_{i}\ne \emptyset$
- $A_{i}\cap A_{j}=\emptyset\text{ when }i\ne j$
- $\bigcup_{i\in I}A_{i}=S$

![[partition of set.png]]


## An Equivalence Relation Partitions a Set

$R$ is equivalence relation on $A$, then
$$
\bigcup _{a\in A}[a]_{R}=A
$$

From theorem 1, $[a]_{R}=[b]_{R}$ or $[a]_{R}\cap[b]_{R}=\emptyset$. Therefore, the equivalence classes ==form a partition of $A$==.

Theorem 2:
$R$ is equivalence relation on $S$, then ==the equivalence classes of $R$ form a partition of $S$==. Conversely, given a partition of $S$, there is an equivalence relation $R$ that ==has the partition as its equivalence classes==.

# Section 9.6 Partial Orderings

## Section Summary

- Partial Orderings and Partially-ordered Sets
- Lexicographic Orderings
- Hasse Diagrams
- Lattices
- Topological Sorting

## Partial Orderings

Definition 1:
A relation $R$ on a set $S$ is called ==partial ordering== if it is ==reflexive, antisymmetric and transitive==. A set with partial ordering $R$ is called ==partially ordered set== or ==poset==, denoted by $(S,R)$. Members of $S$ are called ==elements== of the poset.

Examples:
- $\geq$ relation is a partial ordering on the set of integers.
- Divisibility relation is a partial ordering on the set of integers.
- $\subseteq$ is a partial ordering on the power set of $S$.(the set of all subset of $S$)

## Comparability

Definition 2:
The elements $a$ and $b$ of a poset $(S,\preceq)$ are ==comparable== if either $a\preceq b$ or $b\preceq a$. If neither $a\preceq b$ nor $b\preceq a$, then $a$ and $b$ are called ==incomparable==. ($\preceq$ represents relations of any posets)

Definition 3:
If $(S,\preceq)$ is a poset and every two elements are comparable, $S$ is called a ==totally ordered== or ==linearly ordered== set or a ==chain==. And $\preceq$ is called a ==total order== or a ==linear order==.

Example, $(\mathbb{Z}^{+},|)$

Definition 4:
$(S,\preceq)$ is ==well-ordered== set if it is a poset such that $\preceq$ is total ordering and ==every nonempty subset of $S$ has a least element==.

Example, $(\mathbb{N}, \leq)$
## Lexicographic Order

Definition:
Given two posets $(A_{1},\preceq_{1})$ and $(A_{2},\preceq_{2})$, then the ==lexicographic ordering== on $A_{1}\times A_{2}$ is defined by 
$$
(a_{1},a_{2})\prec(b_{1},b_{2})\Leftrightarrow a_{1}\prec_{1} b_{1}\text{ or }a_{1}=b_{1},a_{2}\prec_{2}b_{2}
$$

## Hasse Diagrams

![[Hasse Diagrams.png]]
Definition:
Hasse Diagram is visual representation of partial ordering that leaves out edges that must be present because of ==reflexive and transitive== properties. (Upper $c$ is a Hasse diagram)

### Procedure for Constructing a Hasse Diagram

For a poset $(S,\preceq)$, start with the directed graph of the relation
- Remove the loops $(a,a)$ at every vertex
- Remove all edges $(x,y)$ where $x\prec z$ and $z \prec y$.
- Arrange each edge so that its initial vertex is below the terminal vertex. Remove all the arrows

