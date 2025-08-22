#include <stdio.h>
#include <string.h>

int main(void)
{
    char st1[20] = "Hello Pattaya!";
    char st2[30] = "Hello Pattaya!";

    if(strcmp(st1, st2) == 0) {
        puts("Streengs are equal");
    } else {
        puts("Streengs are not equal");
    }

    return 0;
}
