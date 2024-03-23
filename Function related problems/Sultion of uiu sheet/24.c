#include<stdio.h>
int GCD(int a,int b){
    int rem=0;
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
   
    return a;
}
int LCM(int a,int b){
    int L=(a*b)/GCD(a,b);
    return L;
}
int main(){
    int num1,num2;
    if(num1<num2){
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    while(1){
        printf("Number one:");
        scanf("%d",&num1);
        printf("Number two:");
        scanf("%d",&num2);
        printf("GCD= %d\n",GCD(num1,num2));
        printf("LCM= %d\n",LCM(num1,num2));

    }
    return 0;
}