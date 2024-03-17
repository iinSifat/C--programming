//Write a C program to find out the reverse of an input integer.
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
        printf("Reverse of the number is = %d",sum);

        return 0;
}


