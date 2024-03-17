/*
1 
2 2
3 3 3
*/

#include<stdio.h>
int main()
{
    int row;
    printf("Enter the total numbers of rows:");
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
    printf("\n");
    }
    /*
    1
    2 1
    3 2 1 
    */


    return 0;
}