#include <stdio.h>

int main(void)
{
    int num;

    long double result;

    //short:           7
    //int:            13
    //long:           20
    //long long:      20
    //float:          34
    //double:        170
    //long double:  1755


    printf("Enter a positive integer: ");
    scanf("%d", &num);

    result = 1;

    for (int i = 1; i <= num; i++)
    {
        result *= (long double)i;
    }

    printf("Factorial of %d: %Lf", num, result);

    return 0;
}