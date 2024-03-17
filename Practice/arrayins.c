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
    printf("num:");
    scanf("%d",&num);
    for(int i=n-1; i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
      for(int i=0;i<n;i++){
       printf("%d",a[i]);
    }
printf("\n");
    for(int i=n-1;i>=0;i--){
        a[i+1]=a[i];

    }
    a[0]=num;
    n++;
    printf("Input at 0 index:");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
a[n]=num;
n++;
for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }

    return 0;
}