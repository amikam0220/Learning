---
Date: 2026-03-11T14:24:00
---
# Chapter 1 of Textbook

## 1.1 What is Software Engineering

- Purpose: develop software-based systems to achieve business goals
- Differences between software engineering and programming
	Software focuses on ==understanding== the interaction between system-to-be and its users and the environment and ==design==. Programming focuses on codes and the implementation of design
- What is software engineering
	Understand business problems, inventing solutions, evaluating alternatives and making design tradeoffs and choices.
- Each part of software may be easy but the problem may be difficult
- Software engineering relies on our ability to think about space and time, processes and interactions between processes and structures.

### 1.1.1 Why Software Engineering Is Difficult

- Not only need knowledge about ==software domain== but also ==problem domain==
- Software is a ==formal domain== while the real world is ==informal==.
- Modeling the physical world and finding good abstractions, which is just ==approximations==.
- Product line and development standardization are largely missing.

### 1.1.2 Book Organization

- Object-Oriented Software Engineering(OOSE)
- Techniques for problem understanding and specification
- Metrics for measuring the software process and product quality
- Advanced tools for software design
- Structured data representation using XML.
- Building blocks for complex software
- Service-oriented architectures and Web services.

## 1.2 Software Engineering Lifecycle

The common software development phases are as follows:
- Requirements Specification
	Understanding the usage scenarios and deriving the ==static== domain model
- Design
	Assigning responsibilities to objects and specifying detailed ==dynamic== of interactions under different usage scenarios.
- Implementation
	Encoding the design in a programming language
- Testing
	Testing individual components(unit testing) and the entire system(integrating testing)
- Operation and maintenance
	Running the system and fixing bugs and adding new features.

The activities proceed in a sequential manner, called ==waterfall process==.
![[Waterfall method.png]]
However, there exists differences for software development
- Software is ==intangible== and hard to visualize.
- Software is ==complex== artifact.
- Software is ==flexible== artifact.

The differences leads to ==incremental and iterative== development methods:
- Break the big problem down into ==smaller pieces(increments)== and ==prioritize== them.
- In each iteration ==progress== through the development in more depth
- Seek the customer ==feedback== and change based on improved understanding.

The key is to progressively deepen the understanding or visualization of the target product by both advancing and retracting to earlier activities to rediscover its features.

The key tools to facilitate communication among develops:
- Modular design
	break up the system in modules
- Symbol language
	Like the symbols in mathematics to facilitate the readers' understanding of the material.(Unified Modeling Language(UML))
- Project and product metrics
	Tracking the work quality and progress towards completion
- Design heuristics
	Also known as ==patterns==. Create a design language for naming and describing the best practices.

==Divide-and-Conquer== approach is decomposing a problem into simpler ones, which is common in many fields. In software development it is embodied in ==modularity==. In each module the source code can be written and maintained independently.

### 1.2.1 Symbol Language

What we use is the ==short-term== memory, also called ==working memory==, only temporarily memory for about 7 projects. So we organize information on higher levels of abstractions, which is called ==chunking==.

The primary symbol language of this book is UML. It is used when documenting the completed design rather than for initial sketches.

![[example of UML.png]]

### 1.2.2 Requirement Analysis and System Specification

- Start at the ==customer statement of work(customer statement of requirement)== or the ==vision statement==
- First step is ==requirements analysis== or ==systems analysis==.
	Understand the problem and delimit its scope, produce the system specification.
	A popular technique for requirement analysis is ==use case modeling==. The use case specify ==what information must pass the boundary of the system== of a dialog. Each use-case name must include a ==verb capturing the goal achievement==.

### 1.2.3 Object-Oriented Analysis and the Domain Model

Use cases consider the system as a ==black box==. The next step is to ==model the inside of the system== by ==building the domain model== to shows what the black box encloses. 

Use cases elaborate the system's ==behavioral characteristics== while the domain model details the system's ==structural characteristics==.

We cannot delimit domain analysis to what the black box will envelop and we need to consider entities that ==are both external and internal to the software-to-be==.

### 1.2.4 Object-Oriented Design

In software development, the key activity in the design phase is ==assigning responsibilities== to software objects. 

Design is the creative process of searching how to implement all of the customer's requirements.

A key problem of design is that we cannot know for sure if a design will work unless we ==implement it and try it==.

The issues of software design include:
- Design quality evaluation
- Design for change
- Design for reuse

### 1.2.5 Project Effort Estimation and Project Quality Measurement

==Incremental and iterative== methods contributes a lot to project effort estimation and project quality measurement.
The ==contiguous participation in all important decisions of customer== also affect the project effort estimation and project quality measurement. 
