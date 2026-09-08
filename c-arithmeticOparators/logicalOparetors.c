#include <stdio.h>
int main()
{
    int isloggedin = 1;
    int isadmin = 0;
    printf("regular user :%d\n", isloggedin && !isadmin);
    printf("has access:%d\n", isloggedin || isadmin);
    printf("not logged in:%d\n", !isloggedin);
    return 0;
}