#include<stdio.h>
int main (){
    int a,b,c;
scanf("%d%d%d",&a,&b,&c);
int result=a--/b++;
if(a+b==1){
    result+=a/c*2;
b++;
result=a*c/b;
a++;
printf("%d %d %d %d",a,b,c,result);
}
else if (a+b==2||a+b==3){
    result=a*c/b;
a++;
printf("%d %d %d %d",a,b,c,result);
}
else if (a+b==4){
    a=2;
    printf("%d %d %d %d",a,b,c,result);
}
else{
    result=5;
    printf("%d %d %d %d",a,b,c,result);

}
}