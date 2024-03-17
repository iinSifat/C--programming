#include<stdio.h>
int main ()
{

    //Beginning of the array
    int a[100],num,pos,item,size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Enter the position:");
    scanf("%d",&pos);

    item=a[pos-1];
   for(int i=pos-1;i<size-1;i++){
        a[i]=a[i+1];
       
    }
   
    size--;
     for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n%d",item);
    return 0;

}