#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int word=0;
    int count=0;
    for(int i=0;str[i]!='\0';i++)
 {
        if(str[i]!=' ' && word==0){
            word=1;
            count++;
        }
        if(str[i]==' '){
            word=0;
    }

}
printf("Total word=%d",count);
}
/*int main(){
    char Strr[70];
    gets(Strr);
    wordcount(Strr);


    return 0;

}*/