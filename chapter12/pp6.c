#include <stdio.h>

#define N 5

void quicksort(int *low, int *high);
int *split(int *low, int *high);

int main(void)
{
    int i, a[N];

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    quicksort(a, a + N-1);

    printf("In sorted order: ");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void quicksort(int *low, int *high)
{
    if (low - high >= 0)
        return;

    int *middle = split(low, high);
    quicksort(low, middle - 1);
    quicksort(middle + 1, high);
}

int *split(int *low, int *high)
{
    int part_element = *low;

    for (;;)
    {
        while (high - low > 0 && part_element <= *high)
            high--;
        if (low - high >= 0) break;

        *low = *high;
        low++;

        while (high - low > 0 && *low <= part_element)
            low++;
        if (low - high >= 0) break;

        *high = *low;
        high--;
    }

    *high = part_element;

    return high;
}