#include <stdio.h>
int main()
{
                int n,i,count=1;
                printf("Enter a number:");
                scanf("%d",&n);
                i=1;
                while(count<=n)
                {
                                printf("%d ",i);
                                i+=2;
                                count++;
                }


                return 0;
}

