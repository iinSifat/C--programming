#include<stdio.h>
int main ()
{
    int digit;
    printf("Enter the digit:");
    scanf("%d",&digit);
    switch(digit>0)
    {
    case 0:
        switch(digit<0)
        {
        case 1:
            printf("Negative");
            break;
        case 0:
            printf("Zero");
            break;}
            break;
        case 1:

            printf("Positive");

        }

        return 0;
    }
