#include<stdio.h>
int main()
{
                int i,n,first=1,second=1,fibo,count=1,sum=0;
                printf("Enter a number:");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                {

                               sum=sum+first;
                                fibo=first+second;
                                first=second;
                                second=fibo;


                }
                   printf("%d ",sum);


                return 0;
}

