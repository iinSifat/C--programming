#include <stdio.h>
int main()
{
    double num1,num2,result;
    char  operator;
    printf("Two numbers and an operator to calculate:");
    scanf("%lf %lf %c",&num1,&num2,&operator);
    if (operator=='+')
    {
        result=num1+num2;
        printf("Sum : %lf%c%lf=%lf",num1,operator,num2,result);
    }
    else if (operator=='-')
    {
        result=num1-num2;
        printf("Sum : %lf%c%lf=%lf",num1,operator,num2,result);

    }
    else if (operator=='*')
    {
        result=num1*num2;
        printf("Sum : %lf%c%lf=%lf",num1,operator,num2,result);

    }

    else if (operator=='/')
    {
        if (num2!=0)
        {


            result=num1/num2;
            printf("Sum : %lf%c%lf=%lf",num1,operator,num2,result);}
            else {

                printf("The second number is 0");
            }

        }
        else {
                printf("invalid input");
        }



        return 0;
    }
