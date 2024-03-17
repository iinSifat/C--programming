#include<stdio.h>
int main ()
{
                int n,count=1,sum=0;

                printf("Enter a number:");
                scanf("%d",&n);
                for(int i=1; count<=n; i=i+0.1)
                {
                                sum=sum+i;
                                count++;
                }
                printf("Sum:%d\n",sum);
  return 0;
}

