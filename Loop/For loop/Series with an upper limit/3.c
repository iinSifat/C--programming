#include<stdio.h>
int main ()
{
                int n;

                printf("Enter a number:");
                scanf("%d",&n);
                for(int i=2; i<=n; i=i+2)
                {
                                printf("%d ", i);
                }
  return 0;
}

