#include <stdio.h>

int main(int argc, char *argv[])
{
    while (argc-- > 1)
        printf("%s ", argv[argc]);

    return 0;
}