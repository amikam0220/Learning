# Review Questions on Software Engineering

## Chapter 1: Introduction简介

**What are the essential ==attributes of good software==?**  
- ==Maintainability, dependability and security, efficiency and acceptability==
- Run Effectively and Efficiently, Easy to be ==Extended==, Easy to be ==Understood==

>   **好的软件应具备哪些基本属性？**
>   - 可维护性、可靠性和安全性、效率和可接受性
>   - 有效和高效地运行，易于扩展，易于理解

**What are the ==two fundamental types of software product==?**
- ==Generic products== that are designed to meet the needs of many different customers
- ==Customized products== designed to meet the specific needs of a single customer

>   **有哪两种基本类型的软件产品？**
>   - 通用产品：旨在满足许多不同客户的需求
>   - 定制产品：旨在满足单一客户的特定需求

**What is ==software engineering==?**
- An engineering ==discipline== concerned with ==all aspects== of software production from specification to system maintenance

>   **什么是软件工程？**
>   - 一门工程学科，涵盖了软件产品从规格说明到系统维护的所有方面

**What are the ==four fundamental activities in software processes==?**
- Software specification
- Software development
- Software validation
- Software evolution

>   **软件过程中的四个基本活动是什么？**
>   - 软件规格说明
>   - 软件开发
>   - 软件验证
>   - 软件演化

**What is the ==distinction between computer science and software engineering==?**
- Computer science is concerned with theories and methods of computers and software systems; software engineering is concerned with the practice of software production

>   **计算机科学与软件工程之间的区别是什么？**
>   - 计算机科学涉及计算机和软件系统的理论和方法；软件工程涉及软件生产的实践过程

**What are the ==3 general issues that affect many different types of software==?**
- ==Heterogeneity==. Software may have to execute on several different types of system
- ==Business and social change==, which drives requirements for software change
- ==Security and trust== - our software systems have to be secure against external and internal threats so that we can trust those systems

>   **会影响许多不同类型软件的三个常见问题是什么？**
>   - 异质性。软件可能需要在几种不同的系统上执行
>   - 商业和社会变化，推动对软件变更的需求
>   - 安全性和可靠性——我们的软件系统必须能够抵御内外部威胁，以便我们可以信任这些系统

**List ==5 different types of software application==.**
- Any 5 from stand-alone products
  - interactive transaction-based systems
  - embedded control systems
  - batch processing systems
  - entertainment systems
  - systems for modelling and simulation
  - data collection systems
  - systems of systems

>   **列举5种不同类型的软件应用。**
>   - 其中的任意五个皆可
>     - 交互事务系统
>     - 嵌入式控制系统
>     - 批处理系统
>     - 娱乐系统
>     - 建模和仿真系统
>     - 数据采集系统
>     - 系统的系统

**What software engineering fundamentals apply to all types of software systems?**
- Systems should be developed ==using a managed and understood development process==
- ==Dependability and performance== are key system characteristics
- Understanding and managing the ==software specification and requirements== are important
- Effective use should be made of ==available resources==

>   **哪些软件工程基本原则适用于所有类型的软件系统？**
>   - 应==使用可管理和已了解的开发过程==开发系统
>   - ==可靠性和性能==是关键的系统特征
>   - 理解和管理==软件规格说明和要求==非常重要
>   - 应充分利用==可用资源==

**What are three key characteristics of the engineering of ==web-based software engineering==?**
- ==Software reuse is the principal approach== for constructing web-based systems
- Requirements for those systems ==cannot be completely specified in advance==
- ==User interfaces are constrained== by the capabilities of web browsers

>   **网络软件工程的三个关键特征是什么？**
>   - 软件重用是构建基于网络的系统的主要方法
>   - 对这些系统的要求不能完全事先规定
>   - 用户界面受网络浏览器的功能限制

**What is a software engineering code of ethics?**
- A set of principles that set out, in a general way, ==standards of expected behaviors for professional software engineers==

>   **什么是软件工程道德准则？**
>   - 一组准则，以一般方式阐明了专业软件工程师的行为标准

## Chapter 2: Software processes软件过程

**What are the fundamental activities that are common to all software processes?**
- Software specification 
- Software design and implementation 
- Software validation 
- Software evolution

>   **所有软件过程共同具有的基本活动是什么？**
>   - 软件规格说明
>   - 软件设计和实现
>   - 软件验证
>   - 软件演化

**List the 3 generic process models that are used in software engineering?**
- The waterfall model
- Incremental development
- Reuse-oriented software engineering

>   **列出在软件工程中使用的三种通用过程模型。**
>   - 瀑布模型
>   - 增量开发
>   - 重用导向的软件工程

**Why are iterations usually limited when the waterfall model is used?**
- The waterfall model is a ==document-driven== model with documents produced at the end of each phase. Because of ==the cost of producing and approving documents==, iterations and costly and involve significant rework. Hence they are limited

>   **当使用瀑布模型时，为什么迭代通常是有限制的？**
>   - 瀑布模型是一个文档驱动模型，在每个阶段结束时生成文档。 由于生成和批准文档的成本，迭代和成本高昂并且涉及大量返工。因此迭代通常是有限制的

**What are the three benefits of incremental development, compared to the waterfall model?**
- The ==cost== of accommodating changes to ==customer requirements== is reduced
- It is ==easier to get customer feedback== on development work that has been done
- More ==rapid delivery and deployment== of useful software to the customer is possible

>   **与瀑布模型相比，增量开发的三个优点是什么？**
>   - 减少适应客户需求变化的成本
>   - 更容易获取有关已完成开发工作的客户反馈
>   - 可以更快地向客户交付和部署有用的软件

**What are the ==development stages in reuse-based development==?**
- Component analysis
- Requirements modification 
- System design with reuse
- Development and integration

>   **重用开发的开发阶段是什么？**
>   - ==组件==分析
>   - ==需求==修改
>   - 具有重用功能的系统==设计==
>   - ==开发和集成==

**What are the ==principal requirements engineering activities==?**
- Feasibility study 
- Requirements elicitation and analysis 
- Requirements specification 
- Requirements validation 

>   **什么是需求工程的主要活动？**
>   - 可行性研究
>   - 需求激发和分析
>   - 需求规格说明
>   - 需求验证

**Why is it increasingly ==irrelevant to distinguish between software development and evolution==?**
- ==Few== software systems are now ==completely new== and a more realistic mode of software development is of an ==iterative process that lasts for the lifetime of the software==

>   **为什么越来越没有必要区分软件开发和演化？**
>   - 很少有软件系统是完全新的，更实际的软件开发模式是一个持续维护软件的迭代过程

**What are the ==advantages== of using ==incremental development== and delivery?**
- ==Early delivery of critical functionality== to the customer
- Early increments serve as prototypes to ==explore requirements==
- Lower ==risk== of overall project failure
- More extensive ==testing== of critical customer functionality

>   **使用增量开发和交付的好处是什么？**
>   - 早期将==关键功能==交付给客户
>   - 早期增量可用作==探索需求==的原型
>   - 整个项目失败的==风险较低==
>   - 可对重要客户功能进行==更广泛的测试==

**What are the ==4 sectors== in each loop in ==Boehm's spiral model==?**
- Objective setting
- Risk assessment and reduction
- Development and validation
- Planning

>   **Boehm的螺旋模型中每个循环中的4个部分是什么？**
>   - 目标设定
>   - 风险评估和降低
>   - 开发和验证
>   - 规划

**What are the six fundamental best practices in the RUP(Rational Unified Process)?**
- Develop software ==iteratively==
- Manage ==requirements==
- Use ==component-based architectures==
- ==Visually== model software
- ==Verify== software quality
- Control ==changes== to software

>   **RUP（统一软件开发过程）中的六个基本最佳实践是什么？**
>   - ==迭代==开发软件
>   - 管理==需求==
>   - 使用基于组件的==架构==
>   - ==可视化==软件模型
>   - ==验证==软件质量
>   - 控制软件的==变更==

## Chapter 3: Agile Software Development敏捷软件开发

**What are the shared ==characteristics== of different approaches to ==rapid software development==?**
- The processes of specification, design and implementation are ==inter-weaved==
- The system is developed and delivered as a ==series of versions==
- User interfaces are often developed using an ==interactive development system== that ==supports rapid UI development==

>   **快速软件开发方法的不同方法共享哪些特征？**
>   - 规范，设计和实现的过程交织在一起
>   - 系统作为一系列版本开发和交付
>   - 经常使用交互式开发系统开发用户界面，支持快速UI开发

**For ==what types of system== are ==agile approaches== to development particularly likely to be successful?**
- ==Small and medium-sized== software product development. 
- ==Custom software development== in an organization where there is a ==clear commitment from customers to become involved== in the development process

>   **敏捷方法在哪些类型的系统中特别容易成功？**
>   - 小型和中型软件产品开发。
>   - 在客户明确承诺参与开发流程的组织中进行定制软件开发

**List the ==5 principles of agile methods==.**
- Customer involvement
- Incremental delivery
- People not process
- Embrace change
- Maintain simplicity

>   **列出敏捷方法的5个原则。**
>   - ==客户==参与
>   - ==增量交付==
>   - ==人==而非流程
>   - 拥抱==变化==
>   - 保持==简单==

**List ==4 questions== that should be asked when ==deciding whether or not to adopt an agile method== of software development.**
Any 4 from those below. Others are also possible(see Ch 3) 
- Is an ==incremental delivery strategy== realistic? 
- What ==type of system== is being developed? 
- What is the expected ==system lifetime==? 
- How is the development ==team organized==? 
- Is the system subject to external regulation? 
- How large is the system that is being developed?

>   **决定是否采用敏捷软件开发方法时应提出哪四个问题？**
>   从以下任选4个问题。也可能有其他问题（见第三章）
>   - 增量交付策略是否现实？
>   - 正在开发什么类型的系统？
>   - 预期系统寿命周期有多长？
>   - 开发团队是如何组织的？
>   - 系统是否受外部监管？
>   - 正在开发的系统有多大？

**What are ==three important characteristics of extreme programming==?**
- Requirements expressed as ==scenarios==
- ==Pair programming==
- ==Test-first== development

>   **极限编程的三个重要特点是什么？**
>   - 用场景表达需求
>   - 成对编程（两个程序员在同一台计算机上共同完成同一个需求的开发工作，其中一个程序员负责编写代码的任务，另一个程序员负责观察，即时检查代码是否符合要求、讨论问题并提出建议）
>   - 测试优先开发

**What is ==test-first development==?**
- When a system feature is identified, the ==tests of the code implementing that feature are written before the code==. Tests are ==automated== and all tests are ==run when a new increment is added== to the system

>   **什么是测试优先开发？**
>   - 当确定一个系统功能时，在编写代码实现该功能之前，先编写实现该功能的代码的测试。测试是自动化的，添加系统更新时会执行所有的测试

**What are the ==possible problems of test-first development==?**
- Programmers may ==take short-cuts== when developing tests so that the ==system tests are incomplete==
- Some tests can be ==difficult to write incrementally==
- It is ==difficult to estimate the completeness of a test set==

>   **测试优先开发可能存在的问题是什么？**
>   - 程序员可能会在编写测试时采取捷径，使得系统测试不完整
>   - 有些测试会难以逐步编写
>   - 很难估计测试集的完整性

**Briefly describe the ==advantages of pair programming==.**
- It supports the idea of ==common ownership and responsibility for the code==
- It serves as an ==informal code review process==
- It helps ==support refactoring==

>   **简要描述成对编程的优点是什么？**
>   - 它支持代码的共同所有权和责任的想法
>   - 其作为非正式的代码审查流程
>   - 有助于支持重构

**What is a ==Scrum sprint==?**
- A ==short (3-4 weeks) planning unit== in which ==work to be done is assessed==, ==features are selected== for development, the ==software is implemented== and ==delivered to system stakeholders==

>   **什么是Scrum开发的冲刺？**
>   - 以短期（3-4周）的计划单位，在其中==评估==要完成的工作，==选择==要开发的特性，==实现==软件并==交付==给系统利益相关者

**What are the ==barriers to introducing agile methods into large companies==?**
- Project managers may be ==reluctant to accept the risks== of a new approach
- The established quality procedures in large companies may be ==incompatible with the informal approach to documentation in agile methods==
- The existing teams may ==not have the high level of skills== to make use of agile methods
- There may be ==cultural resistance== if there is a long history of plan-driven development in the company

>   **在大型公司中引入敏捷方法的障碍是什么？**
>   - 项目经理可能不愿意接受新方法的风险
>   - 大型公司现有的质量程序可能与敏捷方法中非正式的文档方法不兼容
>   - 现有团队可能没有足够高的技能来使用敏捷方法
>   - 如果公司长期实行计划驱动的开发，可能会存在文化上的阻力

## Chapter 4: Requirements Engineering需求工程

**What are ==user requirements and system requirements==?**
- User requirements are statements ==in a language that is understandable to a user== of what services the system should provide and the constraints under which it operates
- System requirements are ==more detailed descriptions== of the system services and constraint, ==written for developers of the system==

>   **用户需求和系统需求是什么？**
>   - 用户需求是==用用户理解的语言==陈述系统应该提供什么==服务及其操作约束==
>   - 系统需求是为==系统开发人员==编写的更详细的系统服务及约束的描述

**What is the distinction between ==functional and non-functional requirements==?**
- Functional requirements define ==what the system should do==
- Non-functional requirements are not directly concerned with specific system functions but ==specify required system properties== or ==place constraints on the system or its development process==

>   **功能需求和非功能需求有什么区别？**
>   - 功能需求定义系统应该做什么
>   - 非功能需求不直接涉及特定系统功能，而是指定所需的系统属性或对系统或其开发过程施加约束

**List ==3 types of non-functional requirement==.**
- ==Product requirements==, that specify or constrain the software's behavior
- ==Organizational requirements==, are ==general requirements== derived from policies and procedures in the customer's organization
- ==External requirements==, which cover all requirements derived from factors external to the system and its development process

>   **列举三种非功能需求类型**
>   - 产品需求，规定或限制软件行为
>   - 组织需求，是从客户组织的政策和程序中推导的通用需求
>   - 外部需求，涵盖系统及其开发过程外部因素衍生的所有需求

**What is the ==software requirements document==?**
- The official document that ==defines the requirements== that should be ==implemented by the system developers==

>   **软件需求文档是什么？**
>   - 定义由系统开发人员应该实现的需求的官方文档

**What is the ==distinction between the terms 'shall' and 'should'== in a user requirements document, which is written in natural language?**
- 'Shall' normally indicates a ==mandatory requirement==
- 'Should' indicates a ==desirable but not essential== requirement

>   **自然语言用户需求文档中“将”和“应该”的区别是什么？**
>   - “将”通常表示强制性要求
>   - “应该”表示理想的但不是必要的要求

**What are the ==main advantages of using a standard format== to specify requirements?**
- All requirements have the same format so are ==easier to read==
- The definition of form fields mean that writers are ==less likely to forget to include information== 
- Some ==automated processing== is possible

>   **使用标准格式规定需求的主要优点是什么？**
>   - 所有需求具有相同的格式，因此更易于阅读
>   - 表单字段的定义意味着作者不太可能忘记包含信息
>   - 可以进行一些自动化处理

**What are the ==principal stages of the requirements engineering process==?**
- Requirements elicitation and analysis 
- Requirements specification
- Requirements validation 

>   **需求工程过程的主要阶段是什么？**
>   - 需求获取和分析
>   - 需求规格
>   - 需求验证

**Give ==5 reasons why eliciting requirements is difficult==**
- Stakeholders ==don't know what they want== 
- Stakeholders use their own language that ==requirements engineers may not understand==
- Stakeholder ==requirements may conflict== 
- ==Political factors== may influence the system requirements 
- The ==business environment== may change during elicitation

>   **列举5个引起需求获取困难的原因**
>   - 利益相关者不知道他们想要什么
>   - 利益相关者使用自己的语言，需求工程师可能不理解
>   - 利益相关者的需求可能存在冲突
>   - 政治因素可能影响系统需求
>   - 需求获取期间业务环境可能变化

**What should be included in a ==scenario==?**
- A description of ==what's expected when the scenario starts== 
- A description of the ==normal flow of events== 
- A description of ==what can go wrong and how to handle it== 
- Information about ==concurrent activities== 
- A description of the ==system state when the scenario finishes== 

>   **场景应包含什么？**
>   - ==开始时场景预期==的描述
>   - 正常==事件流==的描述
>   - 可能出现的==问题及其处理方法==的描述
>   - 有关==并发活动==的信息
>   - 场景完成时==系统状态==的描述

**What is a ==use-case==?**
- A use-case ==identifies a typical interaction== with a ==system and the actors==(human or computer) involved in that interaction

>   **什么是用例？**
>   - 用例标识与系统==交互的典型操作==以及涉及该交互的==参与者==（人类或计算机）

**What is ==ethnography== and ==how is it used in requirements elicitation==?**
- Ethnography is an ==observational technique== where an analyst spends a period of time ==observing work and noting how the participants carry out their tasks==. It is particularly useful in ==identifying essential cooperation in work processes==

>   **什么是人类学，以及如何在需求获取过程中使用它？**
>   - 人类学是一种==观察技术==，在该技术中，分析师会花一段时间==观察工作并记录参与者如何执行其任务==。它在==识别工作流程中的必要合作关系==方面特别有用

**What ==checks== should be applied during ==requirements validation==?**
- ==Validity== checks 
- ==Consistency== checks 
- ==Completeness== checks 
- ==Realism== checks 
- The ==verifiability== of the requirements should be assessed

>   **在需求验证过程中应用哪些检查？**
>   - 验证检查
>   - 一致性检查
>   - 完整性检查
>   - 现实检查
>   - 应评估需求的可验证性

**List ==three requirements validation techniques==**
- Requirements ==reviews== 
- ==Prototyping== 
- ==Test-case generation== 

>   **列举三种需求验证技术**
>   - 需求审阅
>   - 原型
>   - 测试用例生成

**What is ==requirements management==?**
- The process of ==managing changes to requirements== during requirements specification and after the system has gone into use

>   **什么是需求管理？**
>   - 在需求规格说明期间和系统投入使用后管理需求变更的过程

**What are the ==stages in the requirements change management== process?**(from higher to lower)
- Problem ==analysis== and change ==specification==
- Change ==analysis and costing==
- Change ==implementation==

>   **需求更改管理过程的阶段是什么？**
>   - 问题分析和变更规格说明
>   - 变更分析和成本估算
>   - 变更实施

## Chapter 5: System modeling系统建模

**What ==perspectives== may be used for ==system modelling==?**
- An ==external== perspective
- An ==interaction== perspective
- A ==behavioral== perspective
- A ==structural== perspective

>   **哪些视角可用于系统建模？**
>   - 外部视角
>   - 交互视角
>   - 行为视角
>   - 结构视角

**What ==UML diagram types== may be used to ==represent the essential features of a system==?**
- ==Activity== diagrams 
- ==Use case== diagrams 
- ==Sequence== diagrams 
- ==Class== diagrams 
- ==State== diagrams 

>   **哪些UML图类型可用于表示系统的基本特征？**
>   - 活动图
>   - 用例图
>   - 时序图
>   - 类图
>   - 状态图

**What is described in a ==context model==?**
- The ==immediate external environment of the system== defining the ==system's context and the dependencies== that a system has on its environment. The context model shows ==what is outside of the system boundary==

>   **上下文模型中描述了什么？**
>   - 系统的即时外部环境，定义系统的上下文以及系统对其环境的依赖性。上下文模型显示系统边界之外的内容

**How are ==activity diagrams== used in ==describing the context of use of a system==?**
- Activity diagrams may be used to ==describe the business processes== in which the system is used and the ==other systems== which are also used ==in these processes==

>   **活动图在描述系统使用背景时如何使用？**
>   - 活动图可用于描述系统使用的业务流程以及在这些流程中也使用的其他系统

**What are the ==principal components== of a ==textual use-case description==?**
- The ==actors== involved 
- A ==description of the interactions== 
- The ==data that is exchanged== 
- The ==stimulus== that triggers the use case 
- The ==response== of the system 
- ==Comments== and other information

>   **文本用例描述的主要组成部分是什么？**
>   - 涉及的==参与者==
>   - ==交互==的描述
>   - 交换的==数据==
>   - 触发用例的==刺激==
>   - 系统的==响应==
>   - ==注释==和其他信息

**What is ==illustrated in a UML sequence diagram==?**
- A ==sequence of interactions== between the ==actors== in a system's environment and the ==objects== in the system itself. The sequence of interactions ==describes the implementation of a system feature or function==

>   **UML时序图表示什么？**
>   - 系统环境中的参与者与系统本身中的对象之间的一系列==交互==。交互时序描述系统特性或功能的==实现==

**How is ==generalization(inheritance)== used to ==simplify the models of a system== with many similar objects?**
- Assuming that the similar objects have attributes and methods in common, these common attributes and methods are associated with a '==super-class' which generalizes all of the objects sharing these attributes/methods==. The ==specific object classes== only ==declare the attributes/methods specific== to that class and they ==inherit the general attributes/methods from the super-class==

>   **如何使用泛化（继承）来简化具有许多相似对象的系统的模型？**
>   - 假设相似的对象具有相同的属性和方法，这些共同的属性和方法与“超类”相关联，该超类概括了共享这些属性/方法的所有对象。特定的对象类仅声明该类特定的属性/方法，并从超类继承通用的属性/方法

**What is the ==basic assumption== that underlies ==event-driven modelling==?**
- That the system can be represented as a model ==with a finite number of discrete states and external and internal events== trigger ==a transition== from one state to another. 

>   **事件驱动建模的基本假设是什么？**
>   - 系统可以表示为具有有限数量的==离散状态==和外部和内部==事件==，这些外部和内部事件会触发从一个状态到另一个状态的转换

**What are the claimed ==benefits of model-driven engineering==?** 
- Engineers can work at a ==high level of abstraction== without concern for implementation details
- ==Errors are reduced== and the ==design and implementation process is speeded up==
- By using ==powerful generation tools==, implementations of the same system can be automatically ==generated for different platforms==

>   **模型驱动工程的声称的好处是什么？**
>   - 工程师可以在==高抽象度水平==上工作，无需考虑实现细节
>   - ==减少错误==，加快设计和实现过程
>   - 通过使用强大的生成工具，可以自动==为不同的平台生成相同系统的实现==

**What are ==the three types of abstract system model== that are recommended by the ==MDA(Model Driven Architecture) method==?**
- A ==computation-independent model(CIM)==
- A ==platform-independent model(PIM)==
- One or more ==platform-specific models==(PSMs)

>   **什么是MDA（模型驱动架构）方法推荐的三种抽象系统模型类型？**
>   - 计算无关模型(CIM)
>   - 平台无关模型(PIM)
>   - 一个或多个平台特定模型(PSMs)

## Chapter 6: Architectural design架构设计

**What are the ==advantage== of ==explicitly designing and documenting a software architecture==?**
- It improves stakeholder ==communications==
- It encourages a detailed ==analysis== of the system
- It helps with ==large-scale reuse==

>   **明确设计和记录软件架构的优势是什么？**
>   - 它改善了利益相关者==沟通==
>   - 它鼓励系统进行详细的==分析==
>   - 它有助于大规模==重用==

**What are the ==two ways== in which an ==architectural model of a system may be used==?**
- As a means of ==facilitating== discussion about the most appropriate architecture for a system
- As a means of ==documenting== the architecture of an existing or an intended system

>   **系统的架构模型可能有哪两种用途？**
>   - 作为==促进==关于系统最合适的架构进行讨论的手段
>   - 作为==记录==现有或预期系统架构的手段

**List ==4 fundamental questions== that should be addressed ==in architectural design==**
- Is there a ==generic application architecture== that can be used?
- How will the system be ==distributed==?
- What architectural ==style or styles== are appropriate?
- How should the system be ==structured==?
- What ==control strategy== should be used?

>   **在架构设计中应解决的四个基本问题是什么？**
>   - 是否==存在==可用的通用应用程序架构？
>   - 系统将如何==分布==？
>   - 哪些架构==风格==是合适的？
>   - 系统应该==如何构建==？
>   - 应该使用什么==控制策略==？

**What are the ==fundamental architectural views== proposed in ==Krutchen's 4+1 model==?**
- A ==logical view== that shows the ==key abstractions== of the system
- A ==process view== that shows the ==interacting processes== in the system 
- A ==development view== that shows how the system is ==decomposed for development== 
- A ==physical view== that shows the ==distribution of software on the system hardware== 

>   **Krutchen的4+1模型中提出的基本架构视图是什么？**
>   - 逻辑视图，显示系统的==关键抽象==
>   - 流程视图，显示系统中==相互作用的过程==
>   - 开发视图，显示系统如何被==分解为开发==
>   - 物理视图，显示软件在系统==硬件上的分布==

**What is an ==architectural pattern==?**
- A ==stylized abstract description== of good practice in architectural design that has been tried and tested in different systems and environments. The pattern should include information on ==when it is and is not appropriate to use== that architectural design

>   **什么是架构模式？**
>   - 对架构设计中良好实践的==程式化抽象描述==，已在不同系统和环境中进行了==尝试和测试==。 该模式应==包括有关何时适合或不适合使用该架构设计的信息==


**What is the ==fundamental characteristic of a repository architecture==?**
- All shared data is held in a ==central database== that can be accessed ==by all sub-systems== 

>   **仓库架构的基本特征是什么？**
>   - 所有共享数据都==保存在一个中央数据库==中，所有==子系统都可以访问==

**What is the most important ==advantage of a client-server architecture==?**
- This is a ==distributed architecture== so that it is possible to ==provide services on different computers==. It is ==easy to add a new server or upgrade existing servers== without disrupting the system

>   **客户端-服务器架构的最重要优势是什么？**
>   - 这是一种==分布式架构==，因此可以==在不同的计算机上提供服务==。可以==轻松添加新服务器或升级现有服务器而不会影响系统==

**Briefly describe ==pipe and filter architecture==**
- A system is ==decomposed into a set of functional transformations== that ==consume inputs and produce outputs==. Data flows ==from one function to another (the pipeline)== and is ==transformed as it passes through the sequence==

>   **简要描述管道和过滤器架构**
>   - 系统==分解为一组功能变换==，它们==消耗输入并生成输出==。数据从一个函数流到另一个函数（管道）并在通过序列时进行变换

**What are ==transaction-processing applications==?**
- ==Database-centered== applications that ==process user requests for information== and ==update the information in the database==. They are organized so that transactions ==cannot interfere with each other== and ==the integrity of the database is maintained== 

>   **什么是事务处理应用程序？**
>   - ==处理用户请求信息==并==更新数据库中的信息==的==以数据库为中心==的应用程序。它们被组织起来，以便事务==不会相互干扰==并==保持数据库的完整性==

**What are the ==principal functions of the 4 layers== in a ==generic information system architecture==?**
- ==User interface== 
- User ==communications, authentication and authorization== 
- Information ==retrieval and modification== 
- ==Database and transaction management==

>   **通用信息系统架构的4层主要功能是什么？**
>   - ==用户界面==
>   - 用户==通信、身份验证和授权==
>   - 信息==检索和修改==
>   - ==数据库和事务管理==

## Chapter 7: Design and implementation设计和实现

**What are the ==5 key activities== in an ==object-oriented design process==?**
- ==Understand and define== the context and use of the system
- ==Design== the system architecture 
- ==Identify== the principal objects in the system 
- ==Develop== design models 
- ==Specify== object interfaces

>   **面向对象的设计过程中的五个关键活动是什么？**
>   - ==理解和定义==系统的上下文和使用
>   - ==设计==系统架构
>   - ==确定==系统中的主要对象
>   - ==开发==设计模型
>   - ==指定==对象接口

**What do you understand by the ==system context and interaction model==?**
- The ==system context== is a ==static model== of the ==other systems== ==in the environment of the system being designed==
- An ==interaction model== is a ==dynamic model== that ==describes how the system being designed interacts with its environment==

>   **系统上下文和交互模型是什么?**
>   - 系统上下文是正在设计的系统==环境中其他系统==的==静态==模型
>   - 交互模型是一种==动态==模型，描述了正在设计的系统如何==与其环境交互==

**Briefly describe ==3 approaches== that may be used ==to identify object classes==?**
- ==Grammatical analysis== identifying nouns and verbs
- ==Identify tangible things== in the application domain
- Use ==scenario-based analysis==

>   **简要描述可用于识别对象类的三种方法？**
>   - 语法分析识别名词和动词
>   - 识别应用程序域中的有形事物
>   - 使用基于场景的分析

**Why is it ==important== to ==specify the interfaces of components== that are being developed by a software engineering team?**
- Interfaces have to be specified so that ==objects and sub-systems can be designed in parallel==. Once an interface has been specified, the developers of other parts of the system may ==assume that the interface will be implemented==

>   **对于由软件工程团队开发的组件进行接口规格说明很重要，为什么？**
>   - 必须指定接口，以便可以==并行地设计==对象和子系统。一旦指定了接口，系统的其他部分的开发人员可以==假设该接口将被实现==

**What do ==Gamma== et al. suggest are the ==four essential elements of a design pattern==?**
- A ==meaningful name== 
- A ==description== of the ==problem== and when the pattern can be applied 
- A ==solution description==, which shows the components in the solution and their relationships
- A ==statement of the consequences== of applying the pattern

>   **Gamm等人建议设计模式的四个基本元素是什么？**
>   - ==有意义的名称==
>   - ==问题描述==以及何时可以应用该模式的描述
>   - ==解决方案描述==，显示解决方案中的组件及其关系
>   - 应用模式的==后果声明==

**How do ==design patterns contribute to reuse==?**
- Patterns and pattern languages are ways to ==describe best practices==, ==good designs== and ==capture experience== in a way that ==is possible for others to reuse==

>   **设计模式如何促进重用？**
>   - 模式和模式语言是==描述最佳实践、良好设计==，以及以其他人==可以重用的方式捕获经验==的方法

**What are the ==4 levels== at which ==software reuse== is possible?**
- The ==abstraction== level where knowledge of ==successful abstractions== is reused
- The ==object== level where ==objects classes and methods== from libraries are reused
- The ==component== level where ==collections of objects== are reused
- The ==system== level where ==entire application systems== are reused

>   **软件重用有哪四个水平？**
>   - ==抽象==层次，通过重用成功的抽象来重用
>   - ==对象==层次，通过库中的对象类和方法进行重用
>   - ==组件==层次，通过重用对象集合进行重用
>   - ==系统==层次，通过重用整个应用程序系统进行重用

**What are the principal ==aims of software configuration management==?**
- To ==support system integration== so that all developers can ==access the project code and documents in a controlled way==, ==find out what components have been changed== and ==compile and link components== to create a system

>   **软件配置管理的主要目标是什么？**
>   - ==支持系统集成==，以便所有开发人员可以以==受控的方式访问项目代码和文档==，查找==已更改的组件==，并==编译和链接组件==以创建系统

**What are ==essential tools in a software development platform==?**
- An ==integrated compiler and syntax-directed== ==editing systems== 
- A language ==debugger== 
- ==Graphical editing tools== for UML models 
- ==Testing tools== that can automatically run program tests 
- ==Project support tools== for code control

>   **软件开发平台中的基本工具是什么？**
>   - 集成编译器和语法指导的==编辑系统==
>   - ==语言调试器==
>   - 用于UML模型的==图形编辑工具==
>   - 可以自动运行程序测试的==测试工具==
>   - 用于代码控制的==项目支持工具==

**Briefly describe the idea of ==open-source development==.**
- In an open-source development, the source code of a software system is ==made publicly available== and volunteers participate in the further development of the system. ==Any contributor== to an open source development may ==fix bugs== and ==add new features to a system==

>   **简要描述开源开发的想法**
>   - 在开源开发中，==软件系统的源代码是公开可用的==，志愿者参与到系统的进一步开发中。开源开发的==任何贡献者都可以修复错误并为系统添加新功能==

## Chapter 8: Testing测试

**What is the ==distinction between validation and verification==?**
- Verification: Are we building the product right?
- Validation: Are we building the right product? 

>   **验证和验证之间的区别是什么？**
>   - 验证：我们是否正确地构建产品？（==早期==/过程验证）
>   - 验证/确认：我们是否在构建正确的产品？（==末期==/最终验证）

**What are the ==advantages of inspections over testing==?**
- Inspections can ==discover many errors==. In testing, one error may mask another
- ==Incomplete versions== of a system can be inspected
- Inspections can consider ==broader quality attributes== as well as ==program defects==

>   **检查比测试有哪些优点？**
>   - 检查可以==发现许多错误==。在测试中，一个错误可能掩盖另一个错误
>   - 可以检查==不完整的版本==
>   - 检查可以考虑更==广泛的质量属性以及程序缺陷==

**Briefly describe the ==three principal stages of testing== for a ==commercial software system==**
- ==Development== testing, where the system is tested to ==discover bugs and defects== 
- ==Release== testing where the system is tested to check that it ==meets its requirements== 
- ==User testing== where the system is tested ==in the user's environment==

>   **简要描述商业软件系统的三个主要测试阶段**
>   - ==开发==测试，其中测试系统以发现==错误和缺陷==
>   - ==发布==测试，测试系统以检查是否==符合要求==
>   - ==用户==测试，其中系统==在用户环境中==进行测试

**What tests should be included in ==object class testing==?**
- Tests for ==all operations in isolation==
- Tests that ==set and access== all object ==attributes==
- Tests that force the object into ==all possible states==

>   **对象类测试中应包括哪些测试？**
>   - 在隔离中测试==所有操作==
>   - 设置和访问==所有对象属性==的测试
>   - 强制对象进入所有可能的==状态==的测试

**What ==guidelines== does ==Whittaker== suggest for ==defect testing==?**
- Chose inputs that force ==all error messages to be generated==
- Design inputs that might ==cause buffers to overflow==
- Repeat the ==same input numerous times==
- Force ==invalid outputs== to be generated 
- Force ==computation results to be too large or too small== 

>   **Whittaker为缺陷测试提出了哪些准则？**
>   - 选择强制生成==所有错误消息的输入==
>   - 设计可能导致==缓冲区溢出的输入==
>   - 多次==重复相同的输入==
>   - 强制生成==无效输出==
>   - 强制==计算结果过大或过小==

**What is an ==equivalence partition==? Give an example.**
- ==A class of inputs or outputs== where it is reasonable to expect that ==the system will behave the same way for all members of the class==. For example, ==all strings with less than 256 characters==

>   **什么是等价划分？可以举出一个例子吗？**
>   - ==一类输入或输出==，可以合理地预期系统会对该类的==所有成员以相同的方式进行处理==。例如，所有字符长度小于256的字符串

**What are the ==three important classes== of ==interface errors==?**
- Interface ==misuse==
- Interface ==misunderstanding==
- ==Timing errors==

>   **接口错误的三个重要类别是什么？**
>   - 接口误用
>   - 接口误解
>   - 定时错误

**What should be the ==principal concerns of system testing==?**
- Testing the ==interactions== between the components and objects that make up the system
- Testing reusable components and systems to ==check that they work as expected== when integrated into the system

>   **系统测试应该关注哪些主要方面？**
>   - 测试组成系统的组件和对象之间的==交互==
>   - 测试可重用组件和系统以检查它们在整合到系统后的==预期工作效果==

**Briefly summarize the ==test-driven development process==**
- ==Identify increment== of functionality required 
- ==Design tests== for this functionality and ==implement== as executable programs
- Run test ==along with other implemented tests==. The test will ==fail==
- ==Implement== the functionality and ==re-run== the test. Iterate ==until the test works==
- ==Move on== to implement the next chunk of functionality 

>   **简要概述测试驱动型开发过程**
>   - ==确定==所需功能==增量==
>   - 为此功能==设计测试==，并将其==实现==为可执行程序
>   - 与其他实现的测试==一起运行测试==。测试==失败==了
>   - 实现功能并重新运行测试。==反复到测试成功为止==
>   - 接下来实现==下一个==功能块

**What is ==scenario testing==?**
- Scenario testing is ==an approach to release testing== where you ==write a story== describing how a system may be used and design ==tests based on the sequence== of events in the scenario

>   **什么是场景测试？**
>   - 场景测试是一种==发布测试方法==，您可以==编写一个故事==来描述系统的使用方式，并根据场景中的事件==顺序设计测试==

**What is ==stress testing== and ==why== is it useful?**
- ==Increasing the load== on a system ==beyond its design limits== to check ==how the system performs in this situation==. This ==tests the failure behavior== of the system and may ==reveal defects== that are only apparent when the system has to handle a heavy load

>   **什么是压力测试，为什么有用？**
>   - 将系统的==负载提高到其设计限制之外==，以检查系统在这种情况下的==性能==。这==测试了系统的故障行为==，并可能==揭示仅在系统需要处理重负荷时才显现的缺陷==

**What are the ==three types of user testing==?**
- ==Alpha testing==, where ==users work with the development team== to test the software as it is being developed
- ==Beta testing== where the software is released to ==selected users for testing== before the formal system release 
- ==Acceptance testing==, where customers test a system to ==check that it is ready for deployment==

>   **用户测试有哪三种类型？**
>   - Alpha测试，在此测试中，==用户与开发团队一起测试==正在开发的软件
>   - Beta测试，将软件发布给==选定的用户==进行测试，然后再进行正式系统发布
>   - 验收测试，客户测试系统以==检查是否准备部署==

## Chapter 9: Evolution演进

**Why is ==software evolution important==?**
- ==Organizations== are ==completely dependent on their software systems== and they are critical business assets. They ==must invest in evolution== so that these systems ==remain useful and maintain their value==

>   **软件演进为什么很重要？**
>   - ==组织完全依赖==于其软件系统，它们是关键业务资产。它们==必须投资于演进==，以使这些系统==保持有用，并维持其价值==

**What are the ==stages in the system evolution process== and ==what triggers that process==?**
The process is ==triggered by change requests==. Process stages are:
- Impact ==analysis== 
- Release ==planning== 
- Change ==implementation== 
- System ==release==

>   **系统演进过程的阶段是什么，以及什么触发了该过程？**
>   该过程由变更请求触发。过程阶段是：
>   - 影响分析
>   - 发布计划
>   - 变更实施
>   - 系统发布

**==Why== might it ==sometimes== be necessary to bypass the normal change management system and ==make urgent changes== to a system?**
- To ==repair a serious system fault==
- To change the system to cope with ==unexpected changes in the system's operating environment==
- To cope with ==unexpected business change==

>   **为什么有时需要绕过正常的变更管理系统并对系统进行紧急变更？**
>   - 修复严重的==系统故障==
>   - 更改系统以应对系统==运行环境的意外更改==
>   - 应对意外的==业务变化==

**What are ==Lehman's Laws== and ==how were they derived==?**
- Lehman's 'laws' are ==a set of hypothesis== which, it is claimed, ==set out invariants for system change==. They were derived from ==studies of the growth and evolution of a number of large software systems==

>   **什么是Lehman定律，它们是如何推导出来的？**
>   - Lehman的“定律”是==一组假设==，据称它们==设置了用于系统变更的不变量==。它们是根据对==多个大型软件系统的增长和演变的研究推导出来的==

**What are the ==three different types of software maintenance== and how is ==effort distributed== across these maintenance types?**
- Maintenance to ==repair software faults==(17%)
- Maintenance to ==adapt the software to a different environment==(18%)
- Maintenance to ==add to or modify the system's functionality==(65%)

>   **软件维护的三种不同类型是什么，这些维护类型的工作量分配如何？**
>   - 修复==软件故障维护==（17%）
>   - 适应软件到==不同环境维护==（18%）
>   - ==添加或修改系统功能的维护==（65%）

**What ==factors== should be ==assessed== to ==understand the relationship between a system and its environment==?**
- The number and complexity of ==system interfaces==
- The ==number== of inherently volatile ==system requirements==
- The ==business processes== in which the system is used

>   **应该评估哪些因素以了解系统与其环境之间的关系？**
>   - ==系统接口==数量和复杂性
>   - 内在不稳定的==系统要求数量==
>   - 系统使用的==业务过程==

**What ==process metrics== might be used to ==assess maintainability==?**
- Number of requests for ==corrective maintenance==
- ==Average time== required for ==impact analysis==
- ==Average time== taken to ==implement a change request==
- Number of ==outstanding change requests==

>   **哪些过程指标可用于评估可维护性？**
>   - ==纠正性维护请求数==
>   - ==影响分析==所需的平均时间
>   - ==实现变更==请求所需的平均时间
>   - ==未完成变更==请求的数量

**What are the ==principal systems re-engineering activities==?**
- ==Source code== translation
- ==Reverse== engineering
- Program ==structure== improvement
- Program ==modularization==
- ==Data== re-engineering

>   **==主要的系统再造活动==有哪些？**
>   - ==源代码==翻译
>   - ==反向==工程
>   - 程序==结构==改进
>   - 程序==模块化==
>   - ==数据==再造

**What are the ==strategic options== for ==legacy system evolution==?**
- ==Scrap== the system ==completely==
- ==Leave== the system ==unchanged== and ==continue maintenance==
- ==Re-engineer== the system to improve maintainability
- ==Replace all or part== of the system with a new system

>   **传统系统演进的战略选项是什么？**
>   - ==完全废==弃系统 
>   - ==保持系统不变==并继续维护
>   - 对系统进行==再造==以提高可维护性
>   - ==用新系统替换==全部或部分系统

**List ==four important factors== used to ==assess applications for evolution==.**
Any four from: 
- ==Understandability==
- ==Documentation==
- ==Data==
- ==Performance==
- Programming language
- Configuration management
- Test data
- Personnel skills

>   **列出用于评估应用程序演进的四个重要因素。**
>   选以下任意四项：
>   - 可理解性
>   - 文档
>   - 数据
>   - 性能
>   - 编程语言
>   - 配置管理
>   - 测试数据
>   - 人员技能

## Chapter 10: Sociotechnical systems社会技术系统

**What is the difference between the ==business process layer== and ==the organizational layer== in the sociotechnical systems stack.**
- The business process layer is concerned with the ==specific business processes== that are used to ==support business functions==
- The organizational layer is concerned with more ==general strategic issues== such as business rules and compliance, ==organizational policies==, etc

>   **社会技术系统堆栈中的业务流程层和组织层之间有什么区别？**
>   - 业务流程层涉及支持业务功能的==具体业务流程==
>   - 组织层则涉及==更一般的战略问题==，如业务规则和合规性、组织政策等

**What is the ==difference between a technical and a sociotechnical system==?**
- Technical systems ==include hardware and software components but not procedures and processes==. Sociotechnical systems are ==self-aware and include defined operational processes and procedures==. ==People== are an inherent part of sociotechnical systems

>   **技术系统和社会技术系统之间有什么区别？**
>   - 技术系统包括硬件和软件组件，但不包括程序和过程。社会技术系统具有自我意识并包含定义的操作过程和程序。==人==是社会技术系统不可分割的一部分

**What are ==emergent properties==?**
- System properties that only become apparent when all of the system components have been integrated. In other words, properties that ==are characteristic of the system as a whole==

>   **什么是涌现属性？**
>   - 整个系统所特有的属性。只有系统的所有组件集成到一起的时候才会显现。

**What are ==three influences on the reliability of a system==?**
- ==Hardware== reliability 
- ==Software== reliability 
- ==Operator== reliability 

>   **影响系统可靠性的三个因素是什么？**
>   - 硬件可靠性
>   - 软件可靠性
>   - 操作员可靠性

**==Why== are sociotechnical systems ==non-deterministic==?**
- Partly because they ==include people whose behavior may change== from day to day and ==partly because changes to the hardware, software and data== in these systems is so frequent that the consequences of these changes are impossible to ascertain

>   **为什么社会技术系统是非确定性的？**
>   - 部分是因为它们包括==行为可能每天都在变化的人==，==部分是因为这些系统中的硬件、软件和数据变化==如此频繁，以至于无法确定这些变化的后果

**What is a ==wicked problem==?**
- A problem that is so complex with ==so many related entities== that ==no definitive problem specification== can be produced. The ==true nature== of the problem ==only emerges when the solution is developed==

>   **什么是棘手的问题？**
>   - 一个问题如此复杂，有如此==多的相关实体==，以至于==无法产生明确的问题规范==。问题的==真正本质只有在制定解决方案时才会出现==

**What are the ==three principal stages== of ==systems engineering==?**
- Procurement
- Development
- Operation

>   **系统工程的三个主要阶段是什么？**
>   - 采购
>   - 开发
>   - 操作

**What are the ==main drivers for system procurement decisions==?**
- The state of ==other organizational systems==
- The need to comply with ==external regulations==
- ==External competition==
- ==Business re-organization==
- ==Available budget==

>   **系统采购决策的主要驱动因素是什么？**
>   - ==其他组织系统==的状态
>   - 需要遵守==外部法规==
>   - ==外部竞争==
>   - ==业务重组==
>   - 可用==预算==

**Why are ==plan-driven(rather than agile) processes== used ==in systems engineering==?**
- Because ==different parts== of the system ==are developed by different groups at the same time== and plans are needed to ==coordinate their activities==
  
>   **为什么在系统工程中使用计划驱动（而不是敏捷）流程？**
>   - 因为系统的不同部分是==由不同的小组同时开发的==，需要==计划来协调他们的活动==

**What are ==latent conditions== and ==active failures==?**
- Latent conditions are ==vulnerabilities and weaknesses== in a system that, at some stage, ==may contribute to system failure==
- Active failures are some ==operational event or human error== that triggers a sequence of events that could lead to system failure

>   **什么是潜在条件和主动故障？**
>   - 潜在条件是系统中的漏洞和弱点，在某个阶段可能会导致系统故障
>   - 主动故障是一些操作事件或人为错误，它会触发一系列可能导致系统故障的事件

## Chapter 11: Dependability and Security可靠性和安全性

**Give three ==reasons== why a system's ==dependability is more important than its detailed functionality==**
- System ==failures affect a large number of people==
- ==Users== may ==reject== systems that are unreliable, unsafe or insecure
- System ==failure costs may be very high==
- Undependable systems may cause ==information loss==

>   **给出系统的可靠性比其详细功能更重要的三个原因**
>   - 系统故障会==影响大量的人==
>   - ==用户可能会拒绝==不可靠、不安全或不安全的系统
>   - 系统故障==成本可能非常高==
>   - 不可靠的系统可能会导致==信息丢失==

**What are the ==four principal dependability properties==?**
- ==Reliability==
- ==Availability==
- ==Safety==(prevent damage ==to the outside==)
- ==Security==(==Resist external attacks==)

>   **四个主要的可靠性属性是什么？**
>   - ==可靠==性
>   - ==可用==性
>   - 安全性（防止==对外部==造成损害）
>   - 安全性（抵抗==来自外部==的攻击）

**List ==two other system properties== that are ==sometimes considered to be dependability properties==**
Any two from: 
- ==Repairability==
- ==Maintainability==
- Survivability
- Error tolerance

>   **列出另外两个有时被认为是可靠性属性的系统属性**
>   任意两个来自：
>   - 可维修性
>   - 可维护性
>   - 生存能力
>   - 容错

**Briefly define what ==availability== means?**
- Availability is the ==ability of a system to deliver services when requested== 
- The probability that a system will be up and running and ==able to deliver useful services to users at any given time==

>   **简要定义可用性的含义？**
>   - 可用性是系统==在请求时提供服务的能力==
>   - 系统启动并运行并能够在任何给定时间向用户提供有用服务的可能性

**Explain how a ==relatively unreliable system can provide a high level of availability==**
- ==Reliability== is concerned with the ==correct delivery of system services==
- ==Availability== is concerned with the ==system's operational state==. A system can be available but unreliable so long as system ==failures can be quickly detected and corrected before they affect the normal usage of the system==

>   **解释一个相对不可靠的系统如何提供高水平的可用性**
>   - 可靠性与系统服务的正确交付有关
>   - 可用性与系统的运行状态有关。一个系统可以是可用但不可靠的，只要系统故障能够在它们影响系统的正常使用之前被快速检测和纠正

**Explain the difference between a system fault and a system failure.**
- A fault is an ==internal system condition== that can ==lead to an erroneous system state==
- A failure is an ==externally observed deviation== from ==expected system behavior==

>   **解释系统错误和系统故障之间的区别。**
>   - 错误（fault）是可能导致错误系统状态的内部系统状况（一个系统组件或元素的状态发生了变化，这种变化可能会对系统的正常运行产生影响，但并不一定会导致系统的故障）
>   - 故障（failure）是从外部观察到的与预期系统行为的偏差（系统在执行某个功能时不能正确地完成，因此导致了系统故障）

**What is the most ==important difference== between the ==two classes of safety-critical system==?**
- In a ==primary safety-critical system==, a failure can ==lead directly== to an accident
- In a ==secondary safety critical system==, a failure can ==lead to the introduction of faults into another system==, whose failure can ==lead to an accident==

>   **这两类安全关键系统之间最重要的区别是什么？**
>   - 在主要的安全关键系统中，故障会==直接导致==事故
>   - 在二级安全关键系统中，一个故障可能==导致将故障引入另一个系统==，而另一个系统的故障可能导致事故

**What is the distinction between a ==hazard== and an ==accident==?**
- A hazard is a ==condition== of the system that has the ==potential to cause an accident==
- An accident is an ==unplanned event or sequence of events== that results in ==human death or injury== or ==other damage to the system's environment== 

>   **危险和事故有什么区别？**
>   - 危险是系统的一种可能导致事故的情况
>   - 事故是导致人员死亡或受伤或对系统环境造成其他损害的计划外事件或事件序列

**What are the ==three principal threats== to the ==security of a system==?**
- Threats to the ==confidentiality== of a system and its data
- Threats to the ==integrity== of a system and its data
- Threats to the ==availability== of a system and its data

>   **系统安全的三大主要威胁是什么？**
>   - 对系统及其数据==机密性==的威胁
>   - 对系统及其数据==完整性==的威胁
>   - 对系统及其数据==可用性==的威胁

**What are the ==three controls== may be put in place to ==enhance system security==?**
- ==Vulnerability avoidance==
- Attack ==detection and neutralization==
- Exposure ==limitation and recovery==

>   **可以实施哪些三个控制措施来增强系统安全性？**
>   - 漏洞规避
>   - 攻击检测和中和
>   - 暴露限制和恢复

