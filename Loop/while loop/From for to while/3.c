
#include <stdio.h>
int main()
{
    int n,i,count=1,sum=0,j;
    printf("Enter a number:");
    scanf("%d",&n);
    i=1;
    j=3;
    while(count<=n)
    {


        sum+=i*j;

        i=i*2;
        j=j+3;
        count++;


    }
    printf("%d",sum);


    return 0;
}
