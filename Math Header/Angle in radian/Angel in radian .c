//Write a C program that will take as input an angle in radian, and calculate the sine, the cosine and the tangent of the angle
#include <stdio.h>
#include <math.h>


int main ()
{
    double angleinradian,sineValue,cosineValue,tangentValue;

    printf("Enter the radian value:");
    scanf("%lf",&angleinradian);

    sineValue = sin(angleinradian);
    cosineValue= cos(angleinradian);
    tangentValue=tan (angleinradian);


    printf("Sine value of %.2f is %.2f",angleinradian,sineValue);
    printf("\nCosine value of %.2f is %.2f",angleinradian,cosineValue);
    printf("\ntangent value of %.2f is %.2f",angleinradian,tangentValue);

    return 0;




}
