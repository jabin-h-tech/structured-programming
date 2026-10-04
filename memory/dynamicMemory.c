#include <stdio.h>
int main()
{
    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students));
    printf("%d", numStudents * sizeof(*students));
    return 0;
}