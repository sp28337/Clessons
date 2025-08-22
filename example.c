#include <stdio.h>
#include <string.h>

#define STR_FRAGMENT_TO_FIND "ra"

int main(void)
{
    char str[] = "Abrakadabra";
    char *ptr = strstr(str, STR_FRAGMENT_TO_FIND);

    printf("str = %p\nptr = %p\n", str, ptr);
    if(ptr != NULL) {
        printf("*ptr = %s\n", ptr);
    } else {
        printf("There are not '%s' in '%s'\n", STR_FRAGMENT_TO_FIND, str);
    }

    return 0;
}
