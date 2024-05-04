#include <stdio.h>
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr = &array[0];
    printf("Array:");
    for (ptr = &array[0]; ptr <= &array[4]; ptr++)
    {
        printf("%d ", *ptr);
    }

    int *ptr1 = &array[4];

    printf("Reverse array:");

    for (ptr1 = &array[4]; ptr1 >= &array[0]; ptr1--)
    {
        printf("%d ", *ptr1);
    }

    return 0;
}