---
Date: 2025-10-20T18:19:00
---

Priority Queue(heaps): delete the element with highest priority.

# ADT 

Objects: A finite linear list with elements
Operations:
- Initialize
- Insert
- Delete min
- Find min

# Implementations

Complete binary tree implemented by array.

The root node is at location with index 1.

It has no pointers and can traverse the tree fast. But need to estimate the scape of heap.

# Binary Heap

Includes ==min heap== and ==max heap==.

Min (max) heap is a complete binary tree in which the key value in each node is no larger(smaller) than the key value of its children.

# Basic Heap Operations

## Insertion

- Insert the new node at the end of heap
- Go back up to compare with its parent. If the order is incorrect, swap.(In implementation, replace rather than swap)

Best case $T(N)=O(1)$, worst case $T(N)=O(\log N)$.

## Delete Min(Max)

- Move the last element to deleted root node.
- Go down to compare with its larger(smaller) children. If the order is incorrect, swap.(In implementation, replace rather than swap)

$T(N)=O(\log N)$

## Build Heap

- Directly insert all unordered elements into the array.
- From the last node that have children, adjust the small tree to be heap.

$T(N)=O(N)$

# $d$-Heaps

All non-leaf nodes except the last one have $d$ children.

The total complexity would be $O(d\log_{d}N)$.

However, only $2$-heap can use ==bit shift==. And the $d$ is not good as large as possible.

