#include <stdio.h>

int main(void)
{
    // output: 'onetwo'
    // break statements should be added to each case to prevent a case falling
    //      through the next

    int i = 1;
    switch (i % 3)
    {
        case 0: printf("zero");
        case 1: printf("one");
        case 2: printf("two");
    }
    return 0;
}