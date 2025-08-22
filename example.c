#include <stdio.h>
#include <string.h>

int main(void)
{
    char st1[20] = "Hello Pattaya!";
    char st2[30] = "Hello Pattaya!";

    const char *str1 = st1;
    const char *str2 = st2;
    int i = 0;

    for(; str1[i] != '\0' && str2[i] != '\0'; ++i) {
        if(str1[i] != str2[i]) {
            puts("Streeng are not equal");
            return 0;
        }
    }

    if(str1[i] != str2[i]) {
        puts("Streeng lengh are not equal");
        return 0;
    }

    puts("Streeng are equal");

    return 0;
}
