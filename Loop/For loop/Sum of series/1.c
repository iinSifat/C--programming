#include<stdio.h>
int main ()
{
                int n,count=1,sum=0;

                printf("Enter a number:");
                scanf("%d",&n);
                for(int i=1; count<=n; i++)
                {
                             sum=sum+i;//1+3+6+10+15
                                count++;
                }
                printf("Sum:%d",sum);
  return 0;
}

