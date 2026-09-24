#include <stdio.h>
int ans(int x)
{
    for (int i = 1; i <= x; i++)
    {
        int sum = 0;
        sum += i * i;
        return ans;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int sum1 = 0;
    sum1 = ans(n);
    printf("%d", sum1);
}