// Write a C program that prints the content of a given array.
//  Use pointer increment instead of array indexing.
#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0};
    int *ptr = arr[9];

    // printf("%d", *ptr);
    // ptr++;
    // printf("%d", *ptr);
    // ptr++;
    // printf("%d", *ptr);
    // ptr++;
    // printf("%d", *ptr);
    // ptr++;
    // printf("%d", *ptr);
    // ptr++;
    // printf("%d", *ptr);
    // ptr++;
    // printf("%d", *ptr);
    // ptr++;
    // printf("%d", *ptr);
    // ptr++;
    // printf("%d", *ptr);
    // ptr++;
    // printf("%d", *ptr);
    // ptr++;
    // printf("%d", *ptr);
    // ptr++;
    for (int i = 10; i > 0; i--)
    {
        printf("%d ", *ptr);
        ptr--;
    }
}
