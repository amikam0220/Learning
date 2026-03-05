#include <stdio.h>
#include <stdlib.h>
#include <string.h> // use memcpy
#include <time.h> // measure the performance of functions
#include <sys/time.h> // for more accurate time test

typedef void (*Sort_Func)(int *, int); // define function pointer type

void Bubble_Sort(int a[], int size);
void Insertion_Sort(int a[], int size);
void Merge_Sort(int a[], int size);
void Quick_Sort(int a[], int size);
int Generate_Input_File();
void Generate_Output_File();
void Run_Performance_Test();

// auxiliary functions
double Time_Test(int a[], int size, Sort_Func sort);
void Swap(int *a, int *b);
int Median(int *a, int left, int right);
void Auxi_Msort(int a[], int size, int *tmparr);
void Generate_Random_Array(int a[], int size);
int Repeat_Times(int size, Sort_Func sort);
double get_time_us();


int main(int argc, char *argv[]){
    srand(time(0));
    int size = Generate_Input_File();
    Generate_Output_File(size);
    Run_Performance_Test();
    return 0;
}

// swap two int value
void Swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// find median of three number
int Median(int *a, int left, int right)
{
    // ensure safe for small array
    if (right - left + 1 <= 1)
        return 0;
    

    // order the three number
    int mid = ((right - left) >> 1) + left;
    if (a[left] > a[mid]){
        Swap(&a[left], &a[mid]);
    }
    if (a[left] > a[right]){
        Swap(&a[left], &a[right]);
    }
    if (a[mid] > a[right]){
        Swap(&a[mid], &a[right]);
    }

    /*hide pivot to right rather than right - 1 to make the code  
        more readable and standard*/
    Swap(&a[mid], &a[right]);

    return a[right];
}

// bubble sort
void Bubble_Sort(int a[], int size)
{
    for (int i = size - 1; i > 0; i--){
        int flag = 0;
        for (int j = 0; j < i; j++){
            if (a[j] > a[j + 1]){
                Swap(&a[j], &a[j + 1]);
                flag = 1;
            }
        }
        // break if no swaps
        if (!flag)
            break;
    }
}

// binary insertion sort
void Insertion_Sort(int a[], int size)
{
    for (int end = 0; end < size - 1; end++)
    {
        // binary search to find insertion position
        int left = 0, right = end;
        int tmp = a[end + 1];
        while (left <= right){
            int mid = ((right - left) >> 1) + left;
            // strictly larger to ensure stable
            if (a[mid] > tmp){
                right = mid - 1;
            }else {
                left = mid + 1;
            }
        }

        // move
        for (int i = end; i >= left; i--){
            a[i + 1] = a[i];
        }
        a[left] = tmp;
    }
}

// quick sort: tail recursion optimization and Hoare partition
void Quick_Sort(int a[], int size)
{
    // Insertion sort when size is small
    const int min_lim = 50;

    int left = 0, right = size - 1;

    while (size > min_lim){
        int pivot = Median(a, left, right);

        int i = left - 1, j = right;

        while (1){
            // find the element greater than pivot by left iterator
            // first decrease or increase to avoid iterator stopping movement
            while (a[++i] < pivot)
                ;
            // find the element smaller than pivot by right iterator
            while (a[--j] > pivot)
                ;
            // swap the two elements if the iterators are legal
            if (i < j)
            {
                Swap(&a[i], &a[j]);
            }
            else
                break;
        }

        // swap the pivot and the left iterator
        Swap(&a[i], &a[right]);

        // recursion for small partition and loop for larger partition
        if (i - left > right - i){
            Quick_Sort(a + i + 1, right - i);
            right = i - 1;
            size = right - left + 1;
        }else{
            Quick_Sort(a + left, i - left);
            left = i + 1;
            size = right - left + 1;
        }
    }

    Insertion_Sort(a + left, size);
}


// // Quick Sort：tail recursion optimization and Lomuto partition
// void Quick_Sort(int a[], int size)
// {
//     const int MIN_SIZE = 50;
//     int left = 0, right = size - 1;

//     while (size > MIN_SIZE)
//     {
//         // take median
//         int pivot = Median(a, left, right);
//         int pivot_idx = right;

//         // traverse and move the elements smaller than pivot into corresponding scale
//         int i = left - 1;
//         for (int j = left; j < pivot_idx; j++)
//         {
//             if (a[j] <= pivot)
//             {
//                 i++;
//                 Swap(&a[i], &a[j]);
//             }
//         }

//         // renew position of pivot
//         Swap(&a[i + 1], &a[right]);

//         pivot_idx = i + 1;

//         // recursion for small partition and loop for larger partition
//         if (pivot_idx - left < right - pivot_idx)
//         {
//             Quick_Sort(a + left, pivot_idx - left);
//             left = pivot_idx + 1;
//             size = right - left + 1;
//         }
//         else
//         {
//             Quick_Sort(a + pivot_idx + 1, right - pivot_idx);
//             right = pivot_idx - 1;
//             size = right - left + 1;
//         }
//     }

//     Insertion_Sort(a + left, size);
// }

// merge sort
void Merge_Sort(int a[], int size)
{
    if (size <= 1)
        return;

    int *tmparr = (int *)malloc(size * (sizeof(int)));
    if (!tmparr){
        printf("No memory to create extra array.\n");
        return;
    }

    Auxi_Msort(a, size, tmparr);

    free(tmparr);
}

// auxiliary function to decrease the space complexity
void Auxi_Msort(int a[], int size, int *tmparr)
{
    if (size <= 1){
        return;
    }

    int mid = size / 2;
    // merge sort the left half array
    Auxi_Msort(a, mid, tmparr);
    // merge sort the right half array
    Auxi_Msort(a + mid, size - mid, tmparr);

    int left = 0, right = mid;
    int i = 0;

    // merge the left and right half array to tmparr
    while (left < mid && right < size){
        if (a[left] <= a[right]){
            tmparr[i++] = a[left++];
        }else {
            tmparr[i++] = a[right++];
        }
    }

    while (left < mid){
        tmparr[i++] = a[left++];
    }
    while (right < size){
        tmparr[i++] = a[right++];
    }

    // copy the tmparr to original array
    for (i = 0; i < size; i++){
        a[i] = tmparr[i];
    }
}

// more accurate time (us)
double get_time_us()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1000000.0 + tv.tv_usec;
}

// test the performance of a function
double Time_Test(int a[], int size, Sort_Func sort)
{
    double start, stop;
    double duration = 0.0;
    int rep = Repeat_Times(size, sort);

    // create test array
    int *test = (int *)malloc(size * sizeof(int));
    if (!test){
        printf("Failed to create array to test.\n");
        exit(1);
    }

    for (int i = 0; i < rep; i++)
    {
        memcpy(test, a, size * sizeof(int));
        start = get_time_us();
        sort(test, size);
        stop = get_time_us();
        duration += stop - start;
    }

    return (duration / rep) / 1000; // ms
}

// generate random array
void Generate_Random_Array(int a[], int size)
{
    for (int i = 0; i < size; i++){
        // avoid the limitation of RAND_MAX
        a[i] = (rand() << 15 | rand()) % 100000 + 1;
    }
}

// return different repeat times for different scale
int Repeat_Times(int size, Sort_Func sort)
{
    if (sort == Bubble_Sort || sort == Insertion_Sort)
    {
        if (size <= 1000)
            return 100;
        if (size <= 5000)
            return 50;
        if (size <= 10000)
            return 20;
        return 10;
    }

    if (sort == Quick_Sort || sort == Merge_Sort)
    {
        if (size <= 2000)
            return 100;
        if (size <= 10000)
            return 50;
        if (size <= 20000)
            return 20;
        return 10;
    }
    return 1;
}

// generate input file and return its size
int Generate_Input_File()
{
    FILE *fp = fopen("input.txt", "w");
    if (!fp){
        printf("Failed to generate input file.\n");
        exit(1);
    }

    int size;
    printf("Please enter the scale of input array. (at least 1000).\n");
    scanf("%d", &size);
    size = (size < 1000) ? 1000 : size;

    int *arr = (int *)malloc(size * sizeof(int));
    if (!arr){
        printf("Failed to create array.\n");
        fclose(fp);
        exit(1);
    }

    Generate_Random_Array(arr, size);

    for (int i = 0; i < size; i++){
        fprintf(fp, "%d ", arr[i]);
        if ((i + 1) % 10 == 0){
            fprintf(fp, "\n");
        }
    }

    free(arr);
    fclose(fp);
    return size;
}

// generate output file
void Generate_Output_File(int size)
{
    FILE *fp1 = fopen("output.txt", "w");
    FILE *fp2 = fopen("input.txt", "r");
    if (!fp1){
        printf("Failed to generate output file.\n");
        exit(1);
    }
    if (!fp2){
        printf("Failed to open input file.\n");
        fclose(fp1);
        exit(1);
    }

    const char *names[] = {"Bubble Sort", "Insertion Sort", "Quick Sort", "Merge Sort"};
    Sort_Func sorts[] = {Bubble_Sort, Insertion_Sort, Quick_Sort, Merge_Sort};
    const int sorts_size = sizeof(sorts) / sizeof(sorts[0]);

    // create the array to receive the input
    int *arr = (int *)malloc(size * sizeof(int));
    if (!arr){
        printf("Fail to create the array to test.\n");
        fclose(fp1);
        fclose(fp2);
        exit(1);
    }

    for (int i = 0; i < size; i++){
        fscanf(fp2, "%d", &arr[i]);
    }

    fprintf(fp1, "Test Results: (Input Size = %d)\n", size);
    fprintf(fp1, "================================================\n");
    for (int i = 0; i < sorts_size; i++){
        double total_duration = Time_Test(arr, size, sorts[i]);

        fprintf(fp1, "%s : Time: %.6f ms\n", names[i], total_duration);

        // sort oringin array
        sorts[i](arr, size);
        for (int k = 0; k < size; k++)
        {
            fprintf(fp1, "%d ", arr[k]);
            if ((k + 1) % 10 == 0)
            {
                fprintf(fp1, "\n");
            }
        }
    
        fprintf(fp1, "\n================================================\n");
    }

    fclose(fp1);
    fclose(fp2);
    free(arr);
}

// generate performance.csv
void Run_Performance_Test()
{
    FILE *fp = fopen("Performance_of_Sorting.csv", "w");
    if (!fp){
        printf("Failed to create performance test file.\n");
        exit(1);
    }

    fprintf(fp, "Size, BubbleSort, InsertionSort, QuickSort, MergeSort\n");

    int max_size = 25000, gap = 100;
    for (int size = 100; size <= max_size; size += gap){
        printf("Testing size: %d\n", size);

        // int rep = Repeat_Times(size);
        Sort_Func sorts[] = {Bubble_Sort, Insertion_Sort, Quick_Sort, Merge_Sort};
        const int sorts_size = sizeof(sorts) / sizeof(sorts[0]);
        double *avg_time = (double *)calloc(sorts_size, sizeof(double));
        if (!avg_time){
            printf("Failed to create array to store average time.\n");
            fclose(fp);
            exit(1);
        }

        int *arr = (int *)malloc(size * sizeof(int));
        if (!arr)
        {
            printf("Failed to create array to test.\n");
            fclose(fp);
            free(avg_time);
            exit(1);
        }

        for (int i = 0; i < sorts_size; i++)
        {
            Generate_Random_Array(arr, size);
            avg_time[i] = Time_Test(arr, size, sorts[i]);
        }

        fprintf(fp, "%d, %.6f, %.6f, %.6f, %.6f\n", size, avg_time[0], avg_time[1], avg_time[2], avg_time[3]);

        fflush(fp);
        free(avg_time);
        free(arr);
    }

    fclose(fp);
}