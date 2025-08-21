#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[100] = "Hello World!!!";
    char destination[10];
    int max_len = sizeof(destination) - 1;

    strncpy(destination, source, max_len);

    destination[max_len] = '\0';
    
    puts(destination);

    return 0;
}
