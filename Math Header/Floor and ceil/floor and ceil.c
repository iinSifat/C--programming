#include <stdio.h>
#include <math.h>
int main ()
{
    double inputNumber;
    printf("Input a floating-point number:");
    scanf("%lf",&inputNumber);

    double FloorValue = floor(inputNumber);
    double CeilValue = ceil(inputNumber);


    printf("The floor of the number of %.2f is %.2f",inputNumber,FloorValue);
    printf("\nThe ceil of the number of %.2f is %.2f",inputNumber,CeilValue);

    return 0;



}
