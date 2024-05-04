#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct cricketer
    {
        char name[20];
        int age;
        int matches;
        float avg_runs;
        char tier;

    } cricketer;

    cricketer arr[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Name:");
        gets(arr[i].name);
        printf("Age:");
        scanf("%d", &arr[i].age);
        printf("Total matches:");
        scanf("%d", &arr[i].matches);
        printf("Average runs:");
        scanf("%f", &arr[i].avg_runs);
        printf("Tier:");
        scanf(" %c", &arr[i].tier);
        puts("");
        fflush(stdin);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Name:");
        puts(arr[i].name);
        printf("Age:%d", arr[i].age);
        printf("Total matches:%d", arr[i].matches);
        printf("Average runs:%.2f", arr[i].avg_runs);
        printf("Tier:%c", arr[i].tier);
        fflush(stdin);
    }

    return 0;
}