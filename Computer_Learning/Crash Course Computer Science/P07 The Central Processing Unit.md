---
Date: 2025-08-05T22:24:00
---
# Fundamental Functions

Execute the various ==instructions==.

# Preparation

It needs one ==memory==, ==storing the data== and has some ==temporary registers==, being used to ==temporarily store and manipulate values==, one ==instruction address register==, ==storing the memory address of current instruction==, one ==instruction register==, ==storing the current instruction==.
![[Components of CPU.png]]
Not only the ==data== can be stored in the memory, but the ==instruction== can be also done in the form of binary. The instruction can be specified by the ==opcode==. 
# Three Phases

## Fetch Phase

Suppose a instruction of 8-bit, whose first four bit '0010' is the opcode of writing the data in the address of the last four bits to the register A.

When booting up the computer, all of our registers start at 0. Then the ==instruction address register== finds the address of 0 in memory, and then the memory returns the data(instruction) to the instruction register.
![[Fetch Phase.png]]

## Decode Phase

The instruction in the instruction register are decoded and interpreted by a ==control unit==. It is composed of logic gates to ==judge if the opcode is the type the control unit matches==.
The figure is a example to check if the opcode matches '0010'.
![[Decode Phase.png]]

## Execute Phase

If the circuit to check if the instruction matches its type is 1, then the ==write enable wire of corresponding register and the read enable wire of the memory== will be open. Then the operand in the instruction register will be ==pass as the address input to activate corresponding memory==. Then the data wire will ==read the corresponding data and pass it to corresponding register==.
![[Execute Phase.png]]
The the ==all wire can be closed== and we ==increment the instruction address register by 1==.

# A New Level of Abstraction--Control Unit

We need not to focus on every decode circuit. We can package them all up to a single ==Control Unit==.
![[Control Unit.png]]
So the whole process is like:
The instruction address register pass its data to the address input and then the corresponding data in that address is passed from the RAM to the instruction register. That is ==fetch phase==. 
Then the control unit checks the type of the instruction. That is the ==decode phase==. 
The control unit passes the operand in the instruction register as the address input, opens up read enable or write enable wire of RAM and opens up the corresponding write enable wire of register. At last the all circuit turns down and the instruction address register increments by 1. That is the ==execute phase==.

# Append ALU to the Control Unit

Since some instruction might need the calculation of ALU, we need the ALU unit connects the control unit. Suppose there is a operation in the instruction register that ==adds the value in register B into the value in register A==.
In the execute phase, control unit gets the data in register A and register B and then pass the two data and the operation code to ALU as inputs. Then the output will be stored in ==temporary register in control unit== rather straightly be passed into register A in case the addition operation is repeated forever. And we ==cut down the input wire of ALU== and ==pass the result to register A==. At last all circuit turns down and the instruction address register increments by 1.
![[Append ALU to the Control Unit.png]]

# Clock

The clock ==triggers the electrical signal at a precise and regular interval==, which is used by the control unit to advance the internal operation of CPU. The speed of CPU to fetch, decode and execute is called ==clock speed==.
So the ==overclocking(超频)== is to modify the clock to speed up the tempo of CPU and the underclock is to speed it down. The overclocking will improve the ability of CPU but it might make it ==overheat or produce gobbledygook(乱码)== as the signals fall behinds the clock. The underclocking will reduce the usage of power.
![[Clock.png]]
# Complete CPU Chip

So now we can connects the clock to the control unit. And a new level of abstraction--==CPU chip==.
![[CPU chip.png]]