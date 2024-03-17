#include<stdio.h>
int main()
{
            int number;
            printf("Enter the number:");
            scanf("%d",&number);

            if (number>0)
            {
                        if((number&&(number-1))==0)
                           {
                                       printf("The number is a power of 2");
                           }
                           else
                                    {
                                           printf("The number is positive but not a power of 2");
                                    }
            }
            else if (number==0)
            {
                        printf("Zero isn't a valid input");
            }
            else
            {
                        printf("Negative input isn't valid");
            }

            return 0;
}
