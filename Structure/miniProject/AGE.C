#include <stdio.h>

typedef struct DateOfBirth // Structure for Date of birth
{
    int day;
    int month;
    int year;
} DOB;

typedef struct PlayerInfo
{
    char name[100];
    int id;
    int type; // type: 1/2/3
    float kpi;
    DOB D_O_B;

} PlayerInfo;

int main()
{
    int N;
    printf("How many players do you like to work with:");
    scanf("%d", &N);

    printf("======Player informations======\n");

    PlayerInfo Player[100];
    for (int i = 0; i < N; i++)
    {

        fflush(stdin);
        printf("Name:");
        gets(Player[i].name);

        printf("Id:");
        scanf("%d", &Player[i].id);

        printf("Date of birth(D-M-Y):");
        scanf("%d", &Player[i].D_O_B.day);
        scanf("%d", &Player[i].D_O_B.month);
        scanf("%d", &Player[i].D_O_B.year);

        printf("Type(1/2/3):");
        scanf("%d", &Player[i].type);

        printf("Kpi:");
        scanf("%f", &Player[i].kpi);
    }
