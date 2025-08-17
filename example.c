#include <stdio.h>

int main(void)
{
    char game_pole[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    char *p_row = game_pole[1];
    printf("%d", *(p_row - 2));

    char (*p_ar)[3] = game_pole; // указатель на массив
    char *ptr[3]; // массив указателей

    return 0;
}
