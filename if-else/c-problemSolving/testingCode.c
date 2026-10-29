#include <stdio.h>

// Returns 1 if n is even, and 0 if not
int isEven(int n)
{
    return n % 2 == 0;
}

void test(int n, int expected)
{
    int result = isEven(n);
    if (result == expected)
    {
        printf("PASS: %d\n", n);
    }
    else
    {
        printf("FAIL: %d (expected %d, got %d)\n", n, expected, result);
    }
}

int main()
{
    test(7, 0);
    test(4, 1);
    test(0, 1);
    test(-7, 0);
    return 0;
}