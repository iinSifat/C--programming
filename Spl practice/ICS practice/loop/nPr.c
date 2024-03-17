#include<stdio.h>
int main()
{
    int n,r,Nsum=1,Rsum=1,sum=1;
    printf("Enter the value for n: ");
    scanf("%d",&n);
     printf("Enter the value for r: ");
    scanf("%d",&r);

    for (int i=n;i>=1;i--)
    {
     Nsum=Nsum*i;

    }
    for(int j=n-r;j>=1;j--)
    {
        Rsum=Rsum*j;

    }
    sum=Nsum/Rsum;
    printf("%d",sum);

    return 0;
}