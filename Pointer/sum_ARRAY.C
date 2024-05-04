#include <stdio.h>
int summation(int *ar, int *ptr)
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf("With function Sum: %d", sum);
    return sum;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = &arr[0];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += *ptr;
        ptr++;
    }

    printf("Without function Sum: %d", sum);
    summation(&arr[0], &arr[0]);

    return 0;
}