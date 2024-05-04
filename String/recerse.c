#include<stdio.h>
#include<string.h>
int main(){
    char strr[200];
    gets(strr);

    int len=strlen(strr);

    for(int i=0, j=len-1; i<j; i++, j-- ){
        int tmp=strr[i];
        strr[i]=strr[j];
        strr[j]=tmp;

    }
    printf("%s", strr);



    }
