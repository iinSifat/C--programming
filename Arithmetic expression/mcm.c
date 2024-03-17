#include<stdio.h>
int main ()
{
    int m,cm,m_cm;
    printf("Enter the value in centimeters:");
    scanf("%d",&cm);
    m=cm/100;
    m_cm= cm%100;
    printf("%d meters %d centimeters",m,m_cm);


    return 0;
}