#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);

    for(int i=0; str[i]; i++){
        if(str[i]== 'A' || str[i]== 'E' ||str[i]== 'I' ||str[i]== 'O' ||
           str[i]== 'U' ||str[i]== 'a'
           ||str[i]=='e' ||str[i]== 'i' ||str[i]== 'o' ||str[i]== 'u')
           {
            str[i]= str[i];
           }
           else{
            str[i]=str[i+1];
           }
    }

puts(str);



}
