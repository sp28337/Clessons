#include <stdio.h>

int main(void)
{
    int sum = 0;

    for(int i = -3; i <= 7; ++i)
        for(int j = 1; j <= 5; ++j)
            for(int k = 2; k <= 4; ++k)
                sum += (i + j - k) * (i + j - k);
     
    printf("sum = %d\n", sum);

    return 0;
}