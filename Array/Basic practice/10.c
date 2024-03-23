#include<stdio.h>
int main()
{
    int arr[90],size;
    scanf("%d",&size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);

    }
    int src_n;
    scanf("%d",&src_n);
    int count=0,flag=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==src_n){
            flag=1;
        count++;}
        else
            flag=0;
    }
    
    if(flag==1)
    {
        printf("Found %d times",count);
        printf("At position:");
         for(int i=0; i<size; i++){
                if(arr[i]==src_n){
                printf("%d ",i);}
                }
        
         }


    
    else
    {
        printf("Not found");
    }

}



