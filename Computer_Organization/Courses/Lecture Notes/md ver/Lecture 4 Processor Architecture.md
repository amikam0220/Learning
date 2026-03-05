---
Date: 2026-01-17T08:53:00
---
# Processor Architecture

We introduce the processor architecture Y86-64, simplified from X86-64. 

# Y86-64 Processor State

![[Y86-64 processor state.png]]

- Program registers
	- 15 registers(omit `%r16`, only for x86), each 64 bit
- Condition codes
	- single-bit flags by arithmetic or logical instructions.
- Program Counter
	- Indicate address of ==next instruction==.
- Program status
	- Indicates either ==normal operation== or some ==error condition==
- Memory
	- ==Byte-addressable== storage array.

# Y86-64 Instruction Set

![[Y86-64 Instruction Set.png]]

- Format
	- ==1-10 bytes== of information read from memory.
		- Can ==determine instruction length from first byte==
		- Simpler encoding than x86-64
	- Each accesses and modifies some part of the program.

# Encoding Register

Each register has 4-bit ID
![[Encoding Register.png]]

# Y86-64 Little-endian Encoding

As with x86-64, all integers have ==little-endian encoding==.

# Instruction Decoding

![[Instruction Decoding.png]]

Instruction format
- Instruction byte: `icode:ifun`
- Optional register byte: `rA:rB`
- Optional constant word: `valC`(immediate or address, so on)

# Classwork

problem 4.1

# Digital Signals

Use ==voltage thresholds== to extract ==discrete value== from ==continuous signal==.
![[digital signals.png]]

# Computing with Logic Gates

- Output are ==Boolean functions of inputs==
- Respond continuously to changes in inputs with ==some small delay==

Like, AND gates, OR gates, NOT gates.

# Combinational Circuits

By assembling a number of logic gates into networks, we can construct computational blocks known as ==combinational circuits== with following characteristics:
- Every logic gate input must be connected to exactly one of the following:
	- one of the system inputs(==primary input==)
	- the output connection of some memory element
	- the output of some logic gate
- The outputs of two or more logic gates ==cannot be connected together==.(Two different voltages possibly causes an invalid voltage or circuit malfunction)
- The network must be ==acyclic==. That is, ==continuously responds to changes== on primary inputs and primary outputs become Boolean functions of primary inputs.

# Bit Equality

![[bit equality.png]]

HCL Expression:

`bool eq = (a && b) || (!a && !b)`

different from C, the `=` represents to rename right expression.

HCLI(hardware control language) is very simple hardware description language. And Boolean operations have syntax similar to C logical operations

# Word Equality

Use more ==bit equality== to check for every pair of bit.
`bool Eq = (A == B)`

# Arithmetic Logic Unit

- ==combination logic==: continuously responding to inputs
- control signal selects function computed(4 arithmetic/logical operations in Y86-64)
- also computes values for condition codes

![[Arithmetic Logic Unit.png]]

# Sequential Circuits

Systems that can ==store information==, or, ==have state and perform computations on that state==. It is controlled by ==a single clock==, a periodic signal that ==determines when new values are to be loaded into devices==.

# Register Operation

The register stores data bits. For most of time acts barrier between input and output. As ==clock rises==, ==loads input==.

![[register operation by clock.png]]

# Register File

Register file is a set of registers, stores multiple words of memory. 
![[register file.png]]

In register file, register identifier serves as address.
For ==read ports==, `srcA` and `srcB` passes the addresses of corresponding registers and output the data `valA` and `valB` in corresponding register. It is like ==combinational logic==, output data generated bases on input address after some delay.
For write ports, input the address `dstW` and input the data to be written `valW`. It is like ==register==, update only as clock rises.

For ==multiple ports==:
- can ==read and/or write multiple words in one cycle==.
- can ==read and write simultaneously==.

# SEQ Stages

- Fetch
	Read instructions from instruction memory(address storing in PC)
- Decode
	Read program registers
- Execute
	compute value or address
- Memory
	Read or write data
- Write back
	write program registers
- PC
	Update program counter

![[SEQ stages.png]]

# Executing Arithmetic/Logical Operation

`OPq rA, rB`->`6 fn rA rB`

- Fetch
	Read 2 bytes
- Decode
	Read operand registers
- Execute
	- Perform operation
	- set condition codes
- Memory
	Do nothing
- Write back
	update register
- PC update
	increment PC by 2.

![[Arithmetic or logical ops.png]]
Example:
![[specific example for arithmetic and logical ops.png]]

# SEQ Hardware

![[SEQ Hardware.png]]Here is the total introduction of SEQ hardware and the following are different stages

# Fetch and Write Back Logic

![[Fetch Logic.png]]

Predefined blocks:
- PC: Register containing PC
- Instruction memory: Read 10 bytes(==signal invalid address==)
- Split: Divide instruction byte into `icode` and `ifun`.
- Align: Get fields for `rA`, `rB` and `valC`.

For some instructions without operands `rA,rB` or `valC`, corresponding bytes are just aligned without being computed.

Control logic:
- Instr. Valid: Judge whether the instruction valid.
- Need regids: Judge whether this instruction have a register byte.
- Need valC: Judge whether this instruction have a constant word `valC`.

Suppose the output of Need regids and Need valC are respectively $r$ and $i$, then
`valP = PC + 1 + r + 8i`.

# Decode Logic

![[Decode Logic.png]]

Register file
- Read ports A, B
- Write ports E, M
- Addresses are register IDs or 15.
Control logic:
- `srcA`,`srcB`: read port addresses
- `dstE`, `dstM`: write port addresses
Signals:
- Cnd: indicate whether or not to perform ==conditional move==(computed in execute stage)

Read operations:
![[read operations in Decode.png]]write operations:
![[write operations in Decode.png]]

# Execute Logic

![[execute logic.png]]

Unit:
- ALU
	- implements 4 required functions
	- generates condition code values
- CC
	- register with 3 condition code bits
- cond
	- compute conditional jump/move flag

Control logic:
- Set CC: whether the condition code register should be loaded
- ALU A: input A to ALU
- ALU B: input B to ALU
- ALU fun: What function should ALU compute

Different ALU input and operations:
![[ALU input and operations.png]]

# Memory Logic

![[memory logic.png]]

Memory:
- read or write memory words
Control logic:
- stat: the instruction status
- Mem. read: whether the word should be read
- Mem. write: whether the word should be written
- Mem. addr: Select address
- Mem. data: Select data

# PC Update Logic

![[PC update logic.png]]

New PC:
- Select next value of PC

# Classwork

Problem 4.13
