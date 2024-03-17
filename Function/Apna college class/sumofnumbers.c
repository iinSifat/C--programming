#include<stdio.h>
int sum(int a,int b); //must declare the two variables individually 
int main (){
    int num1,num2;
    printf("Enter two num:");
    scanf("%d%d",&num1,&num2);
    printf("The sum is:%d",  sum(num1,num2));

    return 0;

  
}
int sum(int a,int b){
    return a+b;// fuction for summation
}
