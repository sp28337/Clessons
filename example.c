#include <stdio.h>

int main(void)
{
    char d = 10;
    char *gpt = &d;

    printf("addres = %p\nd = %d\ngpt = %d", gpt, *gpt, d);

    *gpt = 100;
    
    printf("\naddres = %p\nd = %d\ngpt = %d", gpt, *gpt, d);

    return 0;
}