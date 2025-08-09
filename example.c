#include <stdio.h>
#define X_N(N) x ## N
#define print(a,b,c) printf("%d", a##b##c);

int main(void) 
{
    int x1 = 1, x2 = -2, x4 = 10;
    printf("%d\n", X_N(4));
    print(19, 10, 1994);

    return 0;
}