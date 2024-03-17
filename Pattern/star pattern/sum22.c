#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value for n:");
    scanf("%d",&n);

    
    for(int row=n;row>=1;row--){
        for(int col=row;col>0;col--){
     
        printf("%d",col);}

        printf("\n");
    }
        
        
     
        

    return 0;
}