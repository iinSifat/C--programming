#include<stdio.h>
int main ()
{


          int num1,num2,num3;
            scanf ("%d\n%d\n%d",&num1,&num2,&num3);
            printf("The numbers are \nFirst number:%d\nSecond number:%d\nThird number:%d",num1,num2,num3);

            if (num1>num2&&num1>num3)

            {
                        printf("\nThe largest number is number 1");
            }
            else if (num2>num1&&num2>num3)
            {
                        printf("\nThe largest number is number 2");
            }
            else{
                        printf("\nThe largest number is number 3");
            }

            return 0;
}
