#include <stdio.h>

int main()
{
    int scores[] = {72, 95, 61, 88, 79};
    int length = sizeof(scores) / sizeof(scores[0]);
    int count = 0;
    int sum = 0;
    int max = scores[0];
    int found = 0;

    for (int i = 0; i < length; i++)
    {
        if (scores[i] >= 70)
        { // Count
            count++;
        }
        sum += scores[i]; // Sum
        if (scores[i] > max)
        { // Find the biggest
            max = scores[i];
        }
        if (scores[i] == 100)
        { // Search
            found = 1;
        }
    }

    printf("Passed: %d\n", count);
    printf("Total: %d\n", sum);
    printf("Highest: %d\n", max);
    printf("Anyone got 100? %s\n", found ? "Yes" : "No");
    return 0;
}