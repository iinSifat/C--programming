#include <stdio.h>
int main(){
int n,sum=0;
printf("Enter the value for n:");
scanf("%d",&n);
printf("The series is:");
for (int i=1;i<=n;i++){
    if(i%2==0){

    printf("%d ",-1*i);
     sum-=i;}
    else {
        sum+=i;
    printf("%d ",i);}
}
printf("\n");
printf("Total sum is %d",sum);


    return 0;
}