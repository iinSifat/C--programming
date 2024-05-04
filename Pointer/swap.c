#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int A = 9;
    int B = 10;
    swap(&A, &B);
    printf("A=%d, B=%d", A, B);
}