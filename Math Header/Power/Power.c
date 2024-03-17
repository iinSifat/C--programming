//Write a C program that will take as input two floating point numbers and a,b and print the value of a^b.
#include <stdio.h>
#include <math.h>

int main ()

{  int degree;
    double angleinradian,sinevalue,cosinevalue,tangentvalue;
    printf("enter the angle in degree format:");
    scanf("%d",&degree);

    angleinradian= (degree*3.1416)/180;
    sinevalue=sin(angleinradian);
    cosinevalue=cos(angleinradian);
    tangentvalue=tan(angleinradian);

    printf ("Sine = %.2lf\nCosine = %.2lf\ntangent =%.2lf",sinevalue,cosinevalue,tangentvalue);

    return 0;



}
