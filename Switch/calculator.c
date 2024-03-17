#include <stdio.h>
int main ()
{
    double a,b,result;
    int choice,casechoice;

    printf("Enter two numbers:");
    scanf("%lf%lf",&a,&b);

    printf("Choice one of the four options:\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        result=a+b;
        printf("Addition:%.2lf\n",result);
        break;
    case 2:
        result=a-b;
        printf("Subtraction:%.2lf\n",result);
        break;
    case 3:
        result =a*b;
        printf("Multiplication: %2lf\n",result);
        break;
    case 4:
        if (b!=0)
        {
            printf("Two choices:\n");
            printf("1.Division\n");
            printf("2.Reminder\n");
            scanf("%d",&casechoice);

            if (casechoice==1)
            {
                result=a/b;
                printf("Division: %.2lf",result);
            }
            else if(casechoice==2)
            {
                result=fmod(a,b);
                printf("Reminder:%.2lf",result);
            }
            else
            {
                printf("Wrong case choice");
            }

        }
        else
        {
            printf("The second number is zero");

        }
        break;
    default:
        printf("Invalid choice");
    }
    return 0;

}
