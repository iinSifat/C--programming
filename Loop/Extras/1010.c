//Write a program (WAP) that will print following series upto Nth terms. 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,
#include<stdio.h>
int main ()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            if (i==n)
            {
                printf("0");
            }
            else
            {
                printf("0,");
            }
        }
        else
        {
            if(i==n)
            {
                printf("1");
            }
            else
            {
                printf("1,");
            }


        }
    }



    return 0;
}
