#include<stdio.h>
#include<string.h>
int StringInput(char Str[]){//String input function
    gets(Str);
    puts(Str);
    printf("String length is %d",strlen(Str));
}

int main(){

char Str[33];
StringInput(Str);




}