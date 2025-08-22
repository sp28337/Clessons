#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *strings[] = {
        "Hello Pattaya!", "BKK", "Chiang Mai", "Chiang Rai", "Waiting for you!"
    };

    for(int i = 0; i < sizeof(strings) / sizeof(*strings); ++i)
        if(strncmp(strings[i], "Ch", 2) == 0)
            puts(strings[i]);

    return 0;
}
