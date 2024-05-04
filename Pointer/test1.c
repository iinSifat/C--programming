#include <stdio.h>
int main()
{
    // int a = 70;
    // printf("%d\n", a);
    // printf("a address: %p\n", &a);

    // int *ptr = &a;
    // printf("ptr %p", ptr);

    // int *ptr = a;
    // printf("%d", *ptr);

    //     int array[10] = {5, 2, 3, 9, 10, 1, 7, 5, 4, 6};
    //     int *p = &array[0];

    //     printf("Array 0:%d\n", array[0]);
    //     printf("Array 0:%d\n", &array[0]);

    //     printf("%d\n", array); // what will be the output?
    //     printf("%d\n", p);     // what will be the output?

    //     int array1[10] = {5, 2, 3, 9, 10, 1, 7, 5, 4, 6};
    //     int *pt = array1; // array points to 5

    //     printf("%d", *(pt + 5)); // what does it print?
    //
    int array[10] = {5, 2, 3, 9, 10, 1, 7, 5, 4, 6};
    int *p = array;   // array points to 5
    p++;              // where does p point to?
    printf("%d", *p); // what does it print?
}