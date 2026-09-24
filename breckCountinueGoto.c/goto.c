#include <stdio.h>

int main()
{
    int n;

start:
    scanf("%d", &n);

    if (n < 0)
        goto start;

    printf("%d", n);

    return 0;
}