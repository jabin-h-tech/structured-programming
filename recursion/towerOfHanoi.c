#include <stdio.h>

void H1(int A, int B, int C, int n)
{
    if (n == 1)
    {
        printf("Move %d disk from %d to %d\n", n, A, C);
    }
    else
    {
        H1(A, C, B, (n - 1));
        H1(A, B, C, 1);
        H1(B, A, C, (n - 1));
    }
}

int main()
{
    int n;
    printf("Enter the number of disks: \n");
    scanf("%d", &n);
    H1(1, 2, 3, n);
    return 0;
}