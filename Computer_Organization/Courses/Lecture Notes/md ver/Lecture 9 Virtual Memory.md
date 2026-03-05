---
Date: 2026-01-18T10:02:00
---
# Address Space

Address space depends on the length of bit of CPU (32, 64)(The size of an address space is characterized by the number of bits that are needed to represent the largest address)

# Enabling data structure: Page Table

A ==page table== is an ==array of page table entries==(PTEs) that ==maps virtual pages to physical pages==.

![[page table.png]]

Each page in the virtual address space has a ==PTE== at a fixed offset in page table. We assume each PTE consists of ==a valid bit== and ==an $n$-bit address field==.
Valid bit indicates ==whether the virtual page is currently cached in DRAM==. If it is 1, the address field indicates ==the start of the corresponding physical page in DRAM==. If it is zero, then ==null address== indicates that ==virtual page has not yet been allocated==. Otherwise, the address field indicates ==the start of the virtual memory on disk==.

# Page Hit

Reference to VM word that is in physical memory (DRAM cache hit)
![[page fault.png]]

# Page Fault

Reference to VM word that is not in physical memory (DRAM cache miss)
![[page fault 1.png]]

If page fault and reference a word in virtual memory but not cached in DRAM, the kernel selects a ==victim page== in physical memory and modify page table to page hit.(meanwhile the PTE points to original physical memory will miss)