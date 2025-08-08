#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    srand(time(NULL));

    int range = 10;

    int r_1 = rand() % range; // [0, range);
    int r_2 = rand() % range - 10; // [-10, range);

    printf("%d, %d, %d, %d, %d\n", r_1, r_2, rand(), rand(), rand());

    return 0;
}