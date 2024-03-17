/*Write a program (WAP) that will print the factorial (N!) of a given number N.
 Please see the sample input output.
Sample input
2
Sample output
2!=2 X 1=2
*/
#include<stdio.h>
int main ()
{
    int i,n,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);

    printf("%d!=",n);
    for(i=n; i>=1; i--)
    {
        fact=fact*i;

        if(i==1)
        {
            printf("1");
        }
        else
        {

            printf("%dX",i);
        }
    }
    printf("=%d",fact);

    return 0;
}
