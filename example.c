#include <stdio.h>

int main(void)
{
    double width = 2.88, height = 3.45, depth = 0.5;
    char name[] = "Chair";
    char info[100];
    
    const char template[] = "(%.3s: %.2f x %.2f x %.2f)";

    sprintf(info, template, name, width, height, depth);
    puts(info);

    return 0;
}
