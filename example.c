#include <stdio.h>

int main(void)
{
    int ptr_array[10] = {1, 2, 3, 4, 5, 6, 7};
    int val = *(ptr_array + 1);
    printf("%d", val);

    short arr[] = {4, 3, 2, 1, 5, 6, 7};

    short *ptr_arr;

    ptr_arr = arr;

    size_t len_1 = sizeof(arr);
    size_t len_2 = sizeof(ptr_arr);
    
    return 0;
}
