#include<stdio.h>
int main()
{
    int size;
    int a[100];
    printf("Enter the size:");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);

    }
    int temp=a[size-1];
    for(int i=size-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=temp;
     for(int i=0;i<size;i++){
        printf("%d",a[i]);

    }


    return 0;
}