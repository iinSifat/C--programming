#include <stdio.h>
int main ()
{
    int a,b,result;
    float result2 ;
    scanf("%d",&a);
    printf("The first number is:%d",a);
    scanf("%d",&b);
    printf("The second number is:%d",b);
    result=a+b;
    printf("\nThe sum of the numbers is :%d+%d=%d",a,b,result);
    result=a-b;
    printf("\nThe subtraction of the numbers is :%d-%d=%d",a,b,result);
    result=a*b;
    printf("\nThe multiplication of the numbers is :%d*%d=%d",a,b,result);
    result2=(float)a/b;
    printf("\nThe division of the numbers is :%d/%d=%.4f",a,b,result2);
    result=a%b;
    printf("\nThe remainder of the numbers is :%d%%%d=%d",a,b,result);
return 0;
}
