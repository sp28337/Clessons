#include <stdio.h>

int main(void)
{
    char list[10];
    
    int max_len = sizeof(list), i = 0;
    char *ptr = list, ch;

    while((ch = getchar()) != '\n' && ch != EOF && i < max_len - 1)
        ptr[i++] = ch;


    list[i] = '\0';
    
    puts(list);

    return 0;
}
