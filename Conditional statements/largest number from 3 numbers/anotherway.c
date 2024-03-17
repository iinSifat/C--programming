#include<stdio.h>
int main ()
{


          int num1,num2,num3;
            scanf ("%d\n%d\n%d",&num1,&num2,&num3);
            printf("The numbers are \nFirst number:%d\nSecond number:%d\nThird number:%d",num1,num2,num3);

            if (num1>num2)
            {
                        if (num2>num3)
                        {
                                    printf("\nThe largest number is Number 1");

                        }
                        else {
                                    printf("\nThe largest number is Number 3");
                        }
            }
            else
            {
                        if(num2>num3)
                        {
                                    printf("\nThe largest number is Number 2");
                        }
                        else

                        {printf("\nThe largest number is Number 3");
                        }
            }

            return 0;

}



