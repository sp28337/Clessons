#include <stdio.h>

// selection sort
int main(void)
{
    int arr[] = {108, -3, 5, 0, -8, 1, 10, -22, 3, 18, -6, 9, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min;

    for(int i = 0; i < size - 1; ++i) {
        int min_idx = i;
        for(int j = i + 1; j < size; ++j) {
            // if need DESC sort: arr[min_idx] < arr[j]
            if (arr[min_idx] > arr[j]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
    for(int i = 0; i < size; ++i)
        printf("%d ", arr[i]);

    return 0;
}
