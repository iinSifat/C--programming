#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if(row==1||row==n/2+1||row==n)
            printf("*");
            else if(row>n/2+1&&row<n&&col==n)
            printf("*");
        }
        printf("\n");
    }

}