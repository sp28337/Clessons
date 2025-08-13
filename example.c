#include <stdio.h>

#define SIZE_BUFFER 1024

int main(void)
{
    // correct array declaration
    double f[30];
    char buffer[SIZE_BUFFER];
    int marks[13];
    short arr[3 * 8];
    char bytes[sizeof(double)];

    // sizeof() - is not a function, it is an operator that returns the size of a type or object

    // incorrect array declaration
    int n = 5;

    int arr[n]; // correct in c99, not recommended due to possible incompatibility with other compilers
    float func[21.5];
    int null_arr[0];

    return 0;
}