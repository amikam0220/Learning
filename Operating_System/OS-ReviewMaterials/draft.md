# Chapter 1 Introduction

three main purpose of OS
- manage the resources of computer in a possibly efficient and pair way
- provide a convenient and efficient environment for the user to execute the program on the hardware
- as control program, avoid the user programs actions to make error of the computer and management I/O devices.

appropriate to waste when and why
- GUI is designed on the single-user system, which might waste the resources of system but optimize the experience of users.

main difficulty in writing an operating system for a real-time environment
- keep the OS within the fixed time constraints of a real-time system to avoid the breakdown of overall system.

OS applications should include web browsers and mail programs or not?
- if they are embedded into the OS, they will be better able to take advantages of the resources in the kernel and have a better performance than outside.
- the opposite dominates. First, the application is not the part of OS. Second, the performance advantages will be offset by the security vulnerability. Third, the embedding will lead to a bloated OS.

distinction between kernel mode and user mode as a rudimentary form of protection
- certain instructions can only be implemented in kernel mode. hardware devices . interrupt.
- consequently, the CPU are very limited when running in user mode, which will have a rudimentary form of protection

place OS in memory partition that cannot be modified. two difficulties.
- have to be stored or passed through the memory that are unprotected, which might lead to access of unauthorized user. 
- Cannot install the patch and renew

uses of more than two modes of CPU
- provide different types of user mode.
- provide different distinctions of kernel mode

how to use timer to compute current time
- set the timer for some time in the future and go to sleep
- awaken by the interrupt, update the local state, which is used to keep track of the number of interrupts.
- repeat the process
- current time equals base time plus the number of interrupt multiplies the time of interrupt.

two reasons why caches are useful. what problem they solve and cause? why not make cache larger
- two reasons: it solves the speed mismatch problem and reduce the waiting time.
- solve: speed mismatch
- Cause: inconsistency between cache and memory. expensive
- not economical. cache is volatile while the main memory should be non-volatile

client-server and p2p models
- client server: firmly rule the roles of client and server. Client ask servers for services and the server provides corresponding services
- p2p model: not firmly distinguish clients and servers. All node can be either client or servers or both.

# Chapter 2 software processes

purpose of system calls?
- allow user-level processes to request services of OS

purpose of command interpreter? why separate from kernel
- read commands from the user or the file of commands and execute them
- It is easy to changes

start a new process on a UNIX system
- fork() system call and exec() system call
- fork() system call clones the currently executing process. exec() covers the calling process by a new process based on a different exe.

purpose of system program
- a set of system calls that provide basic functionality for users.

advantages and disadvantages of layered approach
- advantages: easier to debug and modify since they just affect sections rather than the whole system
- disadvantages: performance overhead due to layers and the need of careful division layers.

five services by OS and explain. 
- program execution. OS loads the content of a file into memory and begins execution. User-level cannot allocate the CPU time properly.
- file-system manipulation. OS handles the creation, allocation, deletion of file. User-level cannot be trusted to handle the memory blocks of file. 
- I/O operations. OS converts the requests of users into device- or controller-specific command. user-level cannot be trusted to directly access the I/O.
- communication. OS turns messages into packets, transmitted them through communication and reassemble them. user-level cannot coordinate access to network device or receive the message.
- error detection. OS detects the error in both hardware and software. In hardware, all data on media must be checked whether they changed since they are written into the hardware. In software, the consistency of data must be checked.

why some store OS in firmware while some on disk
- for certain devices, such as embedded system, there is no disk with file system. 

how design a choice of OSs from which to boot? what bootstrap program to do?
- OSs are stored on the disks. We design a boot manager. It will execute first when the system startup before the booting into OS. And boot manager is stored at the certain position on the disk to ensure it can be found.
- Bootstrap program will offer a selection of OSs to the users. If no selection, it will boot a default OS.

# Chapter 3 processes

three major complications that concurrent processes adds to OS
- CPU scheduler must be aware of different concurrent processes and choose appropriate scheduler algorithm
- OS must provide one or more methods to handle the communication among concurrent processes
- The memory will limit the concurrent processes. OS must manage memory to support concurrent processes

context switch if new context in register set? if in memory?
- CPU current-register-set pointer will be changed to point to the register set containing the new context, which will takes little time
- If in memory, one of the contexts in the register set will be moved to memory and the new context will be moved to the register set. The time depends on the method to choose victim.

- fork() will only share shared memory segments between parent and child process

RPC mechanism--exactly once
- receive ACK -> remote procedure was performed
- time out -> assume unable to perform remote procedure. invoke RPC a second time with a later timestamp
- two reasons of not receiving RPC of server
	- original RPC never received by the server -> server receives RPC as a new timestamp, perform remote procedure and send ACK
	- RPC was received correctly and performed but the ACK was lost -> server receive a duplicate RPC with a duplicate timestamp. It will send ACK again but will not implement procedure again.

how to ensure exactly once if server failure
- server keep track in stable storage(like disk log) of information about RPC information. When breakdown and receiving RPC, server can check in the stable storage whether it has been performed.

# Chapter 4 Threads and Concurrency

three example that multithreading better than single-threaded
- a web server that each request can be handled by a thread
- a parallelized application such as matrix multiplication
- interactive GUI such as a debugger

Data parallelism and task parallelism
- task parallelism: divide a large task into smaller tasks with different functions to different threads
- data parallelism: divide data into smaller data with same functions to different threads.
- For web server, each thread handle a service request and the logic is the same. It is data parallelism

two differences between user-level and kernel-level threads and which better and circumstance
- User-level threads are unknown by the kernel while kernel-level are known
- user-level are managed by thread library in user space with fast creation and switching. kernel-level are managed directly by OS kernel(slow but take advantages of multiple CPUs)
- when need multiple creation and switches of threads and do not require multiple cores, user-level is better. when need to take advantage of multiple processors and avoid overall process blocked when one thread blocked, kernel-level is better.

actions when switching context between kernel-level threads.
- saving the value of CPU registers from the thread being switch out and restoring the registers of the new thread being scheduled.

resources of creation threads? differ from creation process?
- a small structures to store the register sets, stack and priority
- thread is smaller than process thus the resources is much fewer than process. Process will need a process control block which is a rather large data structure.

Is necessary to bind a real-time thread to a LWP
- yes
- Timing is crucial to real-time thread. If not binding, the real-time thread may wait until an LWP attach to it.

# Chapter 5

difference between preemptive and nonpreemptive scheduling
- preemptive allows the process to be interrupted when executing, taking CPU away and allocate it to another process
- nonpreemptive scheduling only release the CPU when the process finishes the CPU burst.

5.3: 
- $P_{1}\to P_{2}\to P_{3}$. $P_{1}$: 8 - 0.0 = 8; $P_{2}$: 12 - 0.4 = 11.6; $P_{3}$: 13 - 1 = 12; average: $\frac{8+11.6+12}{3}=10.53$
- $P_{1}\to P_{3}\to P_{2}$. after $P_{1}$ are executed, $P_{2},P_{3}$ arrives.
- $P_{3}\to P_{2}\to P_{1}$. after CPU idle, three processes all arrives.

advantages of having different time-quantum size at different levels of a multilevel queueing system
- process with the need of more frequent services can be divided into the queue with smaller time quantum. It can make more efficient use of computer

# Chapter 6

disabling interrupts frequently can affect the system's clock. why and how minimize?
- the system's clock is updated at every clock interrupt. If interrupts are disabled, especially for long banning, the system clock will easily lose the correct time. Reduce the disabling time in a very short time can minimize the effect. 

spinlocks are not appropriate for single processor but used in multiple processor. why
- the condition of release the process for spinlocks is executing another process. For single processor, if the process does not relinquish the processor, other processes cannot be executed. For multiple processors, different processes are executed on different processors. Thus the spinlocks can be unlocked.

