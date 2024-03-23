#include<stdio.h>
#include<string.h>

//string reverse
void Reverse(char Strr[]){
    int temp=0;
    int length=strlen(Strr);
    for(int i=0,j=length-1;i<j;i++,j--){
        temp=Strr[i];
        Strr[i]=Strr[j];
        Strr[j]=temp;
    }
    puts(Strr);
}
int main(){
    char Str[100];
    gets(Str);
    char rev[100];
    strcpy(rev,Str);
    Reverse(rev);
    int res=strcmp(Str,rev);
    if(res==0) printf("Palindrome");
    else printf("Not palindrome");

}