/*Write a C program where you will declare four float variables (say a, b, c and d),
initialize them by values of your choice, and calculate (a + b – c) * d – a / d..*/
#include <stdio.h>
int main ()
{
            float a=2.3, b=5.8, c=1.1, d=3.5,result;
            result= ((a + b-  c) * d)-(a / d);
            printf("(%.2f+%.2f-%.2f)*%.2f-%.2f/%.2f=%.2f",a,b,c,d,a,d,result);





            return 0;
}
