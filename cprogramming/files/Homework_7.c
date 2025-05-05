#include <stdio.h>
#define Asize 10
int binary_search(int list[], int left, int right, int key){
    int ret = -1;
    int mid = (left + right) / 2;
    if (list[mid] > key){
        ret = binary_search(list, left, mid - 1, key);
    }else if (list[mid] < key){
        ret = binary_search(list, mid + 1, right, key);
    }else if (list[mid] == key){
        ret = mid;
    }
    return ret;
}
int main()
{
    int list[Asize] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int location, key;
    printf("Please enter the key you want to search.\n");
    scanf("%d", &key);
    location = binary_search(list, 0, Asize - 1, key);
    if (location == -1){
        printf("The key is not in the list.\n");
    }else{
        printf("The key is in the list at position %d.\n", location);
    }
    return 0;
}