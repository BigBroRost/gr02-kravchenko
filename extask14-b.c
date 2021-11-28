#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct record
{
    int acc;
    char fio[32];
    float sum;
    int prc;
    float res;
};

#define rows 3
struct record tab[rows];
int main()
{
    char tmp[32];
    for (int i = 0; i < rows; i++)
    {
        printf("[record %d]\n", i);

        printf("acc: ");
        gets(tmp);
        tab[i].acc = atoi(tmp);

        printf("fio: ");
        gets(tab[i].fio);

        printf("sum: ");
        gets(tmp);
        tab[i].sum = atoi(tmp);

        printf("%%: ");
        gets(tmp);
        tab[i].prc = atoi(tmp);

        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        tab[i].res = tab[i].sum + (tab[i].sum * tab[i].prc / 100.0f) / 12.0f;
    }
    for (int i = 0; i < rows; i++)
    {
        printf("%d\t%s\t%f\t%d\t%.2f\n", tab[i].acc, tab[i].fio, tab[i].sum, tab[i].prc, tab[i].res, );
    }
    printf("\n");

    printf("search:\n ");
    char fio[32];
    gets(fio);

    printf("\n");
    int n = 0;
    for (int i = 0; i < rows; i++)
    {
        char *p = strtok(tab[i].fio, " ");
        if (strcmp(p, fio) == 0)
        {
            printf("sum: %.2f\n", tab[i].sum);
            printf("%%: %d\n", tab[i].prc);
            n++;
        }
    }
    if(n < 1) printf("not found!\n");
    return 0;
}