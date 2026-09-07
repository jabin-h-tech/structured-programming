#include <stdio.h>
int main()
{
    int items = 50;
    float cost = 9.99;
    float totalcost = items * cost;
    char currency = '$';
    printf("number of items:%d\n", items);
    printf("cost of items:%f\n", cost);
    ptinyf("total cost:%.2f %c\n", totalcost, currency);
    return 0;
}