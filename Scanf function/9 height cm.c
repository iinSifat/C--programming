/*Write a C program which will take as input the height of an object in centimeters,
 and represent it in meter-centimeter format.*/
#include <stdio.h>
int main ()
{
            int meter,cm, meter_cm;
            printf("Enter the Height in centimeters:");
            scanf("%d",&cm);

            meter=cm/100;
            meter_cm=cm%100;
            printf("%d meters and %d centimeters",meter,meter_cm);


            return 0;
}
