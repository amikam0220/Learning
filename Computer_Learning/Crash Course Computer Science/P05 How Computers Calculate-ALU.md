---
Date: 2025-08-01T22:35:00
---
# Arithmetic and Logic Unit(ALU)

The things that does all computation in a computer.

- Inter 74181: The most famous ALU launched in 1970, which is the first completely encapsulated in a single chip.

There are two units, a ==arithmetic unit== and a ==logic unit==.

## Arithmetic Unit

Responsible for handling all ==numerical operations in a computers==. 

### Half Adder

The circuit adds ==two binary digits==. So it uses two numbers as input and one result of two bits for output.
The operation of this calculation has the same result with ==XOR== gate except for ==two 1 as inputs== since the 1 need to be carried to the next column. So it need another wire to represent the ==carry bit==, which can be performed by ==AND== gate.
![[Half Adder.png]]

### Full Adder

The other addition operations need to add ==three bits==, two input and one carry from the former column. So the full adder are used to achieve the operation, three numbers as input and one result of two bits for output.
First add two numbers and get a sum and a carry, then add this sum and another number to get the final sum and another carry. If one of the carry is true, then the final carry is true.  
![[Full Adder.png]]

### 8-Bit Adder

It can be used to add to 8-bit number by use one half adder and 7 full adders. If the last carry is 1, the result is too large to represented by the number of bits you are using, called ==overflow==.
![[8Bit Adder.png]]

### Carry-Look-Ahead Adder

When doing similar 16-bit or 32-bit addition, the more time are need due to more carry. So the ==modern computers== use the carry-look-ahead adder to make the computation more ==quick== and the comprehension is the same.

### Other Operations

Add(might with carry) or subtract(might with borrow), negate, increment(add 1 to A) or decrement(subtract 1 from A), pass through without calculate.

The ==multiply and division== are performed as ==more addition and subtraction== in simple ALUs.

## Logic Unit

Perform ==logic operations==, like AND, OR and XOR and can perform ==simple numerical test==, like check whether a number is negative.

## Abstraction of ALU

The ALU will receive two ==three inputs==, two number(8 bits) and an ==operation code(4 bits)== and generate the result(8 bits) and the ==flags==, which are 1-bit output for particular states.
![[ALU.png]]

