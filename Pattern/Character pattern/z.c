#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value for n:");
    scanf("%d",&n);
    for(int row=1; row<=n;row++){
        if(row==1||row==n)
           {
            for(int col=1;col<=n;col++){
           printf("*");
           }
           }
        else{
            for(int i=1;i<=row-1;i++){
                printf(" ");

            }
            for(int j=1;j==1;j++){
                printf("*");
            }
           }
        
        printf("\n");
    }
    printf("Z\n");
    for(int row=1;row<=n;row++)
    {
        if(row==1||row==n){
            for(int col=1;col<=n;col++)
           {
           printf("*");

        }
       

    }
    else{
        for(int i=1;i<=row-i;i++){
            printf(" ");
        }
        for(int j=1;j==1;j++){
            printf("*");
        }
    }
    printf("\n");

    }






    return 0;
}