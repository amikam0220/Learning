---
Date: 2025-12-27T18:31:00
---
# Chapter Summary

- Graph and Graph Models
- Graph Terminology and Special Types of Graphs
- Representing Graphs and Graph Isomorphism
- Connectivity
- Euler and Hamiltonian Graphs
- Shortest-Path Problem
- Planar Graphs
- Graph Coloring

# Section 10.1 Graphs and Graph Models

## Section Summary

- Introduction to Graphs
- Graph Taxonomy
- Graph Models

## Graphs

![[Graphs.png]]
Definition:
$G=(V,E)$ where $V$ is nonempty set of vertices and $E$ is the set of edges. An edge connect its endpoints.
(Here we focus on graph with finite vertex set)

## Some Terminology

- Simple Graph: Each edge connects two different vertices and no two edges connect the same pair of vertices.
- Multigraphs: May have ==multiple edges connecting two same vertices but no loops== If $m$ different edges connect vertices $u$ and $v$, we say $\{ u,v \}$ is an edge with multiplicity $m$.
- Loop: An edge connects a vertex to itself.
- Pseudograph: May include loops or multiple edges.
![[pseudograph.png]]

## Directed Graphs

Definition:
$E$ is a set of ==directed edges==. Each edge is associated with an ==ordered pair of vertices==. $(u,v)$ represents that start at $u$ and end at $v$.

For ==undirected graphs==, the edges are not directed and the point pair are not ordered.

## Some other Terminology

- Simple directed graph: no loops and no multiple edges.
- Directed multigraph: May have multiple directed edges but no loops.
- Mixed graph: May have directed and undirected edges, multiple edges and loops
## Graph Models: Computer Networks

The vertices represent data centers and the edges represent communication links. 

To model a computer network where we are ==only concerned whether two data centers are connected by a communications link==, we use ==simple graph==.
![[Computer Networks.png]]

To model a computer network where we ==care about the number of links between data centers== we use ==multigraph==.
![[computer networks2.png]]

To model a computer network with ==diagnostic links at data centers==, we use ==pseudograph== as loops are needed.
![[computer networks3.png]]

To model a network with multiple one-way links, we use a directed multigraph.
![[computer networks4.png]]

## Graph Terminology: Summary

- Undirected or directed or both
- Multiple edges or not
- loops or not

## Other Applications of Graph

- Social networks
- Communication networks
- Information networks
- Software design
- Transportation networks
- Biological networks

# Section 10.2 Graph Terminology and Special Types of Graphs

## Section Summary

- Basic Terminology
- Some special types of graphs
- Bipartite graphs
- bipartite graphs and matchings
- Some applications of Special types of graphs
- New graphs from old

## Basic Terminology

Definition 1:
Two vertices $u,v$ in undirected graphs are called ==adjacent or neighbors== in $G$ if there is an edge $e$ between $u$ and $v$. $e$ is called ==incident with== the vertices $u$ and $v$. And $e$ is said to ==connect== $u$ and $v$.

Definition 2:
The set of all neighbors of $v$ denoted by $N(v)$, called the ==neighborhood== of $v$. if $A$ is a subset of $V$, we denote $N(A)$ as the set of all vertices that are adjacent to at least one vertex in $A$. Thus $N(A)=\cup_{v\in A}N(v)$.

Definition 3:
The ==degree== of a vertex in undirected graphs is the number of edges incident with it, denoted by $\mathrm{deg}(v)$. A loop contributes two to the degree.

## Degrees of Vertices

Theorem 1(Handshaking Theorem):
If $G$ is undirected graphs with $m$ edges, then
$$
2m=\sum_{v\in V} \mathrm{deg}(v)
$$

Theorem 2:
An undirected graph has an ==even number of vertices of odd degree==.

## Directed Graphs

Definition:
The ==in-degree== of a vertex $v$, denoted by $\mathrm{deg}^{-}(v)$ is the number of edges which terminate at $v$. The ==out-degree== of $v$, denoted by $\mathrm{deg}^{+}(v)$ is the number of edges which start at $v$. A loop contribute 1 in-degree and 1 out-degree.

Theorem 3:
$G$ is a directed graph, then
$$
\left| E \right| =\sum_{v\in E}\mathrm{deg}^{-}(v)=\sum _{v\in V}\mathrm{deg}^{+}(v)
$$

## Special Types of Simple Graphs

### Complete Graphs

Every pair of distinct vertices contains ==exactly one edge==.  Complete graphs with $n$ vertices denoted by $K_{n}$.
![[complete graph.png]]

### Cycles and Wheels

Cycle $C_{n}$:
For $n\geq3$ with $n$ vertices $v_{1},v_{2},\cdots,v_{n}$, consist the edges $\{ v_{1},v_{2} \},\{ v_{2},v_{3}, \},\cdots,\{ v_{n-1},v_{n} \},\{ v_{n},v_{1} \}$.
![[Cycles.png]]
Wheel $W_{n}$:
Add an additional vertex to a cycle $C_{n}$ and connect this new vertex to each of the $n$ vertices.
![[Wheels.png]]

### $n$-Cubes

$n$-dimensional hypercube or $n$-cube, denoted by $Q_{n}$ with $2^{n}$ vertices ==representing all bit string of length $n$==. There is an edge between two vertices that ==differ in exactly one bit position==. 
![[Cubes.png]]

### Computer Network Architecture

- Star topology. All devices are connected to a central control device.
- Ring topology. Each device is connected using $C_{n}$.
- $W_{n}$-based topology. Combining features of star topology and ring topology.

## Bipartite Graphs

Definition:
A simple graph $G$ with $V$ be partitioned into two disjoint subset $V_{1},V_{2}$ such that ==every edge connects a vertex in $V_{1}$ and a vertex in $V_{2}$==. 
When showing the bipartite graphs, use two different colors to represent vertices. No two adjacent vertices are the same color.
![[bipartite graphs.png]]

### Complete Bipartite Graphs

Definition:
A graph that $V_{1}$ with size $m$ and $V_{2}$ with size $n$ such that there is an edge from every vertex in $V_{1}$ to every vertex in $V_{2}$, denoted by $K_{m,n}$
![[Complete Bipartite graphs.png]]

## New Graphs from Old

Definition of subgraph: 
A ==subgraph== of $G=(V,E)$ is $H=(W,F)$ where $W\subset V$, $F\subset E$. It is ==proper subgraph== if $H\ne G$.

Definition of induced subgraph:
The ==subgraph induced== by a subset $W$ of vertex set $V$ is graph $(W,F)$ where $F$ contains an edge in $E$ ==if and only if both endpoints are in $W$==.

Definition of union of two simple graphs:
The union of $G_{1}=(V_{1},E_{1})$ and $G_{2}=(V_{2},E_{2})$ is the simple graph with vertex set $V_{1}\cup V_{2}$ and edges set $E_{1}\cup E_{2}$, denoted by $G_{1}\cup G_{2}$.

# Section 10.3 Representing Graphs and Graph Isomorphism

## Section Summary

- Adjacency Lists
- Adjacency Matrices
- Incidence Matrices
- Isomorphism of graphs

## Adjacency List

Definition:
It can be used to represent a graph with ==no multiple edges== by specifying the vertices that are adjacent to each vertex of the graph.
![[adjacent list.png]]

## Adjacency Matrices

Definition:
Suppose that $G=(V,E)$, $\left| V \right|=n$, the adjacency matrix $A_{G}$ of $G$ with respect to the listing of vertices is $n\times n$ zero-one matrix. 
$$
a_{ij}=
\begin{cases}
1,\text{if }\{ v_{i},v_{j} \}\text{ is an edge of }G \\
0,\text{ otherwise}
\end{cases}
$$

When the graph is sparse, use adjacency list; when the graph is dense, use adjacency matrices.

Adjacency Matrix can also be used to represent graphs with ==loops and multiple edges==. A loop is represent by 1 at $(i,i)$. $(i,j)$ represent the number of edges.
![[example of adjacency matrix.png]]
$$
\begin{bmatrix}
0 & 3 & 0 & 2 \\
3 & 0 & 1 & 1 \\
0 & 1 & 1 & 2 \\
2 & 1 & 2 & 0 \\
\end{bmatrix}
$$

When representing ==directed graph==, $(i,j)$ represent the edge from $v_{i}$ to $v_{j}$.

## Incidence Matrices

$G=(V,E)$ with $n$ vertices and $m$ edges. The incidence matrix with respect to the ordering of $V$ and $E$ is the $n\times m$ matrix $M=[m_{ij}]$ where 
$$
m_{ij}=
\begin{cases}
1,\text{when edge }e_{j}\text{ is incident with }v_{i} \\
0,\text{otherwise} \\
\end{cases}
$$

## Isomorphism of Graphs

Definition:
For simple graphs $G_{1}=(V_{1},E_{1})$ and $G_{2}=(V_{2},E_{2})$, they are ==isomorphic== if there is a bijective function $f$ from $V_{1}$ to $V_{2}$ with the property that $a$ and $b$ are adjacent in $G_{1}$ if and only if $f(a)$ and $f(b)$ are adjacent in $G_{2}$. $f$ is called ==isomorphism==.  
![[isomorphism of graphs.png]]

$f(u_{1})=v_{1},f(u_{2})=v_{4},f(u_{3})=v_{3},f(u_{4})=v_{2}$.

It is difficult to determine isomorphism using brute force($n!$ possible situations). Best algorithm have exponential worst case. It is one of a few NP problems not know to be either tractable or NP-complete.

Sometimes it is not hard to show two graphs are not isomorphic. We can find ==graph invariant== that is property preserved by isomorphism like the number of vertices, edges and degree sequence.

# Section 10.4 Connectivity

## Section Summary 

- Paths
- Connectedness in Undirected graphs
- Vertex Connectivity and Edge connectivity
- Connectedness in Directed graphs
- Paths and Isomorphism
- Counting Paths between Vertices

## Paths

Definition:
A ==path of length $n$ from $u$ to $v$== in $G$ is a sequence of $n$ edges $e_{1},\cdots,e_{n}$ of $G$ such that $e_{i}$ has the endpoints $x_{i-1}$ and $x_{i}$. ($x_{0}=u,x_{1},\cdots,x_{n-1},x_{n}=v$)

If the graph is simple, we denote the path by vertex sequence $x_{0},x_{1},\cdots,x_{n}$.

If $u=v$, the path is a ==circuit==. It is said to ==pass through== $x_{1},\cdots,x_{n-1}$ and ==traverse== the edges $e_{1},\cdots,e_{n}$. A path or circuit is ==simple== if it does not contain the same edge more than once. 

## Degrees of Separation

Paths in Acquaintanceship graphs.

## Erdos Numbers and Bacon Numbers

Two special length of shortest path.

## Connectedness in Undirected Graphs

Definition:
An undirected graph is called ==connected== if ==there is a path between every pair of vertices==.

## Connected Components

Definition:
A ==connected component== of $G$ is a connected subgraph of $G$ that is not a proper subgraph of another connected subgraph of $G$. A graph is not connected(or disconnected) if it has two or more connected components.

## Connectedness in Directed Graphs

Definition:
A directed graph is ==strongly connected== for every pair of $u$ and $v$ if there is a path from $u$ to $v$ and a path from $v$.
A directed graph is ==weakly connected== if there is a path between every two vertices in the underlying undirected graph.

Definition:
The maximal strongly connected subgraphs are called the ==strongly connected components or strong components== of $G$.

## Counting Paths between Vertices

Theorem:
Let $G$ be a graph with adjacency matrix $A$ with $n$ vertices(directed or undirected, multiple edges and loops allowed). The number of ==different paths== of length $r$ from $v_{i}$ to $v_{j}$ ==equals to $(i,j)$ entry of $A^{r}$==.
Proved by mathematical induction.

# Section 10.5 Euler and Hamiltonian Graphs

## Section Summary

- Euler Paths and Circuits
- Hamilton Paths and Circuits
- Applications of Hamilton Circuits

## Euler Paths and Circuits

Definition
An ==Euler circuit== in a graph $G$ is a simple circuit containing ==every edge== of $G$. An ==Euler path== in $G$ is a simple path containing ==every edge== of $G$. 

## Conditions for Euler Circuits and Paths

Euler circuits:
The ==degree== of every vertex ==must be even==.

Euler paths:
Has exactly two vertices of odd degree as initial vertex and final vertex.

## Algorithm for Constructing an Euler Circuits

For an connected multigraph with all vertices of even degree.
- Choose an ==arbitrary vertex as initial vertex==.
- Choose vertex with edges successively and ==add to form a path that returns to initial vertex==.
- If there exist other edges in $G$, ==construct a subcircuit== beginning at a vertex ==in the rest graph that is also an endpoint in circuit==. 
- ==Insert== the subcircuit at appropriate position in circuit and ==remove== corresponding vertices and edges in the rest graph.
- Repeat until all vertices are included.

## Applications of Euler Paths and Circuits

- Finding a path or circuit that traverses each
- Layout of circuits
- Network multicasting
- Molecular biology

## Hamilton Paths and Circuits

Definition:
A simple path in $G$ that passes through every vertex exactly once is called a ==Hamilton path==. And a simple circuit in $G$ that passes through every vertex exactly once is called a ==Hamilton circuit==.

## Necessary Conditions for Hamilton Circuits

No simple ==necessary and sufficient conditions== for the existence of Hamilton circuit.

Necessary conditions:
- Dirac's Theorem:
	$G$ is a simple path with $n\geq 3$ vertices such that degree of every vertex in $G$ is $\geq n/2$, then $G$ has a Hamilton circuit.
- Ore's Theorem:
	$\mathrm{deg}(u)+\mathrm{deg}(v)\geq n$ for each pair of ==nonadjacent vertices==, then $G$ has a Hamilton circuit.

## Applications of Hamilton Paths and Circuits

- Traveling salesperson problem(TSP)
- Gray codes