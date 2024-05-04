#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct student
    {
        char name[20];
        char id[20];
        float cgpa;
    } student;

    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        gets(arr[i].name);
        gets(arr[i].id);
        scanf("%f", arr[i].cgpa);
        fflush(stdin);
    }

    return 0;
}
