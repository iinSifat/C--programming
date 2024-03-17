#include <stdio.h>
#include<math.h>
int main()
{
    int input,temp,sum=0,rem,count=0;
    printf("Enter a number:");
    scanf("%d",&input);

    temp=input;

    while(input!=0)
    {
        input=input/10;
        count++;

    }

    input=temp;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+ pow(rem,count);
        temp=temp/10;

    }
    if (input==sum)
        printf("Armstrong =%d",sum);
    else
    {
        printf("Not armstrong %d ",sum);
    }

    return 0;
}
