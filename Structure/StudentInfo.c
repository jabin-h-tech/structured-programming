#include <stdio.h>

struct Student
{
    char name[30];
    int age;
    float cgpa;
};
int main()
{
    struct Student s = {"Rahim", 18, 3.80};
    printf("%s\n", s.name);
    printf("%d\n", s.age);
    printf("%.2f", s.cgpa);

    return 0;
}