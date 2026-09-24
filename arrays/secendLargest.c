#include<stdio.h>
    int main()
{
    int a[5];
    int largest, second;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];

    for (int i = 0; i < 5; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }

        else if (a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}