#include <stdio.h>
int main()
{
    int n, i, j, a[10][10], k = 0, l = 0, d = 0, p = 0, x, d2 = 0;
    scanf("%d", &n);
    x = n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < n; j++)
        {
            k += a[i][j];
        }
    }
    printf("%d  ", k);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 1; j++)
        {
            l += a[i][j];
        }
    }
    printf("%d ", l);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                d += a[i][j];
            }
        }
    }
    printf("%d ", d);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < x; j++)
        {
            p = a[i][j];
        }
        d2 += p;
        x--;
    }

    printf("%d ", d2);
    if (k == l && l == d && d2 == l)
        printf("magic matrix");

    else
        printf("not");
    return 0;
}