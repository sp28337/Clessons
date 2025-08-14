#include <stdio.h>

#define SIZE_ARRAY 10

int main(void)
{
    int arr[SIZE_ARRAY] = {2, 8, 7};
    int insert_index = 2;

    for(int i = SIZE_ARRAY - 1; i > insert_index; --i) {
        arr[i] = arr[i - 1];
        // printf("arr[%d] = arr[%d]\n", i, i - 1);
    }

    arr[insert_index] = 33;

    for(int i = 0; i < SIZE_ARRAY; ++i)
        printf("%d ", arr[i]);

    return 0;
}
