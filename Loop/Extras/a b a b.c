/*Write a program (WAP) that will print following series upto Nth terms.
a, b, a, b, a, b, a, b, a, b, a, b, a, ........*/
#include<stdio.h>
int main()
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
                printf("b");
            }
            else
            {
                printf("b,");
            }
        }
        else
        {
            if(i==n)
            {
                printf("a");
            }
            else
            {
                printf("a,");
            }


        }
    }




                return 0;
}
