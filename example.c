#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    int num = -123;
    char string[10];

    sprintf(string, "%d", num);

    puts(string);

    return 0;
}
