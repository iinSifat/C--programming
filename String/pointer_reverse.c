#include<stdio.h>
#include<string.h>

int main(){
    char str [100];
    char strr[100];
    gets(str);

    int ln=strlen(str);
    char *ptr= &str[0];
    char *pptr=&str[ln-1];
    char tmp[200];

    strcpy(tmp,str);

    for(ptr=&str[0],pptr=&str[ln-1]; ptr<pptr; ptr++, pptr--  ){
        int tmp= *ptr;
        *ptr= *pptr;
        *pptr= tmp;

    }



    printf("Reverse string: %s\n", str);

    if(str==tmp) printf("p");
    else printf("Not");



}
