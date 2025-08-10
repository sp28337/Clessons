#include <stdio.h>

int n = 5;
int p = 1;

int main(void)
{
    for(int i = 1; i <= n; ++i)
    {
        p = p * i;
    }

    printf("p = %d", p);
    return 0;
}