#include <stdio.h>
int main()
{
    enum Level
    {
        LOW,
        MEDIUM,
        HIGH
    };

    enum Level myVar = MEDIUM;

    printf("%d", myVar);

    return 0;
}