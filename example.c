#include <stdio.h>
#include <string.h>

#define SYMBOLS_TO_CHECK "!@#$^?&"

int main(void)
{
    char pass[] = "asdgsfdgh";
    char *ptr = strpbrk(pass, SYMBOLS_TO_CHECK);

    printf("str = %p\nptr = %p\n", pass, ptr);
    if(ptr != NULL) {
        printf("*ptr = %s\n", ptr);
    } else {
        printf("There are not '%s' in '%s'\n", SYMBOLS_TO_CHECK, pass);
    }

    return 0;
}
