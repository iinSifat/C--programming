#include<stdio.h>
int main ()
{
    int num1,num2,rem,gcd,lcm,n1,n2;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);

    n1=num1;
    n2=num2;

    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(num1*num2)/gcd;


    printf("GCD=%d\nLCM=%d ",gcd,lcm);



    return 0;
}
