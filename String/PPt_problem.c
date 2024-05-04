#include <stdio.h>
int Converter(char str[])
{

    int i = 0;
    while (str[i]) // length of string
        i++;

    i--;
    int num = 0;
    int p = 1; // position specification

    while (i >= 0)
    {
        num += (str[i] - '0') * p; // any number as character- zero ascii value = real integer number
        p *= 10;
        i--;
    }

    return num;
}
int main()
{
    char str[200];
    gets(str);
    int n = Converter(str);
    printf("%d", n);
}