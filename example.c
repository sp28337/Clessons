#include <stdio.h>
#define TEXT(A, B) "Square of rectangle (" #A ") x (" #B ")\n"

int main(void) 
{
    printf(TEXT(x-2, y-3));

    return 0;
}