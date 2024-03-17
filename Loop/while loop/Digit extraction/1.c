//Write a C program to calculate the sum of the digits of an input integer.
#include<stdio.h>
int main()
{
        int num,sum=0,n1,rem;

        printf("Enter a number:");
        scanf("%d",&n1 );

        while(n1 !=0)
        {
                rem=n1%10;
                sum=sum+rem;
                n1=n1/10;

        }
        printf("Sum of the digits are = %d",sum);





        return 0;
}

