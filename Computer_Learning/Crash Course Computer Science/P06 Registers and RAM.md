---
Date: 2025-08-04T22:36:00
---
# Construction of Single Bit Memory

## The Circuit to Record "1"

The circuit is created by ==connecting the output as another input==, denoted B, with OR gate and another input, denoted by A. ==First we set A and B are all 0==. When we flip input A to 1, the output will be 1 and the input B will be 1 immediately. Whenever we change the input of A, the output will always be 1. And the circuit records 1.
![[Circuit of Record 1.png]]

## The Circuit to Record "0"

We just need to replace the OR gate to the AND gate. First we set A and B are all 1. And other transformation are similar to the upper circuit. And the Circuit records 0.
![[Circuit to Record 0.png]]

## AND-OR Latch

The AND-OR latch is the circuit that can ==memory the last input information==(one bit).
It has two inputs--the ==set== input, which sets the output to 1 and the ==reset== input, which sets the output to 0. When the two inputs are all 0, the circuit will restore the last input as the output.
![[AND-OR Latch.png]]
This is called a "==Latch==" because it catches a particular value and stays that way. The action of putting data into memory is called ==writing== whereas getting the data out is called ==reading==.

## Gated Latch

To make the latch more easier to use, we transform it to be single wire to input data, called ==data input wire==. And we also need a wire that enables the memory, called ==wire enable line==. 
![[Gated Latch.png]]

When inputting the wire enable line 1, the output can be modified, depending on the data input. Otherwise the output cannot be modified.

# Register

A group of latches operating like before is called a ==register==, which holds a single number. The number of bits in a register is called a ==width==.
Early computers had 8-bit registers and then 16, 32, 64.

## 8-Bit Register

We can ==connect all write enable line with a single wire==. When setting the enable line to 1, we can send our data to the data input wires. Then we can set it back to 0.
![[8-Bit Register.png]]
The latches are put ==side-by-side== for small number of bits.

## $16\times16$ Latch Matrix

When there are large number of latches, the register will need ==too more wire== if they are set ==side-by-side==. For example, a 64-bit register needs 64 wires for data input and 64 wires for output and 1 wire to control.

The solution is to set the latches by ==matrix==. For example, for 256-bit register, we can use a $16\times16$ matrix to set these latches We set input and get output from ==single data input/output wire== and control writing and reading by ==one writing enable wire and one reading enable wire==. To activate any one latch, we just need to turn on the corresponding ==row and column wire==.
![[16 times 16 Latch Matrix.png]]
When writing, the row wire, the column wire and the write enable line must be all 1. Then we can ==set input the data to the single data wire== since ==other latches are not activated==. And the same things can be done when reading.
![[Constructure of Latch Matrix.png]]
Then this method just need 35 wires(1 writing enable wire, 1 reading enable wire and 1 data input/output wire and 32 column + row wires)
Actually, the method is to ==get the space by sacrificing time== since we cannot ever writing all latches at the same time.

## Memory Address

The one way to specify each latch for each intersection. Like the 12th row and 8th column can be represented by binary 1100 1000. So we need a special component called a ==multiplexer== to convert the address represented by binary into corresponding row and column. We ==input the number of the address== and it ==connects the input line to a corresponding column or row wire==. Generally one multiplexer handles the rows and another handles the columns.
![[Multiplexer.png]]

## Abstraction of Memory

For a 256-bit memory, it needs a 8-bit address, one date line, one write enable line and one read enable line.
![[Abstraction of Memory.png]]
When we need to scale up the memory to store a 8-bit number once, we can ==put the 256-bit memory in a row==. And we have 8 data wires and 8 address wires to respectively store 1 bit ==in each 256-bit memory in their same addresses==. And we can store 256 bytes at 256 different addresses.
![[Scale Up of 256-Bit Memory.png]]
Then, a new level of abstraction.
![[Simple RAM.png]]
This is a uniform bank of addressable memory. Each address can input or output a 8-bit number. It can be accessed any memory location at any time in a random order. So it is called ==random-access memory or RAM==.

The upper memory is a piece of ==SRAM(static random-access memory)==, which uses latches. Other types of RAM like DRAM, flash memory and NVRAM have the ==similar function and essence of nested matrices of memory cells== but with ==different circuits==.