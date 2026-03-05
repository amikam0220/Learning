---
Date: 2026-01-17T16:36:00
---
# Performance Realities

In this chapter, we will explore ==how to make programs run faster via several different types of program optimization==.

# Optimizing Activities

Writing a efficient program requires several types of activities:
- Appropriate ==algorithms== and ==data structures==.
- Understand the ==capabilities and limitations of optimizing compilers==.
- Divide a task into ==portions== that can be computed ==in parallel==.

We concentrate on 2 and 3. (1 is about data structure and algorithm)

# Capabilities of Optimizing Compilers

==Some== programming languages are more ==easily optimized than others==. ==Some== features of C, such as the ability to perform pointer arithmetic and casting, make it ==challenging for a compiler to optimize==.(need ==manually== optimize the code)

# Limitations of Optimizing Compilers

Sometimes the unoptimized version and optimized version has different behaviors.
For example,
```
void twiddle1(int *xp, int *yp)
{
	*xp += *yp;
	*xp += *yp;
}

void twiddle2(int *xp, int *yp)
{
	*xp += 2* *yp;
}
```

When ==`xp` and `yp` are equal==, the result of `twiddle1` will be increased by a factor of 4 while `twiddle2` will be increased by a factor 3.

# Optimization Blocker: Memory Aliasing

Aliasing:
- Two ==different memory references specify single location==
- Easy to happen in C(allowed to do address arithmetic and direct access to storage structures)
- Get in habit of introducing ==local variables== to avoid.

# Expressing Program Performance

Cycles per element, abbreviated ==CPE==,  as a way to ==express program performance== and help us ==understand the loop performance of an iterative program==.

# CPE

For example,

![[CPE example.png]]

The function between cycles and elements can be characterized as $y=kx+b$, where $k$ is ==CPE==.
![[cycle and elements.png]]

# Benchmark Example: Data Type for Vectors

Basic Definitions:
![[data type for vectors.png]]

Basic Computation:
![[combine1.png]]

# Eliminating Loop Inefficiencies

![[combine2.png]]
==Code motion== reduces the computations that is ==performed multiple times== but such that the result of the computation will not change, improving the efficiency of loop.

# Reducing Procedure Calls

![[combine3.png]]

This version moves the `get_vec_start()` from inner loop outward. No function calls in the inner loop and it ==access the array directly==.

However, ==there is no apparent performance improvement== and for integer sum even worse.

Since ==for each iteration==, the value read from `dest` at the beginning and write to `dest` at the end, ==causing reading and writing wasteful==.

# Eliminating Unneeded Memory References

![[combine4.png]]Introduce a ==temporary variable `acc`== in the loop to ==eliminate needless reading and writing of memory==. Compared to `combine3`, we reduce the memory operations from two reads and one write to just a single read in each iteration.

# Combine3 vs. Combine4

If we create an alias between ==the last element of the vector and the destination for storing the result==. Then  `combine3` will get wrong answer. So if operate memory directly:
- With lower capacity
- Risk of memory alias

# Classwork

Problem 5.3

# Modern CPU Design

![[Modern CPU Design.png]]

# Superscalar Processor

A superscalar processor can ==issue and execute multiple instructions in one cycle==. The instructions are retrieved from a sequential instruction stream and are scheduled dynamically. So it can take advantage of ==instruction level parallelism==.

# Functional Unit Performance

- Latency: the total clock cycles required to perform the operation.(Fetch to PC renew of one operation)
- Issue time: the ==minimum number of clock cycles== between ==two successive operations of the same type==.(the first fetch to the second fetch, may parallelism so may less than latency)
- Capacity: the ==number== of functional units capable of ==performing that operations==.
- Throughput: the reciprocal of issue time. (the number of operations per clock cycle, derivative of capacity, operation/cycle)
Difference between latency and issue time, e.g.:
```
a = b * c # 0-4 cycle for mul
d = a + e # 5 cycle: need receive the result of mul, latency of mul is 5 cycles 
```

```
a = b * c # 0 cycle
d = e * f # 1 cycle
# parallelism. Issue time 1 cycle
```

# Two Fundamental Bounds on the CPE Values

- Latency bound: A ==minimum value for CPE== for any ==function that must perform the combining operation in a strict sequence==.(bounded by latency, sequential)
- Throughput bound: a ==minimum bound for CPE== based on the ==maximum rate at which the functional units can produce results==.(bounded by issue time, parallelism)

# Abstract Model of Processor Operation

- Data-flow representation: a ==graphical notation== showing how the data dependencies between the different operations ==constrain the order in which they are executed==.
- Critical paths: a ==lower bound on the number of clock cycles== required to execute a set of machine instructions(sequential)

# From Machine-Level Code to Data-Flow Graphs

![[data-flow graphs of combine4-1.png]]
- Delete operations that not change registers.
- Delete registers that are not changed.

![[data-flow graphs for combine4-2.png]]

#  Loop Unrolling

![[combine5.png]]

This version use ==loop unrolling== to reduce the amount of iterations and opportunities for ==prediction failure==.
And it reaches latency bound.

![[data flow graph of combine5.png]]

# Enhancing Parallelism

![[combine6.png]]

This version use loop unrolling by 2 and ==handle two accumulate in parallel for each iteration==, breaking the latency bound.
![[data flow graph of combine6.png]]

# Reassociation Transformation

![[combine7.png]]

The version reassociates the calculation in the loop, ==removing use of extra register== and ==parallelism universally for addition, reducing the length of critical path==.
![[data flow graph for combine7.png]]


Meanwhile, the loop unrolling will reaches threshold when the factor reaches a bound.

# Classwork

Problem 5.8, 5.15
