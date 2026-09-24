#include <stdio.h>

int main()
{
    int n;
start:
    printf("Enter a positive number bro: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Negative number lol.\n");
        goto start;
    }
    if (n == 0)
    {
        printf("Program ended.\n");
        goto end;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == 3)
        {
            continue;
        }

        if (i == 7)
        {
            printf("7 found! Stopping the loop.\n");
            break;
        }
        printf("%d ", i);
    }

    printf("\n");
    goto start;
end:
    return 0;
}