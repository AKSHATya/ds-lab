#include <stdio.h>
const unsigned long long int M = 1000000007; 
int factorial(unsigned long long int n, int fact)
{

    if (n == 0 || n == 1)
    {
        return fact;
    }
    else
        return factorial(n - 1, n * fact);
}
int main(void)
{
    // your code goes here
    int t, j, n;
    scanf("%d", &t);
    unsigned long long int a[1000000], i;

    for (i = 0; i < 1000001; i++)
    {
        a[i] = (factorial(i, 1)) % M;
    }

    for (j = 0; j < t; j++)
    {
        scanf("%d", &n);
        int b[n], r = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        for (i = 0; i < n; i++)
        {
            r = (r + a[b[i]]) % M;
        }
        printf("%d\n", r);
    }
    return 0;
}
