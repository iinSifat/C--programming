#include<stdio.h>
int main()
{
    int base,power,result=1;
    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the power:");
    scanf("%d",&power);
    for(int i=1;i<=power; i++)
    {
        result=result*base;

    }
    printf("Result\t:%d",result);
    return 0;
}