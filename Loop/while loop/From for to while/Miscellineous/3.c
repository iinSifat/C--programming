#include<stdio.h>
int main()
{
                int i,a,b,result=1,count=1;
                printf("Enter a number a:");
                scanf("%d",&a);
                printf("Enter a number a:");
                scanf("%d",&b);
                for(i=1;i<=b;i++)
                {

                                result=result*a;
                }
                printf("%d",result);


                return 0;
}
