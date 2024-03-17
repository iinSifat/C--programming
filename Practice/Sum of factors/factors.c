#include<stdio.h>
int main()
{
    int n,sum=0,sum1=0,sum2=0,rem;
    printf("Enter a number to calculate the sum of its factors:");
    scanf("%d",&n);

  printf("The factors of the number are:");

    int i = 1;
    while(i<=n)
    {
        if (n%i==0)
           {
                if(i==n)
            printf("%d",i);
            else
              printf("%d,",i);

             sum=sum+i;
             if(i%2==0)
             {
                     sum1=sum1+i;
             }
             else
             {
                     sum2=sum2+i;
             }

             }


             i++;


    }
 printf("\nSum of the factors is :%d\n",sum);
 printf("Sum of the even factors is :%d\n",sum1);
 printf("Sum of the odd factors is :%d\n",sum2);




getch();


    return 0;
}


