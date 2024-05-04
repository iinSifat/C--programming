#include<stdio.h>
int main()
{
    /*char str[100];
    gets(str);

    for(int i=0,j=i+1; str[i]; i++,j++)
    {

        if(str[i]!=str[j]) printf("%c", str[i]);


    }*/

    char arr[5]="Sifat";
    int sum=0;


    int *ptr= arr;
    printf("%s\n", ptr);
    for(ptr=&arr[0]; ptr<=&arr[4]; ptr++){
            if(*ptr%2!=0){
                sum+=*ptr;
            }

    }
    printf("Sum: %d", sum);

}
