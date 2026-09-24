#include <stdio.h>

void chaina()
{
    printf("Bai Lu");
    return;
}
void america()
{
    printf("New York");
    chaina();
    return;
}
void bangladesh()
{
    prrintf("Bangladesh");
    america();
    return;
}
int main()
{
    bangladesh();
    return;
}