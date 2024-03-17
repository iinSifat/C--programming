#include<stdio.h>
int main(){

int int_n,def=5,sum=0,start=0;


printf("Enter the value for n:");
scanf("%d",&int_n);
double result = 12 + (1 * 'a');
printf("%lf",result);
for (int i=1;i<=int_n;i++){

    sum+=start;
    printf("%d",start);

    start+=def;
    def+=8;
    if(i<=int_n-1) printf(",");
}
printf("\nSum=%d",sum);




    return 0;
}