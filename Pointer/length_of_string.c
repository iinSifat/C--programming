#include <stdio.h>
int main()
{
    char str[] = {"Hello world"};
    char *ptr;
    ptr = &str[0];

    int count = 0;

    for (int i = 0; *ptr != '\0'; i++)
    {
        ptr++;
        count++;
    }

    printf("Length of string is : %d", count);

    return 0;
}