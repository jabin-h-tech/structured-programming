#include <stdio.h>
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int a, r;
    scanf("%d %d", &a, &r);
    int ncr = (fact(a) / (fact(r) * fact(a - r)));
    printf("%d", ncr);
}