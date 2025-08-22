#include <stdio.h>
#include <string.h>

#define CHAR_TO_FIND 'a'

int main(void)
{
    char str[] = "Abrakadabra";
    char *ptr = strchr(str, CHAR_TO_FIND);

    printf("str = %p\nptr = %p\n", str, ptr);
    if(ptr != NULL) {
        printf("*ptr = %c\n", *ptr);
    } else {
        printf("There are not \'%c\' in str\n", CHAR_TO_FIND);
    }
        

    return 0;
}
