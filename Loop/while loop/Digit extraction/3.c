//Write a C program to find out if an input integer is palindrome or not.
#include<stdio.h>
int main()
{
    int num,sum=0,n1,rem;

    printf("Enter a number:");
    scanf("%d",&num);
    n1=num;
    while(n1 != 0)
    {
        rem=n1%10;
        sum=sum*10+rem;
        n1=n1/10;

    }
    if (sum==num)
    {
        printf("Palindrome");
    }
    else
    {

        printf("Not palindrome");

    }
    return 0;
}
