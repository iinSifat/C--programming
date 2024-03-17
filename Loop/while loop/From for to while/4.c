#include <stdio.h>
int main()
{
    int n,prime=0, i;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=1)
    {
        prime=1;
    }
    else
    {
        i=2;
        while(i<n)
        {
            if(n%i==0)

                prime=1;
                i++;

         break;
        }

    }
    if(prime==0){
        printf("Prime");}
    else{
        printf("Not prime");}


    return 0;
}

