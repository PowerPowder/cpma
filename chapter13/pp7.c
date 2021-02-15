#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int num;
    char *ones[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *teens[] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                   "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    printf("You entered the number: ");
    if (num >= 11 && num <= 19)
        printf("%s", teens[num % 10 - 1]);
    else 
    {
        printf("%s", tens[num / 10 - 1]);
        if (num % 10)
            printf("-%s", ones[num % 10 - 1]);
    }
    printf("\n");


    // first digit: 1X
    /*
    switch (num / 10)
    {
        case 1: teens = true;      break;
        case 2: printf("twenty");  break;
        case 3: printf("thirty");  break;
        case 4: printf("fourty");  break;
        case 5: printf("fifty");   break;
        case 6: printf("sixty");   break;
        case 7: printf("seventy"); break;
        case 8: printf("eighty");  break;
        case 9: printf("ninety");  break;
    }
    */

    /*
    // second digit: X1
    if (!teens)
        switch (num % 10)
        {
            case 1: printf("-one");   break;
            case 2: printf("-two");   break;
            case 3: printf("-three"); break; 
            case 4: printf("-four");  break;
            case 5: printf("-five");  break;
            case 6: printf("-six");   break;
            case 7: printf("-seven"); break;
            case 8: printf("-eight"); break;
            case 9: printf("-nine");  break;
        }
    else
        switch (num)
        {
            case 10: printf("ten");       break;
            case 11: printf("eleven");    break;
            case 12: printf("twelve");    break;
            case 13: printf("thirteen");  break;
            case 14: printf("fourteen");  break;
            case 15: printf("fifteen");   break;
            case 16: printf("sixteen");   break;
            case 17: printf("seventeen"); break;
            case 18: printf("eighteen");  break;
            case 19: printf("nineteen");  break;
        }
        */

    return 0;
}