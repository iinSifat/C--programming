#include<stdio.h>
#include<math.h>
int main ()
{
                int n,count=1,sum=0;

                printf("Enter a number:");
                scanf("%d",&n);
                for(int i=1; count<=n; i++)
                {
                               sum=sum+pow(i,2);
                                count++;
                }
                printf("%d",sum);
  return 0;
}

