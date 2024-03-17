#include<stdio.h>
int main ()
{
                int i,n,count=0;
                printf("Enter a number:");
                scanf("%d",&n);
                for (i=2;i<n;i++)
               {


                       if (n%i==0)
                                count++;
                                break;
                if(count==0&&i!=1)

                                printf(" %d",i);

               }


                return 0;
}
