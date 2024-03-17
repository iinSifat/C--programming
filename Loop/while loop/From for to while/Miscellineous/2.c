#include <stdio.h>
int main()
{
    int n,r,i,n_fact=1,nr_fact=1,npr=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter another number:");
    scanf("%d",&r);
    i=1;
    while(i<=n)
    {
        n_fact=n_fact*i;
        i++;
    }
    i=1;
    while(i<=(n-r))
    {
        nr_fact=nr_fact*i;
        i++;
    }

    npr=n_fact/nr_fact;
    printf("%d",npr);


    return 0;
}

