//Solid square Star Pattern in C
#include<stdio.h>
int main()
{
    int row;
    printf("Enter the total numbers of rows:");
    scanf("%d",&row);
    for ( int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            printf("*");
           
        }
         printf("\n");
    }


    return 0;
}