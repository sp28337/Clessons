#include <stdio.h>

int main(void)
{
    float array_1[20] = {0.1, -3.6, 12.8, -0.2, 0, 27.5};
    float array_2[10];

    int size_1 = sizeof(array_1) / sizeof(array_1[0]);
    int size_2 = sizeof(array_2) / sizeof(array_2[0]);
    int shorter_size = (size_1 > size_2) ? size_2 : size_1;

    for(int i = 0; i < shorter_size; ++i)
        printf("%.2f ", array_2[i]);
    
    printf("\n");

    for(int i = 0; i < shorter_size; ++i)
        array_2[i] = array_1[i];

    for(int i = 0; i < shorter_size; ++i)
        printf("%.2f ", array_2[i]);

    return 0;
}
