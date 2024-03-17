//Write a C program that will take as input an angle in degree, and calculate the sine, the cosine and the tangent of the angle
#include <stdio.h>
#include <math.h>


int main ()
{

    int degree;
    double angleinradian,sineValue,cosineValue,tangentValue;

    printf("Enter the degree value:");
    scanf("%d",&degree);

    angleinradian= (degree*3.1416)/180;


    sineValue = sin(angleinradian);
    cosineValue= cos(angleinradian);
    tangentValue=tan (angleinradian);


    printf("Sine value of %d is %.2f",degree,sineValue);
    printf("\nCosine value of %d is %.2f",degree,cosineValue);
    printf("\ntangent value of %d is %.2f",degree,tangentValue);

    return 0;




}

