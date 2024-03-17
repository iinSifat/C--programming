/*Program that will read from the console a random positive nonzero
number and determine if it is a power of 2.*/
#include<stdio.h>
int main ()
{
           int number;
           printf("Enter a positive nonzero number:");
           scanf("%d",&number);

           if (number>0 && (number &(number-1))==0)
           {
                       printf("This is number a power of 2");

           }
            else
                        {
                                    printf("This number isn't a power of 2");
                        }
            return 0;
}
