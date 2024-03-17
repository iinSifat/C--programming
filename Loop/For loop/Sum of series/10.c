#include<stdio.h>
int main ()
{
                int n,count=1,sum=0;


                printf("Enter a number:");
                scanf("%d",&n);
                for(int i=2,j=5; count<=n; i=i*2,j=j+3)
                {
                                sum=sum+i*j;
                                count++;
                }
                printf("%d",sum);
  return 0;
}

