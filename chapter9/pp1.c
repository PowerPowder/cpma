#include <stdio.h>
#include <stdbool.h>

#define N 5

void selection_sort(int a[], int n);
bool is_sorted(int a[], int n);
int get_largest_el(int a[], int n);
void swap(int a[], int x, int y);

int main(void)
{
    int i, a[N];
    printf("Enter %d integers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    selection_sort(a, N);

    for (i = 0; i < N; i++)
        printf("%d", a[i]);

    return 0;
}

void selection_sort(int a[], int n)
{
    // find largest element
        // move element to last position - swap last and 'i'
        // figure out how to see if it doesn't need to swap
    // do this recurisively

    int last = n-1;

    if (last < 0)
        return;
    else
    {
        int largest_el = get_largest_el(a, last);

        if (largest_el == last)
            return;

        if (a[largest_el] > a[last])
            swap(a, largest_el, last);

        selection_sort(a, last);
    }
}

bool is_sorted(int a[], int n)
{
    int i, current = a[0];

    for (i = 0; i < n; i++)
    {
        if (!(a[i] >= current))
            return false;

        current = a[i];
    }

    return true;
}

int get_largest_el(int a[], int n)
{
    int i, largest = a[0], el = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
            el = i;
        }
    }

    return el;
}

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}