#include <stdio.h>

#define TOTAL_MARKS 13

int main(void)
{
    int marks[TOTAL_MARKS];

    marks[0] = 2 * 3;
    marks[2] = 4;
    marks[12] = 7 - 2;

    size_t bytes_marks = sizeof(marks);
    printf("sizeof(marks) = %zu bytes\n\n", bytes_marks);

    for(int i = 0; i < TOTAL_MARKS; ++i)
        printf("[%d] - %d\n", i, marks[i]);

    return 0;
}
