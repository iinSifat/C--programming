#include <stdio.h>
int main()
{
    char str[100] = "Hello world";
    char *ptr;
    ptr = &str[0];

    int cnt_v = 0, cnt_c = 0;

    for (int i = 0; *ptr != '\0'; i++)
    {

        if (*ptr >= 'A' && *ptr <= 'Z' || *ptr >= 'a' && *ptr <= 'z')
        {

            if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
                *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
                cnt_v++;
            else
                cnt_c++;
        }

        ptr++;
    }

    printf("Vowel: %d\n", cnt_v);
    printf("Consonent: %d", cnt_c);

    return 0;
}
