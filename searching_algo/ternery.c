#include <stdio.h>
int main()
{
    int i, num, a[10], n, l = 0, h = 0, m1 = 0, m2 = 0, m3 = 0;
    scanf("%d %d", &n, &num);
    h = n - 1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    while (l <= h)
    {
        m1 = (l + h) / 3;
        m2 = 2 * m1;
        if (num < a[m1])
        {
            h = m1 - 1;
        }
        else if (num > a[m1])
        {
            l = m1 + 1;
        }
        else
        {
            printf("%d present at %d", a[m1], m1 + 1);
            break;
        }
        //////////////////////

        if (num < a[m2])
        {
            h = m2 - 1;
        }
        else if (num > a[m2])
        {
            l = m2 + 1;
        }
        else
        {
            printf("%d present at %d", a[m2], m2 + 1);
            break;
        }
    }
    if (l > h)
        printf("num not present");

    return 0;
}

/*
int ternarySearch(int A[], int l, int u, int n)
{
    if (l > u)
        return -1;
    int m1 = l + (u - l) / 3;
    int m2 = u - (u - l) / 3;
    if (A[m1] == n)
        return m1;
    if (A[m2] == n)
        return m2;
    if (n < A[m1])
        return ternarySearch(A, l, m1 - 1, n);
    else if (n > A[m2])
        return ternarySearch(A, m2 + 1, u, n);
    else
        return ternarySearch(A, m1, m2, n);
}*/