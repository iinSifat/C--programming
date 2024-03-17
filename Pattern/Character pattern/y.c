#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value for n:");
    scanf("%d",&n);

    
        for(int row=1;row<=n;row++){
            for(int col=1;col<=n;col++){
                if(row>=n/2+1&&col==n/2+1)
                printf("*");
                else if (row<n/2+1&&row==col)
                printf("*");
                else if (row<n/2+1&&row+col==n+1)
                printf("*");
                else
                printf(" ");
            }
            printf("\n");
        
        }

    return 0;
}