#include<stdio.h>
char toggle(char str[])
{
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }



        else if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }

    }
    puts(str);
}
int main(){
    char STR[100];
    gets(STR);
    toggle(STR);
   
    

    
}