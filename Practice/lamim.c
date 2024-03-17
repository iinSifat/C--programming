#include <stdio.h>

int main()
{
    int a, palindrome_number = 0,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    int y = a;

    while (a > 0)
    {
        int i = a % 10;
        palindrome_number = (palindrome_number * 10) + i;
        sum += i * i;
        a = a / 10;
    }
    if (y == palindrome_number)
    {
        printf("Not Vecna");
    }

    else if (sum % 3 == 0)
    {
        printf("Vecna");

    }
    else
    {
        printf("Not Vecna");
    }

    return 0;
}

