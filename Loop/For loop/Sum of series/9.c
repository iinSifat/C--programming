#include<stdio.h>
int main ()
{
                int n,count=1,sum=0;

                printf("Enter a number:");
                scanf("%d",&n);
                for(int i=1,j=2; count<=n; i++,j++)
                {
                              sum=sum+i*j;
                                count++;
                }
                printf("%d",sum);
  return 0;
}

