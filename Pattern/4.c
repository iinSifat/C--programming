/*
1 
0 0
1 1 1

*/
#include<stdio.h>
int main()
{
    int row;
    printf("Enter the total numbers of rows:");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){

            if(i%2==0)printf("0 ");
            else printf("1 ");

        }
        printf("\n");

    }




}