
#include <stdio.h>
#include <string.h>

struct organisation
{
    char name[50];
    char location[100];
    int totalEmployees;
};

struct employee
{
    int id;
    int age;
    char name[50];
    char department[50];
};

int main()
{
    struct organisation org;
    struct employee e[100];

    int n, choice, id, found;
    char searchDepartment[50];

    printf("Enter Organisation Name: ");
    fgets(org.name, sizeof(org.name), stdin);
    org.name[strcspn(org.name, "\n")] = '\0';

    printf("Enter Organisation Location: ");
    fgets(org.location, sizeof(org.location), stdin);
    org.location[strcspn(org.location, "\n")] = '\0';

    printf("Enter Total Employees (1-100): ");
    scanf("%d", &n);
    getchar();

    if (n < 1 || n > 100)
    {
        printf("Invalid number of employees!\n");
        return 0;
    }

    org.totalEmployees = n;

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter information for Employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);
        getchar();

        printf("Name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';

        printf("Age: ");
        scanf("%d", &e[i].age);
        getchar();

        printf("Department: ");
        fgets(e[i].department, sizeof(e[i].department), stdin);
        e[i].department[strcspn(e[i].department, "\n")] = '\0';
    }

    do
    {
        printf("\n===== ORGANISATION MENU =====\n");
        printf("1. Show Organisation Information\n");
        printf("2. Show All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Search Employee by Department\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            printf("\n===== Organisation Information =====\n");
            printf("Name: %s\n", org.name);
            printf("Location: %s\n", org.location);
            printf("Total Employees: %d\n", org.totalEmployees);
            break;

        case 2:
            printf("\n===== All Employees =====\n");

            for (int i = 0; i < n; i++)
            {
                printf("\nEmployee %d\n", i + 1);
                printf("ID: %d\n", e[i].id);
                printf("Name: %s\n", e[i].name);
                printf("Age: %d\n", e[i].age);
                printf("Department: %s\n", e[i].department);
            }
            break;

        case 3:
            printf("Enter Employee ID: ");
            scanf("%d", &id);

            found = 0;

            for (int i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    printf("\nEmployee Found!\n");
                    printf("ID: %d\n", e[i].id);
                    printf("Name: %s\n", e[i].name);
                    printf("Age: %d\n", e[i].age);
                    printf("Department: %s\n", e[i].department);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("Employee Not Found!\n");
            }
            break;

        case 4:
            printf("Enter Department Name: ");
            fgets(searchDepartment, sizeof(searchDepartment), stdin);
            searchDepartment[strcspn(searchDepartment, "\n")] = '\0';

            found = 0;

            for (int i = 0; i < n; i++)
            {
                if (strcmp(e[i].department, searchDepartment) == 0)
                {
                    printf("\nEmployee Found!\n");
                    printf("ID: %d\n", e[i].id);
                    printf("Name: %s\n", e[i].name);
                    printf("Age: %d\n", e[i].age);
                    printf("Department: %s\n", e[i].department);

                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("No Employee Found in This Department!\n");
            }
            break;

        case 0:
            printf("Exiting Organisation Management System.\n");
            break;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }

    } while (choice != 0);

    return 0;
}
