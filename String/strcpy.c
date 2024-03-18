#include<stdio.h>
#include<string.h>
int main(){
    char str1[45]="How";//sze 
    char str2[15]="How";
    printf("%d\n",strcmp(str1,str2));
    strcpy(str2,str1);
    puts(str2);
    
}