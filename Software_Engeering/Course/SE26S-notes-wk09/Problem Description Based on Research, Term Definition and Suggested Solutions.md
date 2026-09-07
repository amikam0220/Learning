# Business Logic Investigation

## Investigation Method

To accurately capture the real business logic and potential pain points of campus card services, our project team adopted a "process immersion method" to conduct an end-to-end hands-on experience and in-depth analysis of the current campus card top-up process at Jinan University. The investigation found that the campus card top-up entry is integrated into the "Entity Campus Card Service" module under the "Micro Services" section of the official "Jinan University" WeChat public account. The service supports two types of wallets: "Card Account" and "Venue Electronic Account." Currently, the only available payment channels are WeChat Pay and bank card payments linked to WeChat.

![[卡片充值页面.jpg|360]]

The payee displayed during payment is the full name of Jinan University, i.e., the university's corporate basic account.

![[收款方.jpg|360]]

## Key Finding: Peculiarity of the Top-up Process

During the investigation, we identified a critical mechanism that deviates from common online payment perceptions—the "Interim Balance" mechanism.

![[充值成功页面.jpg|360]]

The complete process is as follows:

- **Payment completion does not equal balance increase**: After the user successfully transfers funds to the university's corporate account via WeChat Pay, the amount is not directly added to the campus card's usable balance.
- **Funds temporarily held**: The top-up amount first enters an intermediate state called "Interim Balance."
- **Offline activation**: The system prompts the user to swipe their card at any campus canteen POS terminal. Upon successful swiping, the "Interim Balance" is officially transferred to the "Card Balance," which can then be used for consumption.

## Investigation Conclusions

- **Fund Flow**:
  User funds → WeChat Pay → University corporate basic account → Campus card system receives asynchronous notification of successful WeChat Pay → System writes "Interim Balance" to the user's campus card account → User swipes card at campus POS terminal → System transfers "Interim Balance" to "Card Balance."

- **Information Flow**:
  WeChat Pay platform generates a successful payment message → Sends the message (including order ID, amount, timestamp, etc.) to the campus card system via an API callback interface → Campus card system validates the message → System pushes the "top-up success" status and "pending amount" to the frontend → During card swiping at the POS terminal, the card chip interacts with the backend system, initiating a load command → System validates and updates the balance field in the database, recording the transaction.

- **Key Fact**:
  The campus card system acts purely as a "ledger" throughout the entire fund flow process. It is responsible for recording and updating user entitlements (balances) but never actually holds, manages, or operates the university's physical bank funds.

# Problem Description and Terminology Definition

## Terminology Definition

To ensure precision and unambiguity in this document, the core terms used in this project are defined in the table below. These definitions also reference the actual business practices observed at Jinan University.

| Term                               | Definition                                                                                                                                                                                                                                 |
| ---------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **Campus Card**                    | A medium uniformly issued by the university that integrates identity authentication and electronic payment functions. It can be a physical card or a virtual card within an app. The monetary value associated with its account can only be used for consumption in designated on-campus scenarios. |
| **Card Balance**                   | The monetary value recorded in the campus card backend account, representing the amount a user can directly spend. Investigation shows this balance is **non-withdrawable and non-refundable**.                                          |
| **Interim Balance**                | A temporary fund state specific to the current process. After a user successfully completes an online payment, the funds first enter this state and must be loaded via swiping at a POS terminal before being converted to "Card Balance." This project aims to eliminate this state. |
| **Corporate Account**              | The legal entity account opened by the university at a bank, used to collect all user campus card top-up funds. Our system has no operational authority over this account and only receives proof of fund arrival via bank or third-party payment platform interfaces. |
| **Top-up**                         | The complete service process whereby a user initiates a transaction through our system, completes the fund transfer via an external payment platform, and ultimately increases the campus card account balance.                           |
| **Payment Callback**               | An asynchronous HTTP request initiated by a third-party payment platform to its integrated service provider system after a user successfully completes a payment. This request is used to notify the service provider that a payment transaction has been officially confirmed. |

## Problem Description

### Background

According to our investigation, the campus card penetration rate at Jinan University is nearly 100%. It serves as an indispensable infrastructure for identity verification and on-campus consumption, covering key scenarios such as canteen dining, supermarket shopping, and library access. However, high adoption has not translated into high usage. The underlying reason lies in significant user experience interruptions in the current online service process.

### Existing Pain Points

- **Single payment channel**: Currently, only WeChat Pay is supported, excluding Alipay, which has a vast user base, thereby limiting users' payment choices.
- **Offline interruption in top-up process**: The most prominent pain point is the "Interim Balance" mechanism. After users conveniently complete payment on mobile devices, they are forced to physically go to a POS terminal to "swipe and load." This process drags an otherwise efficient online service back offline, greatly undermining the core value of the mobile application and causing a fragmented user experience.
- **Lack of real-time experience**: The temporal and spatial delay between successful online payment and offline card usability fails to meet users' expectations of "instant availability" upon successful payment.

### Project Objective

Based on the above pain points, this project aims to design and describe a new-generation "Campus Card Service System (CCSS)." The core objective is to eliminate the outdated offline confirmation step represented by the "Interim Balance" and **reshape a purely online, multi-channel, real-time closed-loop experience**, elevating campus card service from merely "usable" to "delightful," thereby significantly enhancing teachers' and students' willingness and stickiness.

# Proposed Solution

## Solution Overview

To completely resolve the offline interruption in the current process, we propose designing a mobile web application based on a B/S architecture—the CCSS. The core philosophy of this system is **"Pay & Instant Credit."** We advocate that once a user completes payment via WeChat Pay or Alipay, the entire user-system interaction loop should be finalized online, without any additional offline actions.

## Core Business Logic Redesign

The key transformation introduced by this solution is the **elimination of the "Interim Balance" state**. The new business process is redesigned as follows:

1.  **User Initiation**: The user selects the top-up amount and payment method (WeChat Pay / Alipay) within the CCSS App.
2.  **Platform Payment**: The system calls the respective third-party payment SDK; the user completes identity verification and payment; funds are transferred to the university's corporate account.
3.  **Callback Confirmation**: The system backend receives the successful payment callback message from WeChat Pay or Alipay and validates its legitimacy.
4.  **Direct Balance Credit**: Upon successful validation, the system no longer creates an "Interim Balance." Instead, it **directly and atomically** increases the user's campus card account usable balance.
5.  **Real-time Feedback**: The frontend page updates the balance in real time and pushes a notification to the user: "Top-up successful, XX yuan has been credited."

## Comparison of Old and New Processes

### Old Process

![[As-Is.png]]

### New Process

![[To-Be.png]]

## System Boundary and Responsibility Definition

To ensure a clear project scope, we explicitly define the boundaries of CCSS's responsibilities:

- **System Responsibilities**:
    - Manage digital information of users and campus card accounts.
    - Integrate and maintain reliable connections with WeChat Pay and Alipay payment gateways.
    - Process payment callbacks and execute the core ledger logic of increasing user balances.
    - Record complete and immutable transaction logs for all transactions.
    - Provide frontend interfaces for users to query balances and consumption history.

- **System Non-Responsibilities**:
    - Handle, hold, or transfer any physical funds.
    - Operate the university's bank corporate account.
    - Process any form of withdrawal, refund, or fund transfer-out requests.