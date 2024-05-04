#include <stdio.h>
int max(int *a, int *b)
{
    if (*a > *b)
        printf("Maximum is %d", *a);
    else
        printf("Maximum is %d", *b);
}
int main()
{
    int a, b;

    printf("Enter:");
    scanf("%d%d", &a, &b);
    max(&a, &b);
}