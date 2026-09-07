# Chapter 1 Key Sections Summary

## 1.1 What Operating Systems Do（操作系统做什么）

### Overview（概述）

An operating system is software that manages computer hardware and provides a basis for application programs, acting as an intermediary between the user and the computer hardware.

操作系统是管理计算机硬件的软件，为应用程序提供基础，充当用户与计算机硬件之间的中介。

### Four Components of a Computer System（计算机系统的四个组成部分）

1. **Hardware（硬件）** - CPU, memory, I/O devices - provides basic computing resources（提供基本计算资源）
    
2. **Operating System（操作系统）** - controls hardware and coordinates its use among applications（控制硬件并协调各应用程序的使用）
    
3. **Application Programs（应用程序）** - word processors, compilers, web browsers - define how resources are used（定义资源的使用方式）
    
4. **User（用户）** - people, machines, other computers（人员、机器、其他计算机）
    

### User View（用户视角）

- **PC/Laptop users（PC/笔记本电脑用户）**: OS designed for ease of use, performance, security（操作系统设计注重易用性、性能和安全性）
    
- **Mobile users（移动设备用户）**: touch-screen interfaces, voice recognition (e.g., Siri)（触摸屏界面、语音识别）
    
- **Embedded computers（嵌入式计算机）**: little or no user view, run without intervention（几乎没有用户视角，无需干预运行）
    

### System View（系统视角）

- **==Resource allocator==（资源分配器）**: manages CPU time, memory space, storage space, I/O devices（管理CPU时间、内存空间、存储空间、I/O设备）
    
- **==Control program==（控制程序）**: manages execution of user programs to prevent errors and improper use（管理用户程序执行，防止错误和不当使用）
    

### Defining Operating Systems（定义操作系统）

- **Kernel（内核）**: the one program running at all times on the computer（计算机上始终运行的一个程序）
    
- **System programs（系统程序）**: associated with OS but not part of kernel（与操作系统相关但不属于内核）
    
- **Application programs（应用程序）**: all programs not associated with system operation（所有与系统操作无关的程序）
    

---

## 1.2 Computer-System Organization（计算机系统组织）

### Basic Organization（基本组织）

A modern general-purpose computer system consists of:  
现代通用计算机系统由以下部分组成：

- One or more CPUs（一个或多个CPU）
    
- Device controllers connected through a common bus（通过公共总线连接的设备控制器）
    
- Shared memory（共享内存）
    

### 1.2.1 Interrupts（中断）

#### Overview（概述）

- Hardware triggers ==interrupt== by sending signal to CPU（硬件通过向CPU发送信号触发中断）
    
- CPU ==stops== what it's doing and ==transfers execution to interrupt service routine==（CPU停止当前工作，将执行转移到中断服务程序）
    
- After servicing, CPU ==resumes interrupted computation==（服务完成后，CPU恢复被中断的计算）
    

#### Interrupt Vector（中断向量）

- Table of pointers to interrupt routines stored in low memory（存储在低内存中的中断例程指针表）
    
- Indexed by unique number given with interrupt request（通过中断请求提供的唯一编号索引）
    

#### Implementation（实现）

- **Interrupt-request line（中断请求线）**: CPU senses after every instruction（CPU在每条指令后检测）
    
- **Interrupt handler（中断处理程序）**: saves state, determines cause, performs processing, restores state（保存状态、确定原因、执行处理、恢复状态）
    
- **Three features needed（需要的三个特性）**:
    
    1. Defer interrupt handling during critical processing（在关键处理期间延迟中断处理）
        
    2. Efficient dispatch to proper handler（高效分派到正确的处理程序）
        
    3. Multilevel interrupts（多级中断）
        

#### Interrupt Priority Levels（中断优先级）

- Enable CPU to defer low-priority interrupts（使CPU能延迟低优先级中断）
    
- Allow high-priority interrupt to preempt low-priority interrupt（允许高优先级中断抢占低优先级中断）
    

### 1.2.2 Storage Structure（存储结构）

#### Storage Hierarchy（存储层次）

|Level|Name|Volatility|
|---|---|---|
|Top|Registers（寄存器）|Volatile|
||Cache（缓存）|Volatile|
||Main Memory（主存）|Volatile|
||Solid-State Disk（固态盘）|Nonvolatile|
|Bottom|Magnetic Disk（磁盘）|Nonvolatile|

#### Key Concepts（关键概念）

- **Main memory（主存）**: only large storage CPU can access directly（CPU能直接访问的唯一大容量存储）
    
- **Secondary storage（二级存储）**: extension of main memory, holds large quantities permanently（主存的扩展，永久保存大量数据）
    
- **Volatile storage（易失性存储）**: loses contents when power is removed（断电时丢失内容）
    
- **Nonvolatile storage（非易失性存储）**: retains contents when power is lost（断电时保留内容）
    

### 1.2.3 I/O Structure（I/O结构）

- **Device driver（设备驱动程序）**: understands device controller, provides uniform interface（理解设备控制器，提供统一接口）
    
- **Direct Memory Access (DMA)（直接内存访问）**: transfers block of data directly without CPU intervention（无需CPU干预直接传输数据块）
    
- Only one interrupt generated per block（每块只生成一个中断）
    

---

## 1.5 Resource Management（资源管理）

### 1.5.1 Process Management（进程管理）

#### Process Concept（进程概念）

- **Process（进程）**: a program in execution（执行中的程序）
    
- **Program（程序）**: passive entity stored on disk（存储在磁盘上的被动实体）
    
- **Process（进程）**: active entity with program counter and resources（具有程序计数器和资源的主动实体）
    

#### Operating System Responsibilities（操作系统职责）

- Creating and deleting user and system processes（创建和删除用户进程和系统进程）
    
- Scheduling processes and threads on CPUs（在CPU上调度进程和线程）
    
- Suspending and resuming processes（挂起和恢复进程）
    
- Providing mechanisms for process synchronization（提供进程同步机制）
    
- Providing mechanisms for process communication（提供进程通信机制）
    

### 1.5.2 Memory Management（内存管理）

#### Key Concepts（关键概念）

- Main memory is central to operation（主存对操作至关重要）
    
- CPU reads instructions and data from main memory（CPU从主存读取指令和数据）
    
- Programs must be mapped to absolute addresses and loaded into memory（程序必须映射到绝对地址并加载到内存）
    

#### Operating System Responsibilities（操作系统职责）

- Tracking which parts of memory are in use（跟踪哪些内存部分正在使用）
    
- Allocating and deallocating memory space（分配和回收内存空间）
    
- Deciding which processes and data to move in and out of memory（决定哪些进程和数据移入或移出内存）
    

### 1.5.3 File-System Management（文件系统管理）

#### File Concept（文件概念）

- **File（文件）**: logical storage unit, collection of related information（逻辑存储单元，相关信息的集合）
    
- Operating system abstracts physical properties to define logical storage unit（操作系统抽象物理属性以定义逻辑存储单元）
    

#### Operating System Responsibilities（操作系统职责）

- Creating and deleting files and directories（创建和删除文件和目录）
    
- Supporting primitives for manipulating files and directories（支持操作文件和目录的原语）
    
- Mapping files onto mass storage（将文件映射到大容量存储）
    
- Backing up files on stable storage media（在稳定存储介质上备份文件）
    

### 1.5.4 Mass-Storage Management（大容量存储管理）

#### Operating System Responsibilities（操作系统职责）

- Mounting and unmounting（挂载和卸载）
    
- Free-space management（空闲空间管理）
    
- Storage allocation（存储分配）
    
- Disk scheduling（磁盘调度）
    
- Partitioning（分区）
    
- Protection（保护）
    

### 1.5.5 Cache Management（缓存管理）

#### Principle（原理）

- Information copied from slower storage to faster cache temporarily（信息从慢速存储临时复制到快速缓存）
    
- Check cache first; if not found, use source and copy to cache（先检查缓存；若未找到，使用源并复制到缓存）
    

#### Cache Coherency（缓存一致性）

- In multiprocessor systems, update to one cache must be reflected in all other caches（在多处理器系统中，一个缓存的更新必须反映在所有其他缓存中）
    
- In distributed environments, replicas must be brought up to date（在分布式环境中，副本必须保持更新）
    

### 1.5.6 I/O System Management（I/O系统管理）

#### Components（组件）

- Memory management component (buffering, caching, spooling)（内存管理组件：缓冲、缓存、假脱机）
    
- General device-driver interface（通用设备驱动程序接口）
    
- Drivers for specific hardware devices（特定硬件设备驱动程序）
    

---

## 1.6 Security and Protection（安全与保护）

### Protection（保护）

- Any mechanism for controlling access of processes or users to resources（控制进程或用户对资源访问的任何机制）
    
- Must provide means to specify and enforce controls（必须提供指定和执行控制的方法）
    
- Detects latent errors at interfaces between subsystems（检测子系统间接口的潜在错误）
    

### Security（安全）

- Defends system from external and internal attacks（防御系统的外部和内部攻击）
    
- Includes viruses, worms, denial-of-service, identity theft（包括病毒、蠕虫、拒绝服务、身份盗窃）
    
- Fast-growing area of research and implementation（快速发展的研究和实现领域）
    

### User Identification（用户识别）

- **User ID（用户ID）**: unique numerical identifier for each user（每个用户的唯一数字标识符）
    
- **Group ID（组ID）**: defines set of users for access control（定义用于访问控制的用户集合）
    
- **Security ID (SID)（安全ID）**: Windows terminology for user ID（Windows中对用户ID的术语）
    

### Privilege Escalation（特权提升）

- **setuid attribute（setuid属性）**: program runs with owner's user ID, not current user's（程序以文件所有者的用户ID运行，而非当前用户）
    
- Process runs with **effective UID** until it turns off extra privileges or terminates（进程以有效UID运行，直到关闭额外权限或终止）
    

---

## 1.10 Computing Environments（计算环境）

### 1.10.1 Traditional Computing（传统计算）

- Desktop/laptop PCs connected to networks（连接到网络的台式机/笔记本电脑）
    
- Web technologies and WAN bandwidth expanding boundaries（Web技术和广域网带宽扩展边界）
    
- Time-sharing systems: timer and scheduling algorithms cycle processes（分时系统：计时器和调度算法轮转进程）
    

### 1.10.2 Mobile Computing（移动计算）

- Smartphones and tablet computers（智能手机和平板电脑）
    
- Features: GPS chips, accelerometers, gyroscopes（特性：GPS芯片、加速度计、陀螺仪）
    
- Two dominant operating systems（两大主导操作系统）:
    
    - **Apple iOS**
        
    - **Google Android**
        

### 1.10.3 Client-Server Computing（客户机-服务器计算）

- **Compute-server system（计算服务器系统）**: client sends request to perform action, server executes and returns results（客户端发送执行请求，服务器执行并返回结果）
    
- **File-server system（文件服务器系统）**: file-system interface for create, update, read, delete files（提供创建、更新、读取、删除文件的文件系统接口）
    

### 1.10.4 Peer-to-Peer Computing（对等计算）

- All nodes are peers; each may act as client or server（所有节点都是对等体；每个节点可作为客户端或服务器）
    
- Services provided by several nodes distributed throughout network（服务由分布在网络中的多个节点提供）
    

### 1.10.5 Cloud Computing（云计算）

- Delivers computing, storage, applications as a service across network（通过网络以服务形式提供计算、存储、应用程序）
    
- **Public cloud（公有云）**: available via Internet to anyone willing to pay（通过互联网向任何人开放，需付费）
    
- **Private cloud（私有云）**: run by a company for its own use（由公司为其自身使用而运行）
    
- **Hybrid cloud（混合云）**: includes both public and private components（包括公有和私有组件）
    
- **SaaS（软件即服务）**: applications available via Internet（通过互联网提供的应用程序）
    
- **PaaS（平台即服务）**: software stack ready for application use（可用于应用程序的软件栈）
    
- **IaaS（基础设施即服务）**: servers or storage over Internet（通过互联网提供的服务器或存储）
    

### 1.10.6 Real-Time Embedded Systems（实时嵌入式系统）

- Most prevalent form of computers（最普遍的计算机形式）
    
- Found in car engines, manufacturing robots, optical drives, microwave ovens（存在于汽车发动机、制造机器人、光驱、微波炉中）
    
- **Real-time systems（实时系统）**: rigid time requirements for processor operation or data flow（对处理器操作或数据流有严格时间要求）
    
- **Hard real-time（硬实时）**: processing must be done within defined constraints or system fails（必须在定义的约束内完成处理，否则系统失败）
    
- **Soft real-time（软实时）**: critical real-time process gets preference but no guarantee（关键实时进程获得优先权但无保证）