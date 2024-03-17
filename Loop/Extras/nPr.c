#include<stdio.h>
int main ()

{
    int n,i,r,n_fact=1,nr_fact=1,npr;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter another number:");
    scanf("%d",&r);
    if(n>r)
    {
            for(i=1; i<=n; i++)
    {
        n_fact=n_fact*i;
    }
    for(i=1; i<=(n-r); i++)
    {
        nr_fact=nr_fact*i;
    }
    npr=n_fact/nr_fact;
    printf("%d",npr);
    }
    else
        printf("Invalid");






    return 0;
}
