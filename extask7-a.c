#include <stdio.h>
#include <stdlib.h>

#define m_max 100

int n;
int mark[m_max];

#define mmin 2
#define mmax 5

#define mpass 4.6f

int main ()
{
    printf("n: ");
    scanf("%d", &n);

    printf("arr: ");
    for (int i = 0; i < n; i++)
    {
        mark[i] = mmin + rand() % (mmax - mmin + 1);
        printf("%d", mark[i]);
    }

    printf("\n");

    int sum = 0;
    for (int i = 0; i < n; i++)
    sum += mark[i];

    float avg = (float) sum / (float) n;
    printf("avg: %.1f\n", avg);

    if (avg >= mpass)
    printf("yes");
    else
    printf("no");
    
return 0;
}