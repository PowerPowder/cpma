#include <stdio.h>

int main(void)
{
    int code, first, second;
    printf("Enter phone number [ (xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &code, &first, &second);
    printf("You entered %d.%d.%d", code, first, second);

    return 0;
}