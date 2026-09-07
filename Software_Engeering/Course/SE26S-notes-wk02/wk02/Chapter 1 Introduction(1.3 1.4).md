---
Date: 2026-03-15T14:15:00
---
# 1.3 Cases Studies

==Concept maps== is a simple diagrammatic technique for representing knowledge about problem domains, in terms of ==concepts and propositions==. Concepts are defined as regularities designated by a label. Proposition is a basic unit of meaning or expression of ==relation among concepts==.

For example, for the sentence "*My friend is coding a new program*", it can be written as 

| Proposition | Concept | Relation     | Concept |
| ----------- | ------- | ------------ | ------- |
| 1.          | I       | have         | friend  |
| 2.          | friend  | engages in   | coding  |
| 3.          | coding  | constructs a | program |
| 4.          | program | is           | new     |
![[example of concept maps.png]]

Steps to construct a concept map
- Listing all concepts in a given problem domain
- Create the table as above
- Come up with relations among pairs of concepts
- Draw the concepts map

## 1.3.1 Case Study 1:  From Home Access Control to Adaptive Homes

![[cases study 1.png]]

In a basic version, the system could be ==authenticate(are you who you claim to be)== and ==validate(are you supposed to be entering this building)== people attempting to enter a building.

### First Iteration: Home Access Control

Initial goal is to ==support the basic door unlocking and locking functions==.

The above figure shows the locks connected by ==wire-lines== to central PC. It is not necessary. Connections can be wireless and moreover. The PC may not even reside in the house but in the renting office.

The first choice is about ==the user identification==. There are three methods:
- What you carry on you(physical key or another gadget)
- What you know(password)
- Who you are(biometric feature)

If it is with the constraint that user ==should not need to carry any gadgets for identification==, the first method is out. If we constraint that the ==identification mechanism should be cheap==, the third method is out. So we choose password temporarily.

For unlocking, the difficulty is with ==handling the failed attempts==. It should defend dictionary attacks meanwhile allow legitimate user to make mistakes.

For locking ==coupled with light controls==, there exist many problems: detecting the daylight , which light, should to change with season, etc. The problems are difficult to unambiguously define. Thus we have to rely on ==heuristics==.

This illustrates the real problem of heuristics: at a certain point the designer/programmer must ==stop discerning further details and related issues== but ==the problems and bugs will still appears==. 

## 1.3.2 Case Study 2: Personal Investment Assistant

The key motivation for our second case study is that ==how to increase automation of trading in financial markets for individual investors==. 
To simplify our case study, we will assume that the investors only invest in stocks.

### Why People Trade and How Financial Markets Work

People always take risks to ==gain rewards==. The investor objectives could be sorted into ==short-term-gain== and ==long-term-gain==.  According to it, the individuals are divided into "trader" and "investor".
Traders cannot exchange financial securities directly among themselves. They rely on brokers.

### Mechanics of Trading in Financial Markets

Every stock has a quoted ==bid== and a quoted ==ask(offer)==. The trader buys at current ask and sells at current bid. The bid is always lower than the ask. The difference between the bid and the ask is referred to as the ==spread==. There are ==volumes(number of shares) associated with each of those rates(bid/ask) as well==.

Four types of orders are most common and frequently used:
- Market order: An order from a trader to broker to ==buy or sell a stock at the best available price==. ==Quickest but not necessarily the optimal way== to buy or sell a security.
- Limit order: An order to buy or sell ==at a specific price or better==. ==Can only be filled if the stock's market price reaches the limit price==.
- Stop order(stop-less order): A ==delayed market order to buy or sell a security when a certain price is reached or passed==. Generally used to ==limit a loss or to protect a profit== on a stock that they own.
- Stop limit order: A ==combination of stop and limit orders==. Stop order is ==converted== into a limit order if reaching a certain price. Can control the price.

There are two types of security-ownership positions:
- long position: Actual ownership of security regardless of whether personal funds, financial leverage or both. Profits are realized if the price of the security increases.
- short position: First a sale of the stock and purchase at a lower price. The trader initially does not own the stock and begins by borrowing from the investment broker. Profits are realized by the difference between the sale price and the purchase price.

### Computerized Support for Individual Investor Trading

Several choices and constraints should be considered for the system.
- Whether provide brokerage services
- Real-time price quotations are not available for free.

Some professionals think the stock prices can be forecasted. It generates ==technical analysis==. It believe that market prices exhibit identifiable regularities that are bound to be repeated. The core of technical analysis is to explain and forecast for the price action and formation of trends and patterns.

But it is not enough. To get ample materials, doing a sound research before making decision is necessary. This kind of research is called ==fundamental analysis==. It includes market share, innovations, productivity, etc. Number crunching is also useful in fundamental analysis, including sales, EPS(earning per share), etc.

==The clear user's goals== is important. it should be specific as possible. To understand the larger context of the problem is also understand.

Our planned toll is for an ordinary single investor rather than institutional investor or larger brokerage/financial concepts.

# 1.4 The Object Model

An ==object== is a software packaging of data and code together into a unit within a running program. It can be interact by calling other objects. A ==method== is a function associated with an object so that other objects can call on its services. The set of methods along with the exact format for calling each method represents the object's ==interface==.

In object-oriented terminology, objects communicate with each other by sending ==messages==. A ==client== requests the execution of a method from a ==server== by sending messages.  

An ==attribute== is an item of data named by an identifier that represents some information about the object. The currently assigned values for attributes describe the object's internal ==state== or current condition of existence. A ==class== is a collection of objects that share the same set of attributes and methods.

Objects have special methods called ==constructors== which are called at the creation of an object to construct the values of object's data members. 

Procedural approach versus object-oriented approach:
- Procedural approach: Represent solution as ==a sequence of steps== to be followed when the program is executed. It is a ==global== view of the problem as seen by the single agent advancing in a stepwise fashion towards the solution.
- Object-oriented approach: Break up the whole program into software objects with specialized roles and creating a ==division of labor==. It adopts a ==local== view of the problem. 

The level of abstraction, the development of performing the division of labor and the ==divide-and-conquer== approaches(reductionism, modularity, structuralism) are all important for object-oriented approaches.

## 1.4.1 Controlling Access to Object Elements

To avoid subprograms infringe on each other's data in loose modules, object oriented approach emphasizes ==state encapsulation==, which means hiding the object state so that it can be observed or modified only via object's methods.

When designing a class, we decide what internal state it has and how it to appear on the outside. The internal state is also known as class ==instance variables==. The external state accesses through method calls, called `getters` and `setters`, or `accessor` and `mutator`. They are the ==interface== of objects. 

Access to object attributes and methods is controlled by ==access designations==, including public, protected and private. So the designing of object can be divided into three parts: ==public interface==, ==the terms and conditions of use(contracts)== and the ==private details of how it conducts its business(implementation)==.

UML notation are used to represent software class. It has three compartments: classifier name, attributes and operations. `-` represents private, `#` represents protected and `+` represents public.

## 1.4.2 Object Responsibilities and Relationships

The key characteristic of object-orientation is the concept of ==responsibility== that an object has towards other objects. Responsibilities characterize the ==whole system design==. 

The key object responsibilities:
- Knowing something(memorization of data or object attributes)
- Doing something on its own(computation programmed in a method)
- Calling methods of other objects(communication by sending messages)
The responsibilities can be specified, like calling constructor methods for 3, business rules for implementing business policies and procedures for 2, etc. 

The basic types of class relationships are ==inheritance==, where a class inherits elements of a base class, and ==composition==, where a class contains a reference to another class. These relationships can be further refined as:
- Is-a relationship(hollow triangle symbol $\Delta$ in UML diagrams): A class inherits from another class(base class) 
- Has-a relationship: A class contains another class
	- Composition relationship(filled diamond symbol in UML diagrams): The contained item is an integral part of the containing item.(e.g. a leg in a desk)
	- Aggregation relationship(hollow diamond symbol): The contained item is an element of a collection but it can also exist on its own(e.g. a desk in office)
- Uses-a relationship(arrow symbol): A class uses another class
- Creates relationship: A class creates another class(calls a constructor method)
Has-a and Uses-a relationships can be seen as types of composition.

## 1.4.3 Reuse and Extension by Inheritance and Composition

Two important types of relationships in the object model enable reuse and extension: ==inheritance and composition==. Inheritance relations are static, defined at the compile time and cannot change for the object's lifetime while composition is dynamic which is defined at run time. 

The subclasses can inherit the methods of superclass or ==overrides the methods== to do corresponding things. This property that the same method behaves differently on different subclasses of the same class is called ==polymorphism==.

The key idea of inheritance is to ==place the generic algorithms in a base class== and inherit them into ==different detailed contexts of derived classes==. Inheritance is a strong relationship, in that the derivatives are inextricably bound to their base classes.