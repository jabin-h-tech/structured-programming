#include <stdio.h>
int main()
{
    int myNumbers[4] = {25, 50, 75, 100};
    int *p = myNumbers;

    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 3));
    return 0;
}