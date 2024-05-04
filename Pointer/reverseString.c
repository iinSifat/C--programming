#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    gets(str);

    int cnt = 0;
    int i = 0;
    while (str[i] != 0)
    {

        cnt++;
        i++;
    }

    int length = cnt;
    printf("Length is : %d\n", length);

    char *ptr = &str[0];

    for (ptr = &str[length - 1]; ptr >= &str[0]; ptr--)
    {
        printf("%c", *ptr);
    }
}