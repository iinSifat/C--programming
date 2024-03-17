//Write C programs that will print the all the numbers of the following series up to n (i.e. the last term cannot exceed n).

#include<stdio.h>
int main ()
{
                int n,i;
                printf("Enter a number:");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                {
                                printf("%d ",i);
                }
  return 0;
}
