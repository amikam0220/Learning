---
Date: 2025-09-29T18:31:00
---
# Rooted Trees

## Basic Definition and Terminologies of Tree

Omit.

Note that in PPT and textbook
- ==the level== starts from 0 and root node is on the level 0
- ==Depth== of a root node is 0
- ==Height== of a leaf is 0.
- ==Height of an empty== tree is -1.

## Notation

- Graph Notation
- String notation:
	The root comes first, followed by a list of subtrees.
![[Graph notation of trees.png]]

![[String notation of trees.png]]

## Implementation

First child-Next sibling Representation:
Every node has data field and two pointer fields. One points to its first child and another point to the next sibling.

The representation is ==not unique== since children can be any order.

# Binary Trees

## Basic Definition and Terminologies of Binary Tree

Omit.

Full binary tree:
A binary tree contains maximum of nodes in all levels.

Complete binary tree:
A binary tree is complete filled in each level except possibly the last, and all nodes are as far left as possible.

## Maximum Number of Nodes in BT

- Maximum number of nodes on level $l$ is $2^{l},l\geq 0$.
- Maximum number of nodes of depth $k$ is $2^{k+1} - 1, k \geq 0$.
- The number of nodes in a full binary tree of depth $k$ is $2^{k+1}-1, k\geq 0$.
- Complete binary tree of depth $k$ has $2^{k}\leq n\leq 2^{k+1}-1$ nodes.

## Relations between Number of Leaf Nodes and Nodes of Degree 2

For nonempty binary trees, $n_{0}$ is the number of leaves, $n_{2}$ is the number of nodes of degree 2, then $n_{0}=n_{2} + 1$.

## Implementation of Binary Trees

### Array Representation

The nodes of the tree are ==sequentially== in an array ==level by level== from left to right for each level.
- The ==root node== is indexed with 1.
- For any node indexed $i,1\leq i\leq n$,
	- the left child of $i$ is $2i$.($2i\leq n$)
	- the right child of $i$ is $2i + 1$.($2i+1\leq n$)
	- the parent of $i$ is $\lfloor i/2 \rfloor$.($i\neq  1$)

Usually for ==complete binary tree==.

### Link Representation

```
typedef struct Treenode{
	ElemType data;
	TNode* left, right;
}TNode;
```

## Binary Tree Traversal

- Preorder traversal
- Inorder traversal
- Postorder traversal
- Levelorder traversal

For expression trees, different traversal will produce corresponding ordered expression.

