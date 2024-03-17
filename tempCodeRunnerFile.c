#include<stdio.h>
void  main(){
float sum=0;
for(int i=10, j=1; i<=20; i=i+2, j++){
sum += i-j;
printf("%d %d %f\n",i,j,sum);
}
}
