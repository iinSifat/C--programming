#include<stdio.h>
int main ()
{
            int x;
            scanf("%d",&x);
            printf ( "The number is:%d",x);

            if (x>0)
            {
                printf("\n X is a positive number");
            }
            else if (x<0)
            {
                printf("x is a negative number");
            }
            else //else can not have a condition
                        //else always use in the last condition
            {
                printf("\n x is 0");
            }


            return 0;





}
