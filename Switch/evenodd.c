//Write a C program to check whether a number is even or odd using switch case.
#include<stdio.h>
int main()
{
    int digit;
    printf("Enter the digit:");
    scanf("%d",&digit);
    switch(digit%2)
    {
    case 0:
        printf("%d even",digit);
        break;
    case 1:
        printf("odd");
    }


    return 0;
}
