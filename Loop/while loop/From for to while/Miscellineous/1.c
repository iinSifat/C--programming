#include <stdio.h>
int main()
{
                int n,i,sum=1;
                printf("Enter a number:");
                scanf("%d",&n);
                i=1;
                while(i<=n)
                {
                              sum=sum*i;
                                i++;
                }
                printf("%d",sum);


                return 0;
}

