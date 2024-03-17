//Write a C program to enter temperature in Celsius and convert it into Fahrenheit.


#include <stdio.h>

int main ()
{
            double c,f;
            printf("Enter the temperature in Celsius : ");
            scanf("%lf",&c);

            f=(9*c)/5+32;
            printf("Fahrenheit:%.3lf",f);

            return 0;
}
