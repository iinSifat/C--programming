/*Write a C program which will take as input the height of
an object in inches, and represent it in feet-inch format.*/
#include <stdio.h>
int main ()
{
            int inch,ft,inch_ft;
            printf("Enter the height in inches: ");
            scanf("%d",&inch);

            ft=inch/12;
            inch_ft=inch%12;

            printf("%d feet %d inches",ft,inch_ft);





            return 0;
}
