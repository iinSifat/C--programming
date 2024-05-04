#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    int len = strlen(str);

    char *ptr = &str[0];

    printf("reverse string:");

    for (ptr = &str[len - 1]; ptr >= &str[0]; ptr--)
    {
        printf("%c", *ptr);
    }

    char str2[100];
    strcpy()

        return 0;
}