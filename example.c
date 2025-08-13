#include <stdio.h>

#define TOTAL_MARKS 15
#define SECOND_ARRAY 10

int main(void)
{
    int marks[TOTAL_MARKS] = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0};
    int array[SECOND_ARRAY] = {1, 2, 3};
    int coords[] = {11, 12, 13};
    int digits[10] = {11, [5] = -7, 12, [9] = 100};

    for(int i = 0; i < TOTAL_MARKS; ++i)
        printf("%d ", marks[i]);

    printf("\n");

    for(int i = 0; i < SECOND_ARRAY; ++i)
        printf("%d ", array[i]);

    printf("\n");

    for(int i = 0; sizeof(coords) / sizeof(coords[0]) > i; ++i)
        printf("%d ", array[i]);

    printf("\n");

    for(int i = 0; sizeof(digits) / sizeof(digits[0]) > i; ++i)
        printf("%d ", digits[i]);

    return 0;
}
