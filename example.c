#include <stdio.h>

#define SIZE_ARRAY 10

int main(void)
{
    int arr[SIZE_ARRAY] = {2, 8, 3, 3, 7, 9, 1, 2};
    int delete_index = 5;

    for(int i = 0; i < SIZE_ARRAY; ++i)
        printf("%d ", arr[i]);


    printf("\n");
    for(int i = delete_index; i < SIZE_ARRAY - 1; ++i)
        arr[i] = arr[i + 1];


    for(int i = 0; i < SIZE_ARRAY; ++i)
        printf("%d ", arr[i]);

    return 0;
}
