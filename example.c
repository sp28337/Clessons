#include <stdio.h>

int main(void)
{
    char list[10];
    fgets(list, sizeof(list), stdin);

    puts(list);

    return 0;
}
