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

    printf("_______Showing all the infromations_______\n");

    for (int i = 0; i < N; i++)
    {
        printf("Player-%d informations ", i + 1);

        printf("Name:");
        puts(Player[i].name);

        printf("Id: %d\n", Player[i].id);

        printf("Date of birth(D-M-Y): %d-%d-%d\n", Player[i].D_O_B.day, Player[i].D_O_B.month, Player[i].D_O_B.year);

        printf("Type(1/2/3): %d\n", Player[i].type);

        printf("Kpi: %.2f\n", Player[i].kpi);
    }

    printf("_______Sort by kpi_______\n");

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if (Player[j].kpi > Player[j + 1].kpi)
            {
                PlayerInfo temp = Player[j];
                Player[j] = Player[j + 1];
                Player[j + 1] = temp;
            }
        }

    } // End of sorting for kpi

    // kpi sorted array print
    printf("Sorted kpi:\n");
    for (int i = 0; i < N; i++)
    {
        printf(" %.2f-%s\n", Player[i].kpi, Player[i].name);
    }

    // Search by id
    puts("______Search by id______");
    int ID;
    printf("Enter the id to search:");
    scanf("%d", &ID);

    for (int i = 0; i < N; i++)
    {
        if (ID == Player[i].id)
        {
            printf("Name:");
            puts(Player[i].name);
            printf("Date of birth(D-M-Y): %d-%d-%d\n", Player[i].D_O_B.day, Player[i].D_O_B.month, Player[i].D_O_B.year);

            printf("Type(1/2/3): %d\n", Player[i].type);

            printf("Kpi: %.2f\n", Player[i].kpi);
        }

        else if (ID != Player[i].id)
        {
            printf("Not found\n");
                }
    }

    puts("_______Age sorting_______");

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if (Player[j].D_O_B.year < Player[j + 1].D_O_B.year)
            {
                PlayerInfo temp = Player[j];
                Player[j] = Player[j + 1];
                Player[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf(" Age:%d,Name:%s\n", 2024 - Player[i].D_O_B.year, Player[i].name);
    }

    return 0;
}
