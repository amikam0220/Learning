---
Date: 2025-07-30T22:21:00
---
# How Computers Store and Represent Numerical Data--Binary

The achievement of binary are similar to decimal just replace the multipliers on each column of 2's. The logic of computation are also similar to decimal.
Each of these digit in binary is called a "==bit==". A "==byte==" is eight bits.

# 32-Bit/64-Bit Computers

Most computers use the first bit for ==sign== and the other bits store the data.
The ==addresses== in computers label locations in the memories.

## 32-Bit Floating Point Number(IEEE 754 Standard)

There are two important numbers to store the floating point number in computer: ==Significand and exponent==.
![[Representation of Floating Point Number.png]]
The first bit is the sign of the number, the next eight bits are the exponent of the number and the other 23 bits are significand of it.
![[Storage of 32bits Floating Point Number.png]]
## Letters

Representing every letter by corresponding number.

### ASCII Codes

The rule used ==8 bits== to represent letter can be used universally to exchanged information by different companies, called ==interoperability==.

#### Limitation

It was originally only designed for English. So ==the usage of codes from 128 to 255== are different in different countries, which make the result in different computers of different countries ==incomprehensible==(incompatible). And it is not enough for Asian computers.
### Unicode

It used the ==uniform rule== of all countries by ==16 bits==, with millions methods to represents letters and other signs. 

