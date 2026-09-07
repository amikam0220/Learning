# Recall

Hashing with Chaining. 
![[hashing with chaining.png]]

# Rehashing

$m$ too small causes slow and $m$ too large causes wasteful. Thus $m=\Theta(n)$ at all times.
For each rebuilding, we must insert items in old table with $n$ elements into new table with $m=\Theta(n)$ slots. Each rebuilding costs $\Theta(n+m)=\Theta(n)$

## Two Strategies to grow

When $n$ reaches $m$, we can
- $m+=1$. Rebuild every step and copy $i$ elements. $n$ inserts cost $\Theta(1+2+\cdots+n)=\Theta(n^{2})$. 
- $m*=2$. Rebuild at insertion $2^{i}$. $n$ inserts cost $\Theta(1+2+4+\cdots+n)=\Theta(n)$.

## Analysis

Let $c_{i}$ be the cost of $i$th insertion. When $i-1$ is the power of $2$, $c_{i}=i$; otherwise $c_{i}=1$.
Total cost of copy is $1+2+4+\cdots+n=\Theta(n)$, total cost of inserts is $n$. Total cost is $n+\Theta(n)=\Theta(n)$.

Cannot use worst cost of one operation multiply the number of operations. The worst cost does not occurs each time.

Thus, average cost per insert is $\frac{\Theta(n)}{n}=\Theta(1)$.

# Amortized Analysis

Analyze a seq. of operations to show that ==average cost per operation is small even though one operation may be expensive==.

It is average performance in worst case.
Three types: 
- Aggregate(just saw)
- Accounting
- Potential

## Accounting Method

- charge $i$th operation a fictitious amortized cost $\hat{C_{i}}$
- Fee is consumed to perform operation
- Unused amount stored in bank for use by later operations
- bank balance must not go negative
we have 
$$
\sum_{i=1}^{n} C_{i}\leq \sum_{i=1}^{n} \hat{C_{i}},\forall n
$$

for example,

| 插入序号 | 表大小 | 实际代价 $C_{i}$​ | 摊还代价 $\hat{C_{i}}$​ | 银行余额 |
| ---- | --- | ------------- | ------------------- | ---- |
| 1    | 1   | 1             | 3                   | 2    |
| 2    | 2   | 2             | 3                   | 3    |
| 3    | 4   | 3             | 3                   | 3    |
| 4    | 4   | 1             | 3                   | 5    |
| 5    | 8   | 5             | 3                   | 3    |
| ...  | ... | ...           | ...                 | ...  |

## Potential Method

Frame work
- Start with data structure $D_{0}$
- Operation $i$ transforms $D_{i-1}$ to $D_{i}$
Define potential function $\Phi$ maps $D_{i}$ into a real number. and $\Phi(D_{i})\geq 0 ,\forall i$.
Amortized cost $\hat{C_{i}}$ is $\hat{C_{i}}=C_{i}+\Phi(D_{i})-\Phi(D_{i-1})$.
Potential difference $\Delta \Phi_{i}=\Phi(D_{i})-\Phi(D_{i-1})$. If $\Delta \Phi_{i}>0$, operation $i$ stores work in data structure for later. Otherwise, it delivers up stored work to help pay for operation $i$. 
Total amortized cost of $n$ operations is
$$
\sum_{i=1}^{n} \hat{c_{i}}=\sum_{i=1}^{n} c_{i}+\Phi(D_{n})-\Phi(D_{0})\geq \sum_{i=1}^{n} c_{i}
$$

Define potential function onto rare resources.