#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]="A";
     char str2[100]="A";

     int i=0,len;

     while(str[i]!='\0')// string length without built in function
     {
         i++;

     }
     len=i;

     printf("Length: %d\n",len);
     printf("Length using string: %d\n",strlen(str));

     i=0;

     while(str[i]!='\0'||str2[i]!='\0')//string copy without built in function
     {
         str2[i]=str[i]; // str2 will be changed
         i++;
     }
     puts(str2);

     int flag=0;   //String comparison
     i=0;

     while(str[i]!='\0'||str2[i]!='\0'){
             if(str[i]>str2[i])
             {
                 flag=1;
                 break;
            }
         i++;
     }
     if(flag==1) printf("Not  Equal ");
      if (flag==0)printf("Equal");

//String concatenation

    char string1 [100]="My country is ";
    char string2 [100]= "Bangladesh";

    int i=0;
    int len;

    while(string1[i]){
        i++;
    }

    len=i;

    int j=0;


    while(string2[j]){
        string1[len+j]=string2[j];
        j++;
    }

    printf("Concatenation: %s", string1);

}
