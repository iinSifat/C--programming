#include <stdio.h>
int main()
{
    int a;
    a = 100;
    int *ptr = &a;
    int **pptr = &ptr;
    printf("%d", **pptr);
}
