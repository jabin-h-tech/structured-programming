#include <stdio.h>
int pascal(int x)
{
    int fact = 1;
    for (int k = 1; k <= x; k++)
    {
        fact = fact * k;
    }

    return fact;
}
int combination(int a, int b)
{
    int ncr = pascal(a) / (pascal(b) * pascal(a - b));
    return ncr;
}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // int ncr=function(i)/(function(j)*function(i-j));
            int icj = combination(i, j);
            printf("%d", icj);
        }
        printf("\n");
    }
}