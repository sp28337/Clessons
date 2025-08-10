#include <stdio.h>

int main(void)
{
    int pass_code = 17;
    int entered_code;

    do {
        printf("Enter the code: ");
        scanf("%d", &entered_code);
        printf("The code is not correct, try again!\n");
    } while (entered_code != pass_code);
    
    printf("Welcome!\n");

    return 0;
}