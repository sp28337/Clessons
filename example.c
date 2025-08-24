#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    int a = atoi("-123");
    long b = atol("123124125");
    long long c = atoll("12421512312412515");
    double d = atof("0.2136");

    printf("\na = %d\nb = %ld\nc = %lld\nd = %.2f\n", a, b, c, d);

    // how it works when template is wrong:

    int e = atoi("-1k23");
    long f = atol("123sfas124125");
    long long g = atoll("1242151231241251365174512548125");
    double h = atof("f0.2136");

    printf("\na = %d\nb = %ld\nc = %lld\nd = %.2f\n", e, f, g, h);

    return 0;
}
