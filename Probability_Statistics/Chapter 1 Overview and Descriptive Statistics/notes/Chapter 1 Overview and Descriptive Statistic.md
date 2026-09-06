
# 1.1 Populations, Samples and Processes

## Population

The set of all objects
## Variables(Characteristics)

Objects whose value may change from one object to another

According to ==the number of variables==, we have 
- Univariate: a single variable(e.g. automatic or manual for cars)
- Bivariate: two variables(e.g. the height and weight of the students)
- Multivariate: more than two variables.

## Sample

A ==subset== of population.

## Branches of statistics

- Descriptive statistics:
	==Summarize and describe important features== of data.
	- Graphical methods
	- Numerical summary measures(means, standard deviations, correlations etc.)
- Inferential statistics
	Use sample information to draw some type of conclusion about the population. Generalize information ==from a sample to a population==.

## What is the relation between probability and statistics

Probability reasons ==from the population to the sample==.
Inferential statistics reasons ==from the sample to the population==.

## Collecting Data

- Methods for collecting data
	- Random sampling: each element of population has an ==equal chance== to be selected.
	- Stratified(by layers) sampling: ==divide into subpopulation== and ==random samples== are taken of each stratum.

# 1.2 Pictorial and Tabular Method in Descriptive Statistics

## Notation

Sample size: The ==number of observations== in a single sample will often be denoted by $n$. 

## Stem-and-Leaf Displays

Suppose we have a numerical data set $x_{1},x_{2},\cdots,x_{n}$ for which $x_{i}$ consists of ==at least two digits==.
Steps:
- Select ==one or more leading digits== for the ==stem values==, The trailing digits become the ==leaves==.
- List possible ==stem values== in a ==vertical column==(from small to large).
- Record the leaf for every observation beside the corresponding stem value.
- ==Indicate the units== for stems and leaves someplace in the display
Example: 16, 23, 64, 37, 31
Note for ==indicate the units that stem: ten's digit; leaf: one's digit==.

- Identification of a ==typical== or ==representative value==
- ==Extent of spread==
- Presence of ==any gaps==
- Extent of ==symmetry==
- Number and location of peaks
- Presence of ==any outlying values==

## Dotplot

The data set is reasonably ==small== or there are relatively few distinct data values
- If repeated value, pile it in the vertical column
![[Dotplots.png]]

## Histogram

Type of variables:
- Discrete variable:
	Either is finite or else can be listed in an infinite sequence
	Three Steps:
	- Determine the ==frequency(e.g. 70) (or relative frequency(e.g. 70/200))== of each $x$ value
	- Make possible $x$ values on a horizontal scale
	- Draw a rectangle whose height is the (relative) frequency of the value.
	relative frequency of a value equals number of times the value occurs over the number of observations in the sample
- Continuous variable:
	Consist of an entire interval
	Similar to Discrete Histogram, height of rectangle represents frequency

- Typical Histogram shapes
	- Symmetric unimodal
	- Bimodal
	- Positively Skewed
	- Negatively Skewed

# 1.3 Measures of Location

## The Mean

- Sample Mean:
	The sample mean of observations $x_{1},\cdots,x_{n}$ is $$\bar{x}=\frac{x_{1}+x_{2}+\cdots+x_{n}}{n}=\frac{\left( \sum x_{i} \right)}{n}$$
- Sample median:
	The sample media is obtained by first ==ordering the $n$ observations from smallest to largest==.(denoted by $\tilde{x}$)

## Three different sharps for a population distribution

$\bar{u}=\tilde{u}$: symmetric unimodal
If median is smaller, positively skewed
If median is larger, negative skewed

## Other Measures of Location

- Quartiles:
	divide the population into four equal partitions(first quartile, second quartile or median, third quartile)
- Percentile
- Trimmed Means
	A compromise between sample mean and sample median. Denoted by $\bar{x}_{tr(n)}$
	By eliminating the smallest $n\%$ and the largest $n\%$ and then averaging the left values.(the number of eliminated values ==takes flooring==)(general proportion: $5\%-25\%$)


# 1.4 Measures of Variability

## The range

The difference between the largest and the smallest sample values

## Deviations from the mean

$$\sum_{i=1}^{n} (x_{i}-x)^{2}$$

## Sample variance

denoted by $s^{2}$
$$s^{2}=\frac{\sum_{i=1}^{n} (x_{i}-\bar{x})}{n-1}=\frac{S_{xx}}{n-1}$$
==Note it is $n-1$.==
The ==sample standard deviation== denoted by $s$ is $s=\text{sqrt}(s^{2})$
- An alter expression for the numerator of $s^{2}$
	$S_{xx}=\sum(x_{i}-\bar{x})^{2}=\sum x_{i}^{2}-\frac{\left( \sum x_{i} \right)^{2}}{n}$
- If $y_{i}=x_{i}+c$, then $s_{y}^{2}=s_{x}^{2}$
- if $y_{i}=cx_{i}$, then $s_{y}^{2}=c^{2}s_{x}^{2},s_{y}=\left| c \right|s_{x}$

## Population variance

$\sigma^{2}$ to denote the population variance and $\sigma$ to denote the population standard deviation.
$$\sigma^{2}=\sum_{i=1}^{N} (x_{i}-\mu)^{2} / N$$
where $\mu$ is the means of population.


# Boxplots

- Fourth spread $f_{s}$
	$f_{s}=\text{upper fourth quartile - lower fourth quartile}$.
The median is included in both halves if $n$ is odd.
The simplest boxplot is based on the ==5-number summary==: smallest, lower fourth, median, upper fourth, largest
![[boxplots.png]]

- Outlier: Any observation father than $1.5f_{s}$ from the closest fourth is an outlier
- Extreme: more than $3f_{s}$
- Mild: $(1.5f_{s},3f_{s}]$

- Comparative Boxplots
	![[comparative boxplots.png]]