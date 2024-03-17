#include<stdio.h>
int main ()

{
    int n,i,j,sum=0,count=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=3,j=3; count<=n; i=i+3,j=j*j)
    {
        sum=sum+(i*j);
        count++;
    }
    printf("%d",sum);


    return 0;
}
