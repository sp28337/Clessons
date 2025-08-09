#include <stdio.h>
#define SQ_PR(A, B) ((A) * (B))

int main(void) 
{
    int x = 1;
    int y = 2;
    int res = SQ_PR(x+2, y-3);

    printf("res = %d\n", res);

    return 0;
}