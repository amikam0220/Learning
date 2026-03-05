---
Date: 2026-01-18T09:21:00
---
# Conventional DRAMs

![[conventional DRAMs.png]]

A ==cell== is the smallest storage of 1 bit. The ==supercell== is the addressable smallest unit, usually 8 bits or 1 byte as a supercell.
The ==memory controller== communicates with CPU and DRAMs, translating addresses ==between the virtual address and actual position of DRAM chip==.
The internal ==row buffer== stores data of one complete row after accepting RAS. If ==row hit==(access the same row next time), directly access row buffer to improve efficiency. If ==row miss==, close current row and renew corresponding row.

![[select element in DRAM chip.png]]

# Memory Modules

![[Memory Modules.png]]

Obtain 1 byte from each DRAM with the same row and column to get the 64-bit virtual address or data.

# Locality

Principle of locality:
Programs tend to use ==data and instructions== with ==addresses near or equal to those they have used recently==.

- Temporal locality: recently referenced items are likely to be referenced again ==in the near future==.
- Spatial locality: items with ==nearby addresses== tend to be referenced close together in time.

# Locality Example

```
sum = 0;
for (i = 0; i < n; i++)
	sum += a[i];
return sum;
```
- Data reference:
	- Spatial locality: reference array elements in succession
	- Temporal locality: reference variable `sum` each iteration
- Instruction reference:
	- Spatial locality: Reference instructions ==in sequence==.
	- Temporal locality: cycle through loop ==repeatedly==.
# Classwork

Problem 6.8