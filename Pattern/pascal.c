#include<stdio.h>
int main ()
{
    int n,row,col;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d",2*col);
        }
        for(col=row-1;col>0;col--)
        printf("%d",2*  col);
        printf("\n");
    }




    return 0;
}