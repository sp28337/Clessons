#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    srand(time(NULL));

    int range = 10;

    int r_1 = rand() % range; // [0; range)
    int r_2 = rand() % range - 10; // [-10; range)
    int r_3 = rand() + rand(); // если нужен больший диапазон

    double range_float = (double)rand() / (double)RAND_MAX;

    printf("%d, %d, %d, %d, %.2f\n", r_1, r_2, r_3, rand(), range_float); // [0; 1]

    return 0;
}