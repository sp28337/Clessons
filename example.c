#include <stdio.h>

#define TOTAL_MARKS 13

int main(void)
{
    int marks[TOTAL_MARKS];

    // writing to the array
    marks[0] = 1001;
    marks[2] = 4;
    marks[3] = 5 * 5;
    marks[12] = 6 - 1;

    // reading from the array
    int x = marks[0];
    int y = marks[12];
    int b = marks[3];

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("b = %d\n\n", b);

    for(int i = 0; i < TOTAL_MARKS; ++i)
    {
        printf("%d) %d\n", i, marks[i]);
    }

    return 0;
}
