
## Chapter 1: Introduction

**1.1 What are the three main purposes of an operating system?**  
_中文：操作系统的三个主要目的是什么？_

**1.2 We have stressed the need for an operating system to make efficient use of the computing hardware. When is it appropriate for the operating system to forsake this principle and to "waste" resources? Why is such a system not really wasteful?**  
_中文：我们强调了操作系统需要有效利用计算硬件。在什么情况下操作系统可以放弃这一原则而“浪费”资源？为什么这样的系统实际上并不是真的浪费？_

**1.3 What is the main difficulty that a programmer must overcome in writing an operating system for a real-time environment?**  
_中文：为实时环境编写操作系统时，程序员必须克服的主要困难是什么？_

**1.4 Keeping in mind the various definitions of operating system, consider whether the operating system should include applications such as web browsers and mail programs. Argue both that it should and that it should not, and support your answers.**  
_中文：考虑到操作系统的各种定义，请考虑操作系统是否应包含Web浏览器和邮件程序等应用程序。分别论证应该和不应该的理由，并支持你的答案。_

**1.5 How does the distinction between kernel mode and user mode function as a rudimentary form of protection (security)?**  
_中文：内核模式和用户模式之间的区别如何作为一种基本的保护（安全）形式发挥作用？_

**1.6 Which of the following instructions should be privileged?**  
a. Set value of timer.  
b. Read the clock.  
c. Clear memory.  
d. Issue a trap instruction.  
e. Turn off interrupts.  
f. Modify entries in device-status table.  
g. Switch from user to kernel mode.  
h. Access I/O device.  
_中文：以下哪些指令应该是特权指令？_  
a. 设置定时器值。  
b. 读取时钟。  
c. 清空内存。  
d. 发出陷阱指令。  
e. 关闭中断。  
f. 修改设备状态表中的条目。  
g. 从用户模式切换到内核模式。  
h. 访问I/O设备。

**1.7 Some early computers protected the operating system by placing it in a memory partition that could not be modified by either the user job or the operating system itself. Describe two difficulties that you think could arise with such a scheme.**  
_中文：一些早期计算机通过将操作系统放在一个用户作业或操作系统本身都无法修改的内存分区中来保护操作系统。描述你认为这种方案可能引起的两个困难。_

**1.8 Some CPUs provide for more than two modes of operation. What are two possible uses of these multiple modes?**  
_中文：一些CPU提供多于两种操作模式。这些多模式有哪些两种可能的用途？_

**1.9 Timers could be used to compute the current time. Provide a short description of how this could be accomplished.**  
_中文：定时器可用于计算当前时间。简要描述如何实现这一点。_

**1.10 Give two reasons why caches are useful. What problems do they solve? What problems do they cause? If a cache can be made as large as the device for which it is caching (for instance, a cache as large as a disk), why not make it that large and eliminate the device?**  
_中文：给出缓存有用的两个原因。它们解决了什么问题？它们会引起什么问题？如果缓存可以做得和它所缓存的设备一样大（例如，缓存和磁盘一样大），为什么不把它做得那么大并消除该设备呢？_

**1.11 Distinguish between the client-server and peer-to-peer models of distributed systems.**  
_中文：区分分布式系统的客户端-服务器模型和对等模型。_

---

## Chapter 2: Software processes (system calls and OS structure)

**2.1 What is the purpose of system calls?**  
_中文：系统调用的目的是什么？_

**2.2 What is the purpose of the command interpreter? Why is it usually separate from the kernel?**  
_中文：命令解释器的目的是什么？为什么它通常与内核分离？_

**2.3 What system calls have to be executed by a command interpreter or shell in order to start a new process on a UNIX system?**  
_中文：在UNIX系统上，命令解释器或shell需要执行哪些系统调用来启动一个新进程？_

**2.4 What is the purpose of system programs?**  
_中文：系统程序的目的是什么？_

**2.5 What is the main advantage of the layered approach to system design? What are the disadvantages of the layered approach?**  
_中文：分层系统设计的主要优点是什么？分层方法的缺点是什么？_

**2.6 List five services provided by an operating system, and explain how each creates convenience for users. In which cases would it be impossible for user-level programs to provide these services? Explain your answer.**  
_中文：列出操作系统提供的五种服务，并解释每种服务如何为用户提供便利。在哪些情况下用户级程序无法提供这些服务？解释你的答案。_

**2.7 Why do some systems store the operating system in firmware, while others store it on disk?**  
_中文：为什么有些系统将操作系统存储在固件中，而另一些将其存储在磁盘上？_

**2.8 How could a system be designed to allow a choice of operating systems from which to boot? What would the bootstrap program need to do?**  
_中文：如何设计一个系统以允许从多个操作系统中选择启动？引导程序需要做什么？_

---

## Chapter 3: Processes

**3.2 Including the initial parent process, how many processes are created by the program shown in Figure 3.31?**  
_中文：包括初始父进程，图3.31中的程序创建了多少个进程？_

**3.3 Original versions of Apple's mobile iOS operating system provided no means of concurrent processing. Discuss three major complications that concurrent processing adds to an operating system.**  
_中文：Apple移动iOS操作系统的原始版本不提供并发处理手段。讨论并发处理给操作系统增加的三个主要复杂性。_

**3.4 Some computer systems provide multiple register sets. Describe what happens when a context switch occurs if the new context is already loaded into one of the register sets. What happens if the new context is in memory rather than in a register set and all the register sets are in use?**  
_中文：一些计算机系统提供多个寄存器组。描述如果新上下文已经加载到其中一个寄存器组中，发生上下文切换时会发生什么。如果新上下文在内存中而不是在寄存器组中，并且所有寄存器组都在使用中，会发生什么？_

**3.5 When a process creates a new process using the fork() operation, which of the following states is shared between the parent process and the child process?**  
a. Stack  
b. Heap  
c. Shared memory segments  
_中文：当进程使用fork()操作创建新进程时，以下哪种状态在父进程和子进程之间共享？_  
a. 栈  
b. 堆  
c. 共享内存段

**3.6 Consider the "exactly once" semantic with respect to the RPC mechanism. Does the algorithm for implementing this semantic execute correctly even if the ACK message sent back to the client is lost due to a network problem? Describe the sequence of messages, and discuss whether "exactly once" is still preserved.**  
_中文：考虑RPC机制中的“恰好一次”语义。实现该语义的算法即使由于网络问题导致返回给客户端的ACK消息丢失，也能正确执行吗？描述消息序列，并讨论“恰好一次”是否仍然得到保证。_

**3.7 Assume that a distributed system is susceptible to server failure. What mechanisms would be required to guarantee the "exactly once" semantic for execution of RPCs?**  
_中文：假设一个分布式系统容易发生服务器故障。需要什么机制来保证RPC执行的“恰好一次”语义？_

---

## Chapter 5: CPU Scheduling

**5.1 A CPU-scheduling algorithm determines an order for the execution of its scheduled processes. Given n processes to be scheduled on one processor, how many different schedules are possible? Give a formula in terms of n.**  
_中文：CPU调度算法决定了其调度进程的执行顺序。给定 n 个进程在一个处理器上调度，可能有多少种不同的调度顺序？给出用 n 表示的公式。_

**5.2 Explain the difference between preemptive and nonpreemptive scheduling.**  
_中文：解释抢占式调度和非抢占式调度的区别。_

**5.3 Suppose that the following processes arrive for execution at the times indicated. Each process will run for the amount of time listed. In answering the questions, use nonpreemptive scheduling, and base all decisions on the information you have at the time the decision must be made.**  
Process: P1 arrival 0 burst 8; P2 arrival 0.4 burst 4; P3 arrival 1.0 burst 1.  
a. What is the average turnaround time for FCFS?  
b. What is the average turnaround time for SJF?  
c. Compute average turnaround time if CPU is left idle for the first 1 unit and then SJF (future-knowledge scheduling).  
_中文：假设以下进程在所示时间到达执行。每个进程将运行列出的时间量。回答问题使用非抢占调度，并根据决策时拥有的信息作出决策。_  
进程：P1到达0突发8；P2到达0.4突发4；P3到达1.0突发1。  
a. 使用FCFS调度，平均周转时间是多少？  
b. 使用SJF调度，平均周转时间是多少？  
c. 如果CPU在第一个1个时间单位内空闲然后使用SJF（未来知识调度），平均周转时间是多少？

**5.4 Consider the following set of processes with burst times and priorities. (All arrive at 0).**  
Process: P1 burst2 prio2, P2 burst1 prio1, P3 burst8 prio4, P4 burst4 prio2, P5 burst5 prio3.  
a. Draw Gantt charts for FCFS, SJF, nonpreemptive priority (larger number higher), RR (quantum=2).  
b. Turnaround times for each algorithm.  
c. Waiting times.  
d. Which algorithm minimizes average waiting time?  
_中文：考虑以下进程集合...（均于0到达）。_  
a. 画出FCFS、SJF、非抢占优先级（数大优先级高）、RR（时间片=2）的甘特图。  
b. 每种算法的周转时间。  
c. 等待时间。  
d. 哪种算法平均等待时间最小？

**5.5 (Round-robin with priorities and idle task) – Gantt, turnaround, waiting, CPU utilization.**  
_中文：（带优先级和空闲任务的循环调度）——甘特图、周转、等待、CPU利用率。_

**5.6 What advantage is there in having different time-quantum sizes at different levels of a multilevel queueing system?**  
_中文：在多级队列系统的不同级别具有不同时间片大小有什么优点？_

**5.7 (Relationship between algorithm sets) – a. Priority and SJF; b. MFQ and FCFS; c. Priority and FCFS; d. RR and SJF.**  
_中文：（算法集合之间的关系）—— a. 优先级和SJF；b. 多级反馈队列和FCFS；c. 优先级和FCFS；d. RR和SJF。_

**5.8 Suppose that a CPU scheduling algorithm favors those processes that have used the least processor time in the recent past. Why will this algorithm favor I/O-bound programs and yet not permanently starve CPU-bound programs?**  
_中文：假设CPU调度算法偏爱那些最近过去使用处理器时间最少的进程。为什么这种算法会偏爱I/O密集型程序，但又不会永久饿死CPU密集型程序？_

**5.9 Distinguish between PCS and SCS scheduling.**  
_中文：区分PCS和SCS调度。_

**5.10 The traditional UNIX scheduler recalculates process priorities once per second using Priority = (recent CPU usage / 2) + base, where base=60. Assume recent CPU usage for P1=40, P2=18, P3=10. What will be the new priorities? Based on this, does the scheduler raise or lower the relative priority of a CPU-bound process?**  
_中文：传统的UNIX调度器每秒使用 Priority = (最近CPU使用量/2) + base (base=60) 重新计算进程优先级。假设P1的最近CPU使用量为40，P2为18，P3为10。新的优先级是什么？基于此，调度器是提高还是降低CPU密集型进程的相对优先级？_

---

## Chapter 6: Synchronization

**6.1 In Section 6.4, we mentioned that disabling interrupts frequently can affect the system's clock. Explain why this can occur and how such effects can be minimized.**  
_中文：在6.4节中，我们提到频繁禁用中断可能影响系统时钟。解释为什么会发生这种情况以及如何最小化这种影响。_

**6.2 What is the meaning of the term busy waiting? What other kinds of waiting are there in an operating system? Can busy waiting be avoided altogether? Explain your answer.**  
_中文：术语“忙等待”的含义是什么？操作系统中还有其他什么类型的等待？忙等待能被完全避免吗？解释你的答案。_

**6.3 Explain why spinlocks are not appropriate for single-processor systems yet are often used in multiprocessor systems.**  
_中文：解释为什么自旋锁不适合单处理器系统，但经常用于多处理器系统。_

**6.4 Show that, if the wait() and signal() semaphore operations are not executed atomically, then mutual exclusion may be violated.**  
_中文：证明如果 wait() 和 signal() 信号量操作不是原子执行的，则可能违反互斥。_

**6.5 Illustrate how a binary semaphore can be used to implement mutual exclusion among n processes.**  
_中文：说明如何使用二进制信号量实现 n 个进程之间的互斥。_

**6.6 Race conditions are possible in many computer systems. Consider a banking system that maintains an account balance with two functions: deposit(amount) and withdraw(amount). ... Describe how a race condition is possible and what might be done to prevent the race condition from occurring.**  
_中文：许多计算机系统中可能出现竞态条件。考虑一个银行系统，维护账户余额，有两个函数：存款(amount)和取款(amount)。... 描述竞态条件如何可能发生，以及可以采取什么措施防止竞态条件发生。_

---

## Chapter 7: Synchronization Examples

**7.1 Explain why Windows and Linux implement multiple locking mechanisms. Describe the circumstances under which they use spinlocks, mutex locks, semaphores, and condition variables. In each case, explain why the mechanism is needed.**  
_中文：解释为什么Windows和Linux实现多种锁定机制。描述在什么情况下它们使用自旋锁、互斥锁、信号量和条件变量。每种情况下解释为什么需要该机制。_

**7.2 Windows provides a lightweight synchronization tool called slim reader-writer locks. ... Explain the benefits of providing such a synchronization tool.**  
_中文：Windows提供了一种轻量级同步工具，称为轻量级读写锁（slim reader-writer locks）。... 解释提供这种同步工具的好处。_

**7.4 Describe how deadlock is possible with the dining-philosophers problem.**  
_中文：描述哲学家就餐问题中死锁如何可能发生。_

**7.5 Explain the difference between signaled and non-signaled states with Windows dispatcher objects.**  
_中文：解释Windows调度器对象的已通知状态和未通知状态的区别。_

**7.6 Assume val is an atomic integer in a Linux system. What is the value of val after the following operations have been completed?**  
atomic_set(&val,10); atomic_sub(8,&val); atomic_inc(&val); atomic_inc(&val); atomic_add(6,&val); atomic_sub(3,&val);  
_中文：假设val是Linux系统中的原子整数。执行以下操作后val的值是多少？_

---

## Chapter 8: Deadlocks

**8.1 List three examples of deadlocks that are not related to a computer-system environment.**  
_中文：列出三个与计算机系统环境无关的死锁例子。_

**8.2 Suppose that a system is in an unsafe state. Show that it is possible for the threads to complete their execution without entering a deadlocked state.**  
_中文：假设系统处于不安全状态。证明线程有可能完成执行而不进入死锁状态。_

**8.3 Consider the following snapshot of a system: (table with Allocation, Max, Available) Answer using Banker's algorithm.**  
a. What is the content of the matrix Need?  
b. Is the system in a safe state?  
c. If a request from thread T1 arrives for (0,4,2,0), can the request be granted immediately?  
_中文：考虑以下系统快照... 使用银行家算法回答。_  
a. Need矩阵的内容是什么？  
b. 系统是否处于安全状态？  
c. 如果线程T1请求 (0,4,2,0)，能否立即授予？

**8.4 A possible method for preventing deadlocks is to have a single, higher-order resource that must be requested before any other resource. ... Compare this scheme with the circular-wait scheme.**  
_中文：一种可能的死锁预防方法是要求在任何其他资源之前必须请求一个单一的更高级资源。... 将该方案与循环等待方案进行比较。_

**8.5 Prove that the safety algorithm presented in Section 8.6.3 requires an order of m × n² operations.**  
_中文：证明8.6.3节中给出的安全性算法需要 m × n² 次操作量级。_

**8.6 Consider a computer system that runs 5,000 jobs per month ... (pros and cons of installing deadlock-avoidance).**  
a. Arguments for installing.  
b. Arguments against.  
_中文：考虑一个月运行5000个作业的计算机系统... (安装死锁避免算法的利弊)。_  
a. 支持安装的论点。  
b. 反对安装的论点。

**8.7 Can a system detect that some of its threads are starving? If you answer "yes," explain how. If "no," explain how to deal with starvation.**  
_中文：系统能否检测到某些线程饥饿？如果回答“是”，解释如何检测。如果“否”，解释如何处理饥饿。_

**8.8 Consider the following resource-allocation policy ... (preemptive). Can deadlock occur? Can indefinite blocking occur?**  
_中文：考虑以下资源分配策略（抢占式）。死锁会发生吗？无限期阻塞会发生吗？_

**8.9 Consider snapshot (table) and answer using Banker's algorithm for two Available states.**  
_中文：考虑快照并针对两个Available状态使用银行家算法回答。_

**8.10 Suppose that you have coded the safety algorithm ... Can you use it for deadlock detection by redefining Max?**  
_中文：假设你已经编写了安全性算法... 能否通过重新定义Max来用于死锁检测？_

**8.11 Is it possible to have a deadlock involving only one single-threaded process? Explain.**  
_中文：单个单线程进程可能发生死锁吗？解释。_

---

## Chapter 9: Memory Management

**9.1 Name two differences between logical and physical addresses.**  
_中文：说出逻辑地址和物理地址的两个区别。_

**9.2 Why are page sizes always powers of 2?**  
_中文：为什么页大小总是2的幂？_

**9.3 Consider a system with two base-limit register pairs for code and data. Discuss advantages and disadvantages.**  
_中文：考虑一个具有代码和数据两对基址-限长寄存器的系统。讨论优缺点。_

**9.4 Consider a logical address space of 64 pages of 1,024 words each, mapped onto physical memory of 32 frames. How many bits in logical address? Physical?**  
_中文：考虑一个逻辑地址空间有64页，每页1024字，映射到32帧的物理内存。逻辑地址有多少位？物理地址有多少位？_

**9.5 What is the effect of allowing two entries in a page table to point to the same page frame? How could this be used to copy memory efficiently? What effect does updating one page have on the other?**  
_中文：允许页表中两个表项指向同一页框会产生什么效果？这如何用于高效复制内存？更新一页对另一页有什么影响？_

**9.6 Given six memory partitions (300KB,600KB,...) how would first-fit, best-fit, worst-fit place processes of given sizes?**  
_中文：给定六个内存分区... 首次适应、最佳适应、最差适应如何放置指定大小的进程？_

**9.7 Assuming a 1-KB page size, what are page numbers and offsets for decimal addresses: 3085, 42095, 215201, 650000, 2000001?**  
_中文：假设页大小为1KB，十进制地址的页号和偏移量是什么？_

**9.8 The BTV operating system has a 21-bit virtual address, 16-bit physical address, 2-KB page size. How many entries in single-level page table?**  
_中文：BTV操作系统有21位虚拟地址，16位物理地址，2KB页大小。单级页表有多少项？_

**9.9 Consider logical address space of 256 pages with 4-KB page size, mapped to 64 frames. How many bits in logical and physical address?**  
_中文：考虑逻辑地址空间有256页，每页4KB，映射到64帧。逻辑和物理地址各多少位？_

**9.10 Consider a system with 32-bit logical address, 4-KB page size, supports 512 MB physical memory. How many entries in conventional and inverted page table?**  
_中文：考虑32位逻辑地址，4KB页大小，支持512MB物理内存。常规页表和倒置页表各有多少项？_

---

## Chapter 10: Virtual Memory

**10.1 Under what circumstances do page faults occur? Describe the actions taken by the OS when a page fault occurs.**  
_中文：在什么情况下发生缺页故障？描述缺页故障时操作系统采取的动作。_

**10.2 Assume a page-reference string with m frames, length p, n distinct pages. For any replacement algorithm, what are lower and upper bounds on page faults?**  
_中文：假设一个页面引用串，有m个帧，长度p，n个不同页面。对任何置换算法，缺页次数的下界和上界是什么？_

**10.3 Rank page-replacement algorithms (LRU, FIFO, Optimal, Second-chance) on page-fault rate and separate those with Belady's anomaly.**  
_中文：按缺页率对页面置换算法（LRU, FIFO, Optimal, Second-chance）排序，并区分哪些有Belady异常。_

**10.4 (Effective instruction time calculation) – compute effective access time.**  
_中文：（有效指令时间计算）——计算有效访问时间。_

**10.5 (Page table with 12-bit addresses, 256-byte pages) – convert virtual addresses to physical.**  
_中文：（给定页表，12位地址，256字节页）——转换虚拟地址为物理地址。_

**10.6 Discuss hardware functions required to support demand paging.**  
_中文：讨论支持请求分页所需的硬件功能。_

**10.7 (Array initialization loops) – how many page faults for each loop?**  
_中文：（数组初始化循环）——每个循环产生多少次缺页？_

**10.8 Page reference string and faults for LRU, FIFO, Optimal with varying frames – list results.**  
_中文：给定页面引用串和不同帧数下的缺页次数——列出结果。_

**10.9 Page reference string with three frames – how many faults for LRU, FIFO, Optimal?**  
_中文：三个帧下的缺页次数——LRU、FIFO、Optimal各多少？_

**10.10 How to simulate a reference bit if hardware doesn't provide one?**  
_中文：如果硬件不提供引用位，如何模拟？_

**10.11 Can a new algorithm with Belady's anomaly be optimal? Explain.**  
_中文：出现Belady异常的新算法能是最优的吗？解释。_

**10.12 Segmentation replacement algorithms (FIFO and LRU based).**  
_中文：基于FIFO和LRU的分段置换算法。_

**10.13 Demand-paged system with CPU/disk utilization scenarios – identify thrashing etc.**  
_中文：请求分页系统中的CPU/磁盘利用率场景——识别抖动等。_

**10.14 Can page table simulate base and limit registers?**  
_中文：页表能否模拟基址和限长寄存器？_

---

## Chapter 11: Mass-Storage Structure

**11.1 Is disk scheduling other than FCFS useful in single-user environment?**  
_中文：除FCFS外的磁盘调度在单用户环境中是否有用？_

**11.2 Why does SSTF favor middle cylinders?**  
_中文：为什么SSTF偏向中间柱面？_

**11.3 Why is rotational latency not considered?**  
_中文：为什么通常不考虑旋转延迟？_

**11.4 Why balance I/O among disks/controllers?**  
_中文：为什么要在多任务环境中平衡磁盘和控制器的I/O？_

**11.5 Tradeoffs between rereading code pages from file system vs. swap space.**  
_中文：从文件系统重读代码页与使用交换空间存储代码页的权衡。_

**11.6 Can we implement truly stable storage?**  
_中文：能否实现真正的稳定存储？_

**11.7 (Disk/tape effective transfer rates, utilization, minimum transfer sizes) – compute values.**  
_中文：（磁盘/磁带有效传输率、利用率、最小传输大小）——计算数值。_

**11.8 Can RAID level 1 outperform RAID 0 for reads?**  
_中文：RAID 1在读操作上能否优于RAID 0？_

**11.9 Give three reasons to use HDDs as secondary storage.**  
_中文：给出三个使用HDD作为辅助存储的理由。_

**11.10 Give three reasons to use NVM devices as secondary storage.**  
_中文：给出三个使用NVM作为辅助存储的理由。_

---

## Chapter 12: I/O Systems

**12.1 State three advantages and three disadvantages of placing functionality in a device controller.**  
_中文：将功能放在设备控制器中的三个优点和三个缺点。_

**12.2 Can handshaking be implemented with one bit?**  
_中文：握手协议能否只用一位实现？_

**12.3 Why use interrupt-driven for serial port and polling for terminal concentrator?**  
_中文：为什么串口用中断驱动，终端集中器用轮询？_

**12.4 Hybrid strategy combining polling, sleeping, interrupts.**  
_中文：结合轮询、睡眠和中断的混合策略。_

**12.5 How does DMA increase concurrency? Complicate hardware?**  
_中文：DMA如何提高并发性？如何使硬件设计复杂化？_

**12.6 Why scale bus and device speeds with CPU speed?**  
_中文：为什么总线速度和设备速度需要随CPU速度提高而提高？_

**12.7 Distinguish between driver end and stream module in STREAMS.**  
_中文：区分STREAMS中的驱动端和流模块。_

---

## Chapter 13: File-System Interface

**13.1 Compare automatic deletion vs. keeping all files.**  
_中文：比较自动删除所有文件与保存所有文件两种策略。_

**13.2 Why do some systems track file type while others don't?**  
_中文：为什么有些系统跟踪文件类型而其他系统不？_

**13.3 Advantages/disadvantages of supporting many file structures vs. byte stream.**  
_中文：支持多种文件结构与只支持字节流的优缺点。_

**13.4 Simulate multilevel directory with single-level and long names?**  
_中文：能否用单级目录和长名称模拟多级目录？_

**13.5 Purpose of open() and close().**  
_中文：open()和close()的目的。_

**13.6 Protection problems with writable subdirectories.**  
_中文：可写子目录带来的保护问题。_

**13.7 UNIX protection for 4990 users accessing one file.**  
_中文：UNIX中允许4990个用户访问一个文件的保护方案。_

**13.8 File-based ACL vs. user-based control list.**  
_中文：基于文件的访问控制列表与基于用户的控制列表的比较。_

---

## Chapter 14: File-System Implementation

**14.1 Calculate disk I/Os for contiguous, linked, indexed allocation for various operations (add/remove at beginning/middle/end).**  
_中文：计算连续、链接、索引分配下各种操作（在开头/中间/末尾添加/删除块）的磁盘I/O次数。_

**14.2 Why must bit map be kept on mass storage?**  
_中文：为什么位图必须保存在大容量存储上？_

**14.3 Criteria for choosing allocation strategy.**  
_中文：选择分配策略的标准。_

**14.4 Compare contiguous with overflow areas vs. standard.**  
_中文：比较连续分配（带溢出区）与标准连续和链接分配。_

**14.5 Why caches help but not more/larger?**  
_中文：缓存有帮助，但为什么不使用更多或更大的缓存？_

**14.6 Advantages and penalties of dynamic internal tables.**  
_中文：动态内部表的优点和代价。_

---

## Chapter 15: File-System Internals

**15.1 How VFS supports multiple file systems.**  
_中文：VFS如何支持多种文件系统。_

**15.2 Why have more than one file system type?**  
_中文：为什么一个系统有多种文件系统类型？_

**15.3 Using procfs to explore process name space.**  
_中文：使用procfs探索进程名称空间。_

**15.4 Why integrate mounted FS into root naming?**  
_中文：为什么将挂载的文件系统集成到根命名中？_

**15.5 Why create NFS when ftp exists?**  
_中文：既然有ftp，为什么还要创建NFS这样的远程文件系统？_

---

## Chapter 17: Protection

**17.1 What protection problems may arise if a shared stack is used for parameter passing?**  
_中文：如果使用共享栈进行参数传递，可能产生什么保护问题？_

**17.2 Suppose a process with number n can access object m only if n > m. What type of protection structure?**  
_中文：假设进程号n只有在n>m时才能访问对象m。这是什么类型的保护结构？_

**17.3 Suggest a scheme for implementing limited number of accesses.**  
_中文：提出实现有限访问次数的方案。_

**17.4 Efficient implementation of deleting an object.**  
_中文：删除对象的有效实现方案。_

**17.5 Why is it difficult to protect a system where users do their own I/O?**  
_中文：为什么允许用户自己做I/O的系统难以保护？_

**17.6 How does system ensure user cannot modify capability list?**  
_中文：系统如何确保用户不能修改能力列表？_
