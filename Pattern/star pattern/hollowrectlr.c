#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the total numbers of rows:");
    scanf("%d",&row);
    printf("Enter the total numbers of collums:");
    scanf("%d",&col);
    
    for ( int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
           if(i==1||i==row||j==1||j==col){
            printf("*");}
            else printf(" ");
           
        }
         printf("\n");
    }


    return 0;
}