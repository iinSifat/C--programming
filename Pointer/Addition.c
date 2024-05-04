#include <stdio.h>
int add(int *a, int *b)
{
    int sum = *a + *b;
    return sum;
}

int main()
{
    int a, b;
    printf("Enter two num:");
    scanf("%d %d", &a, &b);

    printf("Sum: %d", add(&a, &b));
}