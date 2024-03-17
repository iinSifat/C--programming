//find the sum of 1,1,2,3,5,.....till nth term
#include<stdio.h>
int main()
{
    int n,first=1,second=1,fibo,count=1,sum=0;
    printf("Enter the value for n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fibo=first+second;
        sum=sum+first;
        first=second;
        second=fibo;
        


    }
        printf("%d",sum);

    return 0;
}
