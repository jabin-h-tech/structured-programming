#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];

    scanf("%s", str);
    printf("%lu", strlen(str));

    return 0;
}