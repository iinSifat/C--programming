#include<stdio.h>
int main()
{
    int row;
    printf("Enter the total numbers of rows:");
    scanf("%d",&row);
    
    printf("The pyramid shape\n");
    for ( int i=1;i<=row;i++){//normal pyramid
        for(int j=1;j<=(row-i);j++){
            printf(" ");    
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
        }

         printf("\n");
    }
    
//invrted pyramid
     for ( int i=row-1;i>=1;i--){
        for(int j=1;j<=(row-i);j++){
            printf(" ");    
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
        }

         printf("\n");
    }


    return 0;
}