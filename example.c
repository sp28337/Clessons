#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    srand(time(NULL));

    int r_1 = rand();
    int r_2 = rand();

    printf("%d, %d, %d, %d, %d\n", r_1, r_2, rand(), rand(), rand());
    
    return 0;
}