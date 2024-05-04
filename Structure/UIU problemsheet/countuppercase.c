#include <stdio.h>
int main()
{
    char str[] = "I am Iffat Ibne Nashir Sifat";
    int cnt1 = 0, cnt2 = 0;              // In C, using a variable without initialization can lead to unpredictable behavior because it may contain garbage values from memory.
    for (int i = 0; str[i] != '\0'; i++) // str[i]!=0, str[i]=0, str[i] >> same condition
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {

            cnt1++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
            cnt2++;
    }
    printf("Total capital letters are %d\nTotal small letters are %d", cnt1, cnt2);
}