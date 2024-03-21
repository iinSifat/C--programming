#include<stdio.h>
void GreatLessEqual(int num1,int num2){
    if(num1>num2)
    printf("%d is greater than %d",num1,num2);
    else if(num2>num1)
    printf("%d is less than %d",num1,num2);
    else
    printf("%d is equal to %d",num1,num2);


}
int main(){
    int n,n2;
    printf("Enter two numbers:");
    scanf("%d%d",&n,&n2);
    GreatLessEqual(n,n2);

}