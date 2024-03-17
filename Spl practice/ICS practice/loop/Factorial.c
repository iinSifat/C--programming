#include<stdio.h>
int main ()
{
    int n,count=1,sum=1;
    printf("Enter the value for n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        sum=sum*i;


    }
printf("%d",sum);

    }


