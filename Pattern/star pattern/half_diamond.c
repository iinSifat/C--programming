#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the total numbers of rows:");
    scanf("%d",&row);
    
    for ( int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("*");
           
        }
         printf("\n");
    }
    for(int i=row-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}