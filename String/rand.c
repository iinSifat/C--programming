#include <stdio.h>
int main()
{
    char str[] = "tanimul";
    char *ptr = str;

    printf("%u\n\n", &str[0]);
    printf("%p\n\n", ptr);

    printf("%c\n\n", str[0]);
    printf("%c\n\n", *ptr);
}