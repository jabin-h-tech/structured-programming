#include <stdio.h>
int main()
{
    int myint;
    float myfloat;
    char mychar;
    double mydouble;
    printf("%zu\n", sizeof(myint));
    printf("%zu\n", sizeof(myfloat));
    printf("%zu\n", sizeof(mychar));
    printf("%zu\n", sizeof(mydouble));
    return 0;
}