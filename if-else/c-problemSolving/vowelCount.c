#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char text[])
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        char c = tolower(text[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    printf("%d\n", countVowels("Hello World"));
    return 0;
}