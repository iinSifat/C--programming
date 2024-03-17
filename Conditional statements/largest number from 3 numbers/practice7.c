//Program that will take two numbers X & Y as inputs and decide whether X is greater than/less than/equal to Y.

#include<stdio.h>
int main ()
{
    double num1,num2;
    printf("Enter the first number:");
    scanf("%lf",&num1);

    printf("Enter the second number:");
    scanf("%lf",&num2);

                 if (num1>num2)
                 {
                                 printf("The first number is greater then the second number");
                 }
                 else if (num1==num2)
                 {
                                 printf("The two numbers are equal");
                 }
                 else{
                                printf("The second number is greater then the first one");
                 }

    return 0;
}
