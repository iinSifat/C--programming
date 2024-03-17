#include<stdio.h>
int main ()
{
                int i,n,count=1;
                printf("Enter a number:");
                scanf("%d",&n);
                for (i=10;count<=n;i=i*3)
                {
                             printf("%d ",i);
                             count++;

                }



                return 0;
}
