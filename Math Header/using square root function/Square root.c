//Write a C program that will calculate the terminal velocity of a moving body by using the following equation:

#include <stdio.h>
#include <math.h>
int main ()


{
    double v,u,a,s;
    printf("Enter the the u:");
    scanf("%lf",&u);

     printf("Enter the the a:");
    scanf("%lf",&a);

     printf("Enter the the s:");
    scanf("%lf",&s);

    v= sqrt (u*u+2*a*s);// square root function

    printf ("The valocilty is V=%.2f",v);

    return 0;



}

