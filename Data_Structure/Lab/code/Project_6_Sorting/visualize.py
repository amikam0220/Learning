import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import curve_fit
import warnings
warnings.filterwarnings('ignore')

# ---------------------- read data and filter appropriate points ----------------------
csv_path = "Performance_of_Sorting.csv"
df = pd.read_csv(csv_path)
df.columns = df.columns.str.strip()

def filter_data(col_name):
    return df[(df["Size"] >= 100) & (df[col_name] <= 12)][["Size", col_name]]

df_bubble = filter_data("BubbleSort")
df_insert = filter_data("InsertionSort")
df_quick = filter_data("QuickSort")
df_merge = filter_data("MergeSort")

x_bubble, y_bubble = df_bubble["Size"].values, df_bubble["BubbleSort"].values
x_insert, y_insert = df_insert["Size"].values, df_insert["InsertionSort"].values
x_quick, y_quick = df_quick["Size"].values, df_quick["QuickSort"].values
x_merge, y_merge = df_merge["Size"].values, df_merge["MergeSort"].values

# ---------------------- define fitting curve ----------------------
def func_n2_origin(n, a):
    # appropriate for insertion sorting
    return a * n**2

def func_n2_normal(n, a, b, c):
    return a * n**2 + b * n + c

def func_nlogn_local(n, a, b):
    return a * n * np.log2(n) + b

# ---------------------- fitting curve ----------------------
popt_insert, _ = curve_fit(
    func_n2_origin, x_insert, y_insert,
    p0=[1e-8],
    maxfev=30000 
)

popt_bubble, _ = curve_fit(
    func_n2_normal, x_bubble, y_bubble,
    p0=[1e-8, 1e-4, 0.1],
    maxfev=20000
)

popt_quick, _ = curve_fit(func_nlogn_local, x_quick, y_quick, p0=[1e-6, 0.1], maxfev=20000)
popt_merge, _ = curve_fit(func_nlogn_local, x_merge, y_merge, p0=[1e-6, 0.1], maxfev=20000)

# ---------------------- generate fitting curve ----------------------
x_fit = np.linspace(0, 25000, 2000)

y_insert_fit = func_n2_origin(x_fit, *popt_insert)
mask_insert = y_insert_fit <= 12
x_insert_fit_show = x_fit[mask_insert]
y_insert_fit_show = y_insert_fit[mask_insert]

y_bubble_fit = func_n2_normal(x_fit, *popt_bubble)
mask_bubble = y_bubble_fit <= 12
x_bubble_fit_show = x_fit[mask_bubble]
y_bubble_fit_show = y_bubble_fit[mask_bubble]

y_quick_fit = func_nlogn_local(x_fit, *popt_quick)
y_merge_fit = func_nlogn_local(x_fit, *popt_merge)
mask_nlogn = y_quick_fit <= 12
x_quick_fit_show = x_fit[mask_nlogn]
y_quick_fit_show = y_quick_fit[mask_nlogn]
x_merge_fit_show = x_fit[mask_nlogn]
y_merge_fit_show = y_merge_fit[mask_nlogn]

# ---------------------- visualization ----------------------
plt.rcParams['font.sans-serif'] = ['Arial']
plt.figure(figsize=(8, 10))

plt.scatter(x_insert, y_insert, s=20, c='#00C851', alpha=0.8, label='Insertion Sort', marker='o')
plt.scatter(x_bubble, y_bubble, s=20, c='#FF4444', alpha=0.8, label='Bubble Sort', marker='o')
plt.scatter(x_quick, y_quick, s=20, c='#66CCFF', alpha=0.8, label='Quick Sort', marker='o')
plt.scatter(x_merge, y_merge, s=20, c='#FFBB33', alpha=0.8, label='Merge Sort', marker='o')

plt.plot(x_insert_fit_show, y_insert_fit_show, c='#00C851', linewidth=3, linestyle='-', label=f'Insertion Sort Fit')
plt.plot(x_bubble_fit_show, y_bubble_fit_show, c='#FF4444', linewidth=3, linestyle='-', label=f'Bubble Sort Fit')
plt.plot(x_quick_fit_show, y_quick_fit_show, c='#66CCFF', linewidth=3, linestyle='-', label=f'Quick Sort Fit')
plt.plot(x_merge_fit_show, y_merge_fit_show, c='#FFBB33', linewidth=3, linestyle='-', label=f'Merge Sort Fit')

plt.xlim(100, 25000)
plt.ylim(0, 12)

plt.xlabel('Number of Elements in Sorted Array', fontsize=14)
plt.ylabel('Running Time (ms)', fontsize=14)
plt.title('Sorting Time Fit', fontsize=16, fontweight='bold', pad=20)
plt.legend(loc='upper left', fontsize=11, framealpha=0.9)
plt.grid(True, alpha=0.4, linestyle='-', linewidth=0.5)
plt.xticks(fontsize=12)
plt.yticks(fontsize=12)

plt.tight_layout()
plt.savefig('sorting_fit.png', dpi=300, bbox_inches='tight')
plt.show()
