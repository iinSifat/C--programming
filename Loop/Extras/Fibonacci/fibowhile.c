#include<stdio.h>
int main()
{
    int i,n,first=1,second=1,fibo,count=1;
    printf("Enter a number:");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        if(i!=n)
        {
            printf("%d,",first);
        }
        else
        {
            printf("%d",first);
        }
        fibo=first+second;
        first=second;
        second=fibo;
        i++;


    }



    return 0;
}
