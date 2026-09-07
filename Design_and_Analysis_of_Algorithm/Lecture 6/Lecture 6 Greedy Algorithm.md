---
Date: 2026-06-08T11:11:00
---
# Content

- Applications of Greedy algorithms
	- minimum spanning trees
	- Huffman encoding
	- set cover
- Optimality proof
	- optimal substructure + greedy choice
	- matroid

# Characteristics of greedy algorithm

- efficient
- easy to implement
- ==not guarantee an optimal solution==
- Often used as an ==approximated algorithm==

# Minimum Spanning Trees

Input: An undirected graph $G=(V,E)$, edge weights $W_{e}$
Output: A tree $T=(V,E^{\prime}),E^{\prime}\subseteq E$ that minimizes $\mathrm{weight}(T)=\sum_{e\in E^{\prime}}W_{e}$.
(MST is not unique)

## A Greedy Approach

Kruskal's MST algorithm:
- Start with the empty graph
- Repeatedly ==add the next lightest edge== that doesn't produce a cycle.

```
Input: a connected undirected graph G=(V,E) with edge weights
Output: A minimum spanning tree defined by the edges X

for all u in V:
	makeset(u) /* create a set only containing u, i.e., each vertex is a connected componenet */

X = {}
Sort the edges E by weight
for all edges {u,v} in E, in increasing order of weight:
	if find(u) != find(v) /* check whether u and v are in a same set(whether is connected) */ 
		add edge {u,v} to X 
		union(u,v) /* merge the sets containing x and y */
```

$\left| V \right|$ `makeset`, $2\left| E \right|$  `find`, $\left| V \right|-1$ `union`.
The total time: $O((|V|+|E|)\log|V|)$ if implemented with ==disjoint sets==.(the main factor is sort. $O(E\log E)\implies O(E\log V)\implies O((|V|+|E|)\log|V|)$).

## Disjoint Set

Disjoint sets contain the nodes of a particular component. We use ==a directed tree to store disjoint trees==. Node of tree are elements of the set. Each node has a parent pointer and eventually leads up to the root of the tree.
Each node has a ==parent pointer $\pi$ and a rank(the height of the subtree rooted at that node)==.
- `makeset(x)`: $O(1)$.
- `find(x)`: Follow the parent pointer to the root of the tree. $O(\log n)$.
- `Union(x,y)`: make the root of shorter tree point to the root of the taller tree. The overall height increase only if equally tall. $O(\log n)$.

![[disjoint set operations.png]]

Properties:
- For any $x\neq \pi(x),rank(x)<rank(\pi(x))$
- Any root node of rank $k$ has at least $2^{k}$ nodes in its tree.
- If there are $n$ elements overall, there can be at most $n / 2^{k}$ nodes of rank $k$.

## The Cut Property

Cut: any partition of the vertices into two groups, $S$ and $V-S$.
Cut property: Suppose edges $X$ are ==part of a MST of $G=(V,E)$==. Pick any subset of nodes $S$ for which $X$ does not cross between $S$ and $V-S$ and let $e$ be ==the lightest edge across this partition==. Then $X \cup \{ e \}$ is a part of some MST.

# Prim's Algorithm

```
X = {}
repeat until |X| = |V| - 1:
	pick a set S in V for which X has no edges between S and V-S
	let e in E be the minimum-weight edge between S and V-S
	X = X and {e}
```

It is also greedy algorithm. And it is similar to Dijkstra algorithm. 
```
procedure prim(G,w)
Input: A connected undirected graph G=(V,E) with edge weights
Output: A minimum spanning tree defined by the array prev

for all u in V:
	cost(v) = infinity /*cost(v) = min w(u,v) where u in S*/
	prev(u) = null
Pick any initial node u_0
cost(u_0) = 0

H = makequeue(V) /*priority queue with cost-values as keys*/
while H is not empty:
	v = deletemin(H)
	for each {v,z} in E:
		if cost(z) > w(v,z):
			cost(z) = w(v,z)
			prev(z) = v
			decreasekey(H,z)
```

$O((|V|+|E|)\log|V|)$.

Comparison of Kruskal and Prim
![[comparison of Kruskal and prim.png]]

# Huffman Encoding

Prefix-free encoding:
- Represented by a ==full binary tree==
- Symbols are at the leaves
- Codeword is a path from root to leaf, interpreting left as 0 and right as 1.
![[example of Huffman code.png]]

To find the optimal coding tree, given the frequencies $f_{1},\cdots,f_{n}$ of $n$ symbols, then define the ==frequency of any internal node to be the sum of the frequencies of its descendant leaves==. 

Construct the tree greedily:
- Find two symbols ==with the smallest frequencies $f_{1},f_{2}$==
- Pull $f_{1}$ and $f_{2}$ off the list of frequencies and insert $f_{1}+f_{2}$ and loop
![[construct tree greedily.png]]
$n$ leaves and $n-1$ inner nodes.
```
let H be a priority queue of integres ordered by f[1...n]
for i = 1 to n: insert(H,i) // insert all nodes into heap
for k = n+1 to 2n-1: // initially n nodes for leaves and the last is 2n-1
	i = deleteMin(H), j = deleteMin(H)
	create a node numbered k with children i,j
	f[k] = f[i]+f[j]
	insert(H,k)
```
$O(n\log n)$.

# Set Cover Problem

- Input: a set of elements $B$, sets $S_{1},\cdots,S_{m}\subseteq B$
- Output: a selection of the $S_{i}$ whose union is $B$
- Cost: number of sets picked

Greedy algorithm:
	repeat until all elements of $B$ are covered:
		pick the set $S_{i}$ with the largest number of uncovered elements

For example:

![[example of set cover problem.png]]

$S_{a}$ represents $\mathrm{Adj}(a)\cup \{ a \}$.

Use greedy algorithm:
- pick $S_{a}$, the rest elements are $c,j,f,g$
- pick $S_{c}$
- pick $S_{j}$
- pick $S_{f}$
thus a greedy solution is $\{ S_{a},S_{c},S_{j},S_{f} \}$
An optimal solution is $\{ S_{b},S_{e},S_{i} \}$.

Suppose $B$ contains $n$ elements and the optimal cover consists of $k$ sets. Then greedy algorithm will use at most $k\ln n$ sets.

To approximate the effect of approximation solution and ==make it generic for maximum problem==, we use ==approximation factor==:
$$
\Delta=\mathrm{max}\left\{  \left| \frac{c}{c^{*}} \right| ,\left| \frac{c^{*}}{c} \right|   \right\}
$$
where $c$ is the approximation solution and $c^{*}$ is the optimal solution. The closer the approximation factor is to ==one==, the better the approximation algorithm performs.

# Matroid Theory

The theory is used to judge ==whether the greedy algorithm can obtain optimal solution==.

Independent sets, denoted by $I$, defined in the set $S$, satisfy the following three conditions
- nonempty. empty set is independent
- hereditary: if $A$ is independent set, then any subsets of $A$ is also independent set.
- exchange property: if $A,B$ are independent sets, and $\left| A \right|<\left| B \right|$, then there must exist an element $e\in B$ such that $A\cup \{ e \}$ is also independent  set.
The three conditions can be understood like ==linear independence==.

The set system $(S,I)$ is called a matroid.

If a optimization problem can be modeled as a problem that ==the largest weighted independent set on the weighted matroid==, the greedy algorithm can find optimal solution.
That is, 
- sort the elements in $S$
- consider each element in order. If the element can be added without destroying the independence of $I$, add it. If not, drop it.

