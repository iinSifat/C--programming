#include<stdio.h>
int main()
{
    int n,pos,num,a[100];
    printf("size:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("position:\n");
    scanf("%d",&pos);
    
   int  temp=a[pos-1];
    for(int i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}