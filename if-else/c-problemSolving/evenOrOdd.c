#include <stdio.h>

int main()
{
    int numbers[] = {7, 4, 0, -7};

    for (int i = 0; i < 4; i++)
    {
        int n = numbers[i];

        if (n % 2 == 0)
        {
            printf("%d is even\n", n);
        }
        else
        {
            printf("%d is odd\n", n);
        }
    }

    return 0;
}