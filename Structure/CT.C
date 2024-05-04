// Online C compiler to run C program online
#include <stdio.h>
struct Book
{
    char title[100];
    int cat;
    int n_ratings;
    int ratings[100];
};

int main()
{
    int N;
    scanf("%d", &N);
    struct Book books[N];
    float avg_ratings[N];
    float cat_ratings[5] = {0, 0, 0, 0, 0};
    int cnt_cat[] = {0, 0, 0, 0, 0};
    for (int i = 0; i < N; i++)
    {
        scanf("%s %d %d", books[i].title, &books[i].cat, &books[i].n_ratings);
        for (int j = 0; j < books[i].n_ratings; j++)
            scanf("%d", &books[i].ratings[j]);
    }
    for (int i = 0; i < N; i++)
    {
        avg_ratings[i] = 0;
        for (int j = 0; j < books[i].n_ratings; j++)
            avg_ratings[i] += books[i].ratings[j];
        avg_ratings[i] /= books[i].n_ratings;
        cat_ratings[books[i].cat - 1] += avg_ratings[i];
        cnt_cat[books[i].cat - 1]++;
    }

    return 0;
}