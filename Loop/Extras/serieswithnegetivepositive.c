/*Write a program that takes an integer number n as input
and find out the sum of the following series up to n terms.
1 X 5 - 4 X 8 + 7 X 11 - 10 X 14 + ………*/
#include<stdio.h>
int  main ()
{
    int i,j,n,count=1,Psum=0,Nsum=0,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1,j=5; count<=n; i=i+3,j=j+3)
    {

        if(count%2==0)
        {
            Psum=Psum-(i*j);
        }
        else
        {
            Nsum=Nsum+i*j;
        }

        count++;

    }
    sum=Psum+Nsum;
    printf("%d",sum);




    return 0;
}


