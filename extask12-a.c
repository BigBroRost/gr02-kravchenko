#include <stdio.h>
#include <stdlib.h>

int main ()
{
    #define n_max 10
    #define m_max 10

    int n, m;
    printf("n(clos), m (rows): ");
    scanf("%d %d", &n, &m);

    int a[m_max] [n_max];
    int b[m_max] [n_max];

    int c1[m_max] [n_max];
    int c2[m_max] [n_max];

    #define vmin 10
    #define vmax 20

    for (int y = 0; y < m; y++)
        for (int x = 0; x < n; x++)
        {
            a[y][x] = vmin + rand() % (vmax - vmin + 1);
            b[y][x] = vmin + rand() % (vmax - vmin + 1);
        }
    for (int y = 0; y < m; y++)
        for (int x = 0; x < n; x++)
        {
            a[y][x] = a[y][x] + b[y][x];
            b[y][x] = a[y][x] - b[y][x];
        }
    
    char spc[100];
    for (int y = 0; y < 100; y++)
    {
        for (int x = 0; x < m; x++)
        printf("% 4d", c1[y][x]);
        printf("\t");
        for (int x = 0; x < n; x++)
        {
            printf("% 4d", c2[y][x])
        }
        printf("\n");
    }
    return 0;
}