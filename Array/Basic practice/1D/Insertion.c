#include<stdio.h>
int main ()
{

    //Beginning of the array
    int a[100],num,position, size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the position:");
    scanf("%d",&position);
   for(int i=size-1;i>=position-1;i--){
        a[i]=a[i+1];
       
    }
    a[position-1]=num;
    size++;
    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
    
    
    
    
    
    
    
    /*a[0]=num;
    size++;

    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    //End of the array 
    a[size]=num;
    size++;
     for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }*/



    return 0;
}