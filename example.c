#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    double width = 2.88, height = 3.45, depth = 0.5;
    char name[] = "Chair";
    const size_t size = strlen(name) + 100;
    char* info = malloc(size);
    const char template[] = "(%.3s: %.2f x %.2f x %.2f)";

    sprintf(info, template, name, width, height, depth);
    puts(info);

    free(info);

    return 0;
}
