#include <stdio.h>
void swap(int *a, int *b) // parameters
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b); // Argument passing
    printf("A=%d b=%d", a, b);
}