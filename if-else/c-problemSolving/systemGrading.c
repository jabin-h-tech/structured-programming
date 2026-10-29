#include <stdio.h>

int main()
{
    int scores[] = {95, 80, 60, 30};

    for (int i = 0; i < 4; i++)
    {
        int score = scores[i];

        if (score >= 90)
        {
            printf("%d: Excellent\n", score);
        }
        else if (score >= 75)
        {
            printf("%d: Good\n", score);
        }
        else if (score >= 50)
        {
            printf("%d: Pass\n", score);
        }
        else
        {
            printf("%d: Fail\n", score);
        }
    }

    return 0;
}