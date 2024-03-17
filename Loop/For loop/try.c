#include <stdio.h>
int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
int result=a--/b++;
switch(a){
case 1:
result+=a/c*2;
b++;
case 2:
case 3:
result=a*c/b;
a++;
break;
case 4: 
a=2;
break;
default: result=5;
}
printf("%d %d %d %d",
a,b,c,result);
}