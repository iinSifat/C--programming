#include<stdio.h>
int main ()
{
                int n,count=1;

                printf("Enter a number:");
                scanf("%d",&n);
                for(int i=5; count<=n; i=i*2)
                {
                                printf("%d ", i);
                                count++;
                }
  return 0;
}

