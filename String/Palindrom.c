#include <stdio.h>

int is_Pallindrome(char str[])
{

    int i = 0, cnt = 0;

    while (str[i])
    {

        i++;
    }
    int lnth = i;
    i = 0;

    while (i < lnth)
    {
        if (str[i] != str[lnth - 1])
            return 0;
        i++;
        lnth--;
    }

    return 1;
}

int main()
{
    char str[100];
    printf("Enter string:");
    gets(str);

    if (is_Pallindrome(str) == 1)
        printf("Pallindrome\n");
    else
        printf("Not pallindrome");
}
